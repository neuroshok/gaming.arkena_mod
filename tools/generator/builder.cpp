#include "builder.hpp"

#include "maps.hpp"
#include "utility.hpp"

#include <il2cpp/api.hpp>
#include <string>
#include <sstream>

using namespace il2cpp;

builder::builder(const Il2CppClass* klass)
    : ptr{ klass }
    , type{ api::class_get_type(klass) }
    , type_id{ api::type_get_type(type) }
    , assembly_name{ api::type_get_assembly_qualified_name(type) }
    , path{ namespace_path(klass->_1.namespaze, "/") + "/" }
    , namespaze{ std::string(klass->_1.namespaze).empty() ? "au" : namespace_path(klass->_1.namespaze, "::") }
    , name{ clean_name(klass->_1.name) }
    , filename{ name }
    , fullname{ namespaze.empty() ? name : (namespaze + "::" + name) }
    , generic_name{ name }
    , generic_fullname{ fullname }
    , is_generic{ false }
{
    if (type_id == il2cpp::TYPE_GENERICINST)
    {
        name = name.substr(0, name.find('`'));
        filename = name;
        is_generic = true;

        /*
        if (is_nested(type))
        {
            path = namespace_path(assembly_name.substr(0, assembly_name.find('`')), "/") + "/";
            namespaze = "";
            auto tmp_name = assembly_name.substr(0, assembly_name.find('['));
            if (std::find(tmp_name.begin(), tmp_name.end(), '+') != tmp_name.end())
            {
                tmp_name = tmp_name.substr(0, tmp_name.find('`'));
                auto tmp_nested = assembly_name.substr(assembly_name.find('+', assembly_name.find('`')) + 1);
                tmp_nested = tmp_nested.substr(0, tmp_nested.find('['));
                if (std::find(tmp_name.begin(), tmp_name.end(), '+') != tmp_name.end())
                name = tmp_name;
                else name = tmp_name + tmp_nested;
                str_replace(name, ".", "");
                str_replace(name, "+", "");
                path = path.substr(0, path.find('+')) + "/";
            }
        }*/

        fullname = namespaze + "::" + name;
        generic_name = name + "<Ts...>";
        generic_fullname = namespaze + "::" + generic_name;
    }
}

void builder::make()
{
////////////////////////////////////////////////////////////////////////////////
////////////////////////            GENERIC             ////////////////////////
////////////////////////////////////////////////////////////////////////////////
    std::string generic_decl;
    bool generic = false;
    if (type_id == il2cpp::TYPE_GENERICINST)
    {
        generic = true;
        generic_decl = "template<class... Ts>\n";
    }

////////////////////////////////////////////////////////////////////////////////
////////////////////////          INHERITHANCE          ////////////////////////
////////////////////////////////////////////////////////////////////////////////
    std::string inherit;
    if (ptr->_1.parent && type_id != il2cpp::TYPE_VALUETYPE)
    {
        auto parent_type = api::class_get_type(ptr->_1.parent);
        add_dep(parent_type);
        inherit = std::string(", ") + namespace_path(type_name(parent_type, false), "::");
        //make_cpp(ptr->_1.parent);
    }

////////////////////////////////////////////////////////////////////////////////
////////////////////////             FIELDS             ////////////////////////
////////////////////////////////////////////////////////////////////////////////
    if (generic) meta_statics << "\n" << indent(2) << generic_decl << " struct meta_statics<" << generic_fullname << "> {";
    else meta_statics << "\n" << indent(2) << "template<> struct meta_statics<" << fullname << "> {";

    void* field_it = nullptr;
    for (auto i = 0; i < ptr->_2.field_count; ++i)
    {
        auto field = api::class_get_fields(ptr, &field_it);
        bool generic_field = api::class_is_generic(api::class_from_type(field->type));
        auto field_type_name = type_name(field->type, true, generic_field);

        std::string field_name = clean_name(field->name);
        if (std::string(api::type_get_assembly_qualified_name(field->type)) != api::type_get_assembly_qualified_name(api::class_get_type(ptr))) add_dep(field->type);

        std::string qualifiers;
        std::stringstream* field_output = &fields;
        auto attr = api::type_get_attrs(field->type);
        if (attr & il2cpp::FIELD_ATTRIBUTE_STATIC && !(attr & il2cpp::FIELD_ATTRIBUTE_LITERAL))
        {
            statics_decl << "\n" << indent(2);
            statics_decl << "static " << class_path(field_type_name) << " " << field_name << "(); // 0x" << std::hex << field->offset;
            statics_def << "\n" << generic_decl;
            statics_def << "\n" << class_path(field_type_name) << " " << generic_fullname << "::" << field_name << "() { return statics()->" << field_name << "; }; // 0x" << std::hex << field->offset;
            field_output = &meta_statics;
        }
        if (attr & il2cpp::FIELD_ATTRIBUTE_LITERAL) field_output = &literals;

        *field_output << "\n" << indent(2);
        *field_output << class_path(field_type_name);
        *field_output << " " << field_name;
        *field_output << "; // 0x" << std::hex << field->offset;

    }
    meta_statics << "\n" << indent(2) << "};\n";

////////////////////////////////////////////////////////////////////////////////
////////////////////////             METHODS            ////////////////////////
////////////////////////////////////////////////////////////////////////////////
    std::stringstream methods;
    void* method_it = nullptr;
    for (auto i = 0; i < ptr->_2.method_count; ++i)
    {
        auto method = api::class_get_methods(ptr, &method_it);

        if (method->flags & il2cpp::METHOD_ATTRIBUTE_VIRTUAL) continue;

        std::string method_name = clean_name(method->name);
        str_replace(method_name, ".", ""); // .ctor
        std::string return_type = namespace_path(type_name(method->return_type), "::");
        add_dep(method->return_type);

        methods << indent(2) << return_type << " ";
        methods << method_name << "(";
        // params
        std::string param_types;
        std::string param_names;
        for (int param_index = 0; param_index < method->parameters_count; ++param_index)
        {
            std::string param_name = clean_name(api::method_get_param_name(method, param_index));

            if (param_index != 0) { methods << ", "; }
            add_dep(method->parameters->parameter_type);
            methods << namespace_path(type_name(api::method_get_param(method, param_index)), "::") << " ";
            methods << param_name;
            param_types += ", " + namespace_path(type_name(api::method_get_param(method, param_index)), "::");
            param_names += ", " + param_name;
        }
        methods << ") { ";
        methods << "return il2cpp::call<" << return_type << "(*)(" << name << "*" << param_types << ")>(0x" << std::hex << rva(method->methodPointer) << ")(this" << param_names << ");";
        methods << " } // 0x" << std::hex << rva(method->methodPointer);
        methods << "\n";
    }


    output << builder::indent(0) << generic_decl;
    output << builder::indent(0) << "struct " << name << " : ark::meta<" << generic_name << inherit << ">\n" << builder::indent(1) << "{";
    output << statics_decl.str();
    output << fields.str();
    output << "\n\n" << methods.str();

    //output << nested_output.str();

    output << "\n" << builder::indent(1) << "};\n";
}


std::string builder::namespace_path(std::string namespaze, const std::string& separator)
{
    str_replace(namespaze, "...", "???");

    str_replace(namespaze, ".", separator);
    str_replace(namespaze, "UnityEngine", "Unity");

    str_replace(namespaze, "???", "...");
    return namespaze;
}

std::string builder::class_path(std::string class_name)
{
    str_replace(class_name, "...", "???");
    str_replace(class_name, ".", "::");
    str_replace(class_name, "UnityEngine", "Unity");
    str_replace(class_name, "???", "...");
    return class_name;
}

std::string builder::indent(unsigned int n)
{
    std::string result;
    while (n--)
    {
        result += "    ";
    };
    return result;
}

uintptr_t builder::rva(il2cpp::Il2CppMethodPointer ptr)
{
    return (uintptr_t)ptr - ark::base_address();
}

std::string builder::type_name(const il2cpp::Il2CppType* type, bool pointer, bool generic)
{
    auto type_id = il2cpp::api::type_get_type(type);
    auto klass = il2cpp::api::class_from_type(type);
    std::string ns;
    if (std::string(klass->_1.namespaze).empty() && !is_nested(type)) ns = "au::";
    std::string str_pointer;
    if (pointer) str_pointer = "*";
    std::string output = "unknown";

    switch (type_id)
    {
    case il2cpp::TYPE_CLASS:
        output = il2cpp::api::type_get_assembly_qualified_name(type);
        output = output.substr(0, output.find(',')) + str_pointer;
        output = clean_type(ns + output);
        break;

    case il2cpp::TYPE_VALUETYPE:
        output = il2cpp::api::type_get_assembly_qualified_name(type);
        output = output.substr(0, output.find(','));
        output = clean_type(ns + output);
        break;

    case il2cpp::TYPE_OBJECT:
        ns = "";
        output = "il2cpp::Il2CppObject" + str_pointer;
        break;

    case il2cpp::TYPE_SZARRAY:
        ns = "";
        if (generic) output = "cs::array<Ts...>*";
        output = std::string("cs::array<") + type_name(static_cast<il2cpp::Il2CppType*>(type->data), false, generic) + ">*";
        return output;
        break;

    case il2cpp::TYPE_GENERICINST: {
        auto type_data = static_cast<il2cpp::Il2CppGenericClass*>(type->data);
        std::string base_type = il2cpp::api::type_get_name(type);
        auto s = base_type.find('<');
        base_type = base_type.substr(0, s);

        std::string res = base_type;
        std::string subtypes;
        res += "<";

        if (api::class_is_generic(ptr))
        {
            res += "Ts...";
        }
        else
        {
            for (int i = 0; i < type_data->context.class_inst->type_argc; ++i)
            {
                const il2cpp::Il2CppType** idx = type_data->context.class_inst->type_argv + i;
                subtypes += ", " + type_name(reinterpret_cast<const il2cpp::Il2CppType*>(*idx), false);
            }
            res += subtypes.substr(2);
        }

        res += ">";
        res += str_pointer;
        output = clean_type(ns + res);
        break;
    }

    default:
        if (maps::type_names.find(type_id) == maps::type_names.end()) output = "Typeid_" + std::to_string(type_id);
        else output = maps::type_names[type_id];
    }

    if (is_nested(type))
    {
        //str_replace(output, "::", "");
    }

    return output;
}

bool builder::is_nested(const il2cpp::Il2CppType* t)
{
    std::string name = api::type_get_assembly_qualified_name(t);
    return std::find(name.begin(), name.end(), '+') != name.end();
}

std::string builder::clean_type(std::string name)
{
    str_replace(name, "...", "???");

    str_replace(name, ".", "::");

    str_replace(name, "???", "...");
    return name;
}

std::string builder::clean_name(std::string name)
{
    str_replace(name, ".ctor", "ctor");
    str_replace(name, ".cctor", "cctor");

    str_replace(name, "UnityEngine", "Unity");
    str_replace(name, "<", "_");
    str_replace(name, ">", "_");
    str_replace(name, "+", "_");
    return name;
}

void builder::add_dep(const Il2CppType* type)
{
    deps.insert(type);
}

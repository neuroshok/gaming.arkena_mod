#include "generator.hpp"

#include "meta.hpp"
#include "filter.hpp"
#include "maps.hpp"

#include <filesystem>
#include <fstream>

#include <spdlog/spdlog.h>
#include <il2cpp/api.hpp>
#include <iostream>
#include <sstream>

namespace fs = std::filesystem;

namespace meta
{
    generator::generator(std::string input_path)
        : input_path_{ std::move(input_path) }
        , output_path_{ "generated/" }
    {}

    void generator::initialize()
    {
        SetDllDirectory(input_path_.c_str());
        auto handle = LoadLibrary("GameAssembly.dll");
        if (!handle) spdlog::error("Unable to load library {}", input_path_);

        api::initialize();

        spdlog::info("Initialize api");
        api::init("GameAssembly");

        auto dom = api::domain_get();
        assemblies_ = (il2cpp::Il2CppAssembly**)api::domain_get_assemblies(dom, &assembly_count_);
        if (assembly_count_ == 0) spdlog::error("assembly error: size == 0");

        for (auto it = assemblies_; it != assemblies_ + assembly_count_; ++it)
        {
            auto image = api::assembly_get_image(*it);
            if (!image)
            {
                spdlog::error("null assembly");
                continue;
            }

            std::string image_name = api::image_get_name(image);

            if (!images_.empty() && std::find(images_.begin(), images_.end(), image_name) == images_.end()) continue;

            auto class_count = api::image_get_class_count(image);

            spdlog::info("Load image {} Classes : {}", image_name, class_count);

            for (int i = 0; i < class_count; ++i)
            {
                auto klass = api::image_get_class(image, i);
                klasses.emplace_back(std::make_unique<meta::klass>(klass));
            }

            for (auto& klass : klasses)
            {
                klass->initialize();
            }
        }
    }

    void generator::on_process(const std::function<void(const meta::klass&)>& fn)
    {
        on_process_ = fn;
    }

    void generator::process()
    {
        initialize();

        for (const auto& klass : klasses)
        {
            on_process_(*klass);
            if (!klasses_.empty() && std::find(klasses_.begin(), klasses_.end(), klass->name()) == klasses_.end()) continue;
            make_klass(*klass);
        }
    }

    void generator::make_klass(const meta::klass& klass)
    {
        if (klass.type().is_native())
        {
            spdlog::warn("Ignore native type {}", klass.name());
            return;
        }
        if (klass.type().is_static())
        {
            spdlog::warn("Ignore static type {}", klass.name());
            return;
        }

        spdlog::info("Generate class {} @ {}", output_path_ + klass.name(), klass.path());

        if (!fs::exists(output_path_ + klass.path())) fs::create_directories(output_path_ + klass.path());
        if (fs::exists(output_path_ + klass.path() + klass.name() + ".hpp"))
        {
            spdlog::warn("Ignore existing file {}", klass.path() + klass.name() + ".hpp");
            return;
        }

        std::ofstream hpp(output_path_ + klass.path() + klass.name() + ".hpp");
        std::ofstream cpp(output_path_ + klass.path() + klass.name() + ".cpp");
        if (!hpp.is_open()) throw std::logic_error("Unable to open file : " + output_path_ + klass.path() + klass.name() + ".hpp");
        if (!cpp.is_open()) throw std::logic_error("Unable to open file : " + output_path_ + klass.path() + klass.name() + ".cpp");

        // info
        hpp << "/* " << klass.type().info() << " */\n\n";

        // headers
        hpp << "#pragma once\n";
        hpp << "#include <ark/class.hpp>\n\n";

        // class dependencies
        std::stringstream cpp_includes;
        std::stringstream hpp_includes;
        make_deps(klass, hpp_includes, cpp_includes);
        hpp << hpp_includes.str() << "\n\n";

        // namespace
        hpp << "namespace " << klass.namespaze() << "\n{\n";

        // generic declaration
        if (klass.type().is_generic())
        {
            hpp << indent(1) << "template<class... Ts>\n";
        }

        // class declaration
        std::string klass_type;
        std::stringstream klass_meta;
        std::stringstream hpp_statics;
        std::stringstream cpp_statics;
        std::stringstream klass_fields;
        std::stringstream klass_methods;
        std::stringstream klass_methods_def;

        std::stringstream hooks;

        if (!klass.type().is_enum())
        {
            klass_type = "struct alignas(" + std::to_string(klass.alignment()) + ") ";
            klass_meta << "    inline static auto internal_ns = \"" << (klass.namespaze() == "au" ? "" : klass.namespaze()) << "\";\n";
            klass_meta << "    inline static auto internal_name = \"" << klass.name() << "\";\n\n";
            make_statics(klass, hpp_statics, cpp_statics);
            klass_fields =  make_fields(klass);
            klass_methods = make_methods(klass);
            klass_methods_def = make_methods(klass, true);
        }
        else
        {
            klass_type = "enum class";
            make_statics(klass, hpp_statics, cpp_statics);
        }

        std::string klass_parent;
        if (klass.parent()) klass_parent = " : " + klass.parent()->ns_name();

        hpp << klass_type << " " << klass.name() << klass_parent << "\n";
        hpp << "{" << "\n";
        hpp << klass_meta.str();
        hpp << hpp_statics.str();
        hpp << "\n";
        hpp << klass_fields.str();
        hpp << "\n\n";
        hpp << klass_methods.str();
        hpp << "};\n";
        hpp << indent(0) << "} // " << klass.namespaze();
        hpp << "\n\n";

        // rva
        hpp << "namespace ark::method_info\n{\n";
        for (const auto& method : klass.methods())
        {
            std::string parameters;
            for (const auto& parameter : method.parameters())
            {
                parameters += ", " + parameter.type().ns_qualified_name();
            }
            std::string method_rva = method.is_static() ? "method_static_rva" : "method_rva";
            hpp << indent(1) << method_rva << "(" << meta::klass::rva_str(method.address())
                << ", " << method.klass().ns_name()
                << ", " << method.return_type().ns_qualified_name()
                << ", " << method.name()
                << parameters
                << ");\n";

            hooks << "// ark::hook<&" << method.klass().ns_name() << "::" << method.name() << ">::after([](auto&&...) { ark_trace(\"" << method.name() << "\"); });"
                << "\n";
        }
        hpp << "} // ark::method_info\n";

        // hooks
        hpp << "\n\n" << hooks.str() << "\n";

        // cpp
        cpp << "#include \"" << klass.name() << ".hpp\"\n\n";
        cpp << cpp_includes.str() << "\n\n";
        cpp << "namespace " << klass.namespaze() << "\n{\n";
        cpp << klass_methods_def.str() << "\n";
        cpp << cpp_statics.str();
        cpp << indent(0) << "} // " << klass.namespaze();
        cpp << "\n\n";
    }

    void generator::filter_image(const std::string& name)
    {
        images_.emplace_back(name);
    }
    void generator::filter_klass(const std::string& name)
    {
        klasses_.emplace_back(name);
    }

    std::string generator::indent(int n)
    {
        std::string result;
        while (n--)
        {
            result += "    ";
        };
        return result;
    }

    void generator::make_deps(const klass& klass, std::stringstream& hpp_includes, std::stringstream& cpp_includes)
    {
        std::stringstream includes;
        std::stringstream forwards;

        if (klass.parent() && !klass.type().is_enum())
        {
            includes << "#include <" << klass.parent()->file_path() << ".hpp>\n";
        }

        for (const auto& type : klass.includes())
        {
            if (type.is_native()) continue;
            if (type.is_value_type())
            {
                includes << "#include <" << type.file_path() << ".hpp>\n";
            }
            else
            {
                forwards << "namespace " << type.namespaze() << " { ";
                if (type.is_generic()) forwards << type.generic_declaration() << " ";
                forwards << "struct " << type.name() << "; }";
                forwards << "\n";
                cpp_includes << "#include <" << type.file_path() << ".hpp>\n";
            }
        }

        hpp_includes << includes.str() << forwards.str();
    }

    std::stringstream generator::make_fields(const klass& klass)
    {
        std::stringstream klass_fields;

        int i = 0;
        for (const auto& field : klass.fields())
        {
            if(field.has_attribute(il2cpp::FIELD_ATTRIBUTE_STATIC)) continue;

            klass_fields << indent(1);
            // enum
            if (klass.type().is_enum())
            {
                std::string comma;
                if (i > 0) comma = ", ";
                klass_fields << comma << field.name() << "\n";
            }
            // class
            else
            {
                // attributes
                if (field.has_attribute(il2cpp::FIELD_ATTRIBUTE_LITERAL)) klass_fields << "constexpr ";
                klass_fields << field.type().ns_qualified_name() << " " << field.name();
                if (!field.value().empty()) klass_fields << " = " << field.value();
                klass_fields << ";";
            }
            klass_fields << " // 0x" << std::hex << field.offset();
            klass_fields << "\n";
            ++i;
        }
        return klass_fields;
    }

    std::stringstream generator::make_methods(const klass& klass, bool definition)
    {
        std::stringstream klass_methods;

        for (const auto& method : klass.methods())
        {
            klass_methods << indent(1);

            if (method.is_virtual()) klass_methods << "/* virtual */";
            if (method.is_static() && !definition) klass_methods << "static ";
            klass_methods << method.return_type().ns_qualified_name() << " ";
            if (definition) klass_methods << klass.name() << "::";
            klass_methods << method.name() << "(";

            std::string call_parameters_type;
            std::string call_parameters_name;
            for (const auto& parameter : method.parameters())
            {
                std::string comma = parameter.index() == 0 ? "" : ", ";
                klass_methods << comma << parameter.type().ns_qualified_name() << " " << parameter.name();
                call_parameters_type += comma + parameter.type().ns_qualified_name();
                call_parameters_name += comma + parameter.name();
            }
            std::string comma = method.parameters().empty() ? "" : ", ";
            call_parameters_type = (method.is_static() ? "" : "decltype(this)" + comma) + call_parameters_type;

            std::string static_call = method.is_static() ? "static_" : "";
            std::string method_call_this = method.is_static() ? "" : ", this";
            if (definition) klass_methods << ") { "
                              << (method.return_type().type_id() != il2cpp::TYPE_VOID ? "return " : "")
                              << static_call << "method_call("
                              << method.klass().name() << ", "
                              << method.return_type().ns_qualified_name() << ", "
                              << "(" << call_parameters_type << ")" ", "
                              << "(" << klass::rva_str(method.address()) << method_call_this << comma
                              << call_parameters_name << ")); }";
            else klass_methods << ");";
            klass_methods << " // " << klass::rva_str(method.address());
            klass_methods << "\n";
        }
        /*
        void* method_it = nullptr;
        for (auto i = 0; i < ptr->_2.method_count; ++i)
        {
            auto method = api::class_get_methods(ptr, &method_it);

            if (method->flags & il2cpp::METHOD_ATTRIBUTE_VIRTUAL) continue;

            std::string method_name = clean_name(method->name);
            str_replace(method_name, ".", ""); // .ctor
            std::string return_type = type_namespace(method->return_type) + "::" + type_name(method->return_type);
            add_dep(method->return_type, true);

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
                methods << namespace_path(type_name_str(api::method_get_param(method, param_index)), "::") << " ";
                methods << param_name;
                param_types += ", " + namespace_path(type_name_str(api::method_get_param(method, param_index)), "::");
                param_names += ", " + param_name;
            }
            methods << ") { ";
            methods << "return il2cpp::call<" << return_type << "(*)(" << name << "*" << param_types << ")>(0x" << std::hex << rva(method->methodPointer) << ")(this" << param_names << ");";
            methods << " } // 0x" << std::hex << rva(method->methodPointer);
            methods << "\n";
        }
         */

        return klass_methods;
    }
    void generator::make_statics(const klass& klass, std::stringstream& hpp_statics, std::stringstream& cpp_statics)
    {
        std::stringstream klass_statics;
        std::stringstream klass_statics_declaration;
        std::stringstream klass_statics_definition;
        std::stringstream klass_statics_impl;

        if (!klass.type().is_enum())
        {
            klass_statics_declaration << indent(1) << "struct internal_statics;\n";
            klass_statics_definition << indent(1) << "struct " << klass.name() << "::internal_statics {\n";
        }

        int i = 0;
        for (const auto& field : klass.fields())
        {

            if (field.has_attribute(il2cpp::FIELD_ATTRIBUTE_STATIC))
            {
                if (!klass.type().is_enum())
                {
                    klass_statics << indent(1);
                    klass_statics_definition << indent(2);
                    klass_statics_definition << field.type().ns_qualified_name() << " " << field.name() << ";\n";

                    klass_statics << "field_static(" << field.owner().name() << ", " << field.type().ns_qualified_name() << ", " << field.name() << ");\n";
                    klass_statics_impl << indent(1) << "field_static_impl(" << field.owner().name() << ", " << field.type().ns_qualified_name() << ", " << field.name() << ");\n";
                }
                else
                {
                    klass_statics << indent(1);
                    std::string comma = i == 0 ? "" : ", ";
                    klass_statics << comma << field.name() << "\n";
                    ++i;
                }
            }
        }

        if (!klass.type().is_enum()) klass_statics_definition << indent(1) << "};\n";

        hpp_statics << klass_statics_declaration.str() << klass_statics.str();
        cpp_statics << klass_statics_definition.str() << klass_statics_impl.str();
    }
}
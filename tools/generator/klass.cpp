#include "klass.hpp"
#include "generator.hpp"
#include "maps.hpp"
#include "meta.hpp"
#include "utility.hpp"

#include <il2cpp/api.hpp>
#include <il2cpp/core.hpp>

using namespace il2cpp;

namespace meta
{
    type::type(const il2cpp::Il2CppType* type)
        : type_ { type }
        , type_id_ { api::type_get_type(type_) }
    {
        klass_ = api::class_from_type(type_);
        assert(klass_);
        if (api::type_get_type(type) == il2cpp::TYPE_ARRAY || api::type_get_type(type) == il2cpp::TYPE_SZARRAY)
        {
            is_array_ = true;
            klass_ = api::type_get_class_or_element_class(type_);
        }

        auto* k = meta::get_klass(klass_);
        name_ = k ? k->name() : "__" + std::to_string(type_id_) + "__";

        if (is_array())
        {
            name_ = "std::array<" + name_ + ">";
        }
    }

    const meta::klass* type::klass() const { return meta::get_klass(klass_); }

    klass::klass(const il2cpp::Il2CppClass* k)
        : klass_{ k }
        , type_{ il2cpp::api::class_get_type(klass_) }
        , type_id_{ il2cpp::api::type_get_type(type_) }
    {
        assert(klass_);
        assembly_name_ = api::type_get_assembly_qualified_name(type_);
        name_ = std::string("__uninitialized__") + "/* " + api::type_get_name(type_) + " */";
        initialized_ = false;

        std::string n = api::class_get_name(klass_);
        if ( n == "PlayerControl" || n == "GameData" || n == "PlayerInfo") {
            spdlog::trace("construct {}", api::class_get_name(klass_));
        }
    }

    std::string klass::info() const
    {
        std::stringstream output;
        // output << "\npath_: " << path_;
        // return output.str();
        output << "\nAssembly: " << api::type_get_assembly_qualified_name(api::class_get_type(klass_));
        output << "\nType: " << api::class_get_type(klass_);
        output << "\nDeclaring: " << (parent_klass_ ? parent_klass_->name() : "");
        output << "\nDeclaringNS: " << (parent_klass_ ? parent_klass_->namespaze() : "");
        output << "\nName: " << name_;
        output << "\nNamespace: " << namespaze_;
        output << "\nFilepath: " << file_path_;
        output << "\nIsEnum: " << is_enum();
        output << "\nIsGeneric: " << is_generic();
        output << "\nIsValueType: " << is_valuetype();
        output << "\nIsNested: " << is_nested();

        if (klass_->_2.nested_type_count > 0)
        {
            output << "\nNested: " << klass_->_2.nested_type_count;
            void* it = nullptr;
            for (auto i = 0; i < klass_->_2.nested_type_count; ++i)
            {
                output << "\n\t- ";
                auto* nested_klass = api::class_get_nested_types(klass_, &it);
                output << api::class_get_name(nested_klass);
            }
        }

        return output.str();
    }

    void klass::clean_name(std::string& name)
    {
        str_replace(name, ".ctor", "ctor");
        str_replace(name, ".cctor", "cctor");
        str_replace(name, "<", "");
        str_replace(name, ">", "");
        str_replace(name, "=", "");
        str_replace(name, "|", "");
        str_replace(name, ".", "::");
    }

    uintptr_t klass::rva(il2cpp::Il2CppMethodPointer ptr)
    {
        return reinterpret_cast<uintptr_t>(ptr) - ark::base_address();
    }

    void klass::initialize()
    {
        if (initialized_) return;
        assert(klass_);

        //std::string assembly_name = api::type_get_assembly_qualified_name(type_);

        parent_klass_ = meta::get_klass(api::class_get_declaring_type(klass_));
        std::string parent_klass = parent_klass_ ? parent_klass_->name() + std::string("_") : "";

        namespaze_ = api::class_get_namespace(klass_);
        namespaze_ = parent_klass_ && !parent_klass_->namespaze().empty()  ? parent_klass_->namespaze() + "::" + namespaze_ : namespaze_;
        clean_name(namespaze_);

        name_ = parent_klass + api::class_get_name(klass_);
        clean_name(name_);

        is_generic_ = api::class_is_generic(klass_);
        is_enum_ = api::class_is_enum(klass_);
        is_valuetype_ = api::class_is_valuetype(klass_);

        //

        switch (type_id_)
        {
        case il2cpp::TYPE_CLASS:
            //name_ += "/* TYPE_CLASS */";

            break;

        case il2cpp::TYPE_VALUETYPE:
            //name_ += "/* TYPE_VALUETYPE */";
            break;

        case il2cpp::TYPE_OBJECT:
        case il2cpp::TYPE_STRING:
            namespaze_ = "cs";
            name_ = "string";
            is_native_ = true;
            break;
        case il2cpp::TYPE_SZARRAY:
            is_native_ = true;
            //name_ += "/* TYPE_SZARRAY */";


            break;

        case il2cpp::TYPE_GENERICINST: {

            break;
        }
        default:
            if (meta::type_names.find(type_id_) == meta::type_names.end())name_ = "Typeid_" + std::to_string(type_id_);
            else
            {
                namespaze_ = "";
                name_ = meta::type_names[type_id_];
                is_native_ = true;
            }
        }

        ns_name_ = namespaze_.empty() ? name_ : namespaze_ + "::" + name_;

        path_ = namespaze_ + "/";
        str_replace(path_, "::", "/");
        file_path_ = path_ + name_;

        // set initialized here for recursivity (parent klass), but before fields
        initialized_ = true;

        //

        void* field_it = nullptr;
        for (auto i = 0; i < klass_->_2.field_count; ++i)
        {
            klass_field field{ this, api::class_get_fields(klass_, &field_it) };
            fields_.emplace_back(std::move(field));
        }

        void* method_it = nullptr;
        for (auto i = 0; i < klass_->_2.method_count; ++i)
        {
            auto method = api::class_get_methods(klass_, &method_it);
            methods_.emplace_back(klass_method{ *this, method });

        }

    }

    klass_field::klass_field(const meta::klass* owner, il2cpp::FieldInfo* field_info)
        : owner_{ owner }
        , type_{ field_info->type }
        , field_{ field_info }
    {
        name_ = field_->name;
        klass::clean_name(name_);
        type_name_ = type_.name();

        // todo default value
        // void* field_value = nullptr;
        // api::field_get_value(api::type_get_object(field_->type), field_, field_value);
        // value_ = std::to_string(reinterpret_cast<int>(field_value));

        //add_dep(field->type, true);

        //    statics_def << "\n" << class_path(field_type_name) << " " << generic_fullname << "::" << field_name << "() { return statics()->" << field_name << "; }; // 0x" << std::hex << field->offset;
        //    field_output = &meta_statics;

        //*field_output << "\n" << indent(2);
        //*field_output << class_path(field_type_name);
        //*field_output << " " << field_name;
        //*field_output << "; // 0x" << std::hex << field->offset;
    }

    klass_parameter::klass_parameter(const klass_method& method, const il2cpp::Il2CppType* type, int index)
        : method_{ method }
        , type_{ meta::type{ type } }
        , index_{ index }
    {
        name_ =  il2cpp::api::method_get_param_name(&method_.info(), index_);
    }

    klass_method::klass_method(const meta::klass& owner, const il2cpp::MethodInfo* info)
        : klass_{ owner }
        , info_{ info }
        , return_type_{ info_->return_type }
    {
        name_ = info_->name;
        klass::clean_name(name_);
        address_ = info_->methodPointer;

        for (int param_index = 0; param_index < info_->parameters_count; ++param_index)
        {
            klass_parameter parameter{ *this, api::method_get_param(info_, param_index), param_index };
            parameters_.emplace_back(std::move(parameter));
        }
    }
} // meta
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
        , klass_ { api::class_from_type(type_) }
        , assembly_name_ { api::type_get_assembly_qualified_name(type_) }
        , name_ { "__uninitialized__" }
    {
    }

    void type::initialize()
    {
        if (initialized_) return;
        assert(klass_);

        std::string assembly_name = api::type_get_assembly_qualified_name(type_);

        namespaze_ = api::class_get_namespace(klass_);
        clean_name(namespaze_);
        if (namespaze_.empty()) namespaze_ = "au";
        name_ = api::class_get_name(klass_);
        clean_name(name_);
        generic_name_ = name_;

        is_generic_ = api::class_is_generic(klass_);
        is_enum_ = api::class_is_enum(klass_);
        is_value_type_ = api::class_is_valuetype(klass_);

        switch (type_id_)
        {
        case il2cpp::TYPE_CLASS:
            if (auto* k = api::class_get_declaring_type(klass_))
            {
                auto* declaring_klass = meta::get_klass(k);
                if (declaring_klass)
                {
                    if (declaring_klass->namespaze() != "au" && namespaze_ != "au")
                        namespaze_ = !declaring_klass->namespaze().empty() ? declaring_klass->namespaze() + "::" + namespaze_ : namespaze_;
                    name_ = declaring_klass->type().name() + std::string("_") + name_;
                }
            }
            is_pointer_ = true;

            break;

        case il2cpp::TYPE_VALUETYPE:
            break;

        case il2cpp::TYPE_OBJECT:
            namespaze_ = "";
            name_ = "void";
            ns_name_ = "void";
            is_native_ = true;
            is_pointer_ = true;
            break;
        case il2cpp::TYPE_STRING:
            namespaze_ = "cs";
            name_ = "string";
            generic_name_ = "string";
            is_pointer_ = true;
            is_native_ = true;

            break;
        case il2cpp::TYPE_ARRAY:
        case il2cpp::TYPE_SZARRAY: {
            auto* element_klass = meta::get_klass(api::type_get_class_or_element_class(type_));
            if (element_klass)
            {
                ns_name_ = std::string("cs::array<") + element_klass->type().ns_qualified_name() + ">";
                file_path_ = element_klass->type().file_path();
                is_native_ = element_klass->type().is_native();
            }
            else ns_name_ = "cs::array<" + name_ + ">";
            break;
        }

        case il2cpp::TYPE_GENERICINST: {
            name_ = name_.substr(0, name_.find("`"));
            // todo
            //name_ += "<" + std::to_string(klass_->_2.) + ">";
            generic_name_ = name_ +  "<int>";
            is_pointer_ = true;

            break;
        }
        default:
            if (meta::type_names.find(type_id_) == meta::type_names.end())
            {
                name_ = "Typeid_" + std::to_string(type_id_);
                is_pointer_ = true;
            }
            else
            {
                namespaze_ = "";
                name_ = meta::type_names[type_id_];
                ns_name_ = name_;
            }
            is_native_ = true;
        }

        if (ns_name_.empty()) ns_name_ = namespaze_.empty() ? generic_name_ :  namespaze_ + "::" + generic_name_;

        // add qualifiers
        if (is_pointer_)
        {
            qualified_name_ = name_ + "*";
            ns_qualified_name_ = ns_name_ + "*";
        }
        else
        {
            qualified_name_ = name_;
            ns_qualified_name_ = ns_name_;
        }


        path_ = namespaze_ + "/";
        str_replace(path_, "::", "/");
        if (file_path_.empty()) file_path_ = path_ + name_;

        // set initialized here for recursivity (parent klass), but before fields
        initialized_ = true;
    }

    const meta::klass* type::klass() const { return meta::get_klass(klass_); }

    std::string type::info() const
    {
        std::stringstream output;
        // output << "\npath_: " << path_;
        // return output.str();
        //output << "\nAssembly: " << api::type_get_assembly_qualified_name(api::class_get_type(klass_));
        output << "\nType: " << type_id_;
        //output << "\nDeclaring: " << (parent_klass_ ? parent_klass_->name() : "");
        //output << "\nDeclaringNS: " << (parent_klass_ ? parent_klass_->namespaze() : "");
        output << "\nName: " << name_;
        output << "\nNamespace: " << namespaze_;
        output << "\nFilepath: " << file_path_;
        //output << "\nIsEnum: " << is_enum();
        //output << "\nIsGeneric: " << is_generic();
        //output << "\nIsValueType: " << is_valuetype();
        //output << "\nIsNested: " << is_nested();

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

    //

    klass::klass(const il2cpp::Il2CppClass* k)
        : klass_{ k }
        , type_{ meta::type{ il2cpp::api::class_get_type(klass_) } }
    {}

    uintptr_t klass::rva(il2cpp::Il2CppMethodPointer ptr)
    {
        return reinterpret_cast<uintptr_t>(ptr) - ark::base_address();
    }

    void klass::initialize()
    {
        if (initialized_) return;
        type_.initialize();

        initialized_ = true;

        //

        void* field_it = nullptr;
        for (auto i = 0; i < klass_->_2.field_count; ++i)
        {
            klass_field field{ this, api::class_get_fields(klass_, &field_it) };
            includes_.emplace_back(field.type());
            fields_.emplace_back(std::move(field));
        }

        void* method_it = nullptr;
        for (auto i = 0; i < klass_->_2.method_count; ++i)
        {
            klass_method method{ *this, api::class_get_methods(klass_, &method_it) };
            includes_.emplace_back(method.return_type());
            for (const auto& parameter : method.parameters())
            {
                includes_.emplace_back(parameter.type());
            }
            methods_.emplace_back(std::move(method));
        }

        auto fs = [](auto& v1, auto& v2) { return v1.ns_name() > v2.ns_name(); };
        auto fu = [](auto& v1, auto& v2) { return v1.ns_name() == v2.ns_name(); };
        std::sort(includes_.begin(), includes_.end(), fs);
        includes_.erase(std::unique(includes_.begin(), includes_.end(), fu), includes_.end());
    }

    klass_field::klass_field(const meta::klass* owner, il2cpp::FieldInfo* field_info)
        : owner_{ owner }
        , type_{ field_info->type }
        , field_{ field_info }
    {
        name_ = field_->name;
        clean_name(name_);

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
        type_.initialize();
        name_ =  il2cpp::api::method_get_param_name(&method_.info(), index_);
    }

    klass_method::klass_method(const meta::klass& owner, const il2cpp::MethodInfo* info)
        : klass_{ owner }
        , info_{ info }
        , return_type_{ info_->return_type }
    {
        return_type_.initialize();
        name_ = info_->name;
        str_replace(name_, ".", ""); // replace function names like a.b.c
        clean_name(name_);
        ns_name_ = owner.ns_name() + "::" + name_;
        address_ = info_->methodPointer;

        for (int param_index = 0; param_index < info_->parameters_count; ++param_index)
        {
            klass_parameter parameter{ *this, api::method_get_param(info_, param_index), param_index };
            parameters_.emplace_back(std::move(parameter));
        }
    }
} // meta
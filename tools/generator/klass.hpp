#ifndef TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD
#define TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD

#include <il2cpp/api.hpp>
#include <unordered_set>

namespace meta
{
    class klass;
    class klass_field;
    class klass_method;
    class klass_parameter;

    class type
    {
    public:
        type(const il2cpp::Il2CppType*);
        void initialize();

        const il2cpp::Il2CppType* ptr() const { return type_; }
        const meta::klass* klass() const;
        int type_id() const { return type_id_; }
        const std::string& assembly_name() const { return assembly_name_; }
        const std::string& name() const { return name_; }
        const std::string& qualified_name() const { return qualified_name_; }
        const std::string& ns_qualified_name() const { return ns_qualified_name_; }
        const std::string& generic_name() const { return generic_name_; }
        const std::string& namespaze() const { return namespaze_; }
        const std::string& ns_name() const { return ns_name_; }
        const std::string& file_path() const { return file_path_; }
        const std::string& path() const { return path_; }
        bool is_klass() const { return type_id_ == il2cpp::TYPE_CLASS; }
        bool is_enum() const { return is_enum_; }
        bool is_value_type() const { return is_value_type_; }
        bool is_generic() const { return is_generic_; }
        bool is_array() const { return is_array_; }
        bool is_native() const { return is_native_; }
        bool is_pointer() const { return is_pointer_; }

        std::string info() const;

    private:
        bool initialized_ = false;
        const il2cpp::Il2CppType* type_;
        int type_id_;
        const il2cpp::Il2CppClass* klass_;

        std::string assembly_name_;
        std::string name_;
        std::string qualified_name_;
        std::string ns_qualified_name_;
        std::string generic_name_;
        std::string namespaze_;
        std::string ns_name_;
        std::string file_path_;
        std::string path_;

        bool is_array_ = false;
        bool is_native_ = false;
        bool is_pointer_ = false;
        bool is_generic_ = false;
        bool is_enum_ = false;
        bool is_value_type_ = false;
    };

    class klass
    {
    public:
        klass(const il2cpp::Il2CppClass* k);

        void initialize();

        const il2cpp::Il2CppClass* ptr() const { return klass_; }
        const meta::type& type() const { return type_; }
        int type_id() const { return type_.type_id(); }
        const std::string& assembly_name() const { return assembly_name_; }
        const std::string& name() const { return type_.name(); }
        const std::string& namespaze() const { return type_.namespaze(); }
        const std::string& ns_name() const { return type_.ns_name(); }
        const std::string& file_path() const { return type_.file_path(); }
        const std::string& path() const { return type_.path(); }
        const std::vector<klass_field>& fields() const { return fields_; }
        const std::vector<klass_method>& methods() const { return methods_; }
        const std::vector<meta::type>& includes() const { return includes_; }
        bool is_initialized() const { return initialized_; }
        bool is_nested() const { return parent_klass_ != nullptr; }

        static void clean_name(std::string& name);
        static uintptr_t rva(il2cpp::Il2CppMethodPointer);

    private:
        const il2cpp::Il2CppClass* klass_;
        meta::type type_;

        mutable const meta::klass* parent_klass_ = nullptr;

        std::vector<klass_field> fields_;
        std::vector<klass_method> methods_;
        std::vector<meta::type> includes_;

    private:
        bool initialized_ = false;
        std::string assembly_name_;
        std::string name_;
        std::string namespaze_;
        std::string ns_name_;
        std::string file_path_;
        std::string path_;
    };

    class klass_field
    {
    public:
        klass_field(const meta::klass* owner, il2cpp::FieldInfo* field_info);

        const std::string& name() const { return name_; }
        const meta::klass& owner() const { return *owner_; }
        const meta::type& type() const { type_.initialize(); return type_; }
        int offset() const { return field_->offset; }
        int attributes() const { return il2cpp::api::type_get_attrs(field_->type); }
        const std::string& value() const { return value_; }

        bool has_attribute(int attribute) const { return attributes() & attribute; }

    private:
        il2cpp::FieldInfo* field_;
        mutable meta::type type_;
        const meta::klass* owner_;
        std::string name_;
        std::string value_;
    };

    class klass_method
    {
    public:
        klass_method(const meta::klass& owner, const il2cpp::MethodInfo*);

        const il2cpp::MethodInfo& info() const { return *info_; }
        const meta::klass& klass() const { return klass_; } // owning klass
        const std::string& name() const { return name_; }
        const std::string& ns_name() const { return ns_name_; }
        const meta::type& return_type() const { return return_type_; }
        il2cpp::Il2CppMethodPointer const address() const { return address_; }
        const std::vector<klass_parameter>& parameters() const { return parameters_; }

    private:
        const il2cpp::MethodInfo* info_;
        const meta::klass& klass_;
        std::string name_;
        std::string ns_name_;
        il2cpp::Il2CppMethodPointer address_;
        meta::type return_type_;
        std::vector<klass_parameter> parameters_;
    };

    class klass_parameter
    {
    public:
        klass_parameter(const klass_method& method_, const il2cpp::Il2CppType* type, int index);

        const meta::klass_method& method() const { return method_; }
        const meta::klass& klass() const { return *type_.klass(); }
        const std::string& name() const { return name_; }
        const meta::type& type() const { return type_; }
        int index() const { return index_; }

    private:
        const meta::klass_method& method_;
        meta::type type_;
        std::string name_;
        int index_ = -1;
    };
}


#endif // TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD
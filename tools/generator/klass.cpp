#include "klass.hpp"

#include <il2cpp/api.hpp>
#include <il2cpp/core.hpp>

using namespace il2cpp;

klass::klass(const il2cpp::Il2CppClass* k)
    : klass_{ k }
{

}

std::string klass::info()
{
    std::stringstream output;
    output << "\n";
    output << "\nAssembly: " << api::type_get_assembly_qualified_name(api::class_get_type(klass_));
    output << "\nType: " << api::class_get_type(klass_);
    if (api::class_get_declaring_type(klass_)) output << "\nDeclaring: " << api::type_get_name(api::class_get_type(api::class_get_declaring_type(klass_)));
    if (api::class_get_declaring_type(klass_)) output << "\nDeclaringNS: " << api::class_get_namespace(api::class_get_declaring_type(klass_));
    output << "\nName: " << api::class_get_name(klass_);
    output << "\nNamespace: " << api::class_get_namespace(klass_);
    output << "\nIsEnum: " << api::class_is_enum(klass_);
    output << "\nIsGeneric: " << api::class_is_generic(klass_);
    output << "\nIsValueType: " << api::class_is_valuetype(klass_);
    //output << "\nFlags: " << flags_info(api::class_get_flags(klass_));

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

std::string klass::flags_info(int flags)
{
    std::string output;
    if (flags & TYPE_ENUM) output += " | TYPE_ENUM";
    if (flags & TYPE_GENERICINST) output += " | TYPE_GENERICINST";

    return output;
}
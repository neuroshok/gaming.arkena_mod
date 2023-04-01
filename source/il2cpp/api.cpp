#include <il2cpp/api.hpp>

namespace il2cpp
{
    il2cpp::Il2CppClass* api::get_class(const std::string& namespaze, const std::string& klass)
    {
        static Il2CppClass* sklass = nullptr;
        if (sklass) return sklass;

        auto dom = domain_get();

        std::size_t assembly_count = 0;
        const auto assemblies = domain_get_assemblies(dom, &assembly_count);

        Il2CppClass* cls = nullptr;

        for (auto it = assemblies; it != assemblies + assembly_count; ++it)
        {
            auto img = assembly_get_image(*it);
            if (!img)
            {
                ark_error("null assembly..");
                continue;
            }

            cls = class_from_name(img, namespaze.c_str(), klass.c_str());
            if (cls)
                break;
        }

        if (cls == nullptr)
            ark_error("class not found {} in {}", klass.c_str(), !namespaze.empty() ? namespaze : "(no_namespace)");

        sklass = cls;
        return sklass;
    }
} // il2cpp
#ifndef TOOLS_GENERATOR_META_HPP_ARKENA_MOD
#define TOOLS_GENERATOR_META_HPP_ARKENA_MOD

#include "klass.hpp"

#include <vector>
#include <memory>
#include <iostream>

namespace meta
{
    extern std::vector<std::unique_ptr<meta::klass>> klasses;

    static const meta::klass* get_klass(const il2cpp::Il2CppClass* k);
    static const meta::klass* get_klass(const il2cpp::Il2CppType* type);

    const meta::klass* get_klass(const il2cpp::Il2CppClass* k)
    {
        for (auto& klass : klasses)
        {
            if (klass->ptr() == k)
            {
                klass->initialize();
                return klass.get();
            }
        }

        return nullptr;
    }

    const meta::klass* get_klass(const il2cpp::Il2CppType* type)
    {
        return get_klass(il2cpp::api::class_from_type(type));
    }
} // meta



#endif // TOOLS_GENERATOR_META_HPP_ARKENA_MOD
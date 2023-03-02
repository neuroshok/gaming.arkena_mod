#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/MethodBase.hpp>
#include <au/System/Reflection/MethodInfo.hpp>

namespace System::Reflection
{
    struct MethodInfo : ark::meta<MethodInfo, System::Reflection::MethodBase>
    {

        void ctor() { return il2cpp::call<void(*)(MethodInfo*)>(0x2c4c60)(this); } // 0x2c4c60
        bool op_Equality(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo* right) { return il2cpp::call<bool(*)(MethodInfo*, System::Reflection::MethodInfo*, System::Reflection::MethodInfo*)>(0x10edad0)(this, left, right); } // 0x10edad0
        bool op_Inequality(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo* right) { return il2cpp::call<bool(*)(MethodInfo*, System::Reflection::MethodInfo*, System::Reflection::MethodInfo*)>(0x10edb80)(this, left, right); } // 0x10edb80

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::MethodInfo> {
        };

}


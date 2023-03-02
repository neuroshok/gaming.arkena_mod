#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Reflection/MemberInfo.hpp>

namespace System::Reflection
{
    struct MemberInfo : ark::meta<MemberInfo, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(MemberInfo*)>(0x2c4c60)(this); } // 0x2c4c60
        bool op_Equality(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo* right) { return il2cpp::call<bool(*)(MemberInfo*, System::Reflection::MemberInfo*, System::Reflection::MemberInfo*)>(0x10e7890)(this, left, right); } // 0x10e7890
        bool op_Inequality(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo* right) { return il2cpp::call<bool(*)(MemberInfo*, System::Reflection::MemberInfo*, System::Reflection::MemberInfo*)>(0x10e7be0)(this, left, right); } // 0x10e7be0

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::MemberInfo> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/System/Reflection/MonoCMethod.hpp>

namespace System
{
    struct MonoTypeInfo : ark::meta<MonoTypeInfo, il2cpp::Il2CppObject>
    {
        cs::string* full_name; // 0x8
        System::Reflection::MonoCMethod* default_ctor; // 0xc

        void ctor() { return il2cpp::call<void(*)(MonoTypeInfo*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<System::MonoTypeInfo> {
        };

}


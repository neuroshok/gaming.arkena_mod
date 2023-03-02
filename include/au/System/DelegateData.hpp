#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Type.hpp>
#include <cs/string.hpp>

namespace System
{
    struct DelegateData : ark::meta<DelegateData, il2cpp::Il2CppObject>
    {
        System::Type* target_type; // 0x8
        cs::string* method_name; // 0xc
        bool curried_first_arg; // 0x10

        void ctor() { return il2cpp::call<void(*)(DelegateData*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<System::DelegateData> {
        };

}


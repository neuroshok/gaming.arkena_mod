#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>

namespace System::Reflection
{
    struct Binder : ark::meta<Binder, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(Binder*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::Binder> {
        };

}


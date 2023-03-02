#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>

namespace System::Security::Cryptography
{
    struct RandomNumberGenerator : ark::meta<RandomNumberGenerator, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(RandomNumberGenerator*)>(0x2c4c60)(this); } // 0x2c4c60
        System::Security::Cryptography::RandomNumberGenerator* Create() { return il2cpp::call<System::Security::Cryptography::RandomNumberGenerator*(*)(RandomNumberGenerator*)>(0x10237b0)(this); } // 0x10237b0

    };

}
namespace ark {

        template<> struct meta_statics<System::Security::Cryptography::RandomNumberGenerator> {
        };

}


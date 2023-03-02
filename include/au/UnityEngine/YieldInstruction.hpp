#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>

namespace UnityEngine
{
    struct YieldInstruction : ark::meta<YieldInstruction, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(YieldInstruction*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::YieldInstruction> {
        };

}


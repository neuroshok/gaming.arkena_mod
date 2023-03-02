#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>

namespace UnityEngine
{
    struct Motion : ark::meta<Motion, UnityEngine::Object>
    {
        bool _isAnimatorMotion_k__BackingField; // 0xc

        void ctor() { return il2cpp::call<void(*)(Motion*)>(0x1a9b7f0)(this); } // 0x1a9b7f0
        bool get_isLooping() { return il2cpp::call<bool(*)(Motion*)>(0x1a9b840)(this); } // 0x1a9b840

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Motion> {
        };

}


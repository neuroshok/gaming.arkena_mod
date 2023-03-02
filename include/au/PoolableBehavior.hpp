#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/IObjectPool.hpp>

namespace 
{
    struct PoolableBehavior : ark::meta<PoolableBehavior, UnityEngine::MonoBehaviour>
    {
        au::IObjectPool* OwnerPool; // 0xc
        int32_t PoolIndex; // 0x10

        void Awake() { return il2cpp::call<void(*)(PoolableBehavior*)>(0x47f8a0)(this); } // 0x47f8a0
        void ctor() { return il2cpp::call<void(*)(PoolableBehavior*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::PoolableBehavior> {
        };

}


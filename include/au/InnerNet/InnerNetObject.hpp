#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/InnerNet/SpawnFlags.hpp>
#include <au/Hazel/SendOption.hpp>

namespace InnerNet
{
    struct InnerNetObject : ark::meta<InnerNetObject, UnityEngine::MonoBehaviour>
    {
        uint32_t SpawnId; // 0xc
        uint32_t NetId; // 0x10
        uint32_t DirtyBits; // 0x14
        InnerNet::SpawnFlags SpawnFlags; // 0x18
        Hazel::SendOption sendMode; // 0x19
        int32_t OwnerId; // 0x1c
        bool DespawnOnDestroy; // 0x20

        bool get_AmOwner() { return il2cpp::call<bool(*)(InnerNetObject*)>(0x5f54c0)(this); } // 0x5f54c0
        void Despawn() { return il2cpp::call<void(*)(InnerNetObject*)>(0x5f5310)(this); } // 0x5f5310
        bool IsDirtyBitSet(int32_t idx) { return il2cpp::call<bool(*)(InnerNetObject*, int32_t)>(0x5f53a0)(this, idx); } // 0x5f53a0
        void ClearDirtyBits() { return il2cpp::call<void(*)(InnerNetObject*)>(0x5f52d0)(this); } // 0x5f52d0
        void UnsetDirtyBit(uint32_t val) { return il2cpp::call<void(*)(InnerNetObject*, uint32_t)>(0x5f5490)(this, val); } // 0x5f5490
        void SetDirtyBit(uint32_t val) { return il2cpp::call<void(*)(InnerNetObject*, uint32_t)>(0x5f5480)(this, val); } // 0x5f5480
        void ctor() { return il2cpp::call<void(*)(InnerNetObject*)>(0x5f54a0)(this); } // 0x5f54a0

    };

}
namespace ark {

        template<> struct meta_statics<InnerNet::InnerNetObject> {
        };

}


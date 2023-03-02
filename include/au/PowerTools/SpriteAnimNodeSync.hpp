#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/PowerTools/SpriteAnimNodes.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Vector3.hpp>

namespace PowerTools
{
    struct SpriteAnimNodeSync : ark::meta<SpriteAnimNodeSync, UnityEngine::MonoBehaviour>
    {
        int32_t NodeId; // 0xc
        PowerTools::SpriteAnimNodes* Parent; // 0x10
        UnityEngine::SpriteRenderer* ParentRenderer; // 0x14
        UnityEngine::SpriteRenderer* Renderer; // 0x18
        UnityEngine::Vector3 flipOffset; // 0x1c

        void LateUpdate() { return il2cpp::call<void(*)(SpriteAnimNodeSync*)>(0x6ca9d0)(this); } // 0x6ca9d0
        void ctor() { return il2cpp::call<void(*)(SpriteAnimNodeSync*)>(0x6cacf0)(this); } // 0x6cacf0

    };

}
namespace ark {

        template<> struct meta_statics<PowerTools::SpriteAnimNodeSync> {
        };

}


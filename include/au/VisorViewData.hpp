#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ScriptableObject.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/Material.hpp>

namespace 
{
    struct VisorViewData : ark::meta<VisorViewData, UnityEngine::ScriptableObject>
    {
        UnityEngine::Sprite* IdleFrame; // 0xc
        UnityEngine::Sprite* LeftIdleFrame; // 0x10
        UnityEngine::Sprite* ClimbFrame; // 0x14
        UnityEngine::Sprite* FloorFrame; // 0x18
        bool BehindHats; // 0x1c
        UnityEngine::Material* AltShader; // 0x20

        void ctor() { return il2cpp::call<void(*)(VisorViewData*)>(0x42fd90)(this); } // 0x42fd90

    };

}
namespace ark {

        template<> struct meta_statics<::VisorViewData> {
        };

}


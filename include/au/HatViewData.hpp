#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ScriptableObject.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/Material.hpp>

namespace 
{
    struct HatViewData : ark::meta<HatViewData, UnityEngine::ScriptableObject>
    {
        UnityEngine::Sprite* MainImage; // 0xc
        UnityEngine::Sprite* BackImage; // 0x10
        UnityEngine::Sprite* LeftMainImage; // 0x14
        UnityEngine::Sprite* LeftBackImage; // 0x18
        UnityEngine::Sprite* ClimbImage; // 0x1c
        UnityEngine::Sprite* FloorImage; // 0x20
        UnityEngine::Sprite* LeftClimbImage; // 0x24
        UnityEngine::Sprite* LeftFloorImage; // 0x28
        UnityEngine::Material* AltShader; // 0x2c

        void ctor() { return il2cpp::call<void(*)(HatViewData*)>(0x42fd90)(this); } // 0x42fd90

    };

}
namespace ark {

        template<> struct meta_statics<::HatViewData> {
        };

}


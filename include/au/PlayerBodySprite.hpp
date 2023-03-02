#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/PlayerPettingHand.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/UnityEngine/Vector3.hpp>

namespace 
{
    struct PlayerBodySprite : ark::meta<PlayerBodySprite, il2cpp::Il2CppObject>
    {
        UnityEngine::SpriteRenderer* BodySprite; // 0x8
        au::PlayerPettingHand* PettingHand; // 0xc
        UnityEngine::SpriteRenderer* HandHat; // 0x10
        UnityEngine::Sprite* GhostSprite; // 0x14
        au::PlayerBodyTypes Type; // 0x18
        UnityEngine::Vector3 flippedCosmeticOffset; // 0x1c

        bool get_Visible() { return il2cpp::call<bool(*)(PlayerBodySprite*)>(0x6b6fd0)(this); } // 0x6b6fd0
        void set_Visible(bool value) { return il2cpp::call<void(*)(PlayerBodySprite*, bool)>(0x6b7000)(this, value); } // 0x6b7000
        void ctor() { return il2cpp::call<void(*)(PlayerBodySprite*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerBodySprite> {
        };

}


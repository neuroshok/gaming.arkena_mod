#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>

namespace 
{
    struct Ladder : ark::meta<Ladder, UnityEngine::MonoBehaviour>
    {
        uint8_t Id; // 0xc
        UnityEngine::SpriteRenderer* SpotArea; // 0x10
        bool IsTop; // 0x14
        au::Ladder* Destination; // 0x18
        UnityEngine::AudioClip* UseSound; // 0x1c
        UnityEngine::SpriteRenderer* Image; // 0x20

        void ctor() { return il2cpp::call<void(*)(Ladder*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::Ladder> {
        };

}


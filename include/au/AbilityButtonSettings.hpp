#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ScriptableObject.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/StringNames.hpp>
#include <au/UnityEngine/Material.hpp>

namespace 
{
    struct AbilityButtonSettings : ark::meta<AbilityButtonSettings, UnityEngine::ScriptableObject>
    {
        UnityEngine::Sprite* Image; // 0xc
        au::StringNames Text; // 0x10
        UnityEngine::Material* FontMaterial; // 0x14

        void ctor() { return il2cpp::call<void(*)(AbilityButtonSettings*)>(0x42fd90)(this); } // 0x42fd90

    };

}
namespace ark {

        template<> struct meta_statics<::AbilityButtonSettings> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/RewiredConstsEnum/Action.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Color.hpp>

namespace 
{
    struct ActionMapGlyphDisplay : ark::meta<ActionMapGlyphDisplay, UnityEngine::MonoBehaviour>
    {
        RewiredConstsEnum+Action actionToDisplayMappedGlyphFor; // 0xc
        UnityEngine::SpriteRenderer* sr; // 0x10

        void Awake() { return il2cpp::call<void(*)(ActionMapGlyphDisplay*)>(0x713190)(this); } // 0x713190
        void OnDestroy() { return il2cpp::call<void(*)(ActionMapGlyphDisplay*)>(0x713270)(this); } // 0x713270
        void UpdateGlyphDisplay() { return il2cpp::call<void(*)(ActionMapGlyphDisplay*)>(0x713430)(this); } // 0x713430
        void SetColor(UnityEngine::Color color) { return il2cpp::call<void(*)(ActionMapGlyphDisplay*, UnityEngine::Color)>(0x713330)(this, color); } // 0x713330
        void SetSpriteVisibility(bool visible) { return il2cpp::call<void(*)(ActionMapGlyphDisplay*, bool)>(0x7133b0)(this, visible); } // 0x7133b0
        void ctor() { return il2cpp::call<void(*)(ActionMapGlyphDisplay*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::ActionMapGlyphDisplay> {
        };

}


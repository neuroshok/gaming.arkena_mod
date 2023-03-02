#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Renderer.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/SpriteDrawMode.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/SpriteTileMode.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/SpriteMaskInteraction.hpp>
#include <au/UnityEngine/SpriteSortPoint.hpp>
#include <au/UnityEngine/SpriteDrawMode.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/SpriteDrawMode.hpp>

namespace UnityEngine
{
    struct SpriteRenderer : ark::meta<SpriteRenderer, UnityEngine::Renderer>
    {

        bool get_shouldSupportTiling() { return il2cpp::call<bool(*)(SpriteRenderer*)>(0xeea990)(this); } // 0xeea990
        UnityEngine::Sprite* get_sprite() { return il2cpp::call<UnityEngine::Sprite*(*)(SpriteRenderer*)>(0xeeaa60)(this); } // 0xeeaa60
        void set_sprite(UnityEngine::Sprite* value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Sprite*)>(0xeeacb0)(this, value); } // 0xeeacb0
        UnityEngine::SpriteDrawMode get_drawMode() { return il2cpp::call<UnityEngine::SpriteDrawMode(*)(SpriteRenderer*)>(0xeea8d0)(this); } // 0xeea8d0
        void set_drawMode(UnityEngine::SpriteDrawMode value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::SpriteDrawMode)>(0xeeab60)(this, value); } // 0xeeab60
        UnityEngine::Vector2 get_size() { return il2cpp::call<UnityEngine::Vector2(*)(SpriteRenderer*)>(0xeea9f0)(this); } // 0xeea9f0
        void set_size(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Vector2)>(0xeeac50)(this, value); } // 0xeeac50
        float get_adaptiveModeThreshold() { return il2cpp::call<float(*)(SpriteRenderer*)>(0xeea830)(this); } // 0xeea830
        void set_adaptiveModeThreshold(float value) { return il2cpp::call<void(*)(SpriteRenderer*, float)>(0xeeaac0)(this, value); } // 0xeeaac0
        UnityEngine::SpriteTileMode get_tileMode() { return il2cpp::call<UnityEngine::SpriteTileMode(*)(SpriteRenderer*)>(0xeeaa90)(this); } // 0xeeaa90
        void set_tileMode(UnityEngine::SpriteTileMode value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::SpriteTileMode)>(0xeeace0)(this, value); } // 0xeeace0
        UnityEngine::Color get_color() { return il2cpp::call<UnityEngine::Color(*)(SpriteRenderer*)>(0xeea890)(this); } // 0xeea890
        void set_color(UnityEngine::Color value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Color)>(0xeeab30)(this, value); } // 0xeeab30
        UnityEngine::SpriteMaskInteraction get_maskInteraction() { return il2cpp::call<UnityEngine::SpriteMaskInteraction(*)(SpriteRenderer*)>(0xeea960)(this); } // 0xeea960
        void set_maskInteraction(UnityEngine::SpriteMaskInteraction value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::SpriteMaskInteraction)>(0xeeabf0)(this, value); } // 0xeeabf0
        bool get_flipX() { return il2cpp::call<bool(*)(SpriteRenderer*)>(0xeea900)(this); } // 0xeea900
        void set_flipX(bool value) { return il2cpp::call<void(*)(SpriteRenderer*, bool)>(0xeeab90)(this, value); } // 0xeeab90
        bool get_flipY() { return il2cpp::call<bool(*)(SpriteRenderer*)>(0xeea930)(this); } // 0xeea930
        void set_flipY(bool value) { return il2cpp::call<void(*)(SpriteRenderer*, bool)>(0xeeabc0)(this, value); } // 0xeeabc0
        UnityEngine::SpriteSortPoint get_spriteSortPoint() { return il2cpp::call<UnityEngine::SpriteSortPoint(*)(SpriteRenderer*)>(0xeeaa30)(this); } // 0xeeaa30
        void set_spriteSortPoint(UnityEngine::SpriteSortPoint value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::SpriteSortPoint)>(0xeeac80)(this, value); } // 0xeeac80
        UnityEngine::Bounds Internal_GetSpriteBounds(UnityEngine::SpriteDrawMode mode) { return il2cpp::call<UnityEngine::Bounds(*)(SpriteRenderer*, UnityEngine::SpriteDrawMode)>(0xeea7f0)(this, mode); } // 0xeea7f0
        UnityEngine::Bounds GetSpriteBounds() { return il2cpp::call<UnityEngine::Bounds(*)(SpriteRenderer*)>(0xeea730)(this); } // 0xeea730
        void ctor() { return il2cpp::call<void(*)(SpriteRenderer*)>(0xee3f90)(this); } // 0xee3f90
        void get_size_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Vector2)>(0xeea9c0)(this, ret); } // 0xeea9c0
        void set_size_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Vector2)>(0xeeac20)(this, value); } // 0xeeac20
        void get_color_Injected(UnityEngine::Color ret) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Color)>(0xeea860)(this, ret); } // 0xeea860
        void set_color_Injected(UnityEngine::Color value) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::Color)>(0xeeab00)(this, value); } // 0xeeab00
        void Internal_GetSpriteBounds_Injected(UnityEngine::SpriteDrawMode mode, UnityEngine::Bounds ret) { return il2cpp::call<void(*)(SpriteRenderer*, UnityEngine::SpriteDrawMode, UnityEngine::Bounds)>(0xeea7c0)(this, mode, ret); } // 0xeea7c0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::SpriteRenderer> {
        };

}


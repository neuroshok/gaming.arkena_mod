#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Vector4.hpp>

namespace UnityEngine
{
    struct Color : ark::meta<Color>
    {
        float r; // 0x8
        float g; // 0xc
        float b; // 0x10
        float a; // 0x14

        void ctor(float r, float g, float b, float a) { return il2cpp::call<void(*)(Color*, float, float, float, float)>(0x8f0d0)(this, r, g, b, a); } // 0x8f0d0
        void ctor(float r, float g, float b) { return il2cpp::call<void(*)(Color*, float, float, float)>(0x14eef0)(this, r, g, b); } // 0x14eef0
        UnityEngine::Color op_Multiply(UnityEngine::Color a, UnityEngine::Color b) { return il2cpp::call<UnityEngine::Color(*)(Color*, UnityEngine::Color, UnityEngine::Color)>(0xf553f0)(this, a, b); } // 0xf553f0
        UnityEngine::Color op_Multiply(UnityEngine::Color a, float b) { return il2cpp::call<UnityEngine::Color(*)(Color*, UnityEngine::Color, float)>(0x44cf00)(this, a, b); } // 0x44cf00
        bool op_Equality(UnityEngine::Color lhs, UnityEngine::Color rhs) { return il2cpp::call<bool(*)(Color*, UnityEngine::Color, UnityEngine::Color)>(0xf55260)(this, lhs, rhs); } // 0xf55260
        bool op_Inequality(UnityEngine::Color lhs, UnityEngine::Color rhs) { return il2cpp::call<bool(*)(Color*, UnityEngine::Color, UnityEngine::Color)>(0xf55340)(this, lhs, rhs); } // 0xf55340
        UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float t) { return il2cpp::call<UnityEngine::Color(*)(Color*, UnityEngine::Color, UnityEngine::Color, float)>(0xf54c00)(this, a, b, t); } // 0xf54c00
        UnityEngine::Color RGBMultiplied(float multiplier) { return il2cpp::call<UnityEngine::Color(*)(Color*, float)>(0x14ee10)(this, multiplier); } // 0x14ee10
        UnityEngine::Color get_red() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf551d0)(this); } // 0xf551d0
        UnityEngine::Color get_green() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55050)(this); } // 0xf55050
        UnityEngine::Color get_blue() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf54f90)(this); } // 0xf54f90
        UnityEngine::Color get_white() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55200)(this); } // 0xf55200
        UnityEngine::Color get_black() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf54f60)(this); } // 0xf54f60
        UnityEngine::Color get_yellow() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55230)(this); } // 0xf55230
        UnityEngine::Color get_cyan() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf54ff0)(this); } // 0xf54ff0
        UnityEngine::Color get_magenta() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55180)(this); } // 0xf55180
        UnityEngine::Color get_gray() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55020)(this); } // 0xf55020
        UnityEngine::Color get_grey() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf55020)(this); } // 0xf55020
        UnityEngine::Color get_clear() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0xf54fc0)(this); } // 0xf54fc0
        UnityEngine::Color get_linear() { return il2cpp::call<UnityEngine::Color(*)(Color*)>(0x14ef20)(this); } // 0x14ef20
        float get_maxColorComponent() { return il2cpp::call<float(*)(Color*)>(0x14ef50)(this); } // 0x14ef50
        UnityEngine::Vector4 op_Implicit(UnityEngine::Color c) { return il2cpp::call<UnityEngine::Vector4(*)(Color*, UnityEngine::Color)>(0xf55300)(this, c); } // 0xf55300
        UnityEngine::Color op_Implicit(UnityEngine::Vector4 v) { return il2cpp::call<UnityEngine::Color(*)(Color*, UnityEngine::Vector4)>(0x91b8e0)(this, v); } // 0x91b8e0
        UnityEngine::Color HSVToRGB(float H, float S, float V) { return il2cpp::call<UnityEngine::Color(*)(Color*, float, float, float)>(0xf54bb0)(this, H, S, V); } // 0xf54bb0
        UnityEngine::Color HSVToRGB(float H, float S, float V, bool hdr) { return il2cpp::call<UnityEngine::Color(*)(Color*, float, float, float, bool)>(0xf54940)(this, H, S, V, hdr); } // 0xf54940

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Color> {
        };

}


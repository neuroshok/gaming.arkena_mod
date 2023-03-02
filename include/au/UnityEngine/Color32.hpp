#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Color32.hpp>

namespace UnityEngine
{
    struct Color32 : ark::meta<Color32>
    {
        int32_t rgba; // 0x8
        uint8_t r; // 0x8
        uint8_t g; // 0x9
        uint8_t b; // 0xa
        uint8_t a; // 0xb

        void ctor(uint8_t r, uint8_t g, uint8_t b, uint8_t a) { return il2cpp::call<void(*)(Color32*, uint8_t, uint8_t, uint8_t, uint8_t)>(0x14ec70)(this, r, g, b, a); } // 0x14ec70
        UnityEngine::Color32 op_Implicit(UnityEngine::Color c) { return il2cpp::call<UnityEngine::Color32(*)(Color32*, UnityEngine::Color)>(0xf546a0)(this, c); } // 0xf546a0
        UnityEngine::Color op_Implicit(UnityEngine::Color32 c) { return il2cpp::call<UnityEngine::Color(*)(Color32*, UnityEngine::Color32)>(0xf54630)(this, c); } // 0xf54630

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Color32> {
        };

}


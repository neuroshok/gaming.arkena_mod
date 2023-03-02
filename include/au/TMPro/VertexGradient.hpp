#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Color.hpp>

namespace TMPro
{
    struct VertexGradient : ark::meta<VertexGradient>
    {
        UnityEngine::Color topLeft; // 0x8
        UnityEngine::Color topRight; // 0x18
        UnityEngine::Color bottomLeft; // 0x28
        UnityEngine::Color bottomRight; // 0x38

        void ctor(UnityEngine::Color color) { return il2cpp::call<void(*)(VertexGradient*, UnityEngine::Color)>(0x1b4f90)(this, color); } // 0x1b4f90
        void ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3) { return il2cpp::call<void(*)(VertexGradient*, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(0xfb4c0)(this, color0, color1, color2, color3); } // 0xfb4c0

    };

}
namespace ark {

        template<> struct meta_statics<TMPro::VertexGradient> {
        };

}


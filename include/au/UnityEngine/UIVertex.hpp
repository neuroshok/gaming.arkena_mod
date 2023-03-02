#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Color32.hpp>

namespace UnityEngine
{
    struct UIVertex : ark::meta<UIVertex>
    {
        static UnityEngine::Color32 s_DefaultColor(); // 0x0
        static UnityEngine::Vector4 s_DefaultTangent(); // 0x4
        static UnityEngine::UIVertex simpleVert(); // 0x14
        UnityEngine::Vector3 position; // 0x8
        UnityEngine::Vector3 normal; // 0x14
        UnityEngine::Vector4 tangent; // 0x20
        UnityEngine::Color32 color; // 0x30
        UnityEngine::Vector4 uv0; // 0x34
        UnityEngine::Vector4 uv1; // 0x44
        UnityEngine::Vector4 uv2; // 0x54
        UnityEngine::Vector4 uv3; // 0x64

        void cctor() { return il2cpp::call<void(*)(UIVertex*)>(0x1ad01f0)(this); } // 0x1ad01f0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UIVertex> {
        UnityEngine::Color32 s_DefaultColor; // 0x0
        UnityEngine::Vector4 s_DefaultTangent; // 0x4
        UnityEngine::UIVertex simpleVert; // 0x14
        };

}



UnityEngine::Color32 UnityEngine::UIVertex::s_DefaultColor() { return statics()->s_DefaultColor; }; // 0x0

UnityEngine::Vector4 UnityEngine::UIVertex::s_DefaultTangent() { return statics()->s_DefaultTangent; }; // 0x4

UnityEngine::UIVertex UnityEngine::UIVertex::simpleVert() { return statics()->simpleVert; }; // 0x14
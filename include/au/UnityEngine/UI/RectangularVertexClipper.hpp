#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/RectTransform.hpp>

namespace UnityEngine::UI
{
    struct RectangularVertexClipper : ark::meta<RectangularVertexClipper, il2cpp::Il2CppObject>
    {
        cs::array<UnityEngine::Vector3>* m_WorldCorners; // 0x8
        cs::array<UnityEngine::Vector3>* m_CanvasCorners; // 0xc

        UnityEngine::Rect GetCanvasRect(UnityEngine::RectTransform* t, UnityEngine::Canvas* c) { return il2cpp::call<UnityEngine::Rect(*)(RectangularVertexClipper*, UnityEngine::RectTransform*, UnityEngine::Canvas*)>(0x132d4e0)(this, t, c); } // 0x132d4e0
        void ctor() { return il2cpp::call<void(*)(RectangularVertexClipper*)>(0x132d6a0)(this); } // 0x132d6a0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::RectangularVertexClipper> {
        };

}


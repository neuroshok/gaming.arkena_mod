#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Rect.hpp>

namespace UnityEngine
{
    struct Rect : ark::meta<Rect>
    {
        float m_XMin; // 0x8
        float m_YMin; // 0xc
        float m_Width; // 0x10
        float m_Height; // 0x14

        void ctor(float x, float y, float width, float height) { return il2cpp::call<void(*)(Rect*, float, float, float, float)>(0x8f0d0)(this, x, y, width, height); } // 0x8f0d0
        void ctor(UnityEngine::Vector2 position, UnityEngine::Vector2 size) { return il2cpp::call<void(*)(Rect*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x8f0d0)(this, position, size); } // 0x8f0d0
        void ctor(UnityEngine::Rect source) { return il2cpp::call<void(*)(Rect*, UnityEngine::Rect)>(0xb5a90)(this, source); } // 0xb5a90
        UnityEngine::Rect get_zero() { return il2cpp::call<UnityEngine::Rect(*)(Rect*)>(0xf54fc0)(this); } // 0xf54fc0
        UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax) { return il2cpp::call<UnityEngine::Rect(*)(Rect*, float, float, float, float)>(0x13a86e0)(this, xmin, ymin, xmax, ymax); } // 0x13a86e0
        float get_x() { return il2cpp::call<float(*)(Rect*)>(0x50d20)(this); } // 0x50d20
        void set_x(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x50d60)(this, value); } // 0x50d60
        float get_y() { return il2cpp::call<float(*)(Rect*)>(0x50d30)(this); } // 0x50d30
        void set_y(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x50d80)(this, value); } // 0x50d80
        UnityEngine::Vector2 get_position() { return il2cpp::call<UnityEngine::Vector2(*)(Rect*)>(0x17e380)(this); } // 0x17e380
        void set_position(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rect*, UnityEngine::Vector2)>(0x142e70)(this, value); } // 0x142e70
        UnityEngine::Vector2 get_center() { return il2cpp::call<UnityEngine::Vector2(*)(Rect*)>(0x17e2f0)(this); } // 0x17e2f0
        void set_center(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rect*, UnityEngine::Vector2)>(0x17e3e0)(this, value); } // 0x17e3e0
        UnityEngine::Vector2 get_min() { return il2cpp::call<UnityEngine::Vector2(*)(Rect*)>(0x17e380)(this); } // 0x17e380
        UnityEngine::Vector2 get_max() { return il2cpp::call<UnityEngine::Vector2(*)(Rect*)>(0x17e340)(this); } // 0x17e340
        float get_width() { return il2cpp::call<float(*)(Rect*)>(0x50d40)(this); } // 0x50d40
        void set_width(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x50da0)(this, value); } // 0x50da0
        float get_height() { return il2cpp::call<float(*)(Rect*)>(0x50d50)(this); } // 0x50d50
        void set_height(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x50dc0)(this, value); } // 0x50dc0
        UnityEngine::Vector2 get_size() { return il2cpp::call<UnityEngine::Vector2(*)(Rect*)>(0x17e3b0)(this); } // 0x17e3b0
        void set_size(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rect*, UnityEngine::Vector2)>(0x17e420)(this, value); } // 0x17e420
        float get_xMin() { return il2cpp::call<float(*)(Rect*)>(0x50d20)(this); } // 0x50d20
        void set_xMin(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x17e440)(this, value); } // 0x17e440
        float get_yMin() { return il2cpp::call<float(*)(Rect*)>(0x50d30)(this); } // 0x50d30
        void set_yMin(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x17e470)(this, value); } // 0x17e470
        float get_xMax() { return il2cpp::call<float(*)(Rect*)>(0x11cbb0)(this); } // 0x11cbb0
        void set_xMax(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x11cbd0)(this, value); } // 0x11cbd0
        float get_yMax() { return il2cpp::call<float(*)(Rect*)>(0x11cbc0)(this); } // 0x11cbc0
        void set_yMax(float value) { return il2cpp::call<void(*)(Rect*, float)>(0x11cbf0)(this, value); } // 0x11cbf0
        bool Contains(UnityEngine::Vector2 point) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Vector2)>(0x17df50)(this, point); } // 0x17df50
        bool Contains(UnityEngine::Vector3 point) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Vector3)>(0x17df50)(this, point); } // 0x17df50
        UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect) { return il2cpp::call<UnityEngine::Rect(*)(Rect*, UnityEngine::Rect)>(0x13a8720)(this, rect); } // 0x13a8720
        bool Overlaps(UnityEngine::Rect other) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Rect)>(0x17e200)(this, other); } // 0x17e200
        bool Overlaps(UnityEngine::Rect other, bool allowInverse) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Rect, bool)>(0x17e0e0)(this, other, allowInverse); } // 0x17e0e0
        bool op_Inequality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Rect, UnityEngine::Rect)>(0x13a8c50)(this, lhs, rhs); } // 0x13a8c50
        bool op_Equality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) { return il2cpp::call<bool(*)(Rect*, UnityEngine::Rect, UnityEngine::Rect)>(0x44ce20)(this, lhs, rhs); } // 0x44ce20

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rect> {
        };

}


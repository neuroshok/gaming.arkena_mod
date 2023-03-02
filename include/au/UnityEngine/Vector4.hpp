#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector4.hpp>

namespace UnityEngine
{
    struct Vector4 : ark::meta<Vector4>
    {
        static UnityEngine::Vector4 zeroVector(); // 0x0
        static UnityEngine::Vector4 oneVector(); // 0x10
        static UnityEngine::Vector4 positiveInfinityVector(); // 0x20
        static UnityEngine::Vector4 negativeInfinityVector(); // 0x30
        float x; // 0x8
        float y; // 0xc
        float z; // 0x10
        float w; // 0x14

        float get_Item(int32_t index) { return il2cpp::call<float(*)(Vector4*, int32_t)>(0x143b40)(this, index); } // 0x143b40
        void set_Item(int32_t index, float value) { return il2cpp::call<void(*)(Vector4*, int32_t, float)>(0x143bb0)(this, index, value); } // 0x143bb0
        void ctor(float x, float y, float z, float w) { return il2cpp::call<void(*)(Vector4*, float, float, float, float)>(0x8f0d0)(this, x, y, z, w); } // 0x8f0d0
        float Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b) { return il2cpp::call<float(*)(Vector4*, UnityEngine::Vector4, UnityEngine::Vector4)>(0xefa420)(this, a, b); } // 0xefa420
        float get_sqrMagnitude() { return il2cpp::call<float(*)(Vector4*)>(0x143b50)(this); } // 0x143b50
        UnityEngine::Vector4 get_zero() { return il2cpp::call<UnityEngine::Vector4(*)(Vector4*)>(0xefa9e0)(this); } // 0xefa9e0
        UnityEngine::Vector4 op_Multiply(UnityEngine::Vector4 a, float d) { return il2cpp::call<UnityEngine::Vector4(*)(Vector4*, UnityEngine::Vector4, float)>(0x44cf00)(this, a, d); } // 0x44cf00
        UnityEngine::Vector4 op_Division(UnityEngine::Vector4 a, float d) { return il2cpp::call<UnityEngine::Vector4(*)(Vector4*, UnityEngine::Vector4, float)>(0xefaa20)(this, a, d); } // 0xefaa20
        bool op_Equality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) { return il2cpp::call<bool(*)(Vector4*, UnityEngine::Vector4, UnityEngine::Vector4)>(0xefaa40)(this, lhs, rhs); } // 0xefaa40
        bool op_Inequality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) { return il2cpp::call<bool(*)(Vector4*, UnityEngine::Vector4, UnityEngine::Vector4)>(0xefab50)(this, lhs, rhs); } // 0xefab50
        UnityEngine::Vector4 op_Implicit(UnityEngine::Vector3 v) { return il2cpp::call<UnityEngine::Vector4(*)(Vector4*, UnityEngine::Vector3)>(0xefaad0)(this, v); } // 0xefaad0
        UnityEngine::Vector3 op_Implicit(UnityEngine::Vector4 v) { return il2cpp::call<UnityEngine::Vector3(*)(Vector4*, UnityEngine::Vector4)>(0xefaaa0)(this, v); } // 0xefaaa0
        UnityEngine::Vector4 op_Implicit(UnityEngine::Vector2 v) { return il2cpp::call<UnityEngine::Vector4(*)(Vector4*, UnityEngine::Vector2)>(0xefab10)(this, v); } // 0xefab10
        UnityEngine::Vector2 op_Implicit(UnityEngine::Vector4 v) { return il2cpp::call<UnityEngine::Vector2(*)(Vector4*, UnityEngine::Vector4)>(0xef8760)(this, v); } // 0xef8760
        void cctor() { return il2cpp::call<void(*)(Vector4*)>(0xefa820)(this); } // 0xefa820

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Vector4> {
        UnityEngine::Vector4 zeroVector; // 0x0
        UnityEngine::Vector4 oneVector; // 0x10
        UnityEngine::Vector4 positiveInfinityVector; // 0x20
        UnityEngine::Vector4 negativeInfinityVector; // 0x30
        };

}



UnityEngine::Vector4 UnityEngine::Vector4::zeroVector() { return statics()->zeroVector; }; // 0x0

UnityEngine::Vector4 UnityEngine::Vector4::oneVector() { return statics()->oneVector; }; // 0x10

UnityEngine::Vector4 UnityEngine::Vector4::positiveInfinityVector() { return statics()->positiveInfinityVector; }; // 0x20

UnityEngine::Vector4 UnityEngine::Vector4::negativeInfinityVector() { return statics()->negativeInfinityVector; }; // 0x30
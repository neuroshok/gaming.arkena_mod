#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine
{
    struct Vector2 : ark::meta<Vector2>
    {
        static UnityEngine::Vector2 zeroVector(); // 0x0
        static UnityEngine::Vector2 oneVector(); // 0x8
        static UnityEngine::Vector2 upVector(); // 0x10
        static UnityEngine::Vector2 downVector(); // 0x18
        static UnityEngine::Vector2 leftVector(); // 0x20
        static UnityEngine::Vector2 rightVector(); // 0x28
        static UnityEngine::Vector2 positiveInfinityVector(); // 0x30
        static UnityEngine::Vector2 negativeInfinityVector(); // 0x38
        float x; // 0x8
        float y; // 0xc

        float get_Item(int32_t index) { return il2cpp::call<float(*)(Vector2*, int32_t)>(0x142e90)(this, index); } // 0x142e90
        void set_Item(int32_t index, float value) { return il2cpp::call<void(*)(Vector2*, int32_t, float)>(0x143010)(this, index, value); } // 0x143010
        void ctor(float x, float y) { return il2cpp::call<void(*)(Vector2*, float, float)>(0x142e70)(this, x, y); } // 0x142e70
        UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2, float)>(0xef7d70)(this, a, b, t); } // 0xef7d70
        UnityEngine::Vector2 LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2, float)>(0xef7d30)(this, a, b, t); } // 0xef7d30
        UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7e60)(this, a, b); } // 0xef7e60
        void Normalize() { return il2cpp::call<void(*)(Vector2*)>(0x142d50)(this); } // 0x142d50
        UnityEngine::Vector2 get_normalized() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0x142f20)(this); } // 0x142f20
        float Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return il2cpp::call<float(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7c20)(this, lhs, rhs); } // 0xef7c20
        float get_magnitude() { return il2cpp::call<float(*)(Vector2*)>(0x142f10)(this); } // 0x142f10
        float get_sqrMagnitude() { return il2cpp::call<float(*)(Vector2*)>(0x142fe0)(this); } // 0x142fe0
        float Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to) { return il2cpp::call<float(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7930)(this, from, to); } // 0xef7930
        float SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to) { return il2cpp::call<float(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7e90)(this, from, to); } // 0xef7e90
        float Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<float(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7b60)(this, a, b); } // 0xef7b60
        UnityEngine::Vector2 ClampMagnitude(UnityEngine::Vector2 vector, float maxLength) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, float)>(0xef7a80)(this, vector, maxLength); } // 0xef7a80
        UnityEngine::Vector2 op_Addition(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef8690)(this, a, b); } // 0xef8690
        UnityEngine::Vector2 op_Subtraction(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef8830)(this, a, b); } // 0xef8830
        UnityEngine::Vector2 op_Multiply(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef7e60)(this, a, b); } // 0xef7e60
        UnityEngine::Vector2 op_Division(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef86c0)(this, a, b); } // 0xef86c0
        UnityEngine::Vector2 op_UnaryNegation(UnityEngine::Vector2 a) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2)>(0xef8860)(this, a); } // 0xef8860
        UnityEngine::Vector2 op_Multiply(UnityEngine::Vector2 a, float d) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, float)>(0xef8800)(this, a, d); } // 0xef8800
        UnityEngine::Vector2 op_Multiply(float d, UnityEngine::Vector2 a) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, float, UnityEngine::Vector2)>(0xef87d0)(this, d, a); } // 0xef87d0
        UnityEngine::Vector2 op_Division(UnityEngine::Vector2 a, float d) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector2, float)>(0xef86f0)(this, a, d); } // 0xef86f0
        bool op_Equality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return il2cpp::call<bool(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef8720)(this, lhs, rhs); } // 0xef8720
        bool op_Inequality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return il2cpp::call<bool(*)(Vector2*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xef8790)(this, lhs, rhs); } // 0xef8790
        UnityEngine::Vector2 op_Implicit(UnityEngine::Vector3 v) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*, UnityEngine::Vector3)>(0xef8760)(this, v); } // 0xef8760
        UnityEngine::Vector3 op_Implicit(UnityEngine::Vector2 v) { return il2cpp::call<UnityEngine::Vector3(*)(Vector2*, UnityEngine::Vector2)>(0x36d370)(this, v); } // 0x36d370
        UnityEngine::Vector2 get_zero() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef8640)(this); } // 0xef8640
        UnityEngine::Vector2 get_one() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef8520)(this); } // 0xef8520
        UnityEngine::Vector2 get_up() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef85f0)(this); } // 0xef85f0
        UnityEngine::Vector2 get_down() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef8310)(this); } // 0xef8310
        UnityEngine::Vector2 get_left() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef8360)(this); } // 0xef8360
        UnityEngine::Vector2 get_right() { return il2cpp::call<UnityEngine::Vector2(*)(Vector2*)>(0xef8570)(this); } // 0xef8570
        void cctor() { return il2cpp::call<void(*)(Vector2*)>(0xef81a0)(this); } // 0xef81a0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Vector2> {
        UnityEngine::Vector2 zeroVector; // 0x0
        UnityEngine::Vector2 oneVector; // 0x8
        UnityEngine::Vector2 upVector; // 0x10
        UnityEngine::Vector2 downVector; // 0x18
        UnityEngine::Vector2 leftVector; // 0x20
        UnityEngine::Vector2 rightVector; // 0x28
        UnityEngine::Vector2 positiveInfinityVector; // 0x30
        UnityEngine::Vector2 negativeInfinityVector; // 0x38
        };

}



UnityEngine::Vector2 UnityEngine::Vector2::zeroVector() { return statics()->zeroVector; }; // 0x0

UnityEngine::Vector2 UnityEngine::Vector2::oneVector() { return statics()->oneVector; }; // 0x8

UnityEngine::Vector2 UnityEngine::Vector2::upVector() { return statics()->upVector; }; // 0x10

UnityEngine::Vector2 UnityEngine::Vector2::downVector() { return statics()->downVector; }; // 0x18

UnityEngine::Vector2 UnityEngine::Vector2::leftVector() { return statics()->leftVector; }; // 0x20

UnityEngine::Vector2 UnityEngine::Vector2::rightVector() { return statics()->rightVector; }; // 0x28

UnityEngine::Vector2 UnityEngine::Vector2::positiveInfinityVector() { return statics()->positiveInfinityVector; }; // 0x30

UnityEngine::Vector2 UnityEngine::Vector2::negativeInfinityVector() { return statics()->negativeInfinityVector; }; // 0x38
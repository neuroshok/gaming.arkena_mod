#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector3.hpp>

namespace UnityEngine
{
    struct Vector3 : ark::meta<Vector3>
    {
        static UnityEngine::Vector3 zeroVector(); // 0x0
        static UnityEngine::Vector3 oneVector(); // 0xc
        static UnityEngine::Vector3 upVector(); // 0x18
        static UnityEngine::Vector3 downVector(); // 0x24
        static UnityEngine::Vector3 leftVector(); // 0x30
        static UnityEngine::Vector3 rightVector(); // 0x3c
        static UnityEngine::Vector3 forwardVector(); // 0x48
        static UnityEngine::Vector3 backVector(); // 0x54
        static UnityEngine::Vector3 positiveInfinityVector(); // 0x60
        static UnityEngine::Vector3 negativeInfinityVector(); // 0x6c
        float x; // 0x8
        float y; // 0xc
        float z; // 0x10

        UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3, float)>(0xef9990)(this, a, b, t); } // 0xef9990
        UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3, float)>(0x36d3a0)(this, a, b, t); } // 0x36d3a0
        float get_Item(int32_t index) { return il2cpp::call<float(*)(Vector3*, int32_t)>(0x1435f0)(this, index); } // 0x1435f0
        void set_Item(int32_t index, float value) { return il2cpp::call<void(*)(Vector3*, int32_t, float)>(0x1438d0)(this, index, value); } // 0x1438d0
        void ctor(float x, float y, float z) { return il2cpp::call<void(*)(Vector3*, float, float, float)>(0x106bf0)(this, x, y, z); } // 0x106bf0
        void ctor(float x, float y) { return il2cpp::call<void(*)(Vector3*, float, float)>(0x1435c0)(this, x, y); } // 0x1435c0
        void Set(float newX, float newY, float newZ) { return il2cpp::call<void(*)(Vector3*, float, float, float)>(0x106bf0)(this, newX, newY, newZ); } // 0x106bf0
        UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef9910)(this, a, b); } // 0xef9910
        void Scale(UnityEngine::Vector3 scale) { return il2cpp::call<void(*)(Vector3*, UnityEngine::Vector3)>(0x1434f0)(this, scale); } // 0x1434f0
        UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef91b0)(this, lhs, rhs); } // 0xef91b0
        UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3)>(0xef97b0)(this, value); } // 0xef97b0
        void Normalize() { return il2cpp::call<void(*)(Vector3*)>(0x1433b0)(this); } // 0x1433b0
        UnityEngine::Vector3 get_normalized() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0x143750)(this); } // 0x143750
        float Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<float(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef92f0)(this, lhs, rhs); } // 0xef92f0
        float Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to) { return il2cpp::call<float(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef8f10)(this, from, to); } // 0xef8f10
        float Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return il2cpp::call<float(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef9210)(this, a, b); } // 0xef9210
        UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float maxLength) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, float)>(0xef9080)(this, vector, maxLength); } // 0xef9080
        float Magnitude(UnityEngine::Vector3 vector) { return il2cpp::call<float(*)(Vector3*, UnityEngine::Vector3)>(0xef9490)(this, vector); } // 0xef9490
        float get_magnitude() { return il2cpp::call<float(*)(Vector3*)>(0x143680)(this); } // 0x143680
        float get_sqrMagnitude() { return il2cpp::call<float(*)(Vector3*)>(0x143890)(this); } // 0x143890
        UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef95d0)(this, lhs, rhs); } // 0xef95d0
        UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef9530)(this, lhs, rhs); } // 0xef9530
        UnityEngine::Vector3 get_zero() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xefa1f0)(this); } // 0xefa1f0
        UnityEngine::Vector3 get_one() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xefa0f0)(this); } // 0xefa0f0
        UnityEngine::Vector3 get_forward() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xef9e50)(this); } // 0xef9e50
        UnityEngine::Vector3 get_back() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xef9dd0)(this); } // 0xef9dd0
        UnityEngine::Vector3 get_up() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xefa1b0)(this); } // 0xefa1b0
        UnityEngine::Vector3 get_down() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xef9e10)(this); } // 0xef9e10
        UnityEngine::Vector3 get_left() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xef9e90)(this); } // 0xef9e90
        UnityEngine::Vector3 get_right() { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*)>(0xefa130)(this); } // 0xefa130
        UnityEngine::Vector3 op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x37f8d0)(this, a, b); } // 0x37f8d0
        UnityEngine::Vector3 op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x3c99e0)(this, a, b); } // 0x3c99e0
        UnityEngine::Vector3 op_UnaryNegation(UnityEngine::Vector3 a) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3)>(0xefa350)(this, a); } // 0xefa350
        UnityEngine::Vector3 op_Multiply(UnityEngine::Vector3 a, float d) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, float)>(0xefa310)(this, a, d); } // 0xefa310
        UnityEngine::Vector3 op_Multiply(float d, UnityEngine::Vector3 a) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, float, UnityEngine::Vector3)>(0xefa2d0)(this, d, a); } // 0xefa2d0
        UnityEngine::Vector3 op_Division(UnityEngine::Vector3 a, float d) { return il2cpp::call<UnityEngine::Vector3(*)(Vector3*, UnityEngine::Vector3, float)>(0x37f910)(this, a, d); } // 0x37f910
        bool op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<bool(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xefa230)(this, lhs, rhs); } // 0xefa230
        bool op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return il2cpp::call<bool(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xefa280)(this, lhs, rhs); } // 0xefa280
        void cctor() { return il2cpp::call<void(*)(Vector3*)>(0xef9bd0)(this); } // 0xef9bd0
        void Slerp_Injected(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Vector3*, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3)>(0xef9950)(this, a, b, t, ret); } // 0xef9950

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Vector3> {
        UnityEngine::Vector3 zeroVector; // 0x0
        UnityEngine::Vector3 oneVector; // 0xc
        UnityEngine::Vector3 upVector; // 0x18
        UnityEngine::Vector3 downVector; // 0x24
        UnityEngine::Vector3 leftVector; // 0x30
        UnityEngine::Vector3 rightVector; // 0x3c
        UnityEngine::Vector3 forwardVector; // 0x48
        UnityEngine::Vector3 backVector; // 0x54
        UnityEngine::Vector3 positiveInfinityVector; // 0x60
        UnityEngine::Vector3 negativeInfinityVector; // 0x6c
        };

}



UnityEngine::Vector3 UnityEngine::Vector3::zeroVector() { return statics()->zeroVector; }; // 0x0

UnityEngine::Vector3 UnityEngine::Vector3::oneVector() { return statics()->oneVector; }; // 0xc

UnityEngine::Vector3 UnityEngine::Vector3::upVector() { return statics()->upVector; }; // 0x18

UnityEngine::Vector3 UnityEngine::Vector3::downVector() { return statics()->downVector; }; // 0x24

UnityEngine::Vector3 UnityEngine::Vector3::leftVector() { return statics()->leftVector; }; // 0x30

UnityEngine::Vector3 UnityEngine::Vector3::rightVector() { return statics()->rightVector; }; // 0x3c

UnityEngine::Vector3 UnityEngine::Vector3::forwardVector() { return statics()->forwardVector; }; // 0x48

UnityEngine::Vector3 UnityEngine::Vector3::backVector() { return statics()->backVector; }; // 0x54

UnityEngine::Vector3 UnityEngine::Vector3::positiveInfinityVector() { return statics()->positiveInfinityVector; }; // 0x60

UnityEngine::Vector3 UnityEngine::Vector3::negativeInfinityVector() { return statics()->negativeInfinityVector; }; // 0x6c
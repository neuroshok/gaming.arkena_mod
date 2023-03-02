#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>

namespace UnityEngine
{
    struct Quaternion : ark::meta<Quaternion>
    {
        static UnityEngine::Quaternion identityQuaternion(); // 0x0
        float x; // 0x8
        float y; // 0xc
        float z; // 0x10
        float w; // 0x14

        UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x13a4ed0)(this, fromDirection, toDirection); } // 0x13a4ed0
        UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Quaternion)>(0x13a50b0)(this, rotation); } // 0x13a50b0
        UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(0x13a5150)(this, a, b, t); } // 0x13a5150
        UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Vector3)>(0x13a4f40)(this, euler); } // 0x13a4f40
        UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation) { return il2cpp::call<UnityEngine::Vector3(*)(Quaternion*, UnityEngine::Quaternion)>(0x13a5040)(this, rotation); } // 0x13a5040
        UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, float, UnityEngine::Vector3)>(0x13a4d50)(this, angle, axis); } // 0x13a4d50
        UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x13a5250)(this, forward, upwards); } // 0x13a5250
        UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Vector3)>(0x13a51d0)(this, forward); } // 0x13a51d0
        float get_Item(int32_t index) { return il2cpp::call<float(*)(Quaternion*, int32_t)>(0x17dac0)(this, index); } // 0x17dac0
        void ctor(float x, float y, float z, float w) { return il2cpp::call<void(*)(Quaternion*, float, float, float, float)>(0x8f0d0)(this, x, y, z, w); } // 0x8f0d0
        UnityEngine::Quaternion get_identity() { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*)>(0x13a56d0)(this); } // 0x13a56d0
        UnityEngine::Quaternion op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion)>(0x13a57b0)(this, lhs, rhs); } // 0x13a57b0
        UnityEngine::Vector3 op_Multiply(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point) { return il2cpp::call<UnityEngine::Vector3(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Vector3)>(0x13a58a0)(this, rotation, point); } // 0x13a58a0
        bool IsEqualUsingDot(float dot) { return il2cpp::call<bool(*)(Quaternion*, float)>(0x13a50f0)(this, dot); } // 0x13a50f0
        bool op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return il2cpp::call<bool(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion)>(0x13a5710)(this, lhs, rhs); } // 0x13a5710
        bool op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return il2cpp::call<bool(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion)>(0x13a5760)(this, lhs, rhs); } // 0x13a5760
        float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b) { return il2cpp::call<float(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion)>(0xefa420)(this, a, b); } // 0xefa420
        UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler) { return il2cpp::call<UnityEngine::Vector3(*)(Quaternion*, UnityEngine::Vector3)>(0x13a4f80)(this, euler); } // 0x13a4f80
        UnityEngine::Vector3 get_eulerAngles() { return il2cpp::call<UnityEngine::Vector3(*)(Quaternion*)>(0x17db70)(this); } // 0x17db70
        UnityEngine::Quaternion Euler(float x, float y, float z) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, float, float, float)>(0x13a4e20)(this, x, y, z); } // 0x13a4e20
        UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler) { return il2cpp::call<UnityEngine::Quaternion(*)(Quaternion*, UnityEngine::Vector3)>(0x13a4e20)(this, euler); } // 0x13a4e20
        void cctor() { return il2cpp::call<void(*)(Quaternion*)>(0x13a54e0)(this); } // 0x13a54e0
        void FromToRotation_Injected(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x13a4ea0)(this, fromDirection, toDirection, ret); } // 0x13a4ea0
        void Inverse_Injected(UnityEngine::Quaternion rotation, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion)>(0x13a5080)(this, rotation, ret); } // 0x13a5080
        void Lerp_Injected(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Quaternion, float, UnityEngine::Quaternion)>(0x13a5110)(this, a, b, t, ret); } // 0x13a5110
        void Internal_FromEulerRad_Injected(UnityEngine::Vector3 euler, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x13a4f10)(this, euler, ret); } // 0x13a4f10
        void Internal_ToEulerRad_Injected(UnityEngine::Quaternion rotation, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Quaternion, UnityEngine::Vector3)>(0x13a5010)(this, rotation, ret); } // 0x13a5010
        void AngleAxis_Injected(float angle, UnityEngine::Vector3 axis, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, float, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x13a4d10)(this, angle, axis, ret); } // 0x13a4d10
        void LookRotation_Injected(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x13a51a0)(this, forward, upwards, ret); } // 0x13a51a0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Quaternion> {
        UnityEngine::Quaternion identityQuaternion; // 0x0
        };

}



UnityEngine::Quaternion UnityEngine::Quaternion::identityQuaternion() { return statics()->identityQuaternion; }; // 0x0
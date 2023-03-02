#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Vector3.hpp>

namespace UnityEngine
{
    struct Matrix4x4 : ark::meta<Matrix4x4>
    {
        static UnityEngine::Matrix4x4 zeroMatrix(); // 0x0
        static UnityEngine::Matrix4x4 identityMatrix(); // 0x40
        float m00; // 0x8
        float m10; // 0xc
        float m20; // 0x10
        float m30; // 0x14
        float m01; // 0x18
        float m11; // 0x1c
        float m21; // 0x20
        float m31; // 0x24
        float m02; // 0x28
        float m12; // 0x2c
        float m22; // 0x30
        float m32; // 0x34
        float m03; // 0x38
        float m13; // 0x3c
        float m23; // 0x40
        float m33; // 0x44

        UnityEngine::Vector3 GetLossyScale() { return il2cpp::call<UnityEngine::Vector3(*)(Matrix4x4*)>(0x17cdb0)(this); } // 0x17cdb0
        UnityEngine::Vector3 get_lossyScale() { return il2cpp::call<UnityEngine::Vector3(*)(Matrix4x4*)>(0x17d0c0)(this); } // 0x17d0c0
        UnityEngine::Matrix4x4 TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Matrix4x4*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(0x1395110)(this, pos, q, s); } // 0x1395110
        void ctor(UnityEngine::Vector4 column0, UnityEngine::Vector4 column1, UnityEngine::Vector4 column2, UnityEngine::Vector4 column3) { return il2cpp::call<void(*)(Matrix4x4*, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector4)>(0x17d010)(this, column0, column1, column2, column3); } // 0x17d010
        UnityEngine::Matrix4x4 op_Multiply(UnityEngine::Matrix4x4 lhs, UnityEngine::Matrix4x4 rhs) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Matrix4x4*, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4)>(0x1395d10)(this, lhs, rhs); } // 0x1395d10
        UnityEngine::Vector4 GetColumn(int32_t index) { return il2cpp::call<UnityEngine::Vector4(*)(Matrix4x4*, int32_t)>(0x17cc80)(this, index); } // 0x17cc80
        UnityEngine::Vector3 MultiplyPoint(UnityEngine::Vector3 point) { return il2cpp::call<UnityEngine::Vector3(*)(Matrix4x4*, UnityEngine::Vector3)>(0x17ceb0)(this, point); } // 0x17ceb0
        UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine::Vector3 point) { return il2cpp::call<UnityEngine::Vector3(*)(Matrix4x4*, UnityEngine::Vector3)>(0x17ce10)(this, point); } // 0x17ce10
        UnityEngine::Matrix4x4 Rotate(UnityEngine::Quaternion q) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Matrix4x4*, UnityEngine::Quaternion)>(0x1394f80)(this, q); } // 0x1394f80
        UnityEngine::Matrix4x4 get_identity() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Matrix4x4*)>(0x1395c50)(this); } // 0x1395c50
        void cctor() { return il2cpp::call<void(*)(Matrix4x4*)>(0x13957e0)(this); } // 0x13957e0
        void GetLossyScale_Injected(UnityEngine::Matrix4x4 _unity_self, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Matrix4x4*, UnityEngine::Matrix4x4, UnityEngine::Vector3)>(0x1394d90)(this, _unity_self, ret); } // 0x1394d90
        void TRS_Injected(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Matrix4x4*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Matrix4x4)>(0x13950d0)(this, pos, q, s, ret); } // 0x13950d0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Matrix4x4> {
        UnityEngine::Matrix4x4 zeroMatrix; // 0x0
        UnityEngine::Matrix4x4 identityMatrix; // 0x40
        };

}



UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::zeroMatrix() { return statics()->zeroMatrix; }; // 0x0

UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::identityMatrix() { return statics()->identityMatrix; }; // 0x40
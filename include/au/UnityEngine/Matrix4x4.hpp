//au/UnityEngine/Matrix4x4
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Vector4.hpp>
struct object;
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Matrix4x4 : ark::meta<Matrix4x4>
{
ark_meta("UnityEngine", "Matrix4x4", "");

    // Fields

    float m00; // 0x0
    float m10; // 0x4
    float m20; // 0x8
    float m30; // 0xC
    float m01; // 0x10
    float m11; // 0x14
    float m21; // 0x18
    float m31; // 0x1C
    float m02; // 0x20
    float m12; // 0x24
    float m22; // 0x28
    float m32; // 0x2C
    float m03; // 0x30
    float m13; // 0x34
    float m23; // 0x38
    float m33; // 0x3C
    static UnityEngine::Matrix4x4 zeroMatrix(); // 0x0
    static UnityEngine::Matrix4x4 identityMatrix(); // 0x40

    // Methods

    UnityEngine::Vector3 GetLossyScale(); // 0x748100 // private 
    UnityEngine::Vector3 get_lossyScale(); // 0x748FE0 // public 
    UnityEngine::Matrix4x4 TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s); // 0x748450 // public static 
    void ctor(UnityEngine::Vector4 column0, UnityEngine::Vector4 column1, UnityEngine::Vector4 column2, UnityEngine::Vector4 column3); // 0x748EE0 // public 
    int GetHashCode(); // 0x747FD0 // public override 
    bool Equals(Matrix4x4* other); // 0x747E70 // public override 
    bool Equals1(UnityEngine::Matrix4x4 other); // 0x747C20 // public 
    UnityEngine::Matrix4x4 op_Multiply(UnityEngine::Matrix4x4 lhs, UnityEngine::Matrix4x4 rhs); // 0x749050 // public static 
    UnityEngine::Vector4 GetColumn(int index); // 0x747F00 // public 
    UnityEngine::Vector3 MultiplyPoint(UnityEngine::Vector3 point); // 0x7481E0 // public 
    UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine::Vector3 point); // 0x748140 // public 
    UnityEngine::Matrix4x4 Rotate(UnityEngine::Quaternion q); // 0x7482C0 // public static 
    UnityEngine::Matrix4x4 get_identity(); // 0x748F90 // public static 
    cs::string* ToString(); // 0x748AA0 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0x7484A0 // public 
    void cctor(); // 0x748B20 // private static 
    void GetLossyScale_Injected(/*ref*/ UnityEngine::Matrix4x4 _unity_self, /*out*/ UnityEngine::Vector3 ret); // 0x7480D0 // private static 
    void TRS_Injected(/*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion q, /*ref*/ UnityEngine::Vector3 s, /*out*/ UnityEngine::Matrix4x4 ret); // 0x748410 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Matrix4x4>
{
    UnityEngine::Matrix4x4 zeroMatrix;
    UnityEngine::Matrix4x4 identityMatrix;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::GetLossyScale> () { return 0x748100; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::get_lossyScale> () { return 0x748FE0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::TRS> () { return 0x748450; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::ctor> () { return 0x748EE0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::GetHashCode> () { return 0x747FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::Equals> () { return 0x747E70; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::Equals1> () { return 0x747C20; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::op_Multiply> () { return 0x749050; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::GetColumn> () { return 0x747F00; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::MultiplyPoint> () { return 0x7481E0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::MultiplyPoint3x4> () { return 0x748140; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::Rotate> () { return 0x7482C0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::get_identity> () { return 0x748F90; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::ToString> () { return 0x748AA0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::ToString1> () { return 0x7484A0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::cctor> () { return 0x748B20; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::GetLossyScale_Injected> () { return 0x7480D0; }
    template<> inline uintptr_t rva<&UnityEngine::Matrix4x4::TRS_Injected> () { return 0x748410; }
} // ark::method_info
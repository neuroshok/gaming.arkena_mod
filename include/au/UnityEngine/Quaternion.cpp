#include <au/UnityEngine/Quaternion.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Quaternion Quaternion::FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection) { return method_call(FromToRotation, fromDirection, toDirection); }  // 0x686590 // 
    UnityEngine::Quaternion Quaternion::Inverse(UnityEngine::Quaternion rotation) { return method_call(Inverse, rotation); }  // 0x6867D0 // 
    UnityEngine::Quaternion Quaternion::Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t) { return method_call(Lerp, a, b, t); }  // 0x686870 // 
    UnityEngine::Quaternion Quaternion::Internal_FromEulerRad(UnityEngine::Vector3 euler) { return method_call(Internal_FromEulerRad, euler); }  // 0x686660 // 
    UnityEngine::Vector3 Quaternion::Internal_ToEulerRad(UnityEngine::Quaternion rotation) { return method_call(Internal_ToEulerRad, rotation); }  // 0x686760 // 
    UnityEngine::Quaternion Quaternion::AngleAxis(float angle, UnityEngine::Vector3 axis) { return method_call(AngleAxis, angle, axis); }  // 0x686340 // 
    UnityEngine::Quaternion Quaternion::LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards) { return method_call(LookRotation, forward, upwards); }  // 0x686970 // 
    UnityEngine::Quaternion Quaternion::LookRotation1(UnityEngine::Vector3 forward) { return method_call(LookRotation1, forward); }  // 0x6868F0 // 
    float Quaternion::get_Item(int index) { return method_call(get_Item, index); }  // 0x686C50 // 
    void Quaternion::ctor(float x, float y, float z, float w) { return method_call(ctor, x, y, z, w); }  // 0x3BDB80 // 
    UnityEngine::Quaternion Quaternion::get_identity() { return method_call(get_identity); }  // 0x686DF0 // 
    UnityEngine::Quaternion Quaternion::op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return method_call(op_Multiply, lhs, rhs); }  // 0x686ED0 // 
    UnityEngine::Vector3 Quaternion::op_Multiply1(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point) { return method_call(op_Multiply1, rotation, point); }  // 0x686FC0 // 
    bool Quaternion::IsEqualUsingDot(float dot) { return method_call(IsEqualUsingDot, dot); }  // 0x686810 // 
    bool Quaternion::op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return method_call(op_Equality, lhs, rhs); }  // 0x686E30 // 
    bool Quaternion::op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0x686E80 // 
    float Quaternion::Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b) { return method_call(Dot, a, b); }  // 0x686390 // 
    UnityEngine::Vector3 Quaternion::Internal_MakePositive(UnityEngine::Vector3 euler) { return method_call(Internal_MakePositive, euler); }  // 0x6866A0 // 
    UnityEngine::Vector3 Quaternion::get_eulerAngles() { return method_call(get_eulerAngles); }  // 0x686D00 // 
    UnityEngine::Quaternion Quaternion::Euler(float x, float y, float z) { return method_call(Euler, x, y, z); }  // 0x6864E0 // 
    UnityEngine::Quaternion Quaternion::Euler1(UnityEngine::Vector3 euler) { return method_call(Euler1, euler); }  // 0x6864E0 // 
    int Quaternion::GetHashCode() { return method_call(GetHashCode); }  // 0x6865D0 // 
    bool Quaternion::Equals(Quaternion* other) { return method_call(Equals, other); }  // 0x686460 // 
    bool Quaternion::Equals1(UnityEngine::Quaternion other) { return method_call(Equals1, other); }  // 0x6863E0 // 
    cs::string* Quaternion::ToString() { return method_call(ToString); }  // 0x6869B0 // 
    cs::string* Quaternion::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0x686A30 // 
    void Quaternion::cctor() { return method_call(cctor); }  // 0x686C00 // 
    void Quaternion::FromToRotation_Injected(/*ref*/ UnityEngine::Vector3 fromDirection, /*ref*/ UnityEngine::Vector3 toDirection, /*out*/ UnityEngine::Quaternion ret) { return method_call(FromToRotation_Injected, fromDirection, toDirection, ret); }  // 0x686560 // 
    void Quaternion::Inverse_Injected(/*ref*/ UnityEngine::Quaternion rotation, /*out*/ UnityEngine::Quaternion ret) { return method_call(Inverse_Injected, rotation, ret); }  // 0x6867A0 // 
    void Quaternion::Lerp_Injected(/*ref*/ UnityEngine::Quaternion a, /*ref*/ UnityEngine::Quaternion b, float t, /*out*/ UnityEngine::Quaternion ret) { return method_call(Lerp_Injected, a, b, t, ret); }  // 0x686830 // 
    void Quaternion::Internal_FromEulerRad_Injected(/*ref*/ UnityEngine::Vector3 euler, /*out*/ UnityEngine::Quaternion ret) { return method_call(Internal_FromEulerRad_Injected, euler, ret); }  // 0x686630 // 
    void Quaternion::Internal_ToEulerRad_Injected(/*ref*/ UnityEngine::Quaternion rotation, /*out*/ UnityEngine::Vector3 ret) { return method_call(Internal_ToEulerRad_Injected, rotation, ret); }  // 0x686730 // 
    void Quaternion::AngleAxis_Injected(float angle, /*ref*/ UnityEngine::Vector3 axis, /*out*/ UnityEngine::Quaternion ret) { return method_call(AngleAxis_Injected, angle, axis, ret); }  // 0x686300 // 
    void Quaternion::LookRotation_Injected(/*ref*/ UnityEngine::Vector3 forward, /*ref*/ UnityEngine::Vector3 upwards, /*out*/ UnityEngine::Quaternion ret) { return method_call(LookRotation_Injected, forward, upwards, ret); }  // 0x6868C0 // 

};


UnityEngine::Quaternion UnityEngine::Quaternion::identityQuaternion() { return statics()->identityQuaternion; }
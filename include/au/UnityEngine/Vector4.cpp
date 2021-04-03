#include <au/UnityEngine/Vector4.hpp>

namespace UnityEngine {

    // Methods

    float Vector4::get_Item(int index) { return method_call(get_Item, index); }  // 0xABD380 // 
    void Vector4::set_Item(int index, float value) { return method_call(set_Item, index, value); }  // 0xABD6A0 // 
    void Vector4::ctor(float x, float y, float z, float w) { return method_call(ctor, x, y, z, w); }  // 0x3BDB80 // 
    int Vector4::GetHashCode() { return method_call(GetHashCode); }  // 0x6865D0 // 
    bool Vector4::Equals(Vector4* other) { return method_call(Equals, other); }  // 0xABCFD0 // 
    bool Vector4::Equals1(UnityEngine::Vector4 other) { return method_call(Equals1, other); }  // 0xABCF80 // 
    float Vector4::Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b) { return method_call(Dot, a, b); }  // 0x686390 // 
    float Vector4::get_sqrMagnitude() { return method_call(get_sqrMagnitude); }  // 0xABD470 // 
    UnityEngine::Vector4 Vector4::get_zero() { return method_call(get_zero); }  // 0xABD4D0 // 
    UnityEngine::Vector4 Vector4::get_one() { return method_call(get_one); }  // 0xABD430 // 
    UnityEngine::Vector4 Vector4::op_Multiply(UnityEngine::Vector4 a, float d) { return method_call(op_Multiply, a, d); }  // 0x3BDD10 // 
    UnityEngine::Vector4 Vector4::op_Division(UnityEngine::Vector4 a, float d) { return method_call(op_Division, a, d); }  // 0xABD510 // 
    bool Vector4::op_Equality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) { return method_call(op_Equality, lhs, rhs); }  // 0xABD530 // 
    bool Vector4::op_Inequality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0xABD640 // 
    UnityEngine::Vector4 Vector4::op_Implicit(UnityEngine::Vector3 v) { return method_call(op_Implicit, v); }  // 0xABD5C0 // 
    UnityEngine::Vector3 Vector4::op_Implicit1(UnityEngine::Vector4 v) { return method_call(op_Implicit1, v); }  // 0xABD590 // 
    UnityEngine::Vector4 Vector4::op_Implicit2(UnityEngine::Vector2 v) { return method_call(op_Implicit2, v); }  // 0xABD600 // 
    cs::string* Vector4::ToString() { return method_call(ToString); }  // 0xABD250 // 
    cs::string* Vector4::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0xABD080 // 
    void Vector4::cctor() { return method_call(cctor); }  // 0xABD2D0 // 

};


UnityEngine::Vector4 UnityEngine::Vector4::zeroVector() { return statics()->zeroVector; }
UnityEngine::Vector4 UnityEngine::Vector4::oneVector() { return statics()->oneVector; }
UnityEngine::Vector4 UnityEngine::Vector4::positiveInfinityVector() { return statics()->positiveInfinityVector; }
UnityEngine::Vector4 UnityEngine::Vector4::negativeInfinityVector() { return statics()->negativeInfinityVector; }
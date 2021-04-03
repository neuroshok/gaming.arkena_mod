#include <au/UnityEngine/Vector3.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Vector3 Vector3::Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t) { return method_call(Lerp, a, b, t); }  // 0xABBFD0 // 
    float Vector3::get_Item(int index) { return method_call(get_Item, index); }  // 0xABC8A0 // 
    void Vector3::set_Item(int index, float value) { return method_call(set_Item, index, value); }  // 0xABCEF0 // 
    void Vector3::ctor(float x, float y, float z) { return method_call(ctor, x, y, z); }  // 0xABC510 // 
    void Vector3::ctor1(float x, float y) { return method_call(ctor1, x, y); }  // 0xABC870 // 
    void Vector3::Set(float newX, float newY, float newZ) { return method_call(Set, newX, newY, newZ); }  // 0xABC510 // 
    UnityEngine::Vector3 Vector3::Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return method_call(Scale, a, b); }  // 0xABC4D0 // 
    void Vector3::Scale1(UnityEngine::Vector3 scale) { return method_call(Scale1, scale); }  // 0xABC490 // 
    UnityEngine::Vector3 Vector3::Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(Cross, lhs, rhs); }  // 0xABBCF0 // 
    int Vector3::GetHashCode() { return method_call(GetHashCode); }  // 0xABBF80 // 
    bool Vector3::Equals(Vector3* other) { return method_call(Equals, other); }  // 0xABBE70 // 
    bool Vector3::Equals1(UnityEngine::Vector3 other) { return method_call(Equals1, other); }  // 0xABBF40 // 
    UnityEngine::Vector3 Vector3::Normalize(UnityEngine::Vector3 value) { return method_call(Normalize, value); }  // 0xABC370 // 
    void Vector3::Normalize1() { return method_call(Normalize1); }  // 0xABC230 // 
    UnityEngine::Vector3 Vector3::get_normalized() { return method_call(get_normalized); }  // 0xABCB00 // 
    float Vector3::Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(Dot, lhs, rhs); }  // 0xABBE30 // 
    float Vector3::Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to) { return method_call(Angle, from, to); }  // 0xABBA50 // 
    float Vector3::Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return method_call(Distance, a, b); }  // 0xABBD50 // 
    UnityEngine::Vector3 Vector3::ClampMagnitude(UnityEngine::Vector3 vector, float maxLength) { return method_call(ClampMagnitude, vector, maxLength); }  // 0xABBBC0 // 
    float Vector3::Magnitude(UnityEngine::Vector3 vector) { return method_call(Magnitude, vector); }  // 0xABC050 // 
    float Vector3::get_magnitude() { return method_call(get_magnitude); }  // 0xABCA30 // 
    float Vector3::get_sqrMagnitude() { return method_call(get_sqrMagnitude); }  // 0xABCCD0 // 
    UnityEngine::Vector3 Vector3::Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(Min, lhs, rhs); }  // 0xABC190 // 
    UnityEngine::Vector3 Vector3::Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(Max, lhs, rhs); }  // 0xABC0F0 // 
    UnityEngine::Vector3 Vector3::get_zero() { return method_call(get_zero); }  // 0xABCD50 // 
    UnityEngine::Vector3 Vector3::get_one() { return method_call(get_one); }  // 0xABCC50 // 
    UnityEngine::Vector3 Vector3::get_forward() { return method_call(get_forward); }  // 0xABC9B0 // 
    UnityEngine::Vector3 Vector3::get_back() { return method_call(get_back); }  // 0xABC930 // 
    UnityEngine::Vector3 Vector3::get_up() { return method_call(get_up); }  // 0xABCD10 // 
    UnityEngine::Vector3 Vector3::get_down() { return method_call(get_down); }  // 0xABC970 // 
    UnityEngine::Vector3 Vector3::get_left() { return method_call(get_left); }  // 0xABC9F0 // 
    UnityEngine::Vector3 Vector3::get_right() { return method_call(get_right); }  // 0xABCC90 // 
    UnityEngine::Vector3 Vector3::op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return method_call(op_Addition, a, b); }  // 0x33A270 // 
    UnityEngine::Vector3 Vector3::op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b) { return method_call(op_Subtraction, a, b); }  // 0x3BD9B0 // 
    UnityEngine::Vector3 Vector3::op_UnaryNegation(UnityEngine::Vector3 a) { return method_call(op_UnaryNegation, a); }  // 0xABCEB0 // 
    UnityEngine::Vector3 Vector3::op_Multiply(UnityEngine::Vector3 a, float d) { return method_call(op_Multiply, a, d); }  // 0xABCE70 // 
    UnityEngine::Vector3 Vector3::op_Multiply1(float d, UnityEngine::Vector3 a) { return method_call(op_Multiply1, d, a); }  // 0xABCE30 // 
    UnityEngine::Vector3 Vector3::op_Division(UnityEngine::Vector3 a, float d) { return method_call(op_Division, a, d); }  // 0x715A60 // 
    bool Vector3::op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(op_Equality, lhs, rhs); }  // 0xABCD90 // 
    bool Vector3::op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0xABCDE0 // 
    cs::string* Vector3::ToString() { return method_call(ToString); }  // 0xABC6B0 // 
    cs::string* Vector3::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0xABC540 // 
    void Vector3::cctor() { return method_call(cctor); }  // 0xABC730 // 

};


UnityEngine::Vector3 UnityEngine::Vector3::zeroVector() { return statics()->zeroVector; }
UnityEngine::Vector3 UnityEngine::Vector3::oneVector() { return statics()->oneVector; }
UnityEngine::Vector3 UnityEngine::Vector3::upVector() { return statics()->upVector; }
UnityEngine::Vector3 UnityEngine::Vector3::downVector() { return statics()->downVector; }
UnityEngine::Vector3 UnityEngine::Vector3::leftVector() { return statics()->leftVector; }
UnityEngine::Vector3 UnityEngine::Vector3::rightVector() { return statics()->rightVector; }
UnityEngine::Vector3 UnityEngine::Vector3::forwardVector() { return statics()->forwardVector; }
UnityEngine::Vector3 UnityEngine::Vector3::backVector() { return statics()->backVector; }
UnityEngine::Vector3 UnityEngine::Vector3::positiveInfinityVector() { return statics()->positiveInfinityVector; }
UnityEngine::Vector3 UnityEngine::Vector3::negativeInfinityVector() { return statics()->negativeInfinityVector; }
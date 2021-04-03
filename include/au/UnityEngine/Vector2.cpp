#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine {

    // Methods

    float Vector2::get_Item(int index) { return method_call(get_Item, index); }  // 0xABADD0 // 
    void Vector2::set_Item(int index, float value) { return method_call(set_Item, index, value); }  // 0xABB3D0 // 
    void Vector2::ctor(float x, float y) { return method_call(ctor, x, y); }  // 0x689B20 // 
    UnityEngine::Vector2 Vector2::Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t) { return method_call(Lerp, a, b, t); }  // 0xABA8D0 // 
    UnityEngine::Vector2 Vector2::LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t) { return method_call(LerpUnclamped, a, b, t); }  // 0xABA890 // 
    UnityEngine::Vector2 Vector2::Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(Scale, a, b); }  // 0xABA9C0 // 
    void Vector2::Normalize() { return method_call(Normalize); }  // 0xABA930 // 
    UnityEngine::Vector2 Vector2::get_normalized() { return method_call(get_normalized); }  // 0xABAFA0 // 
    cs::string* Vector2::ToString() { return method_call(ToString); }  // 0xABAC80 // 
    cs::string* Vector2::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0xABAB60 // 
    int Vector2::GetHashCode() { return method_call(GetHashCode); }  // 0xABA860 // 
    bool Vector2::Equals(Vector2* other) { return method_call(Equals, other); }  // 0xABA7B0 // 
    bool Vector2::Equals1(UnityEngine::Vector2 other) { return method_call(Equals1, other); }  // 0xABA830 // 
    float Vector2::Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return method_call(Dot, lhs, rhs); }  // 0xABA780 // 
    float Vector2::get_magnitude() { return method_call(get_magnitude); }  // 0xABAEF0 // 
    float Vector2::get_sqrMagnitude() { return method_call(get_sqrMagnitude); }  // 0xABB100 // 
    float Vector2::Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to) { return method_call(Angle, from, to); }  // 0xABA490 // 
    float Vector2::SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to) { return method_call(SignedAngle, from, to); }  // 0xABA9F0 // 
    float Vector2::Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(Distance, a, b); }  // 0xABA6C0 // 
    UnityEngine::Vector2 Vector2::ClampMagnitude(UnityEngine::Vector2 vector, float maxLength) { return method_call(ClampMagnitude, vector, maxLength); }  // 0xABA5E0 // 
    UnityEngine::Vector2 Vector2::op_Addition(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(op_Addition, a, b); }  // 0xABB1D0 // 
    UnityEngine::Vector2 Vector2::op_Subtraction(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(op_Subtraction, a, b); }  // 0xABB370 // 
    UnityEngine::Vector2 Vector2::op_Multiply(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(op_Multiply, a, b); }  // 0xABA9C0 // 
    UnityEngine::Vector2 Vector2::op_Division(UnityEngine::Vector2 a, UnityEngine::Vector2 b) { return method_call(op_Division, a, b); }  // 0xABB200 // 
    UnityEngine::Vector2 Vector2::op_UnaryNegation(UnityEngine::Vector2 a) { return method_call(op_UnaryNegation, a); }  // 0xABB3A0 // 
    UnityEngine::Vector2 Vector2::op_Multiply1(UnityEngine::Vector2 a, float d) { return method_call(op_Multiply1, a, d); }  // 0xABB340 // 
    UnityEngine::Vector2 Vector2::op_Multiply2(float d, UnityEngine::Vector2 a) { return method_call(op_Multiply2, d, a); }  // 0xABB310 // 
    UnityEngine::Vector2 Vector2::op_Division1(UnityEngine::Vector2 a, float d) { return method_call(op_Division1, a, d); }  // 0xABB230 // 
    bool Vector2::op_Equality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return method_call(op_Equality, lhs, rhs); }  // 0xABB260 // 
    bool Vector2::op_Inequality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0xABB2D0 // 
    UnityEngine::Vector2 Vector2::op_Implicit(UnityEngine::Vector3 v) { return method_call(op_Implicit, v); }  // 0xABB2A0 // 
    UnityEngine::Vector3 Vector2::op_Implicit1(UnityEngine::Vector2 v) { return method_call(op_Implicit1, v); }  // 0x3BD980 // 
    UnityEngine::Vector2 Vector2::get_zero() { return method_call(get_zero); }  // 0xABB180 // 
    UnityEngine::Vector2 Vector2::get_one() { return method_call(get_one); }  // 0xABB060 // 
    UnityEngine::Vector2 Vector2::get_up() { return method_call(get_up); }  // 0xABB130 // 
    UnityEngine::Vector2 Vector2::get_down() { return method_call(get_down); }  // 0xABAE50 // 
    UnityEngine::Vector2 Vector2::get_left() { return method_call(get_left); }  // 0xABAEA0 // 
    UnityEngine::Vector2 Vector2::get_right() { return method_call(get_right); }  // 0xABB0B0 // 
    void Vector2::cctor() { return method_call(cctor); }  // 0xABAD00 // 

};


UnityEngine::Vector2 UnityEngine::Vector2::zeroVector() { return statics()->zeroVector; }
UnityEngine::Vector2 UnityEngine::Vector2::oneVector() { return statics()->oneVector; }
UnityEngine::Vector2 UnityEngine::Vector2::upVector() { return statics()->upVector; }
UnityEngine::Vector2 UnityEngine::Vector2::downVector() { return statics()->downVector; }
UnityEngine::Vector2 UnityEngine::Vector2::leftVector() { return statics()->leftVector; }
UnityEngine::Vector2 UnityEngine::Vector2::rightVector() { return statics()->rightVector; }
UnityEngine::Vector2 UnityEngine::Vector2::positiveInfinityVector() { return statics()->positiveInfinityVector; }
UnityEngine::Vector2 UnityEngine::Vector2::negativeInfinityVector() { return statics()->negativeInfinityVector; }
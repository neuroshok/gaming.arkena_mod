#include <au/UnityEngine/Bounds.hpp>

namespace UnityEngine {

    // Methods

    void Bounds::ctor(UnityEngine::Vector3 center, UnityEngine::Vector3 size) { return method_call(ctor, center, size); }  // 0x733DE0 // 
    int Bounds::GetHashCode() { return method_call(GetHashCode); }  // 0x733B70 // 
    bool Bounds::Equals(Bounds* other) { return method_call(Equals, other); }  // 0x733A70 // 
    bool Bounds::Equals1(UnityEngine::Bounds other) { return method_call(Equals1, other); }  // 0x733AF0 // 
    UnityEngine::Vector3 Bounds::get_center() { return method_call(get_center); }  // 0x374410 // 
    void Bounds::set_center(UnityEngine::Vector3 value) { return method_call(set_center, value); }  // 0x7340B0 // 
    UnityEngine::Vector3 Bounds::get_size() { return method_call(get_size); }  // 0x733F50 // 
    void Bounds::set_size(UnityEngine::Vector3 value) { return method_call(set_size, value); }  // 0x7340F0 // 
    UnityEngine::Vector3 Bounds::get_extents() { return method_call(get_extents); }  // 0x4A8660 // 
    void Bounds::set_extents(UnityEngine::Vector3 value) { return method_call(set_extents, value); }  // 0x7340D0 // 
    UnityEngine::Vector3 Bounds::get_min() { return method_call(get_min); }  // 0x733EC0 // 
    UnityEngine::Vector3 Bounds::get_max() { return method_call(get_max); }  // 0x733E30 // 
    bool Bounds::op_Equality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) { return method_call(op_Equality, lhs, rhs); }  // 0x733FC0 // 
    bool Bounds::op_Inequality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0x734030 // 
    void Bounds::SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max) { return method_call(SetMinMax, min, max); }  // 0x733BC0 // 
    void Bounds::Encapsulate(UnityEngine::Vector3 point) { return method_call(Encapsulate, point); }  // 0x733900 // 
    cs::string* Bounds::ToString() { return method_call(ToString); }  // 0x733D60 // 
    cs::string* Bounds::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0x733C40 // 

};


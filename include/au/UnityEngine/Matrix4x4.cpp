#include <au/UnityEngine/Matrix4x4.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Vector3 Matrix4x4::GetLossyScale() { return method_call(GetLossyScale); }  // 0x748100 // 
    UnityEngine::Vector3 Matrix4x4::get_lossyScale() { return method_call(get_lossyScale); }  // 0x748FE0 // 
    UnityEngine::Matrix4x4 Matrix4x4::TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s) { return method_call(TRS, pos, q, s); }  // 0x748450 // 
    void Matrix4x4::ctor(UnityEngine::Vector4 column0, UnityEngine::Vector4 column1, UnityEngine::Vector4 column2, UnityEngine::Vector4 column3) { return method_call(ctor, column0, column1, column2, column3); }  // 0x748EE0 // 
    int Matrix4x4::GetHashCode() { return method_call(GetHashCode); }  // 0x747FD0 // 
    bool Matrix4x4::Equals(Matrix4x4* other) { return method_call(Equals, other); }  // 0x747E70 // 
    bool Matrix4x4::Equals1(UnityEngine::Matrix4x4 other) { return method_call(Equals1, other); }  // 0x747C20 // 
    UnityEngine::Matrix4x4 Matrix4x4::op_Multiply(UnityEngine::Matrix4x4 lhs, UnityEngine::Matrix4x4 rhs) { return method_call(op_Multiply, lhs, rhs); }  // 0x749050 // 
    UnityEngine::Vector4 Matrix4x4::GetColumn(int index) { return method_call(GetColumn, index); }  // 0x747F00 // 
    UnityEngine::Vector3 Matrix4x4::MultiplyPoint(UnityEngine::Vector3 point) { return method_call(MultiplyPoint, point); }  // 0x7481E0 // 
    UnityEngine::Vector3 Matrix4x4::MultiplyPoint3x4(UnityEngine::Vector3 point) { return method_call(MultiplyPoint3x4, point); }  // 0x748140 // 
    UnityEngine::Matrix4x4 Matrix4x4::Rotate(UnityEngine::Quaternion q) { return method_call(Rotate, q); }  // 0x7482C0 // 
    UnityEngine::Matrix4x4 Matrix4x4::get_identity() { return method_call(get_identity); }  // 0x748F90 // 
    cs::string* Matrix4x4::ToString() { return method_call(ToString); }  // 0x748AA0 // 
    cs::string* Matrix4x4::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0x7484A0 // 
    void Matrix4x4::cctor() { return method_call(cctor); }  // 0x748B20 // 
    void Matrix4x4::GetLossyScale_Injected(/*ref*/ UnityEngine::Matrix4x4 _unity_self, /*out*/ UnityEngine::Vector3 ret) { return method_call(GetLossyScale_Injected, _unity_self, ret); }  // 0x7480D0 // 
    void Matrix4x4::TRS_Injected(/*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion q, /*ref*/ UnityEngine::Vector3 s, /*out*/ UnityEngine::Matrix4x4 ret) { return method_call(TRS_Injected, pos, q, s, ret); }  // 0x748410 // 

};


UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::zeroMatrix() { return statics()->zeroMatrix; }
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::identityMatrix() { return statics()->identityMatrix; }
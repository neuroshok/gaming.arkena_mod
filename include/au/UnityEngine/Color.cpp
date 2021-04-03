#include <au/UnityEngine/Color.hpp>

namespace UnityEngine {

    // Methods

    void Color::ctor(float r, float g, float b, float a) { return method_call(ctor, r, g, b, a); }  // 0x3BDB80 // 
    void Color::ctor1(float r, float g, float b) { return method_call(ctor1, r, g, b); }  // 0x739D20 // 
    cs::string* Color::ToString() { return method_call(ToString); }  // 0x739AD0 // 
    cs::string* Color::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0x739B50 // 
    int Color::GetHashCode() { return method_call(GetHashCode); }  // 0x7396C0 // 
    bool Color::Equals(Color* other) { return method_call(Equals, other); }  // 0x739640 // 
    bool Color::Equals1(UnityEngine::Color other) { return method_call(Equals1, other); }  // 0x6863E0 // 
    UnityEngine::Color Color::op_Multiply(UnityEngine::Color a, UnityEngine::Color b) { return method_call(op_Multiply, a, b); }  // 0x73A1B0 // 
    UnityEngine::Color Color::op_Multiply1(UnityEngine::Color a, float b) { return method_call(op_Multiply1, a, b); }  // 0x3BDD10 // 
    bool Color::op_Equality(UnityEngine::Color lhs, UnityEngine::Color rhs) { return method_call(op_Equality, lhs, rhs); }  // 0x73A020 // 
    bool Color::op_Inequality(UnityEngine::Color lhs, UnityEngine::Color rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0x73A100 // 
    UnityEngine::Color Color::Lerp(UnityEngine::Color a, UnityEngine::Color b, float t) { return method_call(Lerp, a, b, t); }  // 0x7399F0 // 
    UnityEngine::Color Color::RGBMultiplied(float multiplier) { return method_call(RGBMultiplied, multiplier); }  // 0x739A80 // 
    UnityEngine::Color Color::get_red() { return method_call(get_red); }  // 0x739F90 // 
    UnityEngine::Color Color::get_green() { return method_call(get_green); }  // 0x739E10 // 
    UnityEngine::Color Color::get_blue() { return method_call(get_blue); }  // 0x739D80 // 
    UnityEngine::Color Color::get_white() { return method_call(get_white); }  // 0x739FC0 // 
    UnityEngine::Color Color::get_black() { return method_call(get_black); }  // 0x739D50 // 
    UnityEngine::Color Color::get_yellow() { return method_call(get_yellow); }  // 0x739FF0 // 
    UnityEngine::Color Color::get_cyan() { return method_call(get_cyan); }  // 0x739DB0 // 
    UnityEngine::Color Color::get_magenta() { return method_call(get_magenta); }  // 0x739F40 // 
    UnityEngine::Color Color::get_gray() { return method_call(get_gray); }  // 0x739DE0 // 
    UnityEngine::Color Color::get_grey() { return method_call(get_grey); }  // 0x739DE0 // 
    UnityEngine::Color Color::get_clear() { return method_call(get_clear); }  // 0x689A60 // 
    UnityEngine::Color Color::get_linear() { return method_call(get_linear); }  // 0x739E40 // 
    float Color::get_maxColorComponent() { return method_call(get_maxColorComponent); }  // 0x739F70 // 
    UnityEngine::Vector4 Color::op_Implicit(UnityEngine::Color c) { return method_call(op_Implicit, c); }  // 0x73A0C0 // 
    UnityEngine::Color Color::op_Implicit1(UnityEngine::Vector4 v) { return method_call(op_Implicit1, v); }  // 0x689960 // 
    UnityEngine::Color Color::HSVToRGB(float H, float S, float V) { return method_call(HSVToRGB, H, S, V); }  // 0x7399A0 // 
    UnityEngine::Color Color::HSVToRGB1(float H, float S, float V, bool hdr) { return method_call(HSVToRGB1, H, S, V, hdr); }  // 0x739730 // 

};


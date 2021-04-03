//au/UnityEngine/Color
#pragma once
#include <ark/class.hpp>
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }
struct object;
#include <au/UnityEngine/Vector4.hpp>


namespace UnityEngine {
struct Color : ark::meta<Color>
{
ark_meta("UnityEngine", "Color", "");

    // Fields

    float r; // 0x0
    float g; // 0x4
    float b; // 0x8
    float a; // 0xC

    // Methods

    void ctor(float r, float g, float b, float a); // 0x3BDB80 // public 
    void ctor1(float r, float g, float b); // 0x739D20 // public 
    cs::string* ToString(); // 0x739AD0 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0x739B50 // public 
    int GetHashCode(); // 0x7396C0 // public override 
    bool Equals(Color* other); // 0x739640 // public override 
    bool Equals1(UnityEngine::Color other); // 0x6863E0 // public 
    UnityEngine::Color op_Multiply(UnityEngine::Color a, UnityEngine::Color b); // 0x73A1B0 // public static 
    UnityEngine::Color op_Multiply1(UnityEngine::Color a, float b); // 0x3BDD10 // public static 
    bool op_Equality(UnityEngine::Color lhs, UnityEngine::Color rhs); // 0x73A020 // public static 
    bool op_Inequality(UnityEngine::Color lhs, UnityEngine::Color rhs); // 0x73A100 // public static 
    UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float t); // 0x7399F0 // public static 
    UnityEngine::Color RGBMultiplied(float multiplier); // 0x739A80 // internal 
    UnityEngine::Color get_red(); // 0x739F90 // public static 
    UnityEngine::Color get_green(); // 0x739E10 // public static 
    UnityEngine::Color get_blue(); // 0x739D80 // public static 
    UnityEngine::Color get_white(); // 0x739FC0 // public static 
    UnityEngine::Color get_black(); // 0x739D50 // public static 
    UnityEngine::Color get_yellow(); // 0x739FF0 // public static 
    UnityEngine::Color get_cyan(); // 0x739DB0 // public static 
    UnityEngine::Color get_magenta(); // 0x739F40 // public static 
    UnityEngine::Color get_gray(); // 0x739DE0 // public static 
    UnityEngine::Color get_grey(); // 0x739DE0 // public static 
    UnityEngine::Color get_clear(); // 0x689A60 // public static 
    UnityEngine::Color get_linear(); // 0x739E40 // public 
    float get_maxColorComponent(); // 0x739F70 // public 
    UnityEngine::Vector4 op_Implicit(UnityEngine::Color c); // 0x73A0C0 // public static 
    UnityEngine::Color op_Implicit1(UnityEngine::Vector4 v); // 0x689960 // public static 
    UnityEngine::Color HSVToRGB(float H, float S, float V); // 0x7399A0 // public static 
    UnityEngine::Color HSVToRGB1(float H, float S, float V, bool hdr); // 0x739730 // public static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Color>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Color::ctor> () { return 0x3BDB80; }
    template<> inline uintptr_t rva<&UnityEngine::Color::ctor1> () { return 0x739D20; }
    template<> inline uintptr_t rva<&UnityEngine::Color::ToString> () { return 0x739AD0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::ToString1> () { return 0x739B50; }
    template<> inline uintptr_t rva<&UnityEngine::Color::GetHashCode> () { return 0x7396C0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::Equals> () { return 0x739640; }
    template<> inline uintptr_t rva<&UnityEngine::Color::Equals1> () { return 0x6863E0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Multiply> () { return 0x73A1B0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Multiply1> () { return 0x3BDD10; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Equality> () { return 0x73A020; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Inequality> () { return 0x73A100; }
    template<> inline uintptr_t rva<&UnityEngine::Color::Lerp> () { return 0x7399F0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::RGBMultiplied> () { return 0x739A80; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_red> () { return 0x739F90; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_green> () { return 0x739E10; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_blue> () { return 0x739D80; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_white> () { return 0x739FC0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_black> () { return 0x739D50; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_yellow> () { return 0x739FF0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_cyan> () { return 0x739DB0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_magenta> () { return 0x739F40; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_gray> () { return 0x739DE0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_grey> () { return 0x739DE0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_clear> () { return 0x689A60; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_linear> () { return 0x739E40; }
    template<> inline uintptr_t rva<&UnityEngine::Color::get_maxColorComponent> () { return 0x739F70; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Implicit> () { return 0x73A0C0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::op_Implicit1> () { return 0x689960; }
    template<> inline uintptr_t rva<&UnityEngine::Color::HSVToRGB> () { return 0x7399A0; }
    template<> inline uintptr_t rva<&UnityEngine::Color::HSVToRGB1> () { return 0x739730; }
} // ark::method_info
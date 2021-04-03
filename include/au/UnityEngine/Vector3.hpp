//au/UnityEngine/Vector3
#pragma once
#include <ark/class.hpp>
struct object;
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Vector3 : ark::meta<Vector3>
{
ark_meta("UnityEngine", "Vector3", "");

    // Fields

    inline static constexpr float kEpsilon = 1E-05;

    inline static constexpr float kEpsilonNormalSqrt = 1E-15;

    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    static UnityEngine::Vector3 zeroVector(); // 0x0
    static UnityEngine::Vector3 oneVector(); // 0xC
    static UnityEngine::Vector3 upVector(); // 0x18
    static UnityEngine::Vector3 downVector(); // 0x24
    static UnityEngine::Vector3 leftVector(); // 0x30
    static UnityEngine::Vector3 rightVector(); // 0x3C
    static UnityEngine::Vector3 forwardVector(); // 0x48
    static UnityEngine::Vector3 backVector(); // 0x54
    static UnityEngine::Vector3 positiveInfinityVector(); // 0x60
    static UnityEngine::Vector3 negativeInfinityVector(); // 0x6C

    // Methods

    UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t); // 0xABBFD0 // public static 
    float get_Item(int index); // 0xABC8A0 // public 
    void set_Item(int index, float value); // 0xABCEF0 // public 
    void ctor(float x, float y, float z); // 0xABC510 // public 
    void ctor1(float x, float y); // 0xABC870 // public 
    void Set(float newX, float newY, float newZ); // 0xABC510 // public 
    UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b); // 0xABC4D0 // public static 
    void Scale1(UnityEngine::Vector3 scale); // 0xABC490 // public 
    UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABBCF0 // public static 
    int GetHashCode(); // 0xABBF80 // public override 
    bool Equals(Vector3* other); // 0xABBE70 // public override 
    bool Equals1(UnityEngine::Vector3 other); // 0xABBF40 // public 
    UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value); // 0xABC370 // public static 
    void Normalize1(); // 0xABC230 // public 
    UnityEngine::Vector3 get_normalized(); // 0xABCB00 // public 
    float Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABBE30 // public static 
    float Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to); // 0xABBA50 // public static 
    float Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b); // 0xABBD50 // public static 
    UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float maxLength); // 0xABBBC0 // public static 
    float Magnitude(UnityEngine::Vector3 vector); // 0xABC050 // public static 
    float get_magnitude(); // 0xABCA30 // public 
    float get_sqrMagnitude(); // 0xABCCD0 // public 
    UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABC190 // public static 
    UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABC0F0 // public static 
    UnityEngine::Vector3 get_zero(); // 0xABCD50 // public static 
    UnityEngine::Vector3 get_one(); // 0xABCC50 // public static 
    UnityEngine::Vector3 get_forward(); // 0xABC9B0 // public static 
    UnityEngine::Vector3 get_back(); // 0xABC930 // public static 
    UnityEngine::Vector3 get_up(); // 0xABCD10 // public static 
    UnityEngine::Vector3 get_down(); // 0xABC970 // public static 
    UnityEngine::Vector3 get_left(); // 0xABC9F0 // public static 
    UnityEngine::Vector3 get_right(); // 0xABCC90 // public static 
    UnityEngine::Vector3 op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b); // 0x33A270 // public static 
    UnityEngine::Vector3 op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b); // 0x3BD9B0 // public static 
    UnityEngine::Vector3 op_UnaryNegation(UnityEngine::Vector3 a); // 0xABCEB0 // public static 
    UnityEngine::Vector3 op_Multiply(UnityEngine::Vector3 a, float d); // 0xABCE70 // public static 
    UnityEngine::Vector3 op_Multiply1(float d, UnityEngine::Vector3 a); // 0xABCE30 // public static 
    UnityEngine::Vector3 op_Division(UnityEngine::Vector3 a, float d); // 0x715A60 // public static 
    bool op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABCD90 // public static 
    bool op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs); // 0xABCDE0 // public static 
    cs::string* ToString(); // 0xABC6B0 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0xABC540 // public 
    void cctor(); // 0xABC730 // private static 

};

} // ns


namespace ark
{
template<>
struct meta_statics<UnityEngine::Vector3>
{
    UnityEngine::Vector3 zeroVector;
    UnityEngine::Vector3 oneVector;
    UnityEngine::Vector3 upVector;
    UnityEngine::Vector3 downVector;
    UnityEngine::Vector3 leftVector;
    UnityEngine::Vector3 rightVector;
    UnityEngine::Vector3 forwardVector;
    UnityEngine::Vector3 backVector;
    UnityEngine::Vector3 positiveInfinityVector;
    UnityEngine::Vector3 negativeInfinityVector;
};
} // ark

namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Lerp> () { return 0xABBFD0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_Item> () { return 0xABC8A0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::set_Item> () { return 0xABCEF0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::ctor> () { return 0xABC510; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::ctor1> () { return 0xABC870; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Set> () { return 0xABC510; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Scale> () { return 0xABC4D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Scale1> () { return 0xABC490; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Cross> () { return 0xABBCF0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::GetHashCode> () { return 0xABBF80; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Equals> () { return 0xABBE70; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Equals1> () { return 0xABBF40; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Normalize> () { return 0xABC370; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Normalize1> () { return 0xABC230; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_normalized> () { return 0xABCB00; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Dot> () { return 0xABBE30; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Angle> () { return 0xABBA50; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Distance> () { return 0xABBD50; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::ClampMagnitude> () { return 0xABBBC0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Magnitude> () { return 0xABC050; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_magnitude> () { return 0xABCA30; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_sqrMagnitude> () { return 0xABCCD0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Min> () { return 0xABC190; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::Max> () { return 0xABC0F0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_zero> () { return 0xABCD50; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_one> () { return 0xABCC50; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_forward> () { return 0xABC9B0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_back> () { return 0xABC930; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_up> () { return 0xABCD10; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_down> () { return 0xABC970; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_left> () { return 0xABC9F0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::get_right> () { return 0xABCC90; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Addition> () { return 0x33A270; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Subtraction> () { return 0x3BD9B0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_UnaryNegation> () { return 0xABCEB0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Multiply> () { return 0xABCE70; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Multiply1> () { return 0xABCE30; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Division> () { return 0x715A60; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Equality> () { return 0xABCD90; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::op_Inequality> () { return 0xABCDE0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::ToString> () { return 0xABC6B0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::ToString1> () { return 0xABC540; }
    template<> inline uintptr_t rva<&UnityEngine::Vector3::cctor> () { return 0xABC730; }
} // ark::method_info
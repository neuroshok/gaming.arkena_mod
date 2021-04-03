//au/UnityEngine/Vector2
#pragma once
#include <ark/class.hpp>
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }
struct object;
#include <au/UnityEngine/Vector3.hpp>


namespace UnityEngine {
struct Vector2 : ark::meta<Vector2>
{
ark_meta("UnityEngine", "Vector2", "");

    // Fields

    float x; // 0x0
    float y; // 0x4
    static UnityEngine::Vector2 zeroVector(); // 0x0
    static UnityEngine::Vector2 oneVector(); // 0x8
    static UnityEngine::Vector2 upVector(); // 0x10
    static UnityEngine::Vector2 downVector(); // 0x18
    static UnityEngine::Vector2 leftVector(); // 0x20
    static UnityEngine::Vector2 rightVector(); // 0x28
    static UnityEngine::Vector2 positiveInfinityVector(); // 0x30
    static UnityEngine::Vector2 negativeInfinityVector(); // 0x38
    inline static constexpr float kEpsilon = 1E-05;

    inline static constexpr float kEpsilonNormalSqrt = 1E-15;


    // Methods

    float get_Item(int index); // 0xABADD0 // public 
    void set_Item(int index, float value); // 0xABB3D0 // public 
    void ctor(float x, float y); // 0x689B20 // public 
    UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t); // 0xABA8D0 // public static 
    UnityEngine::Vector2 LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t); // 0xABA890 // public static 
    UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABA9C0 // public static 
    void Normalize(); // 0xABA930 // public 
    UnityEngine::Vector2 get_normalized(); // 0xABAFA0 // public 
    cs::string* ToString(); // 0xABAC80 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0xABAB60 // public 
    int GetHashCode(); // 0xABA860 // public override 
    bool Equals(Vector2* other); // 0xABA7B0 // public override 
    bool Equals1(UnityEngine::Vector2 other); // 0xABA830 // public 
    float Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs); // 0xABA780 // public static 
    float get_magnitude(); // 0xABAEF0 // public 
    float get_sqrMagnitude(); // 0xABB100 // public 
    float Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to); // 0xABA490 // public static 
    float SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to); // 0xABA9F0 // public static 
    float Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABA6C0 // public static 
    UnityEngine::Vector2 ClampMagnitude(UnityEngine::Vector2 vector, float maxLength); // 0xABA5E0 // public static 
    UnityEngine::Vector2 op_Addition(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABB1D0 // public static 
    UnityEngine::Vector2 op_Subtraction(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABB370 // public static 
    UnityEngine::Vector2 op_Multiply(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABA9C0 // public static 
    UnityEngine::Vector2 op_Division(UnityEngine::Vector2 a, UnityEngine::Vector2 b); // 0xABB200 // public static 
    UnityEngine::Vector2 op_UnaryNegation(UnityEngine::Vector2 a); // 0xABB3A0 // public static 
    UnityEngine::Vector2 op_Multiply1(UnityEngine::Vector2 a, float d); // 0xABB340 // public static 
    UnityEngine::Vector2 op_Multiply2(float d, UnityEngine::Vector2 a); // 0xABB310 // public static 
    UnityEngine::Vector2 op_Division1(UnityEngine::Vector2 a, float d); // 0xABB230 // public static 
    bool op_Equality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs); // 0xABB260 // public static 
    bool op_Inequality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs); // 0xABB2D0 // public static 
    UnityEngine::Vector2 op_Implicit(UnityEngine::Vector3 v); // 0xABB2A0 // public static 
    UnityEngine::Vector3 op_Implicit1(UnityEngine::Vector2 v); // 0x3BD980 // public static 
    UnityEngine::Vector2 get_zero(); // 0xABB180 // public static 
    UnityEngine::Vector2 get_one(); // 0xABB060 // public static 
    UnityEngine::Vector2 get_up(); // 0xABB130 // public static 
    UnityEngine::Vector2 get_down(); // 0xABAE50 // public static 
    UnityEngine::Vector2 get_left(); // 0xABAEA0 // public static 
    UnityEngine::Vector2 get_right(); // 0xABB0B0 // public static 
    void cctor(); // 0xABAD00 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Vector2>
{
    UnityEngine::Vector2 zeroVector;
    UnityEngine::Vector2 oneVector;
    UnityEngine::Vector2 upVector;
    UnityEngine::Vector2 downVector;
    UnityEngine::Vector2 leftVector;
    UnityEngine::Vector2 rightVector;
    UnityEngine::Vector2 positiveInfinityVector;
    UnityEngine::Vector2 negativeInfinityVector;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_Item> () { return 0xABADD0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::set_Item> () { return 0xABB3D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::ctor> () { return 0x689B20; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Lerp> () { return 0xABA8D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::LerpUnclamped> () { return 0xABA890; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Scale> () { return 0xABA9C0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Normalize> () { return 0xABA930; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_normalized> () { return 0xABAFA0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::ToString> () { return 0xABAC80; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::ToString1> () { return 0xABAB60; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::GetHashCode> () { return 0xABA860; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Equals> () { return 0xABA7B0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Equals1> () { return 0xABA830; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Dot> () { return 0xABA780; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_magnitude> () { return 0xABAEF0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_sqrMagnitude> () { return 0xABB100; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Angle> () { return 0xABA490; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::SignedAngle> () { return 0xABA9F0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::Distance> () { return 0xABA6C0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::ClampMagnitude> () { return 0xABA5E0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Addition> () { return 0xABB1D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Subtraction> () { return 0xABB370; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Multiply> () { return 0xABA9C0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Division> () { return 0xABB200; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_UnaryNegation> () { return 0xABB3A0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Multiply1> () { return 0xABB340; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Multiply2> () { return 0xABB310; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Division1> () { return 0xABB230; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Equality> () { return 0xABB260; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Inequality> () { return 0xABB2D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Implicit> () { return 0xABB2A0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::op_Implicit1> () { return 0x3BD980; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_zero> () { return 0xABB180; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_one> () { return 0xABB060; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_up> () { return 0xABB130; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_down> () { return 0xABAE50; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_left> () { return 0xABAEA0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::get_right> () { return 0xABB0B0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector2::cctor> () { return 0xABAD00; }
} // ark::method_info
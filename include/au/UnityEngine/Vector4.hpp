//au/UnityEngine/Vector4
#pragma once
#include <ark/class.hpp>
struct object;
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Vector4 : ark::meta<Vector4>
{
ark_meta("UnityEngine", "Vector4", "");

    // Fields

    inline static constexpr float kEpsilon = 1E-05;

    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    float w; // 0xC
    static UnityEngine::Vector4 zeroVector(); // 0x0
    static UnityEngine::Vector4 oneVector(); // 0x10
    static UnityEngine::Vector4 positiveInfinityVector(); // 0x20
    static UnityEngine::Vector4 negativeInfinityVector(); // 0x30

    // Methods

    float get_Item(int index); // 0xABD380 // public 
    void set_Item(int index, float value); // 0xABD6A0 // public 
    void ctor(float x, float y, float z, float w); // 0x3BDB80 // public 
    int GetHashCode(); // 0x6865D0 // public override 
    bool Equals(Vector4* other); // 0xABCFD0 // public override 
    bool Equals1(UnityEngine::Vector4 other); // 0xABCF80 // public 
    float Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b); // 0x686390 // public static 
    float get_sqrMagnitude(); // 0xABD470 // public 
    UnityEngine::Vector4 get_zero(); // 0xABD4D0 // public static 
    UnityEngine::Vector4 get_one(); // 0xABD430 // public static 
    UnityEngine::Vector4 op_Multiply(UnityEngine::Vector4 a, float d); // 0x3BDD10 // public static 
    UnityEngine::Vector4 op_Division(UnityEngine::Vector4 a, float d); // 0xABD510 // public static 
    bool op_Equality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs); // 0xABD530 // public static 
    bool op_Inequality(UnityEngine::Vector4 lhs, UnityEngine::Vector4 rhs); // 0xABD640 // public static 
    UnityEngine::Vector4 op_Implicit(UnityEngine::Vector3 v); // 0xABD5C0 // public static 
    UnityEngine::Vector3 op_Implicit1(UnityEngine::Vector4 v); // 0xABD590 // public static 
    UnityEngine::Vector4 op_Implicit2(UnityEngine::Vector2 v); // 0xABD600 // public static 
    cs::string* ToString(); // 0xABD250 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0xABD080 // public 
    void cctor(); // 0xABD2D0 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Vector4>
{
    UnityEngine::Vector4 zeroVector;
    UnityEngine::Vector4 oneVector;
    UnityEngine::Vector4 positiveInfinityVector;
    UnityEngine::Vector4 negativeInfinityVector;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Vector4::get_Item> () { return 0xABD380; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::set_Item> () { return 0xABD6A0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::ctor> () { return 0x3BDB80; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::GetHashCode> () { return 0x6865D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::Equals> () { return 0xABCFD0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::Equals1> () { return 0xABCF80; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::Dot> () { return 0x686390; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::get_sqrMagnitude> () { return 0xABD470; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::get_zero> () { return 0xABD4D0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::get_one> () { return 0xABD430; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Multiply> () { return 0x3BDD10; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Division> () { return 0xABD510; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Equality> () { return 0xABD530; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Inequality> () { return 0xABD640; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Implicit> () { return 0xABD5C0; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Implicit1> () { return 0xABD590; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::op_Implicit2> () { return 0xABD600; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::ToString> () { return 0xABD250; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::ToString1> () { return 0xABD080; }
    template<> inline uintptr_t rva<&UnityEngine::Vector4::cctor> () { return 0xABD2D0; }
} // ark::method_info
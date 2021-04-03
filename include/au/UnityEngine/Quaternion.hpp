//au/UnityEngine/Quaternion
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Vector3.hpp>
struct object;
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Quaternion : ark::meta<Quaternion>
{
ark_meta("UnityEngine", "Quaternion", "");

    // Fields

    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    float w; // 0xC
    static UnityEngine::Quaternion identityQuaternion(); // 0x0

    // Methods

    UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection); // 0x686590 // public static 
    UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation); // 0x6867D0 // public static 
    UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t); // 0x686870 // public static 
    UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler); // 0x686660 // private static 
    UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation); // 0x686760 // private static 
    UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis); // 0x686340 // public static 
    UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards); // 0x686970 // public static 
    UnityEngine::Quaternion LookRotation1(UnityEngine::Vector3 forward); // 0x6868F0 // public static 
    float get_Item(int index); // 0x686C50 // public 
    void ctor(float x, float y, float z, float w); // 0x3BDB80 // public 
    UnityEngine::Quaternion get_identity(); // 0x686DF0 // public static 
    UnityEngine::Quaternion op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs); // 0x686ED0 // public static 
    UnityEngine::Vector3 op_Multiply1(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point); // 0x686FC0 // public static 
    bool IsEqualUsingDot(float dot); // 0x686810 // private static 
    bool op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs); // 0x686E30 // public static 
    bool op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs); // 0x686E80 // public static 
    float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b); // 0x686390 // public static 
    UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler); // 0x6866A0 // private static 
    UnityEngine::Vector3 get_eulerAngles(); // 0x686D00 // public 
    UnityEngine::Quaternion Euler(float x, float y, float z); // 0x6864E0 // public static 
    UnityEngine::Quaternion Euler1(UnityEngine::Vector3 euler); // 0x6864E0 // public static 
    int GetHashCode(); // 0x6865D0 // public override 
    bool Equals(Quaternion* other); // 0x686460 // public override 
    bool Equals1(UnityEngine::Quaternion other); // 0x6863E0 // public 
    cs::string* ToString(); // 0x6869B0 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0x686A30 // public 
    void cctor(); // 0x686C00 // private static 
    void FromToRotation_Injected(/*ref*/ UnityEngine::Vector3 fromDirection, /*ref*/ UnityEngine::Vector3 toDirection, /*out*/ UnityEngine::Quaternion ret); // 0x686560 // private static 
    void Inverse_Injected(/*ref*/ UnityEngine::Quaternion rotation, /*out*/ UnityEngine::Quaternion ret); // 0x6867A0 // private static 
    void Lerp_Injected(/*ref*/ UnityEngine::Quaternion a, /*ref*/ UnityEngine::Quaternion b, float t, /*out*/ UnityEngine::Quaternion ret); // 0x686830 // private static 
    void Internal_FromEulerRad_Injected(/*ref*/ UnityEngine::Vector3 euler, /*out*/ UnityEngine::Quaternion ret); // 0x686630 // private static 
    void Internal_ToEulerRad_Injected(/*ref*/ UnityEngine::Quaternion rotation, /*out*/ UnityEngine::Vector3 ret); // 0x686730 // private static 
    void AngleAxis_Injected(float angle, /*ref*/ UnityEngine::Vector3 axis, /*out*/ UnityEngine::Quaternion ret); // 0x686300 // private static 
    void LookRotation_Injected(/*ref*/ UnityEngine::Vector3 forward, /*ref*/ UnityEngine::Vector3 upwards, /*out*/ UnityEngine::Quaternion ret); // 0x6868C0 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Quaternion>
{
    UnityEngine::Quaternion identityQuaternion;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::FromToRotation> () { return 0x686590; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Inverse> () { return 0x6867D0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Lerp> () { return 0x686870; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Internal_FromEulerRad> () { return 0x686660; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Internal_ToEulerRad> () { return 0x686760; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::AngleAxis> () { return 0x686340; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::LookRotation> () { return 0x686970; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::LookRotation1> () { return 0x6868F0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::get_Item> () { return 0x686C50; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::ctor> () { return 0x3BDB80; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::get_identity> () { return 0x686DF0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::op_Multiply> () { return 0x686ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::op_Multiply1> () { return 0x686FC0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::IsEqualUsingDot> () { return 0x686810; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::op_Equality> () { return 0x686E30; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::op_Inequality> () { return 0x686E80; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Dot> () { return 0x686390; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Internal_MakePositive> () { return 0x6866A0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::get_eulerAngles> () { return 0x686D00; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Euler> () { return 0x6864E0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Euler1> () { return 0x6864E0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::GetHashCode> () { return 0x6865D0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Equals> () { return 0x686460; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Equals1> () { return 0x6863E0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::ToString> () { return 0x6869B0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::ToString1> () { return 0x686A30; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::cctor> () { return 0x686C00; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::FromToRotation_Injected> () { return 0x686560; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Inverse_Injected> () { return 0x6867A0; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Lerp_Injected> () { return 0x686830; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Internal_FromEulerRad_Injected> () { return 0x686630; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::Internal_ToEulerRad_Injected> () { return 0x686730; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::AngleAxis_Injected> () { return 0x686300; }
    template<> inline uintptr_t rva<&UnityEngine::Quaternion::LookRotation_Injected> () { return 0x6868C0; }
} // ark::method_info
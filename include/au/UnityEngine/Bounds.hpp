//au/UnityEngine/Bounds
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Vector3.hpp>
struct object;
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Bounds : ark::meta<Bounds>
{
ark_meta("UnityEngine", "Bounds", "");

    // Fields

    UnityEngine::Vector3 m_Center; // 0x0
    UnityEngine::Vector3 m_Extents; // 0xC

    // Methods

    void ctor(UnityEngine::Vector3 center, UnityEngine::Vector3 size); // 0x733DE0 // public 
    int GetHashCode(); // 0x733B70 // public override 
    bool Equals(Bounds* other); // 0x733A70 // public override 
    bool Equals1(UnityEngine::Bounds other); // 0x733AF0 // public 
    UnityEngine::Vector3 get_center(); // 0x374410 // public 
    void set_center(UnityEngine::Vector3 value); // 0x7340B0 // public 
    UnityEngine::Vector3 get_size(); // 0x733F50 // public 
    void set_size(UnityEngine::Vector3 value); // 0x7340F0 // public 
    UnityEngine::Vector3 get_extents(); // 0x4A8660 // public 
    void set_extents(UnityEngine::Vector3 value); // 0x7340D0 // public 
    UnityEngine::Vector3 get_min(); // 0x733EC0 // public 
    UnityEngine::Vector3 get_max(); // 0x733E30 // public 
    bool op_Equality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs); // 0x733FC0 // public static 
    bool op_Inequality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs); // 0x734030 // public static 
    void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max); // 0x733BC0 // public 
    void Encapsulate(UnityEngine::Vector3 point); // 0x733900 // public 
    cs::string* ToString(); // 0x733D60 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0x733C40 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Bounds>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Bounds::ctor> () { return 0x733DE0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::GetHashCode> () { return 0x733B70; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::Equals> () { return 0x733A70; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::Equals1> () { return 0x733AF0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::get_center> () { return 0x374410; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::set_center> () { return 0x7340B0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::get_size> () { return 0x733F50; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::set_size> () { return 0x7340F0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::get_extents> () { return 0x4A8660; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::set_extents> () { return 0x7340D0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::get_min> () { return 0x733EC0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::get_max> () { return 0x733E30; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::op_Equality> () { return 0x733FC0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::op_Inequality> () { return 0x734030; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::SetMinMax> () { return 0x733BC0; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::Encapsulate> () { return 0x733900; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::ToString> () { return 0x733D60; }
    template<> inline uintptr_t rva<&UnityEngine::Bounds::ToString1> () { return 0x733C40; }
} // ark::method_info
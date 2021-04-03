//au/UnityEngine/Rect
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
struct object;
#include <cs/string.hpp>
namespace System{ struct IFormatProvider; }


namespace UnityEngine {
struct Rect : ark::meta<Rect>
{
ark_meta("UnityEngine", "Rect", "");

    // Fields

    float m_XMin; // 0x0
    float m_YMin; // 0x4
    float m_Width; // 0x8
    float m_Height; // 0xC

    // Methods

    void ctor(float x, float y, float width, float height); // 0x3BDB80 // public 
    void ctor1(UnityEngine::Vector2 position, UnityEngine::Vector2 size); // 0x3BDB80 // public 
    void ctor2(UnityEngine::Rect source); // 0x689960 // public 
    UnityEngine::Rect get_zero(); // 0x689A60 // public static 
    UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax); // 0x6894C0 // public static 
    float get_x(); // 0x2D2B20 // public 
    void set_x(float value); // 0x2D2B50 // public 
    float get_y(); // 0x2D2B30 // public 
    void set_y(float value); // 0x2D2B70 // public 
    UnityEngine::Vector2 get_position(); // 0x6899E0 // public 
    void set_position(UnityEngine::Vector2 value); // 0x689B20 // public 
    UnityEngine::Vector2 get_center(); // 0x689970 // public 
    void set_center(UnityEngine::Vector2 value); // 0x689AE0 // public 
    UnityEngine::Vector2 get_min(); // 0x6899E0 // public 
    UnityEngine::Vector2 get_max(); // 0x6899B0 // public 
    float get_width(); // 0x2D2B40 // public 
    void set_width(float value); // 0x2D2B90 // public 
    float get_height(); // 0x2D2DB0 // public 
    void set_height(float value); // 0x2D2DD0 // public 
    UnityEngine::Vector2 get_size(); // 0x689A10 // public 
    void set_size(UnityEngine::Vector2 value); // 0x689B40 // public 
    float get_xMin(); // 0x2D2B20 // public 
    void set_xMin(float value); // 0x689B80 // public 
    float get_yMin(); // 0x2D2B30 // public 
    void set_yMin(float value); // 0x689BD0 // public 
    float get_xMax(); // 0x689A40 // public 
    void set_xMax(float value); // 0x689B60 // public 
    float get_yMax(); // 0x689A50 // public 
    void set_yMax(float value); // 0x689BB0 // public 
    bool Contains(UnityEngine::Vector2 point); // 0x6892D0 // public 
    bool Contains1(UnityEngine::Vector3 point); // 0x6892D0 // public 
    UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect); // 0x689500 // private static 
    bool Overlaps(UnityEngine::Rect other); // 0x689680 // public 
    bool Overlaps1(UnityEngine::Rect other, bool allowInverse); // 0x689560 // public 
    bool op_Inequality(UnityEngine::Rect lhs, UnityEngine::Rect rhs); // 0x689A90 // public static 
    bool op_Equality(UnityEngine::Rect lhs, UnityEngine::Rect rhs); // 0x3BDC30 // public static 
    int GetHashCode(); // 0x689440 // public override 
    bool Equals(Rect* other); // 0x6893C0 // public override 
    bool Equals1(UnityEngine::Rect other); // 0x689310 // public 
    cs::string* ToString(); // 0x6898E0 // public override 
    cs::string* ToString1(cs::string* format, System::IFormatProvider* formatProvider); // 0x6896E0 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Rect>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Rect::ctor> () { return 0x3BDB80; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::ctor1> () { return 0x3BDB80; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::ctor2> () { return 0x689960; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_zero> () { return 0x689A60; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::MinMaxRect> () { return 0x6894C0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_x> () { return 0x2D2B20; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_x> () { return 0x2D2B50; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_y> () { return 0x2D2B30; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_y> () { return 0x2D2B70; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_position> () { return 0x6899E0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_position> () { return 0x689B20; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_center> () { return 0x689970; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_center> () { return 0x689AE0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_min> () { return 0x6899E0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_max> () { return 0x6899B0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_width> () { return 0x2D2B40; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_width> () { return 0x2D2B90; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_height> () { return 0x2D2DB0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_height> () { return 0x2D2DD0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_size> () { return 0x689A10; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_size> () { return 0x689B40; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_xMin> () { return 0x2D2B20; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_xMin> () { return 0x689B80; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_yMin> () { return 0x2D2B30; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_yMin> () { return 0x689BD0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_xMax> () { return 0x689A40; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_xMax> () { return 0x689B60; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::get_yMax> () { return 0x689A50; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::set_yMax> () { return 0x689BB0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Contains> () { return 0x6892D0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Contains1> () { return 0x6892D0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::OrderMinMax> () { return 0x689500; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Overlaps> () { return 0x689680; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Overlaps1> () { return 0x689560; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::op_Inequality> () { return 0x689A90; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::op_Equality> () { return 0x3BDC30; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::GetHashCode> () { return 0x689440; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Equals> () { return 0x6893C0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::Equals1> () { return 0x689310; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::ToString> () { return 0x6898E0; }
    template<> inline uintptr_t rva<&UnityEngine::Rect::ToString1> () { return 0x6896E0; }
} // ark::method_info
#include <au/UnityEngine/Rect.hpp>

namespace UnityEngine {

    // Methods

    void Rect::ctor(float x, float y, float width, float height) { return method_call(ctor, x, y, width, height); }  // 0x3BDB80 // 
    void Rect::ctor1(UnityEngine::Vector2 position, UnityEngine::Vector2 size) { return method_call(ctor1, position, size); }  // 0x3BDB80 // 
    void Rect::ctor2(UnityEngine::Rect source) { return method_call(ctor2, source); }  // 0x689960 // 
    UnityEngine::Rect Rect::get_zero() { return method_call(get_zero); }  // 0x689A60 // 
    UnityEngine::Rect Rect::MinMaxRect(float xmin, float ymin, float xmax, float ymax) { return method_call(MinMaxRect, xmin, ymin, xmax, ymax); }  // 0x6894C0 // 
    float Rect::get_x() { return method_call(get_x); }  // 0x2D2B20 // 
    void Rect::set_x(float value) { return method_call(set_x, value); }  // 0x2D2B50 // 
    float Rect::get_y() { return method_call(get_y); }  // 0x2D2B30 // 
    void Rect::set_y(float value) { return method_call(set_y, value); }  // 0x2D2B70 // 
    UnityEngine::Vector2 Rect::get_position() { return method_call(get_position); }  // 0x6899E0 // 
    void Rect::set_position(UnityEngine::Vector2 value) { return method_call(set_position, value); }  // 0x689B20 // 
    UnityEngine::Vector2 Rect::get_center() { return method_call(get_center); }  // 0x689970 // 
    void Rect::set_center(UnityEngine::Vector2 value) { return method_call(set_center, value); }  // 0x689AE0 // 
    UnityEngine::Vector2 Rect::get_min() { return method_call(get_min); }  // 0x6899E0 // 
    UnityEngine::Vector2 Rect::get_max() { return method_call(get_max); }  // 0x6899B0 // 
    float Rect::get_width() { return method_call(get_width); }  // 0x2D2B40 // 
    void Rect::set_width(float value) { return method_call(set_width, value); }  // 0x2D2B90 // 
    float Rect::get_height() { return method_call(get_height); }  // 0x2D2DB0 // 
    void Rect::set_height(float value) { return method_call(set_height, value); }  // 0x2D2DD0 // 
    UnityEngine::Vector2 Rect::get_size() { return method_call(get_size); }  // 0x689A10 // 
    void Rect::set_size(UnityEngine::Vector2 value) { return method_call(set_size, value); }  // 0x689B40 // 
    float Rect::get_xMin() { return method_call(get_xMin); }  // 0x2D2B20 // 
    void Rect::set_xMin(float value) { return method_call(set_xMin, value); }  // 0x689B80 // 
    float Rect::get_yMin() { return method_call(get_yMin); }  // 0x2D2B30 // 
    void Rect::set_yMin(float value) { return method_call(set_yMin, value); }  // 0x689BD0 // 
    float Rect::get_xMax() { return method_call(get_xMax); }  // 0x689A40 // 
    void Rect::set_xMax(float value) { return method_call(set_xMax, value); }  // 0x689B60 // 
    float Rect::get_yMax() { return method_call(get_yMax); }  // 0x689A50 // 
    void Rect::set_yMax(float value) { return method_call(set_yMax, value); }  // 0x689BB0 // 
    bool Rect::Contains(UnityEngine::Vector2 point) { return method_call(Contains, point); }  // 0x6892D0 // 
    bool Rect::Contains1(UnityEngine::Vector3 point) { return method_call(Contains1, point); }  // 0x6892D0 // 
    UnityEngine::Rect Rect::OrderMinMax(UnityEngine::Rect rect) { return method_call(OrderMinMax, rect); }  // 0x689500 // 
    bool Rect::Overlaps(UnityEngine::Rect other) { return method_call(Overlaps, other); }  // 0x689680 // 
    bool Rect::Overlaps1(UnityEngine::Rect other, bool allowInverse) { return method_call(Overlaps1, other, allowInverse); }  // 0x689560 // 
    bool Rect::op_Inequality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) { return method_call(op_Inequality, lhs, rhs); }  // 0x689A90 // 
    bool Rect::op_Equality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) { return method_call(op_Equality, lhs, rhs); }  // 0x3BDC30 // 
    int Rect::GetHashCode() { return method_call(GetHashCode); }  // 0x689440 // 
    bool Rect::Equals(Rect* other) { return method_call(Equals, other); }  // 0x6893C0 // 
    bool Rect::Equals1(UnityEngine::Rect other) { return method_call(Equals1, other); }  // 0x689310 // 
    cs::string* Rect::ToString() { return method_call(ToString); }  // 0x6898E0 // 
    cs::string* Rect::ToString1(cs::string* format, System::IFormatProvider* formatProvider) { return method_call(ToString1, format, formatProvider); }  // 0x6896E0 // 

};


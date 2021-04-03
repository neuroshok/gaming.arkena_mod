//au/Discord/Rect
#pragma once
#include <ark/class.hpp>


namespace Discord {
struct Rect : ark::meta<Rect>
{
ark_meta("Discord", "Rect", "");

    // Fields

    int Left; // 0x0
    int Top; // 0x4
    int Right; // 0x8
    int Bottom; // 0xC

};

} // ns

namespace ark
{
template<>
struct meta_statics<Discord::Rect>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
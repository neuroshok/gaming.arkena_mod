//au/UnityEngine/ColorSpace
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class ColorSpace : int
{


    // Fields

    
    Uninitialized = -1,
    Gamma = 0,
    Linear = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::ColorSpace>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
//au/UnityEngine/SpritePackingRotation
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpritePackingRotation : int
{


    // Fields

    
    None = 0,
    FlipHorizontal = 1,
    FlipVertical = 2,
    Rotate180 = 3,
    Any = 15,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpritePackingRotation>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
//au/UnityEngine/SpriteDrawMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpriteDrawMode : int
{


    // Fields

    
    Simple = 0,
    Sliced = 1,
    Tiled = 2,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteDrawMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
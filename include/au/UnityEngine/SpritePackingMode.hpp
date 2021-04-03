//au/UnityEngine/SpritePackingMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpritePackingMode : int
{


    // Fields

    
    Tight = 0,
    Rectangle = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpritePackingMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
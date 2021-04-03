//au/UnityEngine/SpriteMaskInteraction
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpriteMaskInteraction : int
{


    // Fields

    
    None = 0,
    VisibleInsideMask = 1,
    VisibleOutsideMask = 2,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteMaskInteraction>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
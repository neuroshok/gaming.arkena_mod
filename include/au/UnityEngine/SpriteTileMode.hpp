//au/UnityEngine/SpriteTileMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpriteTileMode : int
{


    // Fields

    
    Continuous = 0,
    Adaptive = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteTileMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
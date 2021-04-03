//au/UnityEngine/Rendering/ShadowCastingMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering {
enum class ShadowCastingMode : int
{


    // Fields

    
    Off = 0,
    On = 1,
    TwoSided = 2,
    ShadowsOnly = 3,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Rendering::ShadowCastingMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
//au/UnityEngine/Experimental/Rendering/FormatUsage
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Experimental::Rendering {
enum class FormatUsage : int
{


    // Fields

    
    Sample = 0,
    Linear = 1,
    Sparse = 2,
    Render = 4,
    Blend = 5,
    GetPixels = 6,
    SetPixels = 7,
    SetPixels32 = 8,
    ReadPixels = 9,
    LoadStore = 10,
    MSAA2x = 11,
    MSAA4x = 12,
    MSAA8x = 13,
    StencilSampling = 15,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Experimental::Rendering::FormatUsage>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
//au/UnityEngine/Experimental/Rendering/DefaultFormat
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Experimental::Rendering {
enum class DefaultFormat : int
{


    // Fields

    
    LDR = 0,
    HDR = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Experimental::Rendering::DefaultFormat>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
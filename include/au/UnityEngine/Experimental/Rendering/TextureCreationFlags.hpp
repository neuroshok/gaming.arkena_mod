//au/UnityEngine/Experimental/Rendering/TextureCreationFlags
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Experimental::Rendering {
enum class TextureCreationFlags : int
{


    // Fields

    
    None = 0,
    MipChain = 1,
    Crunch = 64,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Experimental::Rendering::TextureCreationFlags>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
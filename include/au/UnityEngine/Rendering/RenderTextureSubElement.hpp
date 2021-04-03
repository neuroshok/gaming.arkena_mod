//au/UnityEngine/Rendering/RenderTextureSubElement
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering {
enum class RenderTextureSubElement : int
{


    // Fields

    
    Color = 0,
    Depth = 1,
    Stencil = 2,
    Default = 3,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Rendering::RenderTextureSubElement>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
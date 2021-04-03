//au/UnityEngine/Rendering/ShaderPropertyFlags
#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering {
enum class ShaderPropertyFlags : int
{


    // Fields

    
    None = 0,
    HideInInspector = 1,
    PerRendererData = 2,
    NoScaleOffset = 4,
    Normal = 8,
    HDR = 16,
    Gamma = 32,
    NonModifiableTextureData = 64,
    MainTexture = 128,
    MainColor = 256,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Rendering::ShaderPropertyFlags>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
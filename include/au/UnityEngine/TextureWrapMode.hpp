//au/UnityEngine/TextureWrapMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class TextureWrapMode : int
{


    // Fields

    
    Repeat = 0,
    Clamp = 1,
    Mirror = 2,
    MirrorOnce = 3,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::TextureWrapMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
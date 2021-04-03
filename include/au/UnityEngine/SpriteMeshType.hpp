//au/UnityEngine/SpriteMeshType
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpriteMeshType : int
{


    // Fields

    
    FullRect = 0,
    Tight = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteMeshType>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
//au/UnityEngine/SpriteSortPoint
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SpriteSortPoint : int
{


    // Fields

    
    Center = 0,
    Pivot = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteSortPoint>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
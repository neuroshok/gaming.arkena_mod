//au/UnityEngine/FilterMode
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class FilterMode : int
{


    // Fields

    
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::FilterMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
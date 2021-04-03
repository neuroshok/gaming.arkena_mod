//au/UnityEngine/Space
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class Space : int
{


    // Fields

    
    World = 0,
    Self = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Space>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
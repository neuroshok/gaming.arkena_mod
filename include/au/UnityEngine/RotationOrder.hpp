//au/UnityEngine/RotationOrder
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class RotationOrder : int
{


    // Fields

    
    OrderXYZ = 0,
    OrderXZY = 1,
    OrderYZX = 2,
    OrderYXZ = 3,
    OrderZXY = 4,
    OrderZYX = 5,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::RotationOrder>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
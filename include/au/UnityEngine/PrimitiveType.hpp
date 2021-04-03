//au/UnityEngine/PrimitiveType
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class PrimitiveType : int
{


    // Fields

    
    Sphere = 0,
    Capsule = 1,
    Cylinder = 2,
    Cube = 3,
    Plane = 4,
    Quad = 5,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::PrimitiveType>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
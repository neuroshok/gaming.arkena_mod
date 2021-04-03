//au/UnityEngine/MaterialGlobalIlluminationFlags
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class MaterialGlobalIlluminationFlags : int
{


    // Fields

    
    None = 0,
    RealtimeEmissive = 1,
    BakedEmissive = 2,
    EmissiveIsBlack = 4,
    AnyEmissive = 3,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::MaterialGlobalIlluminationFlags>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
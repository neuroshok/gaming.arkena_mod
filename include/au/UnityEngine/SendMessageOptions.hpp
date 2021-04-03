//au/UnityEngine/SendMessageOptions
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class SendMessageOptions : int
{


    // Fields

    
    RequireReceiver = 0,
    DontRequireReceiver = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SendMessageOptions>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
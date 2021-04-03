//au/Hazel/SendOption
#pragma once
#include <ark/class.hpp>


namespace Hazel {
enum class SendOption : uint8_t
{


    // Fields

    
    None = 0,
    Reliable = 1,

};

} // ns

namespace ark
{
template<>
struct meta_statics<Hazel::SendOption>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
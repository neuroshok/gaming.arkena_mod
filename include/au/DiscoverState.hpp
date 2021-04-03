//au//DiscoverState
#pragma once
#include <ark/class.hpp>
#include <au/DiscoverState.hpp>

enum class DiscoverState : int
{


    // Fields

    
    Off = 0,
    Broadcast = 1,

};


namespace ark
{
template<>
struct meta_statics<DiscoverState>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
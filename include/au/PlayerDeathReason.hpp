//au//PlayerDeathReason
#pragma once
#include <ark/class.hpp>
#include <au/PlayerDeathReason.hpp>

enum class PlayerDeathReason : int
{


    // Fields

    
    Exile = 0,
    Kill = 1,
    Disconnect = 2,

};


namespace ark
{
template<>
struct meta_statics<PlayerDeathReason>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
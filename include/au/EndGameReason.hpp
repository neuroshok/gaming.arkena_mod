//au//EndGameReason
#pragma once
#include <ark/class.hpp>
#include <au/EndGameReason.hpp>

enum class EndGameReason : int
{


    // Fields

    
    HumansByVote = 0,
    HumansByTask = 1,
    ImpostorByVote = 2,
    ImpostorByKill = 3,
    ImpostorBySabotage = 4,
    ImpostorDisconnect = 5,
    HumansDisconnect = 6,

};


namespace ark
{
template<>
struct meta_statics<EndGameReason>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
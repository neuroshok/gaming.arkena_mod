//au//PlayerVoteStatus
#pragma once
#include <ark/class.hpp>
#include <au/PlayerVoteStatus.hpp>

enum class PlayerVoteStatus : int
{


    // Fields

    
    DidVote = 0,

};


namespace ark
{
template<>
struct meta_statics<PlayerVoteStatus>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
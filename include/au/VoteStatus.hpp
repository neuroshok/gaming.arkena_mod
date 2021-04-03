//au//VoteStatus
#pragma once
#include <ark/class.hpp>
#include <au/VoteStatus.hpp>

enum class VoteStatus : int
{


    // Fields

    
    DidVote = 0,

};


namespace ark
{
template<>
struct meta_statics<VoteStatus>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
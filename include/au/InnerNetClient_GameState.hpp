//au//InnerNetClient_GameState
#pragma once
#include <ark/class.hpp>
#include <au/InnerNetClient_GameState.hpp>

enum class InnerNetClient_GameState : int
{


    // Fields

    
    NotJoined = 0,
    Joined = 1,
    Started = 2,
    Ended = 3,

};


namespace ark
{
template<>
struct meta_statics<InnerNetClient_GameState>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
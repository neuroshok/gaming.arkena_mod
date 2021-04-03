//au//GameStartManager_Status
#pragma once
#include <ark/class.hpp>
#include <au/GameStartManager_Status.hpp>

enum class GameStartManager_Status : int
{


    // Fields

    
    NotStarting = 0,
    Countdown = 1,
    Starting = 2,

};


namespace ark
{
template<>
struct meta_statics<GameStartManager_Status>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
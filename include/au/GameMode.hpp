//au//GameMode
#pragma once
#include <ark/class.hpp>
#include <au/GameMode.hpp>

enum class GameMode : int
{


    // Fields

    
    LocalGame = 0,
    OnlineGame = 1,
    FreePlay = 2,

};


namespace ark
{
template<>
struct meta_statics<GameMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
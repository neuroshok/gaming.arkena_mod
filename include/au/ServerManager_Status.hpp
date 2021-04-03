//au//ServerManager_Status
#pragma once
#include <ark/class.hpp>
#include <au/ServerManager_Status.hpp>

enum class ServerManager_Status : int
{


    // Fields

    
    Connecting = 0,
    Failed = 1,
    Success = 2,

};


namespace ark
{
template<>
struct meta_statics<ServerManager_Status>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
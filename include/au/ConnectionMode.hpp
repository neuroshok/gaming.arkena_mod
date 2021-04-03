//au//ConnectionMode
#pragma once
#include <ark/class.hpp>
#include <au/ConnectionMode.hpp>

enum class ConnectionMode : int
{


    // Fields

    
    None = 0,
    Client = 1,
    HostAndClient = 2,

};


namespace ark
{
template<>
struct meta_statics<ConnectionMode>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
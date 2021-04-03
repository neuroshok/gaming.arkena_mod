//au//ClientType
#pragma once
#include <ark/class.hpp>
#include <au/ClientType.hpp>

enum class ClientType : uint8_t
{


    // Fields

    
    None = 0,
    IsClientCharacter = 1,

};


namespace ark
{
template<>
struct meta_statics<ClientType>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
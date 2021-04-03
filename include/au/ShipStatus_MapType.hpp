//au//ShipStatus_MapType
#pragma once
#include <ark/class.hpp>
#include <au/ShipStatus_MapType.hpp>

enum class ShipStatus_MapType : int
{


    // Fields

    
    Ship = 0,
    Hq = 1,
    Pb = 2,

};


namespace ark
{
template<>
struct meta_statics<ShipStatus_MapType>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
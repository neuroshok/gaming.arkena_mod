//au//RoomConnectionError
#pragma once
#include <ark/class.hpp>
#include <au/RoomConnectionError.hpp>

enum class RoomConnectionError : int
{


    // Fields

    
    NotReportedUnknown = 0,
    NotReportedNoAccount = 1,
    NotReportedNotFound = 2,
    NotReportedRateLimit = 3,
    Reported = 4,

};


namespace ark
{
template<>
struct meta_statics<RoomConnectionError>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
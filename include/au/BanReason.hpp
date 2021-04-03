//au//BanReason
#pragma once
#include <ark/class.hpp>
#include <au/BanReason.hpp>

enum class BanReason : int
{


    // Fields

    
    InappropriateName = 0,
    InappropriateChat = 1,
    Cheating_Hacking = 2,
    Harassment_Misconduct = 3,

};


namespace ark
{
template<>
struct meta_statics<BanReason>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
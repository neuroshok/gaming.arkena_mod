//au//NormalPlayerTask_State
#pragma once
#include <ark/class.hpp>
#include <au/NormalPlayerTask_State.hpp>

enum class NormalPlayerTask_State : int
{


    // Fields

    
    NotStarted = 0,
    Started = 1,
    Finished = 2,

};


namespace ark
{
template<>
struct meta_statics<NormalPlayerTask_State>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
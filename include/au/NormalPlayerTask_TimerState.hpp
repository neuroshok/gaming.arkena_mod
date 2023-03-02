#pragma once
#include <ark/class.hpp>


namespace 
{
    struct NormalPlayerTask_TimerState : ark::meta<NormalPlayerTask_TimerState>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::NormalPlayerTask_TimerState> {
        };

}


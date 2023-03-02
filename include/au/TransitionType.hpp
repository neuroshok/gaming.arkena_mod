#pragma once
#include <ark/class.hpp>


namespace 
{
    struct TransitionType : ark::meta<TransitionType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::TransitionType> {
        };

}


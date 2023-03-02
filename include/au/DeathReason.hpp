#pragma once
#include <ark/class.hpp>


namespace 
{
    struct DeathReason : ark::meta<DeathReason>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::DeathReason> {
        };

}


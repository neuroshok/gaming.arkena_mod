#pragma once
#include <ark/class.hpp>


namespace 
{
    struct SystemTypes : ark::meta<SystemTypes>
    {
        uint8_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::SystemTypes> {
        };

}


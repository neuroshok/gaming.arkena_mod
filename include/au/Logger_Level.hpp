#pragma once
#include <ark/class.hpp>


namespace 
{
    struct Logger_Level : ark::meta<Logger_Level>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::Logger_Level> {
        };

}


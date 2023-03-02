#pragma once
#include <ark/class.hpp>


namespace 
{
    struct Logger_Category : ark::meta<Logger_Category>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::Logger_Category> {
        };

}


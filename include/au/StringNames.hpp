#pragma once
#include <ark/class.hpp>


namespace 
{
    struct StringNames : ark::meta<StringNames>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::StringNames> {
        };

}


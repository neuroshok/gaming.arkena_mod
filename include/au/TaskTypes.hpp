#pragma once
#include <ark/class.hpp>


namespace 
{
    struct TaskTypes : ark::meta<TaskTypes>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::TaskTypes> {
        };

}

#pragma once
#include <ark/class.hpp>


namespace 
{
    struct Exception_ExceptionMessageKind : ark::meta<Exception_ExceptionMessageKind>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::Exception_ExceptionMessageKind> {
        };

}


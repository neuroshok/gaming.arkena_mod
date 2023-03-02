#pragma once
#include <ark/class.hpp>


namespace System::Runtime::Serialization
{
    struct StreamingContextStates : ark::meta<StreamingContextStates>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::Serialization::StreamingContextStates> {
        };

}


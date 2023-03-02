#pragma once
#include <ark/class.hpp>


namespace Hazel
{
    struct SendOption : ark::meta<SendOption>
    {
        uint8_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<Hazel::SendOption> {
        };

}


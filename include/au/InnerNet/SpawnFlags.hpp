#pragma once
#include <ark/class.hpp>


namespace InnerNet
{
    struct SpawnFlags : ark::meta<SpawnFlags>
    {
        uint8_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<InnerNet::SpawnFlags> {
        };

}


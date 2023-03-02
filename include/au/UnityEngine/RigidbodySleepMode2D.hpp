#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RigidbodySleepMode2D : ark::meta<RigidbodySleepMode2D>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RigidbodySleepMode2D> {
        };

}


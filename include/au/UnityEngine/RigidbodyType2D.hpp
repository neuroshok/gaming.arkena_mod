#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RigidbodyType2D : ark::meta<RigidbodyType2D>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RigidbodyType2D> {
        };

}


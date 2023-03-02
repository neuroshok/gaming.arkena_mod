#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RigidbodyInterpolation2D : ark::meta<RigidbodyInterpolation2D>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RigidbodyInterpolation2D> {
        };

}


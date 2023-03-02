#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RigidbodyConstraints2D : ark::meta<RigidbodyConstraints2D>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RigidbodyConstraints2D> {
        };

}


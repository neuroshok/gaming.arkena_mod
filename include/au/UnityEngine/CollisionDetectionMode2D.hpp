#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct CollisionDetectionMode2D : ark::meta<CollisionDetectionMode2D>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::CollisionDetectionMode2D> {
        };

}


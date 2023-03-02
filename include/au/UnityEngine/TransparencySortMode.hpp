#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct TransparencySortMode : ark::meta<TransparencySortMode>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::TransparencySortMode> {
        };

}


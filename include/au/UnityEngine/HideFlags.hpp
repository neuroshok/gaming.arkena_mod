#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct HideFlags : ark::meta<HideFlags>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::HideFlags> {
        };

}


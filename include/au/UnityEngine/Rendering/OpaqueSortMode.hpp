#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering
{
    struct OpaqueSortMode : ark::meta<OpaqueSortMode>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::OpaqueSortMode> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RotationOrder : ark::meta<RotationOrder>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RotationOrder> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct PrimitiveType : ark::meta<PrimitiveType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::PrimitiveType> {
        };

}

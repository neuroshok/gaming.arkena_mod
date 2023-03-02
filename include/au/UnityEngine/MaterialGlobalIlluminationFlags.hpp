#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct MaterialGlobalIlluminationFlags : ark::meta<MaterialGlobalIlluminationFlags>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::MaterialGlobalIlluminationFlags> {
        };

}


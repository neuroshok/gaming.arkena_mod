#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RenderTextureMemoryless : ark::meta<RenderTextureMemoryless>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RenderTextureMemoryless> {
        };

}


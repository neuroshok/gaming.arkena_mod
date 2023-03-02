#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RenderTextureFormat : ark::meta<RenderTextureFormat>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RenderTextureFormat> {
        };

}


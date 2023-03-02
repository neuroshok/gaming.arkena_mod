#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct RenderBuffer : ark::meta<RenderBuffer>
    {
        int32_t m_RenderTextureInstanceID; // 0x8
        int m_BufferPtr; // 0xc


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RenderBuffer> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering
{
    struct VertexAttribute : ark::meta<VertexAttribute>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::VertexAttribute> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Experimental::Rendering
{
    struct GraphicsFormat : ark::meta<GraphicsFormat>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Experimental::Rendering::GraphicsFormat> {
        };

}

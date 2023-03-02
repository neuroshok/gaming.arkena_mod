#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering
{
    struct MeshUpdateFlags : ark::meta<MeshUpdateFlags>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::MeshUpdateFlags> {
        };

}


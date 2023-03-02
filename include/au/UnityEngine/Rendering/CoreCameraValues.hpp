#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Rendering
{
    struct CoreCameraValues : ark::meta<CoreCameraValues>
    {
        int32_t filterMode; // 0x8
        uint32_t cullingMask; // 0xc
        int32_t instanceID; // 0x10


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::CoreCameraValues> {
        };

}


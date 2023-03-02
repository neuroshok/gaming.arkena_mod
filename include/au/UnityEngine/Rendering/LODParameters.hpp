#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>

namespace UnityEngine::Rendering
{
    struct LODParameters : ark::meta<LODParameters>
    {
        int32_t m_IsOrthographic; // 0x8
        UnityEngine::Vector3 m_CameraPosition; // 0xc
        float m_FieldOfView; // 0x18
        float m_OrthoSize; // 0x1c
        int32_t m_CameraPixelHeight; // 0x20


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::LODParameters> {
        };

}


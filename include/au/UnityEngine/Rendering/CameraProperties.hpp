#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Rendering/CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer.hpp>
#include <au/UnityEngine/Rendering/CameraProperties/<m_CameraCullPlanes>e__FixedBuffer.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Rendering/CameraProperties/<layerCullDistances>e__FixedBuffer.hpp>
#include <au/UnityEngine/Rendering/CoreCameraValues.hpp>

namespace UnityEngine::Rendering
{
    struct CameraProperties : ark::meta<CameraProperties>
    {
        UnityEngine::Rect screenRect; // 0x8
        UnityEngine::Vector3 viewDir; // 0x18
        float projectionNear; // 0x24
        float projectionFar; // 0x28
        float cameraNear; // 0x2c
        float cameraFar; // 0x30
        float cameraAspect; // 0x34
        UnityEngine::Matrix4x4 cameraToWorld; // 0x38
        UnityEngine::Matrix4x4 actualWorldToClip; // 0x78
        UnityEngine::Matrix4x4 cameraClipToWorld; // 0xb8
        UnityEngine::Matrix4x4 cameraWorldToClip; // 0xf8
        UnityEngine::Matrix4x4 implicitProjection; // 0x138
        UnityEngine::Matrix4x4 stereoWorldToClipLeft; // 0x178
        UnityEngine::Matrix4x4 stereoWorldToClipRight; // 0x1b8
        UnityEngine::Matrix4x4 worldToCamera; // 0x1f8
        UnityEngine::Vector3 up; // 0x238
        UnityEngine::Vector3 right; // 0x244
        UnityEngine::Vector3 transformDirection; // 0x250
        UnityEngine::Vector3 cameraEuler; // 0x25c
        UnityEngine::Vector3 velocity; // 0x268
        float farPlaneWorldSpaceLength; // 0x274
        uint32_t rendererCount; // 0x278
        UnityEngine::Rendering::CameraProperties+<m_ShadowCullPlanes>e__FixedBuffer m_ShadowCullPlanes; // 0x27c
        UnityEngine::Rendering::CameraProperties+<m_CameraCullPlanes>e__FixedBuffer m_CameraCullPlanes; // 0x2dc
        float baseFarDistance; // 0x33c
        UnityEngine::Vector3 shadowCullCenter; // 0x340
        UnityEngine::Rendering::CameraProperties+<layerCullDistances>e__FixedBuffer layerCullDistances; // 0x34c
        int32_t layerCullSpherical; // 0x3cc
        UnityEngine::Rendering::CoreCameraValues coreCameraValues; // 0x3d0
        uint32_t cameraType; // 0x3dc
        int32_t projectionIsOblique; // 0x3e0
        int32_t isImplicitProjectionMatrix; // 0x3e4

        UnityEngine::Plane GetShadowCullingPlane(int32_t index) { return il2cpp::call<UnityEngine::Plane(*)(CameraProperties*, int32_t)>(0x14ebb0)(this, index); } // 0x14ebb0
        UnityEngine::Plane GetCameraCullingPlane(int32_t index) { return il2cpp::call<UnityEngine::Plane(*)(CameraProperties*, int32_t)>(0x14eb70)(this, index); } // 0x14eb70

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::CameraProperties> {
        };

}


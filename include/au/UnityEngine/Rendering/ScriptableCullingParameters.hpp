#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Rendering/LODParameters.hpp>
#include <au/UnityEngine/Rendering/ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer.hpp>
#include <au/UnityEngine/Rendering/ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Rendering/CullingOptions.hpp>
#include <au/UnityEngine/Rendering/ReflectionProbeSortingCriteria.hpp>
#include <au/UnityEngine/Rendering/CameraProperties.hpp>

namespace UnityEngine::Rendering
{
    struct ScriptableCullingParameters : ark::meta<ScriptableCullingParameters>
    {
        static int32_t maximumCullingPlaneCount(); // 0x0
        static int32_t layerCount(); // 0x4
        int32_t m_IsOrthographic; // 0x8
        UnityEngine::Rendering::LODParameters m_LODParameters; // 0xc
        UnityEngine::Rendering::ScriptableCullingParameters+<m_CullingPlanes>e__FixedBuffer m_CullingPlanes; // 0x28
        int32_t m_CullingPlaneCount; // 0xc8
        uint32_t m_CullingMask; // 0xcc
        uint64_t m_SceneMask; // 0xd0
        UnityEngine::Rendering::ScriptableCullingParameters+<m_LayerFarCullDistances>e__FixedBuffer m_LayerFarCullDistances; // 0xd8
        int32_t m_LayerCull; // 0x158
        UnityEngine::Matrix4x4 m_CullingMatrix; // 0x15c
        UnityEngine::Vector3 m_Origin; // 0x19c
        float m_ShadowDistance; // 0x1a8
        UnityEngine::Rendering::CullingOptions m_CullingOptions; // 0x1ac
        UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria; // 0x1b0
        UnityEngine::Rendering::CameraProperties m_CameraProperties; // 0x1b4
        float m_AccurateOcclusionThreshold; // 0x594
        int32_t m_MaximumPortalCullingJobs; // 0x598
        UnityEngine::Matrix4x4 m_StereoViewMatrix; // 0x59c
        UnityEngine::Matrix4x4 m_StereoProjectionMatrix; // 0x5dc
        float m_StereoSeparationDistance; // 0x61c
        int32_t m_maximumVisibleLights; // 0x620

        int32_t get_cullingPlaneCount() { return il2cpp::call<int32_t(*)(ScriptableCullingParameters*)>(0x1426d0)(this); } // 0x1426d0
        float GetLayerCullingDistance(int32_t layerIndex) { return il2cpp::call<float(*)(ScriptableCullingParameters*, int32_t)>(0x1426c0)(this, layerIndex); } // 0x1426c0
        UnityEngine::Plane GetCullingPlane(int32_t index) { return il2cpp::call<UnityEngine::Plane(*)(ScriptableCullingParameters*, int32_t)>(0x142680)(this, index); } // 0x142680
        void cctor() { return il2cpp::call<void(*)(ScriptableCullingParameters*)>(0xee6650)(this); } // 0xee6650

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rendering::ScriptableCullingParameters> {
        int32_t maximumCullingPlaneCount; // 0x0
        int32_t layerCount; // 0x4
        };

}



int32_t UnityEngine::Rendering::ScriptableCullingParameters::maximumCullingPlaneCount() { return statics()->maximumCullingPlaneCount; }; // 0x0

int32_t UnityEngine::Rendering::ScriptableCullingParameters::layerCount() { return statics()->layerCount; }; // 0x4
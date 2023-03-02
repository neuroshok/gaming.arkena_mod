#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/LightSourceRendererType.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/RenderTextureFormat.hpp>
#include <au/LightSourceRenderer.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/UnityEngine/MeshFilter.hpp>
#include <au/Controller.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Transform.hpp>

namespace 
{
    struct LightSource : ark::meta<LightSource, UnityEngine::MonoBehaviour>
    {
        static System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::NoShadowBehaviour>* NoShadows(); // 0x0
        static System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::OneWayShadows>* OneWayShadows(); // 0x4
        float viewDistance; // 0xc
        UnityEngine::Material* lightCutawayMaterial; // 0x10
        UnityEngine::Mesh* lightChildMesh; // 0x14
        au::LightSourceRendererType rendererType; // 0x18
        bool useFlashlight; // 0x1c
        UnityEngine::Material* gpuShadowCasterMaterial; // 0x20
        int32_t gpuShadowmapResolution; // 0x24
        UnityEngine::RenderTextureFormat gpuPreferredRTFormat; // 0x28
        int32_t raycastMinRayCount; // 0x2c
        float raycastTolerance; // 0x30
        au::LightSourceRenderer* renderer; // 0x34
        UnityEngine::GameObject* lightChild; // 0x38
        UnityEngine::MeshFilter* lightChildMeshFilter; // 0x3c
        au::Controller* controller; // 0x40
        float flashlightSize; // 0x44
        UnityEngine::Vector2 lastFlashlightDirection; // 0x48
        UnityEngine::Vector3 lightOffset; // 0x50
        UnityEngine::Transform* touchFlashlightTarget; // 0x5c

        float get_ViewDistance() { return il2cpp::call<float(*)(LightSource*)>(0x2c49d0)(this); } // 0x2c49d0
        float get_PlayerRadius() { return il2cpp::call<float(*)(LightSource*)>(0x6027a0)(this); } // 0x6027a0
        UnityEngine::Material* get_LightCutawayMaterial() { return il2cpp::call<UnityEngine::Material*(*)(LightSource*)>(0x2b40b0)(this); } // 0x2b40b0
        UnityEngine::GameObject* get_LightChild() { return il2cpp::call<UnityEngine::GameObject*(*)(LightSource*)>(0x2c92b0)(this); } // 0x2c92b0
        UnityEngine::Mesh* get_LightChildMesh() { return il2cpp::call<UnityEngine::Mesh*(*)(LightSource*)>(0x2c5100)(this); } // 0x2c5100
        UnityEngine::MeshFilter* get_LightChildMeshFilter() { return il2cpp::call<UnityEngine::MeshFilter*(*)(LightSource*)>(0x355b90)(this); } // 0x355b90
        UnityEngine::Vector3 get_LightOffset() { return il2cpp::call<UnityEngine::Vector3(*)(LightSource*)>(0x6115a0)(this); } // 0x6115a0
        float get_FlashlightSize() { return il2cpp::call<float(*)(LightSource*)>(0x60fb30)(this); } // 0x60fb30
        UnityEngine::Material* get_GpuShadowCasterMaterial() { return il2cpp::call<UnityEngine::Material*(*)(LightSource*)>(0x2d8c00)(this); } // 0x2d8c00
        int32_t get_GpuShadowmapResolution() { return il2cpp::call<int32_t(*)(LightSource*)>(0x2e3cb0)(this); } // 0x2e3cb0
        UnityEngine::RenderTextureFormat get_GpuPreferredRTFormat() { return il2cpp::call<UnityEngine::RenderTextureFormat(*)(LightSource*)>(0x302440)(this); } // 0x302440
        int32_t get_RaycastMinimumRayCount() { return il2cpp::call<int32_t(*)(LightSource*)>(0x3027c0)(this); } // 0x3027c0
        float get_RaycastTolerance() { return il2cpp::call<float(*)(LightSource*)>(0x371010)(this); } // 0x371010
        void Awake() { return il2cpp::call<void(*)(LightSource*)>(0x60fa30)(this); } // 0x60fa30
        void Update() { return il2cpp::call<void(*)(LightSource*)>(0x611120)(this); } // 0x611120
        void Initialize(UnityEngine::Vector3 lightOffset) { return il2cpp::call<void(*)(LightSource*, UnityEngine::Vector3)>(0x610da0)(this, lightOffset); } // 0x610da0
        void SetViewDistance(float distance) { return il2cpp::call<void(*)(LightSource*, float)>(0x2c4a40)(this, distance); } // 0x2c4a40
        void SetupLightingForGameplay(bool enableFlashlight, float flashlightSize, UnityEngine::Transform* touchFlashlightTarget) { return il2cpp::call<void(*)(LightSource*, bool, float, UnityEngine::Transform*)>(0x610f30)(this, enableFlashlight, flashlightSize, touchFlashlightTarget); } // 0x610f30
        float CalculateFlashlightSize() { return il2cpp::call<float(*)(LightSource*)>(0x60fb30)(this); } // 0x60fb30
        void SetFlashlightEnabled(bool enabled) { return il2cpp::call<void(*)(LightSource*, bool)>(0x610ec0)(this, enabled); } // 0x610ec0
        void UpdateShadowType() { return il2cpp::call<void(*)(LightSource*)>(0x611070)(this); } // 0x611070
        void UpdateFlashlightAngle() { return il2cpp::call<void(*)(LightSource*)>(0x610f70)(this); } // 0x610f70
        float GetFlashlightAngle() { return il2cpp::call<float(*)(LightSource*)>(0x60fff0)(this); } // 0x60fff0
        float GetVirtualJFAngle() { return il2cpp::call<float(*)(LightSource*)>(0x610b90)(this); } // 0x610b90
        float GetKeyboardMouseFAngle() { return il2cpp::call<float(*)(LightSource*)>(0x610590)(this); } // 0x610590
        float GetControllerFAngle() { return il2cpp::call<float(*)(LightSource*)>(0x60fe20)(this); } // 0x60fe20
        float GetScreenFAngle() { return il2cpp::call<float(*)(LightSource*)>(0x6106d0)(this); } // 0x6106d0
        float GetAngleDot() { return il2cpp::call<float(*)(LightSource*)>(0x60fb80)(this); } // 0x60fb80
        float GetAngleMove() { return il2cpp::call<float(*)(LightSource*)>(0x60fc90)(this); } // 0x60fc90
        void ctor() { return il2cpp::call<void(*)(LightSource*)>(0x611520)(this); } // 0x611520
        void cctor() { return il2cpp::call<void(*)(LightSource*)>(0x611480)(this); } // 0x611480

    };

}
namespace ark {

        template<> struct meta_statics<::LightSource> {
        System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::NoShadowBehaviour>* NoShadows; // 0x0
        System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::OneWayShadows>* OneWayShadows; // 0x4
        };

}



System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::NoShadowBehaviour>* ::LightSource::NoShadows() { return statics()->NoShadows; }; // 0x0

System::Collections::Generic::Dictionary<UnityEngine::GameObject, au::OneWayShadows>* ::LightSource::OneWayShadows() { return statics()->OneWayShadows; }; // 0x4
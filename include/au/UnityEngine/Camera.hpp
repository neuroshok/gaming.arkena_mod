#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>
#include <au/UnityEngine/Camera/CameraCallback.hpp>
#include <au/UnityEngine/RenderingPath.hpp>
#include <au/UnityEngine/Rendering/OpaqueSortMode.hpp>
#include <au/UnityEngine/TransparencySortMode.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/CameraType.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/CameraClearFlags.hpp>
#include <au/UnityEngine/DepthTextureMode.hpp>
#include <au/UnityEngine/Shader.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Camera/GateFitMode.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/RenderTexture.hpp>
#include <au/UnityEngine/RenderBuffer.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/SceneManagement/Scene.hpp>
#include <au/UnityEngine/StereoTargetEyeMask.hpp>
#include <au/UnityEngine/Camera/StereoscopicEye.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Cubemap.hpp>
#include <au/UnityEngine/RenderTexture.hpp>
#include <au/UnityEngine/Shader.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <il2cpp/core.hpp>
#include <au/UnityEngine/Camera.hpp>
#include <au/UnityEngine/Rendering/CameraEvent.hpp>
#include <au/UnityEngine/Rendering/ScriptableCullingParameters.hpp>
#include <au/UnityEngine/Camera.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/RenderBuffer.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/SceneManagement/Scene.hpp>
#include <au/UnityEngine/Camera/StereoscopicEye.hpp>

namespace UnityEngine
{
    struct Camera : ark::meta<Camera, UnityEngine::Behaviour>
    {
        static UnityEngine::Camera+CameraCallback*NESTEDTYPE onPreCull(); // 0x0
        static UnityEngine::Camera+CameraCallback*NESTEDTYPE onPreRender(); // 0x4
        static UnityEngine::Camera+CameraCallback*NESTEDTYPE onPostRender(); // 0x8

        void ctor() { return il2cpp::call<void(*)(Camera*)>(0xf4e060)(this); } // 0xf4e060
        float get_nearClipPlane() { return il2cpp::call<float(*)(Camera*)>(0xf52fe0)(this); } // 0xf52fe0
        void set_nearClipPlane(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53db0)(this, value); } // 0xf53db0
        float get_farClipPlane() { return il2cpp::call<float(*)(Camera*)>(0xf52e30)(this); } // 0xf52e30
        void set_farClipPlane(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53b80)(this, value); } // 0xf53b80
        float get_fieldOfView() { return il2cpp::call<float(*)(Camera*)>(0xf52e60)(this); } // 0xf52e60
        void set_fieldOfView(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53bc0)(this, value); } // 0xf53bc0
        UnityEngine::RenderingPath get_renderingPath() { return il2cpp::call<UnityEngine::RenderingPath(*)(Camera*)>(0xf53390)(this); } // 0xf53390
        void set_renderingPath(UnityEngine::RenderingPath value) { return il2cpp::call<void(*)(Camera*, UnityEngine::RenderingPath)>(0xf54040)(this, value); } // 0xf54040
        UnityEngine::RenderingPath get_actualRenderingPath() { return il2cpp::call<UnityEngine::RenderingPath(*)(Camera*)>(0xf529a0)(this); } // 0xf529a0
        void Reset() { return il2cpp::call<void(*)(Camera*)>(0xf51ba0)(this); } // 0xf51ba0
        bool get_allowHDR() { return il2cpp::call<bool(*)(Camera*)>(0xf52a80)(this); } // 0xf52a80
        void set_allowHDR(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf538c0)(this, value); } // 0xf538c0
        bool get_allowMSAA() { return il2cpp::call<bool(*)(Camera*)>(0xf52ab0)(this); } // 0xf52ab0
        void set_allowMSAA(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf538f0)(this, value); } // 0xf538f0
        bool get_allowDynamicResolution() { return il2cpp::call<bool(*)(Camera*)>(0xf52a50)(this); } // 0xf52a50
        void set_allowDynamicResolution(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf53890)(this, value); } // 0xf53890
        bool get_forceIntoRenderTexture() { return il2cpp::call<bool(*)(Camera*)>(0xf52ec0)(this); } // 0xf52ec0
        void set_forceIntoRenderTexture(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf53c40)(this, value); } // 0xf53c40
        float get_orthographicSize() { return il2cpp::call<float(*)(Camera*)>(0xf530b0)(this); } // 0xf530b0
        void set_orthographicSize(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53e80)(this, value); } // 0xf53e80
        bool get_orthographic() { return il2cpp::call<bool(*)(Camera*)>(0xf530e0)(this); } // 0xf530e0
        void set_orthographic(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf53ec0)(this, value); } // 0xf53ec0
        UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode() { return il2cpp::call<UnityEngine::Rendering::OpaqueSortMode(*)(Camera*)>(0xf53080)(this); } // 0xf53080
        void set_opaqueSortMode(UnityEngine::Rendering::OpaqueSortMode value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::OpaqueSortMode)>(0xf53e50)(this, value); } // 0xf53e50
        UnityEngine::TransparencySortMode get_transparencySortMode() { return il2cpp::call<UnityEngine::TransparencySortMode(*)(Camera*)>(0xf536f0)(this); } // 0xf536f0
        void set_transparencySortMode(UnityEngine::TransparencySortMode value) { return il2cpp::call<void(*)(Camera*, UnityEngine::TransparencySortMode)>(0xf542a0)(this, value); } // 0xf542a0
        UnityEngine::Vector3 get_transparencySortAxis() { return il2cpp::call<UnityEngine::Vector3(*)(Camera*)>(0xf536b0)(this); } // 0xf536b0
        void set_transparencySortAxis(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3)>(0xf54270)(this, value); } // 0xf54270
        void ResetTransparencySortSettings() { return il2cpp::call<void(*)(Camera*)>(0xf51b40)(this); } // 0xf51b40
        float get_depth() { return il2cpp::call<float(*)(Camera*)>(0xf52dd0)(this); } // 0xf52dd0
        void set_depth(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53b10)(this, value); } // 0xf53b10
        float get_aspect() { return il2cpp::call<float(*)(Camera*)>(0xf52b10)(this); } // 0xf52b10
        void set_aspect(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53920)(this, value); } // 0xf53920
        void ResetAspect() { return il2cpp::call<void(*)(Camera*)>(0xf51a20)(this); } // 0xf51a20
        UnityEngine::Vector3 get_velocity() { return il2cpp::call<UnityEngine::Vector3(*)(Camera*)>(0xf537e0)(this); } // 0xf537e0
        int32_t get_cullingMask() { return il2cpp::call<int32_t(*)(Camera*)>(0xf52ce0)(this); } // 0xf52ce0
        void set_cullingMask(int32_t value) { return il2cpp::call<void(*)(Camera*, int32_t)>(0xf53a50)(this, value); } // 0xf53a50
        int32_t get_eventMask() { return il2cpp::call<int32_t(*)(Camera*)>(0xf52e00)(this); } // 0xf52e00
        void set_eventMask(int32_t value) { return il2cpp::call<void(*)(Camera*, int32_t)>(0xf53b50)(this, value); } // 0xf53b50
        bool get_layerCullSpherical() { return il2cpp::call<bool(*)(Camera*)>(0xf52f20)(this); } // 0xf52f20
        void set_layerCullSpherical(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf53d20)(this, value); } // 0xf53d20
        UnityEngine::CameraType get_cameraType() { return il2cpp::call<UnityEngine::CameraType(*)(Camera*)>(0xf52c20)(this); } // 0xf52c20
        void set_cameraType(UnityEngine::CameraType value) { return il2cpp::call<void(*)(Camera*, UnityEngine::CameraType)>(0xf539c0)(this, value); } // 0xf539c0
        uint64_t get_overrideSceneCullingMask() { return il2cpp::call<uint64_t(*)(Camera*)>(0xf53110)(this); } // 0xf53110
        void set_overrideSceneCullingMask(uint64_t value) { return il2cpp::call<void(*)(Camera*, uint64_t)>(0xf53ef0)(this, value); } // 0xf53ef0
        uint64_t get_sceneCullingMask() { return il2cpp::call<uint64_t(*)(Camera*)>(0xf53420)(this); } // 0xf53420
        cs::array<float>* GetLayerCullDistances() { return il2cpp::call<cs::array<float>*(*)(Camera*)>(0xf51520)(this); } // 0xf51520
        void SetLayerCullDistances(cs::array<float>* d) { return il2cpp::call<void(*)(Camera*, cs::array<float>*)>(0xf51ef0)(this, d); } // 0xf51ef0
        cs::array<float>* get_layerCullDistances() { return il2cpp::call<cs::array<float>*(*)(Camera*)>(0xf51520)(this); } // 0xf51520
        void set_layerCullDistances(cs::array<float>* value) { return il2cpp::call<void(*)(Camera*, cs::array<float>*)>(0xf53ca0)(this, value); } // 0xf53ca0
        int32_t get_PreviewCullingLayer() { return il2cpp::call<int32_t(*)(Camera*)>(0xf52950)(this); } // 0xf52950
        bool get_useOcclusionCulling() { return il2cpp::call<bool(*)(Camera*)>(0xf53750)(this); } // 0xf53750
        void set_useOcclusionCulling(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf54300)(this, value); } // 0xf54300
        UnityEngine::Matrix4x4 get_cullingMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf52d40)(this); } // 0xf52d40
        void set_cullingMatrix(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53ab0)(this, value); } // 0xf53ab0
        void ResetCullingMatrix() { return il2cpp::call<void(*)(Camera*)>(0xf51a50)(this); } // 0xf51a50
        UnityEngine::Color get_backgroundColor() { return il2cpp::call<UnityEngine::Color(*)(Camera*)>(0xf52b70)(this); } // 0xf52b70
        void set_backgroundColor(UnityEngine::Color value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Color)>(0xf53990)(this, value); } // 0xf53990
        UnityEngine::CameraClearFlags get_clearFlags() { return il2cpp::call<UnityEngine::CameraClearFlags(*)(Camera*)>(0xf52c50)(this); } // 0xf52c50
        void set_clearFlags(UnityEngine::CameraClearFlags value) { return il2cpp::call<void(*)(Camera*, UnityEngine::CameraClearFlags)>(0xf539f0)(this, value); } // 0xf539f0
        UnityEngine::DepthTextureMode get_depthTextureMode() { return il2cpp::call<UnityEngine::DepthTextureMode(*)(Camera*)>(0xf52da0)(this); } // 0xf52da0
        void set_depthTextureMode(UnityEngine::DepthTextureMode value) { return il2cpp::call<void(*)(Camera*, UnityEngine::DepthTextureMode)>(0xf53ae0)(this, value); } // 0xf53ae0
        bool get_clearStencilAfterLightingPass() { return il2cpp::call<bool(*)(Camera*)>(0xf52c80)(this); } // 0xf52c80
        void set_clearStencilAfterLightingPass(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf53a20)(this, value); } // 0xf53a20
        void SetReplacementShader(UnityEngine::Shader* shader, cs::string* replacementTag) { return il2cpp::call<void(*)(Camera*, UnityEngine::Shader*, cs::string*)>(0xf51f20)(this, shader, replacementTag); } // 0xf51f20
        void ResetReplacementShader() { return il2cpp::call<void(*)(Camera*)>(0xf51ab0)(this); } // 0xf51ab0
        UnityEngine::Camera+ProjectionMatrixMode get_projectionMatrixMode() { return il2cpp::call<UnityEngine::Camera+ProjectionMatrixMode(*)(Camera*)>(0xf53280)(this); } // 0xf53280
        bool get_usePhysicalProperties() { return il2cpp::call<bool(*)(Camera*)>(0xf53780)(this); } // 0xf53780
        void set_usePhysicalProperties(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf54330)(this, value); } // 0xf54330
        UnityEngine::Vector2 get_sensorSize() { return il2cpp::call<UnityEngine::Vector2(*)(Camera*)>(0xf534f0)(this); } // 0xf534f0
        void set_sensorSize(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf54100)(this, value); } // 0xf54100
        UnityEngine::Vector2 get_lensShift() { return il2cpp::call<UnityEngine::Vector2(*)(Camera*)>(0xf52f80)(this); } // 0xf52f80
        void set_lensShift(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf53d80)(this, value); } // 0xf53d80
        float get_focalLength() { return il2cpp::call<float(*)(Camera*)>(0xf52e90)(this); } // 0xf52e90
        void set_focalLength(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf53c00)(this, value); } // 0xf53c00
        UnityEngine::Camera+GateFitMode get_gateFit() { return il2cpp::call<UnityEngine::Camera+GateFitMode(*)(Camera*)>(0xf52ef0)(this); } // 0xf52ef0
        void set_gateFit(UnityEngine::Camera+GateFitMode value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+GateFitMode)>(0xf53c70)(this, value); } // 0xf53c70
        float GetGateFittedFieldOfView() { return il2cpp::call<float(*)(Camera*)>(0xf51480)(this); } // 0xf51480
        UnityEngine::Vector2 GetGateFittedLensShift() { return il2cpp::call<UnityEngine::Vector2(*)(Camera*)>(0xf514e0)(this); } // 0xf514e0
        UnityEngine::Vector3 GetLocalSpaceAim() { return il2cpp::call<UnityEngine::Vector3(*)(Camera*)>(0xf51580)(this); } // 0xf51580
        UnityEngine::Rect get_rect() { return il2cpp::call<UnityEngine::Rect(*)(Camera*)>(0xf53350)(this); } // 0xf53350
        void set_rect(UnityEngine::Rect value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf54010)(this, value); } // 0xf54010
        UnityEngine::Rect get_pixelRect() { return il2cpp::call<UnityEngine::Rect(*)(Camera*)>(0xf531a0)(this); } // 0xf531a0
        void set_pixelRect(UnityEngine::Rect value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf53f50)(this, value); } // 0xf53f50
        int32_t get_pixelWidth() { return il2cpp::call<int32_t(*)(Camera*)>(0xf531e0)(this); } // 0xf531e0
        int32_t get_pixelHeight() { return il2cpp::call<int32_t(*)(Camera*)>(0xf53140)(this); } // 0xf53140
        int32_t get_scaledPixelWidth() { return il2cpp::call<int32_t(*)(Camera*)>(0xf533f0)(this); } // 0xf533f0
        int32_t get_scaledPixelHeight() { return il2cpp::call<int32_t(*)(Camera*)>(0xf533c0)(this); } // 0xf533c0
        UnityEngine::RenderTexture* get_targetTexture() { return il2cpp::call<UnityEngine::RenderTexture*(*)(Camera*)>(0xf53650)(this); } // 0xf53650
        void set_targetTexture(UnityEngine::RenderTexture* value) { return il2cpp::call<void(*)(Camera*, UnityEngine::RenderTexture*)>(0xf54210)(this, value); } // 0xf54210
        UnityEngine::RenderTexture* get_activeTexture() { return il2cpp::call<UnityEngine::RenderTexture*(*)(Camera*)>(0xf52970)(this); } // 0xf52970
        int32_t get_targetDisplay() { return il2cpp::call<int32_t(*)(Camera*)>(0xf53620)(this); } // 0xf53620
        void set_targetDisplay(int32_t value) { return il2cpp::call<void(*)(Camera*, int32_t)>(0xf541e0)(this, value); } // 0xf541e0
        void SetTargetBuffersImpl(UnityEngine::RenderBuffer color, UnityEngine::RenderBuffer depth) { return il2cpp::call<void(*)(Camera*, UnityEngine::RenderBuffer, UnityEngine::RenderBuffer)>(0xf52040)(this, color, depth); } // 0xf52040
        void SetTargetBuffers(UnityEngine::RenderBuffer colorBuffer, UnityEngine::RenderBuffer depthBuffer) { return il2cpp::call<void(*)(Camera*, UnityEngine::RenderBuffer, UnityEngine::RenderBuffer)>(0xf52110)(this, colorBuffer, depthBuffer); } // 0xf52110
        void SetTargetBuffersMRTImpl(cs::array<UnityEngine::RenderBuffer>* color, UnityEngine::RenderBuffer depth) { return il2cpp::call<void(*)(Camera*, cs::array<UnityEngine::RenderBuffer>*, UnityEngine::RenderBuffer)>(0xf520a0)(this, color, depth); } // 0xf520a0
        void SetTargetBuffers(cs::array<UnityEngine::RenderBuffer>* colorBuffer, UnityEngine::RenderBuffer depthBuffer) { return il2cpp::call<void(*)(Camera*, cs::array<UnityEngine::RenderBuffer>*, UnityEngine::RenderBuffer)>(0xf520d0)(this, colorBuffer, depthBuffer); } // 0xf520d0
        cs::array<cs::string*>* GetCameraBufferWarnings() { return il2cpp::call<cs::array<cs::string*>*(*)(Camera*)>(0xf51350)(this); } // 0xf51350
        UnityEngine::Matrix4x4 get_cameraToWorldMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf52be0)(this); } // 0xf52be0
        UnityEngine::Matrix4x4 get_worldToCameraMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf53850)(this); } // 0xf53850
        void set_worldToCameraMatrix(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf54390)(this, value); } // 0xf54390
        UnityEngine::Matrix4x4 get_projectionMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf532e0)(this); } // 0xf532e0
        void set_projectionMatrix(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53fb0)(this, value); } // 0xf53fb0
        UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf53040)(this); } // 0xf53040
        void set_nonJitteredProjectionMatrix(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53e20)(this, value); } // 0xf53e20
        bool get_useJitteredProjectionMatrixForTransparentRendering() { return il2cpp::call<bool(*)(Camera*)>(0xf53720)(this); } // 0xf53720
        void set_useJitteredProjectionMatrixForTransparentRendering(bool value) { return il2cpp::call<void(*)(Camera*, bool)>(0xf542d0)(this, value); } // 0xf542d0
        UnityEngine::Matrix4x4 get_previousViewProjectionMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*)>(0xf53240)(this); } // 0xf53240
        void ResetWorldToCameraMatrix() { return il2cpp::call<void(*)(Camera*)>(0xf51b70)(this); } // 0xf51b70
        void ResetProjectionMatrix() { return il2cpp::call<void(*)(Camera*)>(0xf51a80)(this); } // 0xf51a80
        UnityEngine::Matrix4x4 CalculateObliqueMatrix(UnityEngine::Vector4 clipPlane) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*, UnityEngine::Vector4)>(0xf50ee0)(this, clipPlane); } // 0xf50ee0
        UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf52770)(this, position, eye); } // 0xf52770
        UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf52900)(this, position, eye); } // 0xf52900
        UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf526e0)(this, position, eye); } // 0xf526e0
        UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf51e20)(this, position, eye); } // 0xf51e20
        UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf527c0)(this, position); } // 0xf527c0
        UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf52880)(this, position); } // 0xf52880
        UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf52660)(this, position); } // 0xf52660
        UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf51e70)(this, position); } // 0xf51e70
        UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf51d90)(this, position); } // 0xf51d90
        UnityEngine::Vector3 ViewportToScreenPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Camera*, UnityEngine::Vector3)>(0xf525d0)(this, position); } // 0xf525d0
        UnityEngine::Vector2 GetFrustumPlaneSizeAt(float distance) { return il2cpp::call<UnityEngine::Vector2(*)(Camera*, float)>(0xf51430)(this, distance); } // 0xf51430
        UnityEngine::Ray ViewportPointToRay(UnityEngine::Vector2 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector2, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf52550)(this, pos, eye); } // 0xf52550
        UnityEngine::Ray ViewportPointToRay(UnityEngine::Vector3 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf524d0)(this, pos, eye); } // 0xf524d0
        UnityEngine::Ray ViewportPointToRay(UnityEngine::Vector3 pos) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector3)>(0xf52450)(this, pos); } // 0xf52450
        UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector2 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector2, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf51d10)(this, pos, eye); } // 0xf51d10
        UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf51c10)(this, pos, eye); } // 0xf51c10
        UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos) { return il2cpp::call<UnityEngine::Ray(*)(Camera*, UnityEngine::Vector3)>(0xf51c90)(this, pos); } // 0xf51c90
        void CalculateFrustumCornersInternal(UnityEngine::Rect viewport, float z, UnityEngine::Camera+MonoOrStereoscopicEye eye, cs::array<UnityEngine::Vector3>* outCorners) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect, float, UnityEngine::Camera+MonoOrStereoscopicEye, cs::array<UnityEngine::Vector3>*)>(0xf50d80)(this, viewport, z, eye, outCorners); } // 0xf50d80
        void CalculateFrustumCorners(UnityEngine::Rect viewport, float z, UnityEngine::Camera+MonoOrStereoscopicEye eye, cs::array<UnityEngine::Vector3>* outCorners) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect, float, UnityEngine::Camera+MonoOrStereoscopicEye, cs::array<UnityEngine::Vector3>*)>(0xf50dc0)(this, viewport, z, eye, outCorners); } // 0xf50dc0
        void CalculateProjectionMatrixFromPhysicalPropertiesInternal(UnityEngine::Matrix4x4 output, float focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, float nearClip, float farClip, float gateAspect, UnityEngine::Camera+GateFitMode gateFitMode) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4, float, UnityEngine::Vector2, UnityEngine::Vector2, float, float, float, UnityEngine::Camera+GateFitMode)>(0xf50f90)(this, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode); } // 0xf50f90
        void CalculateProjectionMatrixFromPhysicalProperties(UnityEngine::Matrix4x4 output, float focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, float nearClip, float farClip, UnityEngine::Camera+GateFitParameters gateFitParameters) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4, float, UnityEngine::Vector2, UnityEngine::Vector2, float, float, UnityEngine::Camera+GateFitParameters)>(0xf51000)(this, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateFitParameters); } // 0xf51000
        float FocalLengthToFieldOfView(float focalLength, float sensorSize) { return il2cpp::call<float(*)(Camera*, float, float)>(0xf511f0)(this, focalLength, sensorSize); } // 0xf511f0
        float FieldOfViewToFocalLength(float fieldOfView, float sensorSize) { return il2cpp::call<float(*)(Camera*, float, float)>(0xf510e0)(this, fieldOfView, sensorSize); } // 0xf510e0
        float HorizontalToVerticalFieldOfView(float horizontalFieldOfView, float aspectRatio) { return il2cpp::call<float(*)(Camera*, float, float)>(0xf51710)(this, horizontalFieldOfView, aspectRatio); } // 0xf51710
        float VerticalToHorizontalFieldOfView(float verticalFieldOfView, float aspectRatio) { return il2cpp::call<float(*)(Camera*, float, float)>(0xf523c0)(this, verticalFieldOfView, aspectRatio); } // 0xf523c0
        UnityEngine::Camera* get_main() { return il2cpp::call<UnityEngine::Camera*(*)(Camera*)>(0xf52fc0)(this); } // 0xf52fc0
        UnityEngine::Camera* get_current() { return il2cpp::call<UnityEngine::Camera*(*)(Camera*)>(0xf52d80)(this); } // 0xf52d80
        UnityEngine::SceneManagement::Scene get_scene() { return il2cpp::call<UnityEngine::SceneManagement::Scene(*)(Camera*)>(0xf53480)(this); } // 0xf53480
        void set_scene(UnityEngine::SceneManagement::Scene value) { return il2cpp::call<void(*)(Camera*, UnityEngine::SceneManagement::Scene)>(0xf540a0)(this, value); } // 0xf540a0
        bool get_stereoEnabled() { return il2cpp::call<bool(*)(Camera*)>(0xf53590)(this); } // 0xf53590
        float get_stereoSeparation() { return il2cpp::call<float(*)(Camera*)>(0xf535c0)(this); } // 0xf535c0
        void set_stereoSeparation(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf54170)(this, value); } // 0xf54170
        float get_stereoConvergence() { return il2cpp::call<float(*)(Camera*)>(0xf53560)(this); } // 0xf53560
        void set_stereoConvergence(float value) { return il2cpp::call<void(*)(Camera*, float)>(0xf54130)(this, value); } // 0xf54130
        bool get_areVRStereoViewMatricesWithinSingleCullTolerance() { return il2cpp::call<bool(*)(Camera*)>(0xf52ae0)(this); } // 0xf52ae0
        UnityEngine::StereoTargetEyeMask get_stereoTargetEye() { return il2cpp::call<UnityEngine::StereoTargetEyeMask(*)(Camera*)>(0xf535f0)(this); } // 0xf535f0
        void set_stereoTargetEye(UnityEngine::StereoTargetEyeMask value) { return il2cpp::call<void(*)(Camera*, UnityEngine::StereoTargetEyeMask)>(0xf541b0)(this, value); } // 0xf541b0
        UnityEngine::Camera+MonoOrStereoscopicEye get_stereoActiveEye() { return il2cpp::call<UnityEngine::Camera+MonoOrStereoscopicEye(*)(Camera*)>(0xf53530)(this); } // 0xf53530
        UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(UnityEngine::Camera+StereoscopicEye eye) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*, UnityEngine::Camera+StereoscopicEye)>(0xf515f0)(this, eye); } // 0xf515f0
        UnityEngine::Matrix4x4 GetStereoViewMatrix(UnityEngine::Camera+StereoscopicEye eye) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*, UnityEngine::Camera+StereoscopicEye)>(0xf516d0)(this, eye); } // 0xf516d0
        void CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine::Camera+StereoscopicEye eye) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye)>(0xf510b0)(this, eye); } // 0xf510b0
        UnityEngine::Matrix4x4 GetStereoProjectionMatrix(UnityEngine::Camera+StereoscopicEye eye) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Camera*, UnityEngine::Camera+StereoscopicEye)>(0xf51660)(this, eye); } // 0xf51660
        void SetStereoProjectionMatrix(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 matrix) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf51f80)(this, eye, matrix); } // 0xf51f80
        void ResetStereoProjectionMatrices() { return il2cpp::call<void(*)(Camera*)>(0xf51ae0)(this); } // 0xf51ae0
        void SetStereoViewMatrix(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 matrix) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf51fe0)(this, eye, matrix); } // 0xf51fe0
        void ResetStereoViewMatrices() { return il2cpp::call<void(*)(Camera*)>(0xf51b10)(this); } // 0xf51b10
        int32_t GetAllCamerasCount() { return il2cpp::call<int32_t(*)(Camera*)>(0xf51240)(this); } // 0xf51240
        int32_t GetAllCamerasImpl(cs::array<UnityEngine::Camera>* cam) { return il2cpp::call<int32_t(*)(Camera*, cs::array<UnityEngine::Camera>*)>(0xf51260)(this, cam); } // 0xf51260
        int32_t get_allCamerasCount() { return il2cpp::call<int32_t(*)(Camera*)>(0xf51240)(this); } // 0xf51240
        cs::array<UnityEngine::Camera>* get_allCameras() { return il2cpp::call<cs::array<UnityEngine::Camera>*(*)(Camera*)>(0xf529d0)(this); } // 0xf529d0
        int32_t GetAllCameras(cs::array<UnityEngine::Camera>* cameras) { return il2cpp::call<int32_t(*)(Camera*, cs::array<UnityEngine::Camera>*)>(0xf51290)(this, cameras); } // 0xf51290
        bool RenderToCubemapImpl(UnityEngine::Texture* tex, int32_t faceMask) { return il2cpp::call<bool(*)(Camera*, UnityEngine::Texture*, int32_t)>(0xf51960)(this, tex, faceMask); } // 0xf51960
        bool RenderToCubemap(UnityEngine::Cubemap* cubemap, int32_t faceMask) { return il2cpp::call<bool(*)(Camera*, UnityEngine::Cubemap*, int32_t)>(0xf51960)(this, cubemap, faceMask); } // 0xf51960
        bool RenderToCubemap(UnityEngine::Cubemap* cubemap) { return il2cpp::call<bool(*)(Camera*, UnityEngine::Cubemap*)>(0xf51990)(this, cubemap); } // 0xf51990
        bool RenderToCubemap(UnityEngine::RenderTexture* cubemap, int32_t faceMask) { return il2cpp::call<bool(*)(Camera*, UnityEngine::RenderTexture*, int32_t)>(0xf51960)(this, cubemap, faceMask); } // 0xf51960
        bool RenderToCubemap(UnityEngine::RenderTexture* cubemap) { return il2cpp::call<bool(*)(Camera*, UnityEngine::RenderTexture*)>(0xf51990)(this, cubemap); } // 0xf51990
        bool RenderToCubemapEyeImpl(UnityEngine::RenderTexture* cubemap, int32_t faceMask, UnityEngine::Camera+MonoOrStereoscopicEye stereoEye) { return il2cpp::call<bool(*)(Camera*, UnityEngine::RenderTexture*, int32_t, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf51920)(this, cubemap, faceMask, stereoEye); } // 0xf51920
        bool RenderToCubemap(UnityEngine::RenderTexture* cubemap, int32_t faceMask, UnityEngine::Camera+MonoOrStereoscopicEye stereoEye) { return il2cpp::call<bool(*)(Camera*, UnityEngine::RenderTexture*, int32_t, UnityEngine::Camera+MonoOrStereoscopicEye)>(0xf51920)(this, cubemap, faceMask, stereoEye); } // 0xf51920
        void Render() { return il2cpp::call<void(*)(Camera*)>(0xf519f0)(this); } // 0xf519f0
        void RenderWithShader(UnityEngine::Shader* shader, cs::string* replacementTag) { return il2cpp::call<void(*)(Camera*, UnityEngine::Shader*, cs::string*)>(0xf519c0)(this, shader, replacementTag); } // 0xf519c0
        void RenderDontRestore() { return il2cpp::call<void(*)(Camera*)>(0xf518f0)(this); } // 0xf518f0
        void SubmitRenderRequests(System::Collections::Generic::List<UnityEngine::Camera+RenderRequest>* renderRequests) { return il2cpp::call<void(*)(Camera*, System::Collections::Generic::List<UnityEngine::Camera+RenderRequest>*)>(0xf521c0)(this, renderRequests); } // 0xf521c0
        void SubmitRenderRequestsInternal(il2cpp::Il2CppObject* requests) { return il2cpp::call<void(*)(Camera*, il2cpp::Il2CppObject*)>(0xf52190)(this, requests); } // 0xf52190
        void SetupCurrent(UnityEngine::Camera* cur) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera*)>(0xf52160)(this, cur); } // 0xf52160
        void CopyFrom(UnityEngine::Camera* other) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera*)>(0xf51080)(this, other); } // 0xf51080
        int32_t get_commandBufferCount() { return il2cpp::call<int32_t(*)(Camera*)>(0xf52cb0)(this); } // 0xf52cb0
        void RemoveCommandBuffers(UnityEngine::Rendering::CameraEvent evt) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent)>(0xf518c0)(this, evt); } // 0xf518c0
        void RemoveAllCommandBuffers() { return il2cpp::call<void(*)(Camera*)>(0xf51760)(this); } // 0xf51760
        void AddCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*)>(0xf50c10)(this, evt, buffer); } // 0xf50c10
        void AddCommandBufferAsyncImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer, UnityEngine::Rendering::ComputeQueueType queueType) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*, UnityEngine::Rendering::ComputeQueueType)>(0xf50ad0)(this, evt, buffer, queueType); } // 0xf50ad0
        void RemoveCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*)>(0xf51790)(this, evt, buffer); } // 0xf51790
        void AddCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*)>(0xf50c40)(this, evt, buffer); } // 0xf50c40
        void AddCommandBufferAsync(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer, UnityEngine::Rendering::ComputeQueueType queueType) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*, UnityEngine::Rendering::ComputeQueueType)>(0xf50b10)(this, evt, buffer, queueType); } // 0xf50b10
        void RemoveCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rendering::CameraEvent, UnityEngine::Rendering::CommandBuffer*)>(0xf517c0)(this, evt, buffer); } // 0xf517c0
        cs::array<UnityEngine::Rendering::CommandBuffer>* GetCommandBuffers(UnityEngine::Rendering::CameraEvent evt) { return il2cpp::call<cs::array<UnityEngine::Rendering::CommandBuffer>*(*)(Camera*, UnityEngine::Rendering::CameraEvent)>(0xf51380)(this, evt); } // 0xf51380
        void FireOnPreCull(UnityEngine::Camera* cam) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera*)>(0xf51170)(this, cam); } // 0xf51170
        void FireOnPreRender(UnityEngine::Camera* cam) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera*)>(0xf511b0)(this, cam); } // 0xf511b0
        void FireOnPostRender(UnityEngine::Camera* cam) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera*)>(0xf51130)(this, cam); } // 0xf51130
        void OnlyUsedForTesting1() { return il2cpp::call<void(*)(Camera*)>(0x2babf0)(this); } // 0x2babf0
        void OnlyUsedForTesting2() { return il2cpp::call<void(*)(Camera*)>(0x2babf0)(this); } // 0x2babf0
        bool TryGetCullingParameters(UnityEngine::Rendering::ScriptableCullingParameters cullingParameters) { return il2cpp::call<bool(*)(Camera*, UnityEngine::Rendering::ScriptableCullingParameters)>(0xf52350)(this, cullingParameters); } // 0xf52350
        bool TryGetCullingParameters(bool stereoAware, UnityEngine::Rendering::ScriptableCullingParameters cullingParameters) { return il2cpp::call<bool(*)(Camera*, bool, UnityEngine::Rendering::ScriptableCullingParameters)>(0xf52390)(this, stereoAware, cullingParameters); } // 0xf52390
        bool GetCullingParameters_Internal(UnityEngine::Camera* camera, bool stereoAware, UnityEngine::Rendering::ScriptableCullingParameters cullingParameters, int32_t managedCullingParametersSize) { return il2cpp::call<bool(*)(Camera*, UnityEngine::Camera*, bool, UnityEngine::Rendering::ScriptableCullingParameters, int32_t)>(0xf513b0)(this, camera, stereoAware, cullingParameters, managedCullingParametersSize); } // 0xf513b0
        void get_transparencySortAxis_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3)>(0xf53680)(this, ret); } // 0xf53680
        void set_transparencySortAxis_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3)>(0xf54240)(this, value); } // 0xf54240
        void get_velocity_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3)>(0xf537b0)(this, ret); } // 0xf537b0
        void get_cullingMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf52d10)(this, ret); } // 0xf52d10
        void set_cullingMatrix_Injected(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53a80)(this, value); } // 0xf53a80
        void get_backgroundColor_Injected(UnityEngine::Color ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Color)>(0xf52b40)(this, ret); } // 0xf52b40
        void set_backgroundColor_Injected(UnityEngine::Color value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Color)>(0xf53960)(this, value); } // 0xf53960
        void get_sensorSize_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf534c0)(this, ret); } // 0xf534c0
        void set_sensorSize_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf540d0)(this, value); } // 0xf540d0
        void get_lensShift_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf52f50)(this, ret); } // 0xf52f50
        void set_lensShift_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf53d50)(this, value); } // 0xf53d50
        void GetGateFittedLensShift_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2)>(0xf514b0)(this, ret); } // 0xf514b0
        void GetLocalSpaceAim_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3)>(0xf51550)(this, ret); } // 0xf51550
        void get_rect_Injected(UnityEngine::Rect ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf53320)(this, ret); } // 0xf53320
        void set_rect_Injected(UnityEngine::Rect value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf53fe0)(this, value); } // 0xf53fe0
        void get_pixelRect_Injected(UnityEngine::Rect ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf53170)(this, ret); } // 0xf53170
        void set_pixelRect_Injected(UnityEngine::Rect value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect)>(0xf53f20)(this, value); } // 0xf53f20
        void SetTargetBuffersImpl_Injected(UnityEngine::RenderBuffer color, UnityEngine::RenderBuffer depth) { return il2cpp::call<void(*)(Camera*, UnityEngine::RenderBuffer, UnityEngine::RenderBuffer)>(0xf52010)(this, color, depth); } // 0xf52010
        void SetTargetBuffersMRTImpl_Injected(cs::array<UnityEngine::RenderBuffer>* color, UnityEngine::RenderBuffer depth) { return il2cpp::call<void(*)(Camera*, cs::array<UnityEngine::RenderBuffer>*, UnityEngine::RenderBuffer)>(0xf52070)(this, color, depth); } // 0xf52070
        void get_cameraToWorldMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf52bb0)(this, ret); } // 0xf52bb0
        void get_worldToCameraMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53820)(this, ret); } // 0xf53820
        void set_worldToCameraMatrix_Injected(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf54360)(this, value); } // 0xf54360
        void get_projectionMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf532b0)(this, ret); } // 0xf532b0
        void set_projectionMatrix_Injected(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53f80)(this, value); } // 0xf53f80
        void get_nonJitteredProjectionMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53010)(this, ret); } // 0xf53010
        void set_nonJitteredProjectionMatrix_Injected(UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53df0)(this, value); } // 0xf53df0
        void get_previousViewProjectionMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4)>(0xf53210)(this, ret); } // 0xf53210
        void CalculateObliqueMatrix_Injected(UnityEngine::Vector4 clipPlane, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector4, UnityEngine::Matrix4x4)>(0xf50eb0)(this, clipPlane, ret); } // 0xf50eb0
        void WorldToScreenPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Vector3)>(0xf52730)(this, position, eye, ret); } // 0xf52730
        void WorldToViewportPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Vector3)>(0xf52840)(this, position, eye, ret); } // 0xf52840
        void ViewportToWorldPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Vector3)>(0xf52620)(this, position, eye, ret); } // 0xf52620
        void ScreenToWorldPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Vector3)>(0xf51de0)(this, position, eye, ret); } // 0xf51de0
        void ScreenToViewportPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xf51d60)(this, position, ret); } // 0xf51d60
        void ViewportToScreenPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xf525a0)(this, position, ret); } // 0xf525a0
        void GetFrustumPlaneSizeAt_Injected(float distance, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Camera*, float, UnityEngine::Vector2)>(0xf513f0)(this, distance, ret); } // 0xf513f0
        void ViewportPointToRay_Injected(UnityEngine::Vector2 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Ray ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Ray)>(0xf52410)(this, pos, eye, ret); } // 0xf52410
        void ScreenPointToRay_Injected(UnityEngine::Vector2 pos, UnityEngine::Camera+MonoOrStereoscopicEye eye, UnityEngine::Ray ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Vector2, UnityEngine::Camera+MonoOrStereoscopicEye, UnityEngine::Ray)>(0xf51bd0)(this, pos, eye, ret); } // 0xf51bd0
        void CalculateFrustumCornersInternal_Injected(UnityEngine::Rect viewport, float z, UnityEngine::Camera+MonoOrStereoscopicEye eye, cs::array<UnityEngine::Vector3>* outCorners) { return il2cpp::call<void(*)(Camera*, UnityEngine::Rect, float, UnityEngine::Camera+MonoOrStereoscopicEye, cs::array<UnityEngine::Vector3>*)>(0xf50d40)(this, viewport, z, eye, outCorners); } // 0xf50d40
        void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(UnityEngine::Matrix4x4 output, float focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, float nearClip, float farClip, float gateAspect, UnityEngine::Camera+GateFitMode gateFitMode) { return il2cpp::call<void(*)(Camera*, UnityEngine::Matrix4x4, float, UnityEngine::Vector2, UnityEngine::Vector2, float, float, float, UnityEngine::Camera+GateFitMode)>(0xf50f30)(this, output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode); } // 0xf50f30
        void get_scene_Injected(UnityEngine::SceneManagement::Scene ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::SceneManagement::Scene)>(0xf53450)(this, ret); } // 0xf53450
        void set_scene_Injected(UnityEngine::SceneManagement::Scene value) { return il2cpp::call<void(*)(Camera*, UnityEngine::SceneManagement::Scene)>(0xf54070)(this, value); } // 0xf54070
        void GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf515c0)(this, eye, ret); } // 0xf515c0
        void GetStereoViewMatrix_Injected(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf516a0)(this, eye, ret); } // 0xf516a0
        void GetStereoProjectionMatrix_Injected(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf51630)(this, eye, ret); } // 0xf51630
        void SetStereoProjectionMatrix_Injected(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 matrix) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf51f50)(this, eye, matrix); } // 0xf51f50
        void SetStereoViewMatrix_Injected(UnityEngine::Camera+StereoscopicEye eye, UnityEngine::Matrix4x4 matrix) { return il2cpp::call<void(*)(Camera*, UnityEngine::Camera+StereoscopicEye, UnityEngine::Matrix4x4)>(0xf51fb0)(this, eye, matrix); } // 0xf51fb0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Camera> {
        UnityEngine::Camera+CameraCallback*NESTEDTYPE onPreCull; // 0x0
        UnityEngine::Camera+CameraCallback*NESTEDTYPE onPreRender; // 0x4
        UnityEngine::Camera+CameraCallback*NESTEDTYPE onPostRender; // 0x8
        };

}



UnityEngine::Camera+CameraCallback*NESTEDTYPE UnityEngine::Camera::onPreCull() { return statics()->onPreCull; }; // 0x0

UnityEngine::Camera+CameraCallback*NESTEDTYPE UnityEngine::Camera::onPreRender() { return statics()->onPreRender; }; // 0x4

UnityEngine::Camera+CameraCallback*NESTEDTYPE UnityEngine::Camera::onPostRender() { return statics()->onPostRender; }; // 0x8
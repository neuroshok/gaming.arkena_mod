#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Shader.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Rendering/ShaderPropertyFlags.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/MaterialGlobalIlluminationFlags.hpp>
#include <au/UnityEngine/Material.hpp>
#include <cs/array.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <cs/string.hpp>

namespace UnityEngine
{
    struct Material : ark::meta<Material, UnityEngine::Object>
    {

        UnityEngine::Material* Create(cs::string* scriptContents) { return il2cpp::call<UnityEngine::Material*(*)(Material*, cs::string*)>(0xf5f2c0)(this, scriptContents); } // 0xf5f2c0
        void CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*, UnityEngine::Shader*)>(0xf5f260)(this, self, shader); } // 0xf5f260
        void CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*, UnityEngine::Material*)>(0xf5f230)(this, self, source); } // 0xf5f230
        void CreateWithString(UnityEngine::Material* self) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*)>(0xf5f290)(this, self); } // 0xf5f290
        void ctor(UnityEngine::Shader* shader) { return il2cpp::call<void(*)(Material*, UnityEngine::Shader*)>(0xf61e50)(this, shader); } // 0xf61e50
        void ctor(UnityEngine::Material* source) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*)>(0xf61dd0)(this, source); } // 0xf61dd0
        void ctor(cs::string* contents) { return il2cpp::call<void(*)(Material*, cs::string*)>(0xf61d60)(this, contents); } // 0xf61d60
        UnityEngine::Material* GetDefaultMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Material*)>(0xf5fc10)(this); } // 0xf5fc10
        UnityEngine::Material* GetDefaultParticleMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Material*)>(0xf5fc30)(this); } // 0xf5fc30
        UnityEngine::Material* GetDefaultLineMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Material*)>(0xf5fbf0)(this); } // 0xf5fbf0
        UnityEngine::Shader* get_shader() { return il2cpp::call<UnityEngine::Shader*(*)(Material*)>(0xf622b0)(this); } // 0xf622b0
        void set_shader(UnityEngine::Shader* value) { return il2cpp::call<void(*)(Material*, UnityEngine::Shader*)>(0xf62610)(this, value); } // 0xf62610
        UnityEngine::Color get_color() { return il2cpp::call<UnityEngine::Color(*)(Material*)>(0xf61ed0)(this); } // 0xf61ed0
        void set_color(UnityEngine::Color value) { return il2cpp::call<void(*)(Material*, UnityEngine::Color)>(0xf622e0)(this, value); } // 0xf622e0
        UnityEngine::Texture* get_mainTexture() { return il2cpp::call<UnityEngine::Texture*(*)(Material*)>(0xf62190)(this); } // 0xf62190
        void set_mainTexture(UnityEngine::Texture* value) { return il2cpp::call<void(*)(Material*, UnityEngine::Texture*)>(0xf62550)(this, value); } // 0xf62550
        UnityEngine::Vector2 get_mainTextureOffset() { return il2cpp::call<UnityEngine::Vector2(*)(Material*)>(0xf62010)(this); } // 0xf62010
        void set_mainTextureOffset(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, UnityEngine::Vector2)>(0xf62410)(this, value); } // 0xf62410
        UnityEngine::Vector2 get_mainTextureScale() { return il2cpp::call<UnityEngine::Vector2(*)(Material*)>(0xf620d0)(this); } // 0xf620d0
        void set_mainTextureScale(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, UnityEngine::Vector2)>(0xf624b0)(this, value); } // 0xf624b0
        int32_t GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag) { return il2cpp::call<int32_t(*)(Material*, UnityEngine::Rendering::ShaderPropertyFlags)>(0xf5fc50)(this, attributeFlag); } // 0xf5fc50
        bool HasProperty(int32_t nameID) { return il2cpp::call<bool(*)(Material*, int32_t)>(0xf609b0)(this, nameID); } // 0xf609b0
        bool HasProperty(cs::string* name) { return il2cpp::call<bool(*)(Material*, cs::string*)>(0xf609e0)(this, name); } // 0xf609e0
        int32_t get_renderQueue() { return il2cpp::call<int32_t(*)(Material*)>(0xf62280)(this); } // 0xf62280
        void set_renderQueue(int32_t value) { return il2cpp::call<void(*)(Material*, int32_t)>(0xf625e0)(this, value); } // 0xf625e0
        int32_t get_rawRenderQueue() { return il2cpp::call<int32_t(*)(Material*)>(0xf62250)(this); } // 0xf62250
        void EnableKeyword(cs::string* keyword) { return il2cpp::call<void(*)(Material*, cs::string*)>(0xf5f390)(this, keyword); } // 0xf5f390
        void DisableKeyword(cs::string* keyword) { return il2cpp::call<void(*)(Material*, cs::string*)>(0xf5f360)(this, keyword); } // 0xf5f360
        bool IsKeywordEnabled(cs::string* keyword) { return il2cpp::call<bool(*)(Material*, cs::string*)>(0xf60a20)(this, keyword); } // 0xf60a20
        UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags() { return il2cpp::call<UnityEngine::MaterialGlobalIlluminationFlags(*)(Material*)>(0xf61fe0)(this); } // 0xf61fe0
        void set_globalIlluminationFlags(UnityEngine::MaterialGlobalIlluminationFlags value) { return il2cpp::call<void(*)(Material*, UnityEngine::MaterialGlobalIlluminationFlags)>(0xf623e0)(this, value); } // 0xf623e0
        bool get_doubleSidedGI() { return il2cpp::call<bool(*)(Material*)>(0xf61f80)(this); } // 0xf61f80
        void set_doubleSidedGI(bool value) { return il2cpp::call<void(*)(Material*, bool)>(0xf62380)(this, value); } // 0xf62380
        bool get_enableInstancing() { return il2cpp::call<bool(*)(Material*)>(0xf61fb0)(this); } // 0xf61fb0
        void set_enableInstancing(bool value) { return il2cpp::call<void(*)(Material*, bool)>(0xf623b0)(this, value); } // 0xf623b0
        int32_t get_passCount() { return il2cpp::call<int32_t(*)(Material*)>(0xf62220)(this); } // 0xf62220
        void SetShaderPassEnabled(cs::string* passName, bool enabled) { return il2cpp::call<void(*)(Material*, cs::string*, bool)>(0xf61820)(this, passName, enabled); } // 0xf61820
        bool GetShaderPassEnabled(cs::string* passName) { return il2cpp::call<bool(*)(Material*, cs::string*)>(0xf60210)(this, passName); } // 0xf60210
        cs::string* GetPassName(int32_t pass) { return il2cpp::call<cs::string*(*)(Material*, int32_t)>(0xf601b0)(this, pass); } // 0xf601b0
        int32_t FindPass(cs::string* passName) { return il2cpp::call<int32_t(*)(Material*, cs::string*)>(0xf5f940)(this, passName); } // 0xf5f940
        void SetOverrideTag(cs::string* tag, cs::string* val) { return il2cpp::call<void(*)(Material*, cs::string*, cs::string*)>(0xf61750)(this, tag, val); } // 0xf61750
        cs::string* GetTagImpl(cs::string* tag, bool currentSubShaderOnly, cs::string* defaultValue) { return il2cpp::call<cs::string*(*)(Material*, cs::string*, bool, cs::string*)>(0xf60240)(this, tag, currentSubShaderOnly, defaultValue); } // 0xf60240
        cs::string* GetTag(cs::string* tag, bool searchFallbacks, cs::string* defaultValue) { return il2cpp::call<cs::string*(*)(Material*, cs::string*, bool, cs::string*)>(0xf60280)(this, tag, searchFallbacks, defaultValue); } // 0xf60280
        cs::string* GetTag(cs::string* tag, bool searchFallbacks) { return il2cpp::call<cs::string*(*)(Material*, cs::string*, bool)>(0xf602c0)(this, tag, searchFallbacks); } // 0xf602c0
        void Lerp(UnityEngine::Material* start, UnityEngine::Material* end, float t) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*, UnityEngine::Material*, float)>(0xf60a50)(this, start, end, t); } // 0xf60a50
        bool SetPass(int32_t pass) { return il2cpp::call<bool(*)(Material*, int32_t)>(0xf61780)(this, pass); } // 0xf61780
        void CopyPropertiesFromMaterial(UnityEngine::Material* mat) { return il2cpp::call<void(*)(Material*, UnityEngine::Material*)>(0xf5f200)(this, mat); } // 0xf5f200
        cs::array<cs::string*>* GetShaderKeywords() { return il2cpp::call<cs::array<cs::string*>*(*)(Material*)>(0xf601e0)(this); } // 0xf601e0
        void SetShaderKeywords(cs::array<cs::string*>* names) { return il2cpp::call<void(*)(Material*, cs::array<cs::string*>*)>(0xf617f0)(this, names); } // 0xf617f0
        cs::array<cs::string*>* get_shaderKeywords() { return il2cpp::call<cs::array<cs::string*>*(*)(Material*)>(0xf601e0)(this); } // 0xf601e0
        void set_shaderKeywords(cs::array<cs::string*>* value) { return il2cpp::call<void(*)(Material*, cs::array<cs::string*>*)>(0xf617f0)(this, value); } // 0xf617f0
        int32_t ComputeCRC() { return il2cpp::call<int32_t(*)(Material*)>(0xf5f1d0)(this); } // 0xf5f1d0
        cs::array<cs::string*>* GetTexturePropertyNames() { return il2cpp::call<cs::array<cs::string*>*(*)(Material*)>(0xf60530)(this); } // 0xf60530
        cs::array<int32_t>* GetTexturePropertyNameIDs() { return il2cpp::call<cs::array<int32_t>*(*)(Material*)>(0xf604d0)(this); } // 0xf604d0
        void GetTexturePropertyNamesInternal(il2cpp::Il2CppObject* outNames) { return il2cpp::call<void(*)(Material*, il2cpp::Il2CppObject*)>(0xf60500)(this, outNames); } // 0xf60500
        void GetTexturePropertyNameIDsInternal(il2cpp::Il2CppObject* outNames) { return il2cpp::call<void(*)(Material*, il2cpp::Il2CppObject*)>(0xf60420)(this, outNames); } // 0xf60420
        void GetTexturePropertyNames(System::Collections::Generic::List<cs::string*>* outNames) { return il2cpp::call<void(*)(Material*, System::Collections::Generic::List<cs::string*>*)>(0xf60560)(this, outNames); } // 0xf60560
        void GetTexturePropertyNameIDs(System::Collections::Generic::List<int32_t>* outNames) { return il2cpp::call<void(*)(Material*, System::Collections::Generic::List<int32_t>*)>(0xf60450)(this, outNames); } // 0xf60450
        void SetFloatImpl(int32_t name, float value) { return il2cpp::call<void(*)(Material*, int32_t, float)>(0xf61280)(this, name, value); } // 0xf61280
        void SetColorImpl(int32_t name, UnityEngine::Color value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Color)>(0xf60e20)(this, name, value); } // 0xf60e20
        void SetMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Matrix4x4)>(0xf61650)(this, name, value); } // 0xf61650
        void SetTextureImpl(int32_t name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Texture*)>(0xf61850)(this, name, value); } // 0xf61850
        void SetRenderTextureImpl(int32_t name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xf617b0)(this, name, value, element); } // 0xf617b0
        void SetBufferImpl(int32_t name, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::ComputeBuffer*)>(0xf60a90)(this, name, value); } // 0xf60a90
        void SetGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::GraphicsBuffer*)>(0xf60b00)(this, name, value); } // 0xf60b00
        void SetConstantBufferImpl(int32_t name, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xf60ee0)(this, name, value, offset, size); } // 0xf60ee0
        void SetConstantGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xf60f20)(this, name, value, offset, size); } // 0xf60f20
        float GetFloatImpl(int32_t name) { return il2cpp::call<float(*)(Material*, int32_t)>(0xf5fde0)(this, name); } // 0xf5fde0
        UnityEngine::Color GetColorImpl(int32_t name) { return il2cpp::call<UnityEngine::Color(*)(Material*, int32_t)>(0xf5fb00)(this, name); } // 0xf5fb00
        UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Material*, int32_t)>(0xf60070)(this, name); } // 0xf60070
        UnityEngine::Texture* GetTextureImpl(int32_t name) { return il2cpp::call<UnityEngine::Texture*(*)(Material*, int32_t)>(0xf60320)(this, name); } // 0xf60320
        void SetFloatArrayImpl(int32_t name, cs::array<float>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<float>*, int32_t)>(0xf61000)(this, name, values, count); } // 0xf61000
        void SetVectorArrayImpl(int32_t name, cs::array<UnityEngine::Vector4>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Vector4>*, int32_t)>(0xf61ae0)(this, name, values, count); } // 0xf61ae0
        void SetColorArrayImpl(int32_t name, cs::array<UnityEngine::Color>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Color>*, int32_t)>(0xf60b70)(this, name, values, count); } // 0xf60b70
        void SetMatrixArrayImpl(int32_t name, cs::array<UnityEngine::Matrix4x4>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Matrix4x4>*, int32_t)>(0xf613a0)(this, name, values, count); } // 0xf613a0
        cs::array<float>* GetFloatArrayImpl(int32_t name) { return il2cpp::call<cs::array<float>*(*)(Material*, int32_t)>(0xf5fcb0)(this, name); } // 0xf5fcb0
        cs::array<UnityEngine::Vector4>* GetVectorArrayImpl(int32_t name) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Material*, int32_t)>(0xf60790)(this, name); } // 0xf60790
        cs::array<UnityEngine::Color>* GetColorArrayImpl(int32_t name) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Material*, int32_t)>(0xf5f9a0)(this, name); } // 0xf5f9a0
        cs::array<UnityEngine::Matrix4x4>* GetMatrixArrayImpl(int32_t name) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Material*, int32_t)>(0xf5ff10)(this, name); } // 0xf5ff10
        int32_t GetFloatArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Material*, int32_t)>(0xf5fc80)(this, name); } // 0xf5fc80
        int32_t GetVectorArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Material*, int32_t)>(0xf60760)(this, name); } // 0xf60760
        int32_t GetColorArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Material*, int32_t)>(0xf5f970)(this, name); } // 0xf5f970
        int32_t GetMatrixArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Material*, int32_t)>(0xf5fee0)(this, name); } // 0xf5fee0
        void ExtractFloatArrayImpl(int32_t name, cs::array<float>* val) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<float>*)>(0xf5f520)(this, name, val); } // 0xf5f520
        void ExtractVectorArrayImpl(int32_t name, cs::array<UnityEngine::Vector4>* val) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Vector4>*)>(0xf5f7e0)(this, name, val); } // 0xf5f7e0
        void ExtractColorArrayImpl(int32_t name, cs::array<UnityEngine::Color>* val) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Color>*)>(0xf5f3c0)(this, name, val); } // 0xf5f3c0
        void ExtractMatrixArrayImpl(int32_t name, cs::array<UnityEngine::Matrix4x4>* val) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Matrix4x4>*)>(0xf5f680)(this, name, val); } // 0xf5f680
        UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name) { return il2cpp::call<UnityEngine::Vector4(*)(Material*, int32_t)>(0xf60610)(this, name); } // 0xf60610
        void SetTextureOffsetImpl(int32_t name, UnityEngine::Vector2 offset) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf618b0)(this, name, offset); } // 0xf618b0
        void SetTextureScaleImpl(int32_t name, UnityEngine::Vector2 scale) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf619a0)(this, name, scale); } // 0xf619a0
        void SetFloatArray(int32_t name, cs::array<float>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<float>*, int32_t)>(0xf61110)(this, name, values, count); } // 0xf61110
        void SetVectorArray(int32_t name, cs::array<UnityEngine::Vector4>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Vector4>*, int32_t)>(0xf61be0)(this, name, values, count); } // 0xf61be0
        void SetColorArray(int32_t name, cs::array<UnityEngine::Color>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Color>*, int32_t)>(0xf60bb0)(this, name, values, count); } // 0xf60bb0
        void SetMatrixArray(int32_t name, cs::array<UnityEngine::Matrix4x4>* values, int32_t count) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Matrix4x4>*, int32_t)>(0xf614b0)(this, name, values, count); } // 0xf614b0
        void ExtractFloatArray(int32_t name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<float>*)>(0xf5f550)(this, name, values); } // 0xf5f550
        void ExtractVectorArray(int32_t name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xf5f810)(this, name, values); } // 0xf5f810
        void ExtractColorArray(int32_t name, System::Collections::Generic::List<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Color>*)>(0xf5f3f0)(this, name, values); } // 0xf5f3f0
        void ExtractMatrixArray(int32_t name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xf5f6b0)(this, name, values); } // 0xf5f6b0
        void SetFloat(cs::string* name, float value) { return il2cpp::call<void(*)(Material*, cs::string*, float)>(0xf612c0)(this, name, value); } // 0xf612c0
        void SetFloat(int32_t nameID, float value) { return il2cpp::call<void(*)(Material*, int32_t, float)>(0xf61280)(this, nameID, value); } // 0xf61280
        void SetInt(cs::string* name, int32_t value) { return il2cpp::call<void(*)(Material*, cs::string*, int32_t)>(0xf61310)(this, name, value); } // 0xf61310
        void SetInt(int32_t nameID, int32_t value) { return il2cpp::call<void(*)(Material*, int32_t, int32_t)>(0xf61360)(this, nameID, value); } // 0xf61360
        void SetColor(cs::string* name, UnityEngine::Color value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Color)>(0xf60e50)(this, name, value); } // 0xf60e50
        void SetColor(int32_t nameID, UnityEngine::Color value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Color)>(0xf60ea0)(this, nameID, value); } // 0xf60ea0
        void SetVector(cs::string* name, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Vector4)>(0xf60e50)(this, name, value); } // 0xf60e50
        void SetVector(int32_t nameID, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector4)>(0xf60ea0)(this, nameID, value); } // 0xf60ea0
        void SetMatrix(cs::string* name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Matrix4x4)>(0xf61680)(this, name, value); } // 0xf61680
        void SetMatrix(int32_t nameID, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Matrix4x4)>(0xf616f0)(this, nameID, value); } // 0xf616f0
        void SetTexture(cs::string* name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Texture*)>(0xf61a60)(this, name, value); } // 0xf61a60
        void SetTexture(int32_t nameID, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Texture*)>(0xf61850)(this, nameID, value); } // 0xf61850
        void SetTexture(cs::string* name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xf61aa0)(this, name, value, element); } // 0xf61aa0
        void SetTexture(int32_t nameID, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xf617b0)(this, nameID, value, element); } // 0xf617b0
        void SetBuffer(cs::string* name, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::ComputeBuffer*)>(0xf60b30)(this, name, value); } // 0xf60b30
        void SetBuffer(int32_t nameID, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::ComputeBuffer*)>(0xf60a90)(this, nameID, value); } // 0xf60a90
        void SetBuffer(cs::string* name, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::GraphicsBuffer*)>(0xf60ac0)(this, name, value); } // 0xf60ac0
        void SetBuffer(int32_t nameID, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::GraphicsBuffer*)>(0xf60b00)(this, nameID, value); } // 0xf60b00
        void SetConstantBuffer(cs::string* name, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xf60f60)(this, name, value, offset, size); } // 0xf60f60
        void SetConstantBuffer(int32_t nameID, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xf60ee0)(this, nameID, value, offset, size); } // 0xf60ee0
        void SetConstantBuffer(cs::string* name, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xf60fb0)(this, name, value, offset, size); } // 0xf60fb0
        void SetConstantBuffer(int32_t nameID, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xf60f20)(this, nameID, value, offset, size); } // 0xf60f20
        void SetFloatArray(cs::string* name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<float>*)>(0xf61070)(this, name, values); } // 0xf61070
        void SetFloatArray(int32_t nameID, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<float>*)>(0xf61220)(this, nameID, values); } // 0xf61220
        void SetFloatArray(cs::string* name, cs::array<float>* values) { return il2cpp::call<void(*)(Material*, cs::string*, cs::array<float>*)>(0xf610e0)(this, name, values); } // 0xf610e0
        void SetFloatArray(int32_t nameID, cs::array<float>* values) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<float>*)>(0xf61040)(this, nameID, values); } // 0xf61040
        void SetColorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Color>*)>(0xf60cf0)(this, name, values); } // 0xf60cf0
        void SetColorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Color>*)>(0xf60d60)(this, nameID, values); } // 0xf60d60
        void SetColorArray(cs::string* name, cs::array<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, cs::string*, cs::array<UnityEngine::Color>*)>(0xf60cc0)(this, name, values); } // 0xf60cc0
        void SetColorArray(int32_t nameID, cs::array<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Color>*)>(0xf60dc0)(this, nameID, values); } // 0xf60dc0
        void SetVectorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xf61cf0)(this, name, values); } // 0xf61cf0
        void SetVectorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xf61b20)(this, nameID, values); } // 0xf61b20
        void SetVectorArray(cs::string* name, cs::array<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, cs::array<UnityEngine::Vector4>*)>(0xf61bb0)(this, name, values); } // 0xf61bb0
        void SetVectorArray(int32_t nameID, cs::array<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Vector4>*)>(0xf61b80)(this, nameID, values); } // 0xf61b80
        void SetMatrixArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xf61410)(this, name, values); } // 0xf61410
        void SetMatrixArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xf615c0)(this, nameID, values); } // 0xf615c0
        void SetMatrixArray(cs::string* name, cs::array<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, cs::array<UnityEngine::Matrix4x4>*)>(0xf613e0)(this, name, values); } // 0xf613e0
        void SetMatrixArray(int32_t nameID, cs::array<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, int32_t, cs::array<UnityEngine::Matrix4x4>*)>(0xf61480)(this, nameID, values); } // 0xf61480
        float GetFloat(cs::string* name) { return il2cpp::call<float(*)(Material*, cs::string*)>(0xf5fe10)(this, name); } // 0xf5fe10
        float GetFloat(int32_t nameID) { return il2cpp::call<float(*)(Material*, int32_t)>(0xf5fde0)(this, nameID); } // 0xf5fde0
        int32_t GetInt(cs::string* name) { return il2cpp::call<int32_t(*)(Material*, cs::string*)>(0xf5fe50)(this, name); } // 0xf5fe50
        int32_t GetInt(int32_t nameID) { return il2cpp::call<int32_t(*)(Material*, int32_t)>(0xf5fea0)(this, nameID); } // 0xf5fea0
        UnityEngine::Color GetColor(cs::string* name) { return il2cpp::call<UnityEngine::Color(*)(Material*, cs::string*)>(0xf5fb40)(this, name); } // 0xf5fb40
        UnityEngine::Color GetColor(int32_t nameID) { return il2cpp::call<UnityEngine::Color(*)(Material*, int32_t)>(0xf5fba0)(this, nameID); } // 0xf5fba0
        UnityEngine::Vector4 GetVector(cs::string* name) { return il2cpp::call<UnityEngine::Vector4(*)(Material*, cs::string*)>(0xf608c0)(this, name); } // 0xf608c0
        UnityEngine::Vector4 GetVector(int32_t nameID) { return il2cpp::call<UnityEngine::Vector4(*)(Material*, int32_t)>(0xf60940)(this, nameID); } // 0xf60940
        UnityEngine::Matrix4x4 GetMatrix(cs::string* name) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Material*, cs::string*)>(0xf600b0)(this, name); } // 0xf600b0
        UnityEngine::Matrix4x4 GetMatrix(int32_t nameID) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Material*, int32_t)>(0xf60130)(this, nameID); } // 0xf60130
        UnityEngine::Texture* GetTexture(cs::string* name) { return il2cpp::call<UnityEngine::Texture*(*)(Material*, cs::string*)>(0xf60720)(this, name); } // 0xf60720
        UnityEngine::Texture* GetTexture(int32_t nameID) { return il2cpp::call<UnityEngine::Texture*(*)(Material*, int32_t)>(0xf60320)(this, nameID); } // 0xf60320
        cs::array<float>* GetFloatArray(cs::string* name) { return il2cpp::call<cs::array<float>*(*)(Material*, cs::string*)>(0xf5fd10)(this, name); } // 0xf5fd10
        cs::array<float>* GetFloatArray(int32_t nameID) { return il2cpp::call<cs::array<float>*(*)(Material*, int32_t)>(0xf5fd80)(this, nameID); } // 0xf5fd80
        cs::array<UnityEngine::Color>* GetColorArray(cs::string* name) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Material*, cs::string*)>(0xf5fa30)(this, name); } // 0xf5fa30
        cs::array<UnityEngine::Color>* GetColorArray(int32_t nameID) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Material*, int32_t)>(0xf5f9d0)(this, nameID); } // 0xf5f9d0
        cs::array<UnityEngine::Vector4>* GetVectorArray(cs::string* name) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Material*, cs::string*)>(0xf60850)(this, name); } // 0xf60850
        cs::array<UnityEngine::Vector4>* GetVectorArray(int32_t nameID) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Material*, int32_t)>(0xf607d0)(this, nameID); } // 0xf607d0
        cs::array<UnityEngine::Matrix4x4>* GetMatrixArray(cs::string* name) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Material*, cs::string*)>(0xf5ffd0)(this, name); } // 0xf5ffd0
        cs::array<UnityEngine::Matrix4x4>* GetMatrixArray(int32_t nameID) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Material*, int32_t)>(0xf5ff40)(this, nameID); } // 0xf5ff40
        void GetFloatArray(cs::string* name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<float>*)>(0xf5fce0)(this, name, values); } // 0xf5fce0
        void GetFloatArray(int32_t nameID, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<float>*)>(0xf5fd00)(this, nameID, values); } // 0xf5fd00
        void GetColorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Color>*)>(0xf5faa0)(this, name, values); } // 0xf5faa0
        void GetColorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Color>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Color>*)>(0xf5fac0)(this, nameID, values); } // 0xf5fac0
        void GetVectorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xf60830)(this, name, values); } // 0xf60830
        void GetVectorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xf607c0)(this, nameID, values); } // 0xf607c0
        void GetMatrixArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, cs::string*, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xf5ffa0)(this, name, values); } // 0xf5ffa0
        void GetMatrixArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Material*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xf5ffc0)(this, nameID, values); } // 0xf5ffc0
        void SetTextureOffset(cs::string* name, UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Vector2)>(0xf618e0)(this, name, value); } // 0xf618e0
        void SetTextureOffset(int32_t nameID, UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf61930)(this, nameID, value); } // 0xf61930
        void SetTextureScale(cs::string* name, UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, cs::string*, UnityEngine::Vector2)>(0xf61a10)(this, name, value); } // 0xf61a10
        void SetTextureScale(int32_t nameID, UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf619d0)(this, nameID, value); } // 0xf619d0
        UnityEngine::Vector2 GetTextureOffset(cs::string* name) { return il2cpp::call<UnityEngine::Vector2(*)(Material*, cs::string*)>(0xf60350)(this, name); } // 0xf60350
        UnityEngine::Vector2 GetTextureOffset(int32_t nameID) { return il2cpp::call<UnityEngine::Vector2(*)(Material*, int32_t)>(0xf603c0)(this, nameID); } // 0xf603c0
        UnityEngine::Vector2 GetTextureScale(cs::string* name) { return il2cpp::call<UnityEngine::Vector2(*)(Material*, cs::string*)>(0xf606b0)(this, name); } // 0xf606b0
        UnityEngine::Vector2 GetTextureScale(int32_t nameID) { return il2cpp::call<UnityEngine::Vector2(*)(Material*, int32_t)>(0xf60650)(this, nameID); } // 0xf60650
        void SetColorImpl_Injected(int32_t name, UnityEngine::Color value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Color)>(0xf60df0)(this, name, value); } // 0xf60df0
        void SetMatrixImpl_Injected(int32_t name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Matrix4x4)>(0xf61620)(this, name, value); } // 0xf61620
        void GetColorImpl_Injected(int32_t name, UnityEngine::Color ret) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Color)>(0xf5fad0)(this, name, ret); } // 0xf5fad0
        void GetMatrixImpl_Injected(int32_t name, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Matrix4x4)>(0xf60040)(this, name, ret); } // 0xf60040
        void GetTextureScaleAndOffsetImpl_Injected(int32_t name, UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector4)>(0xf605e0)(this, name, ret); } // 0xf605e0
        void SetTextureOffsetImpl_Injected(int32_t name, UnityEngine::Vector2 offset) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf61880)(this, name, offset); } // 0xf61880
        void SetTextureScaleImpl_Injected(int32_t name, UnityEngine::Vector2 scale) { return il2cpp::call<void(*)(Material*, int32_t, UnityEngine::Vector2)>(0xf61970)(this, name, scale); } // 0xf61970

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Material> {
        };

}


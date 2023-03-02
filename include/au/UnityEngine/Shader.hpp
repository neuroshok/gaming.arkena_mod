#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/Rendering/ShaderHardwareTier.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Shader.hpp>
#include <cs/string.hpp>

namespace UnityEngine
{
    struct Shader : ark::meta<Shader, UnityEngine::Object>
    {

        UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier() { return il2cpp::call<UnityEngine::Rendering::ShaderHardwareTier(*)(Shader*)>(0xee9de0)(this); } // 0xee9de0
        void set_globalShaderHardwareTier(UnityEngine::Rendering::ShaderHardwareTier value) { return il2cpp::call<void(*)(Shader*, UnityEngine::Rendering::ShaderHardwareTier)>(0xee9f50)(this, value); } // 0xee9f50
        UnityEngine::Shader* Find(cs::string* name) { return il2cpp::call<UnityEngine::Shader*(*)(Shader*, cs::string*)>(0xee75e0)(this, name); } // 0xee75e0
        UnityEngine::Shader* FindBuiltin(cs::string* name) { return il2cpp::call<UnityEngine::Shader*(*)(Shader*, cs::string*)>(0xee73a0)(this, name); } // 0xee73a0
        int32_t get_maximumLOD() { return il2cpp::call<int32_t(*)(Shader*)>(0xee9e60)(this); } // 0xee9e60
        void set_maximumLOD(int32_t value) { return il2cpp::call<void(*)(Shader*, int32_t)>(0xee9fa0)(this, value); } // 0xee9fa0
        int32_t get_globalMaximumLOD() { return il2cpp::call<int32_t(*)(Shader*)>(0xee9da0)(this); } // 0xee9da0
        void set_globalMaximumLOD(int32_t value) { return il2cpp::call<void(*)(Shader*, int32_t)>(0xee9ef0)(this, value); } // 0xee9ef0
        bool get_isSupported() { return il2cpp::call<bool(*)(Shader*)>(0xee9e30)(this); } // 0xee9e30
        cs::string* get_globalRenderPipeline() { return il2cpp::call<cs::string*(*)(Shader*)>(0xee9dc0)(this); } // 0xee9dc0
        void set_globalRenderPipeline(cs::string* value) { return il2cpp::call<void(*)(Shader*, cs::string*)>(0xee9f20)(this, value); } // 0xee9f20
        void EnableKeyword(cs::string* keyword) { return il2cpp::call<void(*)(Shader*, cs::string*)>(0xee6f80)(this, keyword); } // 0xee6f80
        void DisableKeyword(cs::string* keyword) { return il2cpp::call<void(*)(Shader*, cs::string*)>(0xee6f50)(this, keyword); } // 0xee6f50
        bool IsKeywordEnabled(cs::string* keyword) { return il2cpp::call<bool(*)(Shader*, cs::string*)>(0xee8cd0)(this, keyword); } // 0xee8cd0
        int32_t get_renderQueue() { return il2cpp::call<int32_t(*)(Shader*)>(0xee9ec0)(this); } // 0xee9ec0
        UnityEngine::DisableBatchingType get_disableBatching() { return il2cpp::call<UnityEngine::DisableBatchingType(*)(Shader*)>(0xee9d70)(this); } // 0xee9d70
        void WarmupAllShaders() { return il2cpp::call<void(*)(Shader*)>(0xee9d00)(this); } // 0xee9d00
        int32_t TagToID(cs::string* name) { return il2cpp::call<int32_t(*)(Shader*, cs::string*)>(0xee9cd0)(this, name); } // 0xee9cd0
        cs::string* IDToTag(int32_t name) { return il2cpp::call<cs::string*(*)(Shader*, int32_t)>(0xee8c70)(this, name); } // 0xee8c70
        int32_t PropertyToID(cs::string* name) { return il2cpp::call<int32_t(*)(Shader*, cs::string*)>(0xee8d00)(this, name); } // 0xee8d00
        UnityEngine::Shader* GetDependency(cs::string* name) { return il2cpp::call<UnityEngine::Shader*(*)(Shader*, cs::string*)>(0xee7650)(this, name); } // 0xee7650
        int32_t get_passCount() { return il2cpp::call<int32_t(*)(Shader*)>(0xee9e90)(this); } // 0xee9e90
        UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, UnityEngine::Rendering::ShaderTagId tagName) { return il2cpp::call<UnityEngine::Rendering::ShaderTagId(*)(Shader*, int32_t, UnityEngine::Rendering::ShaderTagId)>(0xee73d0)(this, passIndex, tagName); } // 0xee73d0
        int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName) { return il2cpp::call<int32_t(*)(Shader*, int32_t, int32_t)>(0xee8ca0)(this, passIndex, tagName); } // 0xee8ca0
        void SetGlobalFloatImpl(int32_t name, float value) { return il2cpp::call<void(*)(Shader*, int32_t, float)>(0xee9300)(this, name, value); } // 0xee9300
        void SetGlobalVectorImpl(int32_t name, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Vector4)>(0xee9c00)(this, name, value); } // 0xee9c00
        void SetGlobalMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Matrix4x4)>(0xee9710)(this, name, value); } // 0xee9710
        void SetGlobalTextureImpl(int32_t name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Texture*)>(0xee9850)(this, name, value); } // 0xee9850
        void SetGlobalRenderTextureImpl(int32_t name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xee9820)(this, name, value, element); } // 0xee9820
        void SetGlobalBufferImpl(int32_t name, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::ComputeBuffer*)>(0xee8d30)(this, name, value); } // 0xee8d30
        void SetGlobalGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::GraphicsBuffer*)>(0xee8d60)(this, name, value); } // 0xee8d60
        void SetGlobalConstantBufferImpl(int32_t name, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xee8f10)(this, name, value, offset, size); } // 0xee8f10
        void SetGlobalConstantGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xee8f50)(this, name, value, offset, size); } // 0xee8f50
        float GetGlobalFloatImpl(int32_t name) { return il2cpp::call<float(*)(Shader*, int32_t)>(0xee7910)(this, name); } // 0xee7910
        UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name) { return il2cpp::call<UnityEngine::Vector4(*)(Shader*, int32_t)>(0xee7fa0)(this, name); } // 0xee7fa0
        UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Shader*, int32_t)>(0xee7c00)(this, name); } // 0xee7c00
        UnityEngine::Texture* GetGlobalTextureImpl(int32_t name) { return il2cpp::call<UnityEngine::Texture*(*)(Shader*, int32_t)>(0xee7d60)(this, name); } // 0xee7d60
        void SetGlobalFloatArrayImpl(int32_t name, cs::array<float>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<float>*, int32_t)>(0xee9060)(this, name, values, count); } // 0xee9060
        void SetGlobalVectorArrayImpl(int32_t name, cs::array<UnityEngine::Vector4>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Vector4>*, int32_t)>(0xee9930)(this, name, values, count); } // 0xee9930
        void SetGlobalMatrixArrayImpl(int32_t name, cs::array<UnityEngine::Matrix4x4>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Matrix4x4>*, int32_t)>(0xee9440)(this, name, values, count); } // 0xee9440
        cs::array<float>* GetGlobalFloatArrayImpl(int32_t name) { return il2cpp::call<cs::array<float>*(*)(Shader*, int32_t)>(0xee77b0)(this, name); } // 0xee77b0
        cs::array<UnityEngine::Vector4>* GetGlobalVectorArrayImpl(int32_t name) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Shader*, int32_t)>(0xee7e10)(this, name); } // 0xee7e10
        cs::array<UnityEngine::Matrix4x4>* GetGlobalMatrixArrayImpl(int32_t name) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Shader*, int32_t)>(0xee7a70)(this, name); } // 0xee7a70
        int32_t GetGlobalFloatArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Shader*, int32_t)>(0xee7780)(this, name); } // 0xee7780
        int32_t GetGlobalVectorArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Shader*, int32_t)>(0xee7de0)(this, name); } // 0xee7de0
        int32_t GetGlobalMatrixArrayCountImpl(int32_t name) { return il2cpp::call<int32_t(*)(Shader*, int32_t)>(0xee7a40)(this, name); } // 0xee7a40
        void ExtractGlobalFloatArrayImpl(int32_t name, cs::array<float>* val) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<float>*)>(0xee6fb0)(this, name, val); } // 0xee6fb0
        void ExtractGlobalVectorArrayImpl(int32_t name, cs::array<UnityEngine::Vector4>* val) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Vector4>*)>(0xee7250)(this, name, val); } // 0xee7250
        void ExtractGlobalMatrixArrayImpl(int32_t name, cs::array<UnityEngine::Matrix4x4>* val) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Matrix4x4>*)>(0xee7100)(this, name, val); } // 0xee7100
        void SetGlobalFloatArray(int32_t name, cs::array<float>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<float>*, int32_t)>(0xee9090)(this, name, values, count); } // 0xee9090
        void SetGlobalVectorArray(int32_t name, cs::array<UnityEngine::Vector4>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Vector4>*, int32_t)>(0xee9960)(this, name, values, count); } // 0xee9960
        void SetGlobalMatrixArray(int32_t name, cs::array<UnityEngine::Matrix4x4>* values, int32_t count) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Matrix4x4>*, int32_t)>(0xee94a0)(this, name, values, count); } // 0xee94a0
        void ExtractGlobalFloatArray(int32_t name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<float>*)>(0xee6fe0)(this, name, values); } // 0xee6fe0
        void ExtractGlobalVectorArray(int32_t name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xee7280)(this, name, values); } // 0xee7280
        void ExtractGlobalMatrixArray(int32_t name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xee7130)(this, name, values); } // 0xee7130
        void SetGlobalFloat(cs::string* name, float value) { return il2cpp::call<void(*)(Shader*, cs::string*, float)>(0xee9340)(this, name, value); } // 0xee9340
        void SetGlobalFloat(int32_t nameID, float value) { return il2cpp::call<void(*)(Shader*, int32_t, float)>(0xee9300)(this, nameID, value); } // 0xee9300
        void SetGlobalInt(cs::string* name, int32_t value) { return il2cpp::call<void(*)(Shader*, cs::string*, int32_t)>(0xee93a0)(this, name, value); } // 0xee93a0
        void SetGlobalInt(int32_t nameID, int32_t value) { return il2cpp::call<void(*)(Shader*, int32_t, int32_t)>(0xee9400)(this, nameID, value); } // 0xee9400
        void SetGlobalVector(cs::string* name, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::Vector4)>(0xee9c30)(this, name, value); } // 0xee9c30
        void SetGlobalVector(int32_t nameID, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Vector4)>(0xee9c90)(this, nameID, value); } // 0xee9c90
        void SetGlobalColor(cs::string* name, UnityEngine::Color value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::Color)>(0xee8e30)(this, name, value); } // 0xee8e30
        void SetGlobalColor(int32_t nameID, UnityEngine::Color value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Color)>(0xee8eb0)(this, nameID, value); } // 0xee8eb0
        void SetGlobalMatrix(cs::string* name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::Matrix4x4)>(0xee9740)(this, name, value); } // 0xee9740
        void SetGlobalMatrix(int32_t nameID, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Matrix4x4)>(0xee97c0)(this, nameID, value); } // 0xee97c0
        void SetGlobalTexture(cs::string* name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::Texture*)>(0xee9880)(this, name, value); } // 0xee9880
        void SetGlobalTexture(int32_t nameID, UnityEngine::Texture* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Texture*)>(0xee9850)(this, nameID, value); } // 0xee9850
        void SetGlobalTexture(cs::string* name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xee98d0)(this, name, value, element); } // 0xee98d0
        void SetGlobalTexture(int32_t nameID, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::RenderTexture*, UnityEngine::Rendering::RenderTextureSubElement)>(0xee9820)(this, nameID, value, element); } // 0xee9820
        void SetGlobalBuffer(cs::string* name, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::ComputeBuffer*)>(0xee8de0)(this, name, value); } // 0xee8de0
        void SetGlobalBuffer(int32_t nameID, UnityEngine::ComputeBuffer* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::ComputeBuffer*)>(0xee8d30)(this, nameID, value); } // 0xee8d30
        void SetGlobalBuffer(cs::string* name, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::GraphicsBuffer*)>(0xee8d90)(this, name, value); } // 0xee8d90
        void SetGlobalBuffer(int32_t nameID, UnityEngine::GraphicsBuffer* value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::GraphicsBuffer*)>(0xee8d60)(this, nameID, value); } // 0xee8d60
        void SetGlobalConstantBuffer(cs::string* name, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xee9000)(this, name, value, offset, size); } // 0xee9000
        void SetGlobalConstantBuffer(int32_t nameID, UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::ComputeBuffer*, int32_t, int32_t)>(0xee8f10)(this, nameID, value, offset, size); } // 0xee8f10
        void SetGlobalConstantBuffer(cs::string* name, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, cs::string*, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xee8f90)(this, name, value, offset, size); } // 0xee8f90
        void SetGlobalConstantBuffer(int32_t nameID, UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(0xee8f50)(this, nameID, value, offset, size); } // 0xee8f50
        void SetGlobalFloatArray(cs::string* name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<float>*)>(0xee91a0)(this, name, values); } // 0xee91a0
        void SetGlobalFloatArray(int32_t nameID, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<float>*)>(0xee92a0)(this, nameID, values); } // 0xee92a0
        void SetGlobalFloatArray(cs::string* name, cs::array<float>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, cs::array<float>*)>(0xee9250)(this, name, values); } // 0xee9250
        void SetGlobalFloatArray(int32_t nameID, cs::array<float>* values) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<float>*)>(0xee9220)(this, nameID, values); } // 0xee9220
        void SetGlobalVectorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xee9a70)(this, name, values); } // 0xee9a70
        void SetGlobalVectorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xee9b70)(this, nameID, values); } // 0xee9b70
        void SetGlobalVectorArray(cs::string* name, cs::array<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, cs::array<UnityEngine::Vector4>*)>(0xee9b20)(this, name, values); } // 0xee9b20
        void SetGlobalVectorArray(int32_t nameID, cs::array<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Vector4>*)>(0xee9af0)(this, nameID, values); } // 0xee9af0
        void SetGlobalMatrixArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xee9600)(this, name, values); } // 0xee9600
        void SetGlobalMatrixArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xee9680)(this, nameID, values); } // 0xee9680
        void SetGlobalMatrixArray(cs::string* name, cs::array<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, cs::array<UnityEngine::Matrix4x4>*)>(0xee95b0)(this, name, values); } // 0xee95b0
        void SetGlobalMatrixArray(int32_t nameID, cs::array<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, cs::array<UnityEngine::Matrix4x4>*)>(0xee9470)(this, nameID, values); } // 0xee9470
        float GetGlobalFloat(cs::string* name) { return il2cpp::call<float(*)(Shader*, cs::string*)>(0xee7940)(this, name); } // 0xee7940
        float GetGlobalFloat(int32_t nameID) { return il2cpp::call<float(*)(Shader*, int32_t)>(0xee7910)(this, nameID); } // 0xee7910
        int32_t GetGlobalInt(cs::string* name) { return il2cpp::call<int32_t(*)(Shader*, cs::string*)>(0xee79a0)(this, name); } // 0xee79a0
        int32_t GetGlobalInt(int32_t nameID) { return il2cpp::call<int32_t(*)(Shader*, int32_t)>(0xee7a00)(this, nameID); } // 0xee7a00
        UnityEngine::Vector4 GetGlobalVector(cs::string* name) { return il2cpp::call<UnityEngine::Vector4(*)(Shader*, cs::string*)>(0xee8040)(this, name); } // 0xee8040
        UnityEngine::Vector4 GetGlobalVector(int32_t nameID) { return il2cpp::call<UnityEngine::Vector4(*)(Shader*, int32_t)>(0xee7ff0)(this, nameID); } // 0xee7ff0
        UnityEngine::Color GetGlobalColor(cs::string* name) { return il2cpp::call<UnityEngine::Color(*)(Shader*, cs::string*)>(0xee7680)(this, name); } // 0xee7680
        UnityEngine::Color GetGlobalColor(int32_t nameID) { return il2cpp::call<UnityEngine::Color(*)(Shader*, int32_t)>(0xee7710)(this, nameID); } // 0xee7710
        UnityEngine::Matrix4x4 GetGlobalMatrix(cs::string* name) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Shader*, cs::string*)>(0xee7cc0)(this, name); } // 0xee7cc0
        UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID) { return il2cpp::call<UnityEngine::Matrix4x4(*)(Shader*, int32_t)>(0xee7c40)(this, nameID); } // 0xee7c40
        UnityEngine::Texture* GetGlobalTexture(cs::string* name) { return il2cpp::call<UnityEngine::Texture*(*)(Shader*, cs::string*)>(0xee7d90)(this, name); } // 0xee7d90
        UnityEngine::Texture* GetGlobalTexture(int32_t nameID) { return il2cpp::call<UnityEngine::Texture*(*)(Shader*, int32_t)>(0xee7d60)(this, nameID); } // 0xee7d60
        cs::array<float>* GetGlobalFloatArray(cs::string* name) { return il2cpp::call<cs::array<float>*(*)(Shader*, cs::string*)>(0xee7850)(this, name); } // 0xee7850
        cs::array<float>* GetGlobalFloatArray(int32_t nameID) { return il2cpp::call<cs::array<float>*(*)(Shader*, int32_t)>(0xee77e0)(this, nameID); } // 0xee77e0
        cs::array<UnityEngine::Vector4>* GetGlobalVectorArray(cs::string* name) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Shader*, cs::string*)>(0xee7ef0)(this, name); } // 0xee7ef0
        cs::array<UnityEngine::Vector4>* GetGlobalVectorArray(int32_t nameID) { return il2cpp::call<cs::array<UnityEngine::Vector4>*(*)(Shader*, int32_t)>(0xee7e90)(this, nameID); } // 0xee7e90
        cs::array<UnityEngine::Matrix4x4>* GetGlobalMatrixArray(cs::string* name) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Shader*, cs::string*)>(0xee7b40)(this, name); } // 0xee7b40
        cs::array<UnityEngine::Matrix4x4>* GetGlobalMatrixArray(int32_t nameID) { return il2cpp::call<cs::array<UnityEngine::Matrix4x4>*(*)(Shader*, int32_t)>(0xee7ae0)(this, nameID); } // 0xee7ae0
        void GetGlobalFloatArray(cs::string* name, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<float>*)>(0xee78d0)(this, name, values); } // 0xee78d0
        void GetGlobalFloatArray(int32_t nameID, System::Collections::Generic::List<float>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<float>*)>(0xee7840)(this, nameID, values); } // 0xee7840
        void GetGlobalVectorArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xee7e50)(this, name, values); } // 0xee7e50
        void GetGlobalVectorArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0xee7e40)(this, nameID, values); } // 0xee7e40
        void GetGlobalMatrixArray(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, cs::string*, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xee7aa0)(this, name, values); } // 0xee7aa0
        void GetGlobalMatrixArray(int32_t nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return il2cpp::call<void(*)(Shader*, int32_t, System::Collections::Generic::List<UnityEngine::Matrix4x4>*)>(0xee7bc0)(this, nameID, values); } // 0xee7bc0
        void ctor() { return il2cpp::call<void(*)(Shader*)>(0xee9d20)(this); } // 0xee9d20
        cs::string* GetPropertyName(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee87d0)(this, shader, propertyIndex); } // 0xee87d0
        int32_t GetPropertyNameId(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<int32_t(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee86f0)(this, shader, propertyIndex); } // 0xee86f0
        UnityEngine::Rendering::ShaderPropertyType GetPropertyType(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::ShaderPropertyType(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8b90)(this, shader, propertyIndex); } // 0xee8b90
        cs::string* GetPropertyDescription(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8480)(this, shader, propertyIndex); } // 0xee8480
        UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::ShaderPropertyFlags(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8610)(this, shader, propertyIndex); } // 0xee8610
        cs::array<cs::string*>* GetPropertyAttributes(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<cs::array<cs::string*>*(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee80c0)(this, shader, propertyIndex); } // 0xee80c0
        UnityEngine::Vector4 GetPropertyDefaultValue(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<UnityEngine::Vector4(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8310)(this, shader, propertyIndex); } // 0xee8310
        UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::TextureDimension(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8b60)(this, shader, propertyIndex); } // 0xee8b60
        cs::string* GetPropertyTextureDefaultName(UnityEngine::Shader* shader, int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee8930)(this, shader, propertyIndex); } // 0xee8930
        bool FindTextureStackImpl(UnityEngine::Shader* s, int32_t propertyIdx, cs::string* stackName, int32_t layerIndex) { return il2cpp::call<bool(*)(Shader*, UnityEngine::Shader*, int32_t, cs::string*, int32_t)>(0xee74a0)(this, s, propertyIdx, stackName, layerIndex); } // 0xee74a0
        void CheckPropertyIndex(UnityEngine::Shader* s, int32_t propertyIndex) { return il2cpp::call<void(*)(Shader*, UnityEngine::Shader*, int32_t)>(0xee6ed0)(this, s, propertyIndex); } // 0xee6ed0
        int32_t GetPropertyCount() { return il2cpp::call<int32_t(*)(Shader*)>(0xee81a0)(this); } // 0xee81a0
        int32_t FindPropertyIndex(cs::string* propertyName) { return il2cpp::call<int32_t(*)(Shader*, cs::string*)>(0xee7470)(this, propertyName); } // 0xee7470
        cs::string* GetPropertyName(int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, int32_t)>(0xee8720)(this, propertyIndex); } // 0xee8720
        int32_t GetPropertyNameId(int32_t propertyIndex) { return il2cpp::call<int32_t(*)(Shader*, int32_t)>(0xee8640)(this, propertyIndex); } // 0xee8640
        UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::ShaderPropertyType(*)(Shader*, int32_t)>(0xee8bc0)(this, propertyIndex); } // 0xee8bc0
        cs::string* GetPropertyDescription(int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, int32_t)>(0xee84b0)(this, propertyIndex); } // 0xee84b0
        UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::ShaderPropertyFlags(*)(Shader*, int32_t)>(0xee8560)(this, propertyIndex); } // 0xee8560
        cs::array<cs::string*>* GetPropertyAttributes(int32_t propertyIndex) { return il2cpp::call<cs::array<cs::string*>*(*)(Shader*, int32_t)>(0xee80f0)(this, propertyIndex); } // 0xee80f0
        float GetPropertyDefaultFloatValue(int32_t propertyIndex) { return il2cpp::call<float(*)(Shader*, int32_t)>(0xee81d0)(this, propertyIndex); } // 0xee81d0
        UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex) { return il2cpp::call<UnityEngine::Vector4(*)(Shader*, int32_t)>(0xee8350)(this, propertyIndex); } // 0xee8350
        UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex) { return il2cpp::call<UnityEngine::Vector2(*)(Shader*, int32_t)>(0xee8800)(this, propertyIndex); } // 0xee8800
        UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex) { return il2cpp::call<UnityEngine::Rendering::TextureDimension(*)(Shader*, int32_t)>(0xee8a60)(this, propertyIndex); } // 0xee8a60
        cs::string* GetPropertyTextureDefaultName(int32_t propertyIndex) { return il2cpp::call<cs::string*(*)(Shader*, int32_t)>(0xee8960)(this, propertyIndex); } // 0xee8960
        bool FindTextureStack(int32_t propertyIndex, cs::string* stackName, int32_t layerIndex) { return il2cpp::call<bool(*)(Shader*, int32_t, cs::string*, int32_t)>(0xee74e0)(this, propertyIndex, stackName, layerIndex); } // 0xee74e0
        void SetGlobalVectorImpl_Injected(int32_t name, UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Vector4)>(0xee9bd0)(this, name, value); } // 0xee9bd0
        void SetGlobalMatrixImpl_Injected(int32_t name, UnityEngine::Matrix4x4 value) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Matrix4x4)>(0xee96e0)(this, name, value); } // 0xee96e0
        void GetGlobalVectorImpl_Injected(int32_t name, UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Vector4)>(0xee7f70)(this, name, ret); } // 0xee7f70
        void GetGlobalMatrixImpl_Injected(int32_t name, UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Shader*, int32_t, UnityEngine::Matrix4x4)>(0xee7bd0)(this, name, ret); } // 0xee7bd0
        void GetPropertyDefaultValue_Injected(UnityEngine::Shader* shader, int32_t propertyIndex, UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Shader*, UnityEngine::Shader*, int32_t, UnityEngine::Vector4)>(0xee82e0)(this, shader, propertyIndex, ret); } // 0xee82e0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Shader> {
        };

}


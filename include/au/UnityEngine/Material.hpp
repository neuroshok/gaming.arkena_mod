//au/UnityEngine/Material
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
namespace UnityEngine{ struct Shader; }
#include <au/UnityEngine/Color.hpp>
namespace UnityEngine{ struct Texture; }
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Rendering/ShaderPropertyFlags.hpp>
#include <au/UnityEngine/MaterialGlobalIlluminationFlags.hpp>
#include <cs/array.hpp>
struct object;
namespace System::Collections::Generic{ template <class> struct List; }
#include <au/UnityEngine/Matrix4x4.hpp>
namespace UnityEngine{ struct RenderTexture; }
#include <au/UnityEngine/Rendering/RenderTextureSubElement.hpp>
namespace UnityEngine{ struct ComputeBuffer; }
namespace UnityEngine{ struct GraphicsBuffer; }
#include <au/UnityEngine/Vector4.hpp>


namespace UnityEngine {
struct Material : ark::meta<Material, UnityEngine::Object>
{
ark_meta("UnityEngine", "Material", "");

    // Methods

    UnityEngine::Material* Create(cs::string* scriptContents); // 0x7439A0 // public static 
    void CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader); // 0x743940 // private static 
    void CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source); // 0x743910 // private static 
    void CreateWithString(UnityEngine::Material* self); // 0x743970 // private static 
    void ctor(UnityEngine::Shader* shader); // 0x746530 // public 
    void ctor1(UnityEngine::Material* source); // 0x7464B0 // public 
    void ctor2(cs::string* contents); // 0x746440 // public 
    UnityEngine::Material* GetDefaultMaterial(); // 0x7442F0 // internal static 
    UnityEngine::Material* GetDefaultParticleMaterial(); // 0x744310 // internal static 
    UnityEngine::Material* GetDefaultLineMaterial(); // 0x7442D0 // internal static 
    UnityEngine::Shader* get_shader(); // 0x746990 // public 
    void set_shader(UnityEngine::Shader* value); // 0x746CF0 // public 
    UnityEngine::Color get_color(); // 0x7465B0 // public 
    void set_color(UnityEngine::Color value); // 0x7469C0 // public 
    UnityEngine::Texture* get_mainTexture(); // 0x746870 // public 
    void set_mainTexture(UnityEngine::Texture* value); // 0x746C30 // public 
    UnityEngine::Vector2 get_mainTextureOffset(); // 0x7466F0 // public 
    void set_mainTextureOffset(UnityEngine::Vector2 value); // 0x746AF0 // public 
    UnityEngine::Vector2 get_mainTextureScale(); // 0x7467B0 // public 
    void set_mainTextureScale(UnityEngine::Vector2 value); // 0x746B90 // public 
    int GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag); // 0x744330 // private 
    bool HasProperty(int nameID); // 0x745090 // public 
    bool HasProperty1(cs::string* name); // 0x7450C0 // public 
    int get_renderQueue(); // 0x746960 // public 
    void set_renderQueue(int value); // 0x746CC0 // public 
    int get_rawRenderQueue(); // 0x746930 // internal 
    void EnableKeyword(cs::string* keyword); // 0x743A70 // public 
    void DisableKeyword(cs::string* keyword); // 0x743A40 // public 
    bool IsKeywordEnabled(cs::string* keyword); // 0x745100 // public 
    UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags(); // 0x7466C0 // public 
    void set_globalIlluminationFlags(UnityEngine::MaterialGlobalIlluminationFlags value); // 0x746AC0 // public 
    bool get_doubleSidedGI(); // 0x746660 // public 
    void set_doubleSidedGI(bool value); // 0x746A60 // public 
    bool get_enableInstancing(); // 0x746690 // public 
    void set_enableInstancing(bool value); // 0x746A90 // public 
    int get_passCount(); // 0x746900 // public 
    void SetShaderPassEnabled(cs::string* passName, bool enabled); // 0x745F00 // public 
    bool GetShaderPassEnabled(cs::string* passName); // 0x7448F0 // public 
    cs::string* GetPassName(int pass); // 0x744890 // public 
    int FindPass(cs::string* passName); // 0x744020 // public 
    void SetOverrideTag(cs::string* tag, cs::string* val); // 0x745E30 // public 
    cs::string* GetTagImpl(cs::string* tag, bool currentSubShaderOnly, cs::string* defaultValue); // 0x744920 // private 
    cs::string* GetTag(cs::string* tag, bool searchFallbacks, cs::string* defaultValue); // 0x744960 // public 
    cs::string* GetTag1(cs::string* tag, bool searchFallbacks); // 0x7449A0 // public 
    void Lerp(UnityEngine::Material* start, UnityEngine::Material* end, float t); // 0x745130 // public 
    bool SetPass(int pass); // 0x745E60 // public 
    void CopyPropertiesFromMaterial(UnityEngine::Material* mat); // 0x7438E0 // public 
    cs::array<cs::string*>* GetShaderKeywords(); // 0x7448C0 // private 
    void SetShaderKeywords(cs::array<cs::string*>* names); // 0x745ED0 // private 
    cs::array<cs::string*>* get_shaderKeywords(); // 0x7448C0 // public 
    void set_shaderKeywords(cs::array<cs::string*>* value); // 0x745ED0 // public 
    int ComputeCRC(); // 0x7438B0 // public 
    cs::array<cs::string*>* GetTexturePropertyNames(); // 0x744C10 // public 
    cs::array<int>* GetTexturePropertyNameIDs(); // 0x744BB0 // public 
    void GetTexturePropertyNamesInternal(Material* outNames); // 0x744BE0 // private 
    void GetTexturePropertyNameIDsInternal(Material* outNames); // 0x744B00 // private 
    void GetTexturePropertyNames1(System::Collections::Generic::List<cs::string*>* outNames); // 0x744C40 // public 
    void GetTexturePropertyNameIDs1(System::Collections::Generic::List<int>* outNames); // 0x744B30 // public 
    void SetFloatImpl(int name, float value); // 0x745960 // private 
    void SetColorImpl(int name, UnityEngine::Color value); // 0x745500 // private 
    void SetMatrixImpl(int name, UnityEngine::Matrix4x4 value); // 0x745D30 // private 
    void SetTextureImpl(int name, UnityEngine::Texture* value); // 0x745F30 // private 
    void SetRenderTextureImpl(int name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element); // 0x745E90 // private 
    void SetBufferImpl(int name, UnityEngine::ComputeBuffer* value); // 0x745170 // private 
    void SetGraphicsBufferImpl(int name, UnityEngine::GraphicsBuffer* value); // 0x7451E0 // private 
    void SetConstantBufferImpl(int name, UnityEngine::ComputeBuffer* value, int offset, int size); // 0x7455C0 // private 
    void SetConstantGraphicsBufferImpl(int name, UnityEngine::GraphicsBuffer* value, int offset, int size); // 0x745600 // private 
    float GetFloatImpl(int name); // 0x7444C0 // private 
    UnityEngine::Color GetColorImpl(int name); // 0x7441E0 // private 
    UnityEngine::Matrix4x4 GetMatrixImpl(int name); // 0x744750 // private 
    UnityEngine::Texture* GetTextureImpl(int name); // 0x744A00 // private 
    void SetFloatArrayImpl(int name, cs::array<float>* values, int count); // 0x7456E0 // private 
    void SetVectorArrayImpl(int name, cs::array<UnityEngine::Vector4>* values, int count); // 0x7461C0 // private 
    void SetColorArrayImpl(int name, cs::array<UnityEngine::Color>* values, int count); // 0x745250 // private 
    void SetMatrixArrayImpl(int name, cs::array<UnityEngine::Matrix4x4>* values, int count); // 0x745A80 // private 
    cs::array<float>* GetFloatArrayImpl(int name); // 0x744390 // private 
    cs::array<UnityEngine::Vector4>* GetVectorArrayImpl(int name); // 0x744E70 // private 
    cs::array<UnityEngine::Color>* GetColorArrayImpl(int name); // 0x744080 // private 
    cs::array<UnityEngine::Matrix4x4>* GetMatrixArrayImpl(int name); // 0x7445F0 // private 
    int GetFloatArrayCountImpl(int name); // 0x744360 // private 
    int GetVectorArrayCountImpl(int name); // 0x744E40 // private 
    int GetColorArrayCountImpl(int name); // 0x744050 // private 
    int GetMatrixArrayCountImpl(int name); // 0x7445C0 // private 
    void ExtractFloatArrayImpl(int name, cs::array<float>* val); // 0x743C00 // private 
    void ExtractVectorArrayImpl(int name, cs::array<UnityEngine::Vector4>* val); // 0x743EC0 // private 
    void ExtractColorArrayImpl(int name, cs::array<UnityEngine::Color>* val); // 0x743AA0 // private 
    void ExtractMatrixArrayImpl(int name, cs::array<UnityEngine::Matrix4x4>* val); // 0x743D60 // private 
    UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int name); // 0x744CF0 // private 
    void SetTextureOffsetImpl(int name, UnityEngine::Vector2 offset); // 0x745F90 // private 
    void SetTextureScaleImpl(int name, UnityEngine::Vector2 scale); // 0x746080 // private 
    void SetFloatArray(int name, cs::array<float>* values, int count); // 0x7457F0 // private 
    void SetVectorArray(int name, cs::array<UnityEngine::Vector4>* values, int count); // 0x7462C0 // private 
    void SetColorArray(int name, cs::array<UnityEngine::Color>* values, int count); // 0x745290 // private 
    void SetMatrixArray(int name, cs::array<UnityEngine::Matrix4x4>* values, int count); // 0x745B90 // private 
    void ExtractFloatArray(int name, System::Collections::Generic::List<float>* values); // 0x743C30 // private 
    void ExtractVectorArray(int name, System::Collections::Generic::List<UnityEngine::Vector4>* values); // 0x743EF0 // private 
    void ExtractColorArray(int name, System::Collections::Generic::List<UnityEngine::Color>* values); // 0x743AD0 // private 
    void ExtractMatrixArray(int name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values); // 0x743D90 // private 
    void SetFloat(cs::string* name, float value); // 0x7459A0 // public 
    void SetFloat1(int nameID, float value); // 0x745960 // public 
    void SetInt(cs::string* name, int value); // 0x7459F0 // public 
    void SetInt1(int nameID, int value); // 0x745A40 // public 
    void SetColor(cs::string* name, UnityEngine::Color value); // 0x745530 // public 
    void SetColor1(int nameID, UnityEngine::Color value); // 0x745580 // public 
    void SetVector(cs::string* name, UnityEngine::Vector4 value); // 0x745530 // public 
    void SetVector1(int nameID, UnityEngine::Vector4 value); // 0x745580 // public 
    void SetMatrix(cs::string* name, UnityEngine::Matrix4x4 value); // 0x745D60 // public 
    void SetMatrix1(int nameID, UnityEngine::Matrix4x4 value); // 0x745DD0 // public 
    void SetTexture(cs::string* name, UnityEngine::Texture* value); // 0x746140 // public 
    void SetTexture1(int nameID, UnityEngine::Texture* value); // 0x745F30 // public 
    void SetTexture2(cs::string* name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element); // 0x746180 // public 
    void SetTexture3(int nameID, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element); // 0x745E90 // public 
    void SetBuffer(cs::string* name, UnityEngine::ComputeBuffer* value); // 0x745210 // public 
    void SetBuffer1(int nameID, UnityEngine::ComputeBuffer* value); // 0x745170 // public 
    void SetBuffer2(cs::string* name, UnityEngine::GraphicsBuffer* value); // 0x7451A0 // public 
    void SetBuffer3(int nameID, UnityEngine::GraphicsBuffer* value); // 0x7451E0 // public 
    void SetConstantBuffer(cs::string* name, UnityEngine::ComputeBuffer* value, int offset, int size); // 0x745640 // public 
    void SetConstantBuffer1(int nameID, UnityEngine::ComputeBuffer* value, int offset, int size); // 0x7455C0 // public 
    void SetConstantBuffer2(cs::string* name, UnityEngine::GraphicsBuffer* value, int offset, int size); // 0x745690 // public 
    void SetConstantBuffer3(int nameID, UnityEngine::GraphicsBuffer* value, int offset, int size); // 0x745600 // public 
    void SetFloatArray1(cs::string* name, System::Collections::Generic::List<float>* values); // 0x745750 // public 
    void SetFloatArray2(int nameID, System::Collections::Generic::List<float>* values); // 0x745900 // public 
    void SetFloatArray3(cs::string* name, cs::array<float>* values); // 0x7457C0 // public 
    void SetFloatArray4(int nameID, cs::array<float>* values); // 0x745720 // public 
    void SetColorArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values); // 0x7453D0 // public 
    void SetColorArray2(int nameID, System::Collections::Generic::List<UnityEngine::Color>* values); // 0x745440 // public 
    void SetColorArray3(cs::string* name, cs::array<UnityEngine::Color>* values); // 0x7453A0 // public 
    void SetColorArray4(int nameID, cs::array<UnityEngine::Color>* values); // 0x7454A0 // public 
    void SetVectorArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values); // 0x7463D0 // public 
    void SetVectorArray2(int nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values); // 0x746200 // public 
    void SetVectorArray3(cs::string* name, cs::array<UnityEngine::Vector4>* values); // 0x746290 // public 
    void SetVectorArray4(int nameID, cs::array<UnityEngine::Vector4>* values); // 0x746260 // public 
    void SetMatrixArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values); // 0x745AF0 // public 
    void SetMatrixArray2(int nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values); // 0x745CA0 // public 
    void SetMatrixArray3(cs::string* name, cs::array<UnityEngine::Matrix4x4>* values); // 0x745AC0 // public 
    void SetMatrixArray4(int nameID, cs::array<UnityEngine::Matrix4x4>* values); // 0x745B60 // public 
    float GetFloat(cs::string* name); // 0x7444F0 // public 
    float GetFloat1(int nameID); // 0x7444C0 // public 
    int GetInt(cs::string* name); // 0x744530 // public 
    int GetInt1(int nameID); // 0x744580 // public 
    UnityEngine::Color GetColor(cs::string* name); // 0x744220 // public 
    UnityEngine::Color GetColor1(int nameID); // 0x744280 // public 
    UnityEngine::Vector4 GetVector(cs::string* name); // 0x744FA0 // public 
    UnityEngine::Vector4 GetVector1(int nameID); // 0x745020 // public 
    UnityEngine::Matrix4x4 GetMatrix(cs::string* name); // 0x744790 // public 
    UnityEngine::Matrix4x4 GetMatrix1(int nameID); // 0x744810 // public 
    UnityEngine::Texture* GetTexture(cs::string* name); // 0x744E00 // public 
    UnityEngine::Texture* GetTexture1(int nameID); // 0x744A00 // public 
    cs::array<float>* GetFloatArray(cs::string* name); // 0x7443F0 // public 
    cs::array<float>* GetFloatArray1(int nameID); // 0x744460 // public 
    cs::array<UnityEngine::Color>* GetColorArray(cs::string* name); // 0x744110 // public 
    cs::array<UnityEngine::Color>* GetColorArray1(int nameID); // 0x7440B0 // public 
    cs::array<UnityEngine::Vector4>* GetVectorArray(cs::string* name); // 0x744F30 // public 
    cs::array<UnityEngine::Vector4>* GetVectorArray1(int nameID); // 0x744EB0 // public 
    cs::array<UnityEngine::Matrix4x4>* GetMatrixArray(cs::string* name); // 0x7446B0 // public 
    cs::array<UnityEngine::Matrix4x4>* GetMatrixArray1(int nameID); // 0x744620 // public 
    void GetFloatArray2(cs::string* name, System::Collections::Generic::List<float>* values); // 0x7443C0 // public 
    void GetFloatArray3(int nameID, System::Collections::Generic::List<float>* values); // 0x7443E0 // public 
    void GetColorArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values); // 0x744180 // public 
    void GetColorArray3(int nameID, System::Collections::Generic::List<UnityEngine::Color>* values); // 0x7441A0 // public 
    void GetVectorArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values); // 0x744F10 // public 
    void GetVectorArray3(int nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values); // 0x744EA0 // public 
    void GetMatrixArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values); // 0x744680 // public 
    void GetMatrixArray3(int nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values); // 0x7446A0 // public 
    void SetTextureOffset(cs::string* name, UnityEngine::Vector2 value); // 0x745FC0 // public 
    void SetTextureOffset1(int nameID, UnityEngine::Vector2 value); // 0x746010 // public 
    void SetTextureScale(cs::string* name, UnityEngine::Vector2 value); // 0x7460F0 // public 
    void SetTextureScale1(int nameID, UnityEngine::Vector2 value); // 0x7460B0 // public 
    UnityEngine::Vector2 GetTextureOffset(cs::string* name); // 0x744A30 // public 
    UnityEngine::Vector2 GetTextureOffset1(int nameID); // 0x744AA0 // public 
    UnityEngine::Vector2 GetTextureScale(cs::string* name); // 0x744D90 // public 
    UnityEngine::Vector2 GetTextureScale1(int nameID); // 0x744D30 // public 
    void SetColorImpl_Injected(int name, /*ref*/ UnityEngine::Color value); // 0x7454D0 // private 
    void SetMatrixImpl_Injected(int name, /*ref*/ UnityEngine::Matrix4x4 value); // 0x745D00 // private 
    void GetColorImpl_Injected(int name, /*out*/ UnityEngine::Color ret); // 0x7441B0 // private 
    void GetMatrixImpl_Injected(int name, /*out*/ UnityEngine::Matrix4x4 ret); // 0x744720 // private 
    void GetTextureScaleAndOffsetImpl_Injected(int name, /*out*/ UnityEngine::Vector4 ret); // 0x744CC0 // private 
    void SetTextureOffsetImpl_Injected(int name, /*ref*/ UnityEngine::Vector2 offset); // 0x745F60 // private 
    void SetTextureScaleImpl_Injected(int name, /*ref*/ UnityEngine::Vector2 scale); // 0x746050 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Material>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Material::Create> () { return 0x7439A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::CreateWithShader> () { return 0x743940; }
    template<> inline uintptr_t rva<&UnityEngine::Material::CreateWithMaterial> () { return 0x743910; }
    template<> inline uintptr_t rva<&UnityEngine::Material::CreateWithString> () { return 0x743970; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ctor> () { return 0x746530; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ctor1> () { return 0x7464B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ctor2> () { return 0x746440; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetDefaultMaterial> () { return 0x7442F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetDefaultParticleMaterial> () { return 0x744310; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetDefaultLineMaterial> () { return 0x7442D0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_shader> () { return 0x746990; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_shader> () { return 0x746CF0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_color> () { return 0x7465B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_color> () { return 0x7469C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_mainTexture> () { return 0x746870; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_mainTexture> () { return 0x746C30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_mainTextureOffset> () { return 0x7466F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_mainTextureOffset> () { return 0x746AF0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_mainTextureScale> () { return 0x7467B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_mainTextureScale> () { return 0x746B90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFirstPropertyNameIdByAttribute> () { return 0x744330; }
    template<> inline uintptr_t rva<&UnityEngine::Material::HasProperty> () { return 0x745090; }
    template<> inline uintptr_t rva<&UnityEngine::Material::HasProperty1> () { return 0x7450C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_renderQueue> () { return 0x746960; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_renderQueue> () { return 0x746CC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_rawRenderQueue> () { return 0x746930; }
    template<> inline uintptr_t rva<&UnityEngine::Material::EnableKeyword> () { return 0x743A70; }
    template<> inline uintptr_t rva<&UnityEngine::Material::DisableKeyword> () { return 0x743A40; }
    template<> inline uintptr_t rva<&UnityEngine::Material::IsKeywordEnabled> () { return 0x745100; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_globalIlluminationFlags> () { return 0x7466C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_globalIlluminationFlags> () { return 0x746AC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_doubleSidedGI> () { return 0x746660; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_doubleSidedGI> () { return 0x746A60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_enableInstancing> () { return 0x746690; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_enableInstancing> () { return 0x746A90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_passCount> () { return 0x746900; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetShaderPassEnabled> () { return 0x745F00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetShaderPassEnabled> () { return 0x7448F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetPassName> () { return 0x744890; }
    template<> inline uintptr_t rva<&UnityEngine::Material::FindPass> () { return 0x744020; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetOverrideTag> () { return 0x745E30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTagImpl> () { return 0x744920; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTag> () { return 0x744960; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTag1> () { return 0x7449A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::Lerp> () { return 0x745130; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetPass> () { return 0x745E60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::CopyPropertiesFromMaterial> () { return 0x7438E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetShaderKeywords> () { return 0x7448C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetShaderKeywords> () { return 0x745ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::get_shaderKeywords> () { return 0x7448C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::set_shaderKeywords> () { return 0x745ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ComputeCRC> () { return 0x7438B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNames> () { return 0x744C10; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNameIDs> () { return 0x744BB0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNamesInternal> () { return 0x744BE0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNameIDsInternal> () { return 0x744B00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNames1> () { return 0x744C40; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexturePropertyNameIDs1> () { return 0x744B30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatImpl> () { return 0x745960; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorImpl> () { return 0x745500; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixImpl> () { return 0x745D30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureImpl> () { return 0x745F30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetRenderTextureImpl> () { return 0x745E90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetBufferImpl> () { return 0x745170; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetGraphicsBufferImpl> () { return 0x7451E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantBufferImpl> () { return 0x7455C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantGraphicsBufferImpl> () { return 0x745600; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatImpl> () { return 0x7444C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorImpl> () { return 0x7441E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixImpl> () { return 0x744750; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureImpl> () { return 0x744A00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArrayImpl> () { return 0x7456E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArrayImpl> () { return 0x7461C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArrayImpl> () { return 0x745250; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArrayImpl> () { return 0x745A80; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArrayImpl> () { return 0x744390; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArrayImpl> () { return 0x744E70; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArrayImpl> () { return 0x744080; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArrayImpl> () { return 0x7445F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArrayCountImpl> () { return 0x744360; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArrayCountImpl> () { return 0x744E40; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArrayCountImpl> () { return 0x744050; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArrayCountImpl> () { return 0x7445C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractFloatArrayImpl> () { return 0x743C00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractVectorArrayImpl> () { return 0x743EC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractColorArrayImpl> () { return 0x743AA0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractMatrixArrayImpl> () { return 0x743D60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureScaleAndOffsetImpl> () { return 0x744CF0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureOffsetImpl> () { return 0x745F90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureScaleImpl> () { return 0x746080; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArray> () { return 0x7457F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArray> () { return 0x7462C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArray> () { return 0x745290; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArray> () { return 0x745B90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractFloatArray> () { return 0x743C30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractVectorArray> () { return 0x743EF0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractColorArray> () { return 0x743AD0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::ExtractMatrixArray> () { return 0x743D90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloat> () { return 0x7459A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloat1> () { return 0x745960; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetInt> () { return 0x7459F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetInt1> () { return 0x745A40; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColor> () { return 0x745530; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColor1> () { return 0x745580; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVector> () { return 0x745530; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVector1> () { return 0x745580; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrix> () { return 0x745D60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrix1> () { return 0x745DD0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTexture> () { return 0x746140; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTexture1> () { return 0x745F30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTexture2> () { return 0x746180; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTexture3> () { return 0x745E90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetBuffer> () { return 0x745210; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetBuffer1> () { return 0x745170; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetBuffer2> () { return 0x7451A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetBuffer3> () { return 0x7451E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantBuffer> () { return 0x745640; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantBuffer1> () { return 0x7455C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantBuffer2> () { return 0x745690; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetConstantBuffer3> () { return 0x745600; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArray1> () { return 0x745750; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArray2> () { return 0x745900; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArray3> () { return 0x7457C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetFloatArray4> () { return 0x745720; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArray1> () { return 0x7453D0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArray2> () { return 0x745440; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArray3> () { return 0x7453A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorArray4> () { return 0x7454A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArray1> () { return 0x7463D0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArray2> () { return 0x746200; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArray3> () { return 0x746290; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetVectorArray4> () { return 0x746260; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArray1> () { return 0x745AF0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArray2> () { return 0x745CA0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArray3> () { return 0x745AC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixArray4> () { return 0x745B60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloat> () { return 0x7444F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloat1> () { return 0x7444C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetInt> () { return 0x744530; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetInt1> () { return 0x744580; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColor> () { return 0x744220; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColor1> () { return 0x744280; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVector> () { return 0x744FA0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVector1> () { return 0x745020; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrix> () { return 0x744790; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrix1> () { return 0x744810; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexture> () { return 0x744E00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTexture1> () { return 0x744A00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArray> () { return 0x7443F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArray1> () { return 0x744460; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArray> () { return 0x744110; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArray1> () { return 0x7440B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArray> () { return 0x744F30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArray1> () { return 0x744EB0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArray> () { return 0x7446B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArray1> () { return 0x744620; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArray2> () { return 0x7443C0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetFloatArray3> () { return 0x7443E0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArray2> () { return 0x744180; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorArray3> () { return 0x7441A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArray2> () { return 0x744F10; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetVectorArray3> () { return 0x744EA0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArray2> () { return 0x744680; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixArray3> () { return 0x7446A0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureOffset> () { return 0x745FC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureOffset1> () { return 0x746010; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureScale> () { return 0x7460F0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureScale1> () { return 0x7460B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureOffset> () { return 0x744A30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureOffset1> () { return 0x744AA0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureScale> () { return 0x744D90; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureScale1> () { return 0x744D30; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetColorImpl_Injected> () { return 0x7454D0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetMatrixImpl_Injected> () { return 0x745D00; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetColorImpl_Injected> () { return 0x7441B0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetMatrixImpl_Injected> () { return 0x744720; }
    template<> inline uintptr_t rva<&UnityEngine::Material::GetTextureScaleAndOffsetImpl_Injected> () { return 0x744CC0; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureOffsetImpl_Injected> () { return 0x745F60; }
    template<> inline uintptr_t rva<&UnityEngine::Material::SetTextureScaleImpl_Injected> () { return 0x746050; }
} // ark::method_info
#include <au/UnityEngine/Material.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Material* Material::Create(cs::string* scriptContents) { return method_call(Create, scriptContents); }  // 0x7439A0 // 
    void Material::CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader) { return method_call(CreateWithShader, self, shader); }  // 0x743940 // 
    void Material::CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source) { return method_call(CreateWithMaterial, self, source); }  // 0x743910 // 
    void Material::CreateWithString(UnityEngine::Material* self) { return method_call(CreateWithString, self); }  // 0x743970 // 
    void Material::ctor(UnityEngine::Shader* shader) { return method_call(ctor, shader); }  // 0x746530 // 
    void Material::ctor1(UnityEngine::Material* source) { return method_call(ctor1, source); }  // 0x7464B0 // 
    void Material::ctor2(cs::string* contents) { return method_call(ctor2, contents); }  // 0x746440 // 
    UnityEngine::Material* Material::GetDefaultMaterial() { return method_call(GetDefaultMaterial); }  // 0x7442F0 // 
    UnityEngine::Material* Material::GetDefaultParticleMaterial() { return method_call(GetDefaultParticleMaterial); }  // 0x744310 // 
    UnityEngine::Material* Material::GetDefaultLineMaterial() { return method_call(GetDefaultLineMaterial); }  // 0x7442D0 // 
    UnityEngine::Shader* Material::get_shader() { return method_call(get_shader); }  // 0x746990 // 
    void Material::set_shader(UnityEngine::Shader* value) { return method_call(set_shader, value); }  // 0x746CF0 // 
    UnityEngine::Color Material::get_color() { return method_call(get_color); }  // 0x7465B0 // 
    void Material::set_color(UnityEngine::Color value) { return method_call(set_color, value); }  // 0x7469C0 // 
    UnityEngine::Texture* Material::get_mainTexture() { return method_call(get_mainTexture); }  // 0x746870 // 
    void Material::set_mainTexture(UnityEngine::Texture* value) { return method_call(set_mainTexture, value); }  // 0x746C30 // 
    UnityEngine::Vector2 Material::get_mainTextureOffset() { return method_call(get_mainTextureOffset); }  // 0x7466F0 // 
    void Material::set_mainTextureOffset(UnityEngine::Vector2 value) { return method_call(set_mainTextureOffset, value); }  // 0x746AF0 // 
    UnityEngine::Vector2 Material::get_mainTextureScale() { return method_call(get_mainTextureScale); }  // 0x7467B0 // 
    void Material::set_mainTextureScale(UnityEngine::Vector2 value) { return method_call(set_mainTextureScale, value); }  // 0x746B90 // 
    int Material::GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag) { return method_call(GetFirstPropertyNameIdByAttribute, attributeFlag); }  // 0x744330 // 
    bool Material::HasProperty(int nameID) { return method_call(HasProperty, nameID); }  // 0x745090 // 
    bool Material::HasProperty1(cs::string* name) { return method_call(HasProperty1, name); }  // 0x7450C0 // 
    int Material::get_renderQueue() { return method_call(get_renderQueue); }  // 0x746960 // 
    void Material::set_renderQueue(int value) { return method_call(set_renderQueue, value); }  // 0x746CC0 // 
    int Material::get_rawRenderQueue() { return method_call(get_rawRenderQueue); }  // 0x746930 // 
    void Material::EnableKeyword(cs::string* keyword) { return method_call(EnableKeyword, keyword); }  // 0x743A70 // 
    void Material::DisableKeyword(cs::string* keyword) { return method_call(DisableKeyword, keyword); }  // 0x743A40 // 
    bool Material::IsKeywordEnabled(cs::string* keyword) { return method_call(IsKeywordEnabled, keyword); }  // 0x745100 // 
    UnityEngine::MaterialGlobalIlluminationFlags Material::get_globalIlluminationFlags() { return method_call(get_globalIlluminationFlags); }  // 0x7466C0 // 
    void Material::set_globalIlluminationFlags(UnityEngine::MaterialGlobalIlluminationFlags value) { return method_call(set_globalIlluminationFlags, value); }  // 0x746AC0 // 
    bool Material::get_doubleSidedGI() { return method_call(get_doubleSidedGI); }  // 0x746660 // 
    void Material::set_doubleSidedGI(bool value) { return method_call(set_doubleSidedGI, value); }  // 0x746A60 // 
    bool Material::get_enableInstancing() { return method_call(get_enableInstancing); }  // 0x746690 // 
    void Material::set_enableInstancing(bool value) { return method_call(set_enableInstancing, value); }  // 0x746A90 // 
    int Material::get_passCount() { return method_call(get_passCount); }  // 0x746900 // 
    void Material::SetShaderPassEnabled(cs::string* passName, bool enabled) { return method_call(SetShaderPassEnabled, passName, enabled); }  // 0x745F00 // 
    bool Material::GetShaderPassEnabled(cs::string* passName) { return method_call(GetShaderPassEnabled, passName); }  // 0x7448F0 // 
    cs::string* Material::GetPassName(int pass) { return method_call(GetPassName, pass); }  // 0x744890 // 
    int Material::FindPass(cs::string* passName) { return method_call(FindPass, passName); }  // 0x744020 // 
    void Material::SetOverrideTag(cs::string* tag, cs::string* val) { return method_call(SetOverrideTag, tag, val); }  // 0x745E30 // 
    cs::string* Material::GetTagImpl(cs::string* tag, bool currentSubShaderOnly, cs::string* defaultValue) { return method_call(GetTagImpl, tag, currentSubShaderOnly, defaultValue); }  // 0x744920 // 
    cs::string* Material::GetTag(cs::string* tag, bool searchFallbacks, cs::string* defaultValue) { return method_call(GetTag, tag, searchFallbacks, defaultValue); }  // 0x744960 // 
    cs::string* Material::GetTag1(cs::string* tag, bool searchFallbacks) { return method_call(GetTag1, tag, searchFallbacks); }  // 0x7449A0 // 
    void Material::Lerp(UnityEngine::Material* start, UnityEngine::Material* end, float t) { return method_call(Lerp, start, end, t); }  // 0x745130 // 
    bool Material::SetPass(int pass) { return method_call(SetPass, pass); }  // 0x745E60 // 
    void Material::CopyPropertiesFromMaterial(UnityEngine::Material* mat) { return method_call(CopyPropertiesFromMaterial, mat); }  // 0x7438E0 // 
    cs::array<cs::string*>* Material::GetShaderKeywords() { return method_call(GetShaderKeywords); }  // 0x7448C0 // 
    void Material::SetShaderKeywords(cs::array<cs::string*>* names) { return method_call(SetShaderKeywords, names); }  // 0x745ED0 // 
    cs::array<cs::string*>* Material::get_shaderKeywords() { return method_call(get_shaderKeywords); }  // 0x7448C0 // 
    void Material::set_shaderKeywords(cs::array<cs::string*>* value) { return method_call(set_shaderKeywords, value); }  // 0x745ED0 // 
    int Material::ComputeCRC() { return method_call(ComputeCRC); }  // 0x7438B0 // 
    cs::array<cs::string*>* Material::GetTexturePropertyNames() { return method_call(GetTexturePropertyNames); }  // 0x744C10 // 
    cs::array<int>* Material::GetTexturePropertyNameIDs() { return method_call(GetTexturePropertyNameIDs); }  // 0x744BB0 // 
    void Material::GetTexturePropertyNamesInternal(Material* outNames) { return method_call(GetTexturePropertyNamesInternal, outNames); }  // 0x744BE0 // 
    void Material::GetTexturePropertyNameIDsInternal(Material* outNames) { return method_call(GetTexturePropertyNameIDsInternal, outNames); }  // 0x744B00 // 
    void Material::GetTexturePropertyNames1(System::Collections::Generic::List<cs::string*>* outNames) { return method_call(GetTexturePropertyNames1, outNames); }  // 0x744C40 // 
    void Material::GetTexturePropertyNameIDs1(System::Collections::Generic::List<int>* outNames) { return method_call(GetTexturePropertyNameIDs1, outNames); }  // 0x744B30 // 
    void Material::SetFloatImpl(int name, float value) { return method_call(SetFloatImpl, name, value); }  // 0x745960 // 
    void Material::SetColorImpl(int name, UnityEngine::Color value) { return method_call(SetColorImpl, name, value); }  // 0x745500 // 
    void Material::SetMatrixImpl(int name, UnityEngine::Matrix4x4 value) { return method_call(SetMatrixImpl, name, value); }  // 0x745D30 // 
    void Material::SetTextureImpl(int name, UnityEngine::Texture* value) { return method_call(SetTextureImpl, name, value); }  // 0x745F30 // 
    void Material::SetRenderTextureImpl(int name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return method_call(SetRenderTextureImpl, name, value, element); }  // 0x745E90 // 
    void Material::SetBufferImpl(int name, UnityEngine::ComputeBuffer* value) { return method_call(SetBufferImpl, name, value); }  // 0x745170 // 
    void Material::SetGraphicsBufferImpl(int name, UnityEngine::GraphicsBuffer* value) { return method_call(SetGraphicsBufferImpl, name, value); }  // 0x7451E0 // 
    void Material::SetConstantBufferImpl(int name, UnityEngine::ComputeBuffer* value, int offset, int size) { return method_call(SetConstantBufferImpl, name, value, offset, size); }  // 0x7455C0 // 
    void Material::SetConstantGraphicsBufferImpl(int name, UnityEngine::GraphicsBuffer* value, int offset, int size) { return method_call(SetConstantGraphicsBufferImpl, name, value, offset, size); }  // 0x745600 // 
    float Material::GetFloatImpl(int name) { return method_call(GetFloatImpl, name); }  // 0x7444C0 // 
    UnityEngine::Color Material::GetColorImpl(int name) { return method_call(GetColorImpl, name); }  // 0x7441E0 // 
    UnityEngine::Matrix4x4 Material::GetMatrixImpl(int name) { return method_call(GetMatrixImpl, name); }  // 0x744750 // 
    UnityEngine::Texture* Material::GetTextureImpl(int name) { return method_call(GetTextureImpl, name); }  // 0x744A00 // 
    void Material::SetFloatArrayImpl(int name, cs::array<float>* values, int count) { return method_call(SetFloatArrayImpl, name, values, count); }  // 0x7456E0 // 
    void Material::SetVectorArrayImpl(int name, cs::array<UnityEngine::Vector4>* values, int count) { return method_call(SetVectorArrayImpl, name, values, count); }  // 0x7461C0 // 
    void Material::SetColorArrayImpl(int name, cs::array<UnityEngine::Color>* values, int count) { return method_call(SetColorArrayImpl, name, values, count); }  // 0x745250 // 
    void Material::SetMatrixArrayImpl(int name, cs::array<UnityEngine::Matrix4x4>* values, int count) { return method_call(SetMatrixArrayImpl, name, values, count); }  // 0x745A80 // 
    cs::array<float>* Material::GetFloatArrayImpl(int name) { return method_call(GetFloatArrayImpl, name); }  // 0x744390 // 
    cs::array<UnityEngine::Vector4>* Material::GetVectorArrayImpl(int name) { return method_call(GetVectorArrayImpl, name); }  // 0x744E70 // 
    cs::array<UnityEngine::Color>* Material::GetColorArrayImpl(int name) { return method_call(GetColorArrayImpl, name); }  // 0x744080 // 
    cs::array<UnityEngine::Matrix4x4>* Material::GetMatrixArrayImpl(int name) { return method_call(GetMatrixArrayImpl, name); }  // 0x7445F0 // 
    int Material::GetFloatArrayCountImpl(int name) { return method_call(GetFloatArrayCountImpl, name); }  // 0x744360 // 
    int Material::GetVectorArrayCountImpl(int name) { return method_call(GetVectorArrayCountImpl, name); }  // 0x744E40 // 
    int Material::GetColorArrayCountImpl(int name) { return method_call(GetColorArrayCountImpl, name); }  // 0x744050 // 
    int Material::GetMatrixArrayCountImpl(int name) { return method_call(GetMatrixArrayCountImpl, name); }  // 0x7445C0 // 
    void Material::ExtractFloatArrayImpl(int name, cs::array<float>* val) { return method_call(ExtractFloatArrayImpl, name, val); }  // 0x743C00 // 
    void Material::ExtractVectorArrayImpl(int name, cs::array<UnityEngine::Vector4>* val) { return method_call(ExtractVectorArrayImpl, name, val); }  // 0x743EC0 // 
    void Material::ExtractColorArrayImpl(int name, cs::array<UnityEngine::Color>* val) { return method_call(ExtractColorArrayImpl, name, val); }  // 0x743AA0 // 
    void Material::ExtractMatrixArrayImpl(int name, cs::array<UnityEngine::Matrix4x4>* val) { return method_call(ExtractMatrixArrayImpl, name, val); }  // 0x743D60 // 
    UnityEngine::Vector4 Material::GetTextureScaleAndOffsetImpl(int name) { return method_call(GetTextureScaleAndOffsetImpl, name); }  // 0x744CF0 // 
    void Material::SetTextureOffsetImpl(int name, UnityEngine::Vector2 offset) { return method_call(SetTextureOffsetImpl, name, offset); }  // 0x745F90 // 
    void Material::SetTextureScaleImpl(int name, UnityEngine::Vector2 scale) { return method_call(SetTextureScaleImpl, name, scale); }  // 0x746080 // 
    void Material::SetFloatArray(int name, cs::array<float>* values, int count) { return method_call(SetFloatArray, name, values, count); }  // 0x7457F0 // 
    void Material::SetVectorArray(int name, cs::array<UnityEngine::Vector4>* values, int count) { return method_call(SetVectorArray, name, values, count); }  // 0x7462C0 // 
    void Material::SetColorArray(int name, cs::array<UnityEngine::Color>* values, int count) { return method_call(SetColorArray, name, values, count); }  // 0x745290 // 
    void Material::SetMatrixArray(int name, cs::array<UnityEngine::Matrix4x4>* values, int count) { return method_call(SetMatrixArray, name, values, count); }  // 0x745B90 // 
    void Material::ExtractFloatArray(int name, System::Collections::Generic::List<float>* values) { return method_call(ExtractFloatArray, name, values); }  // 0x743C30 // 
    void Material::ExtractVectorArray(int name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return method_call(ExtractVectorArray, name, values); }  // 0x743EF0 // 
    void Material::ExtractColorArray(int name, System::Collections::Generic::List<UnityEngine::Color>* values) { return method_call(ExtractColorArray, name, values); }  // 0x743AD0 // 
    void Material::ExtractMatrixArray(int name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return method_call(ExtractMatrixArray, name, values); }  // 0x743D90 // 
    void Material::SetFloat(cs::string* name, float value) { return method_call(SetFloat, name, value); }  // 0x7459A0 // 
    void Material::SetFloat1(int nameID, float value) { return method_call(SetFloat1, nameID, value); }  // 0x745960 // 
    void Material::SetInt(cs::string* name, int value) { return method_call(SetInt, name, value); }  // 0x7459F0 // 
    void Material::SetInt1(int nameID, int value) { return method_call(SetInt1, nameID, value); }  // 0x745A40 // 
    void Material::SetColor(cs::string* name, UnityEngine::Color value) { return method_call(SetColor, name, value); }  // 0x745530 // 
    void Material::SetColor1(int nameID, UnityEngine::Color value) { return method_call(SetColor1, nameID, value); }  // 0x745580 // 
    void Material::SetVector(cs::string* name, UnityEngine::Vector4 value) { return method_call(SetVector, name, value); }  // 0x745530 // 
    void Material::SetVector1(int nameID, UnityEngine::Vector4 value) { return method_call(SetVector1, nameID, value); }  // 0x745580 // 
    void Material::SetMatrix(cs::string* name, UnityEngine::Matrix4x4 value) { return method_call(SetMatrix, name, value); }  // 0x745D60 // 
    void Material::SetMatrix1(int nameID, UnityEngine::Matrix4x4 value) { return method_call(SetMatrix1, nameID, value); }  // 0x745DD0 // 
    void Material::SetTexture(cs::string* name, UnityEngine::Texture* value) { return method_call(SetTexture, name, value); }  // 0x746140 // 
    void Material::SetTexture1(int nameID, UnityEngine::Texture* value) { return method_call(SetTexture1, nameID, value); }  // 0x745F30 // 
    void Material::SetTexture2(cs::string* name, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return method_call(SetTexture2, name, value, element); }  // 0x746180 // 
    void Material::SetTexture3(int nameID, UnityEngine::RenderTexture* value, UnityEngine::Rendering::RenderTextureSubElement element) { return method_call(SetTexture3, nameID, value, element); }  // 0x745E90 // 
    void Material::SetBuffer(cs::string* name, UnityEngine::ComputeBuffer* value) { return method_call(SetBuffer, name, value); }  // 0x745210 // 
    void Material::SetBuffer1(int nameID, UnityEngine::ComputeBuffer* value) { return method_call(SetBuffer1, nameID, value); }  // 0x745170 // 
    void Material::SetBuffer2(cs::string* name, UnityEngine::GraphicsBuffer* value) { return method_call(SetBuffer2, name, value); }  // 0x7451A0 // 
    void Material::SetBuffer3(int nameID, UnityEngine::GraphicsBuffer* value) { return method_call(SetBuffer3, nameID, value); }  // 0x7451E0 // 
    void Material::SetConstantBuffer(cs::string* name, UnityEngine::ComputeBuffer* value, int offset, int size) { return method_call(SetConstantBuffer, name, value, offset, size); }  // 0x745640 // 
    void Material::SetConstantBuffer1(int nameID, UnityEngine::ComputeBuffer* value, int offset, int size) { return method_call(SetConstantBuffer1, nameID, value, offset, size); }  // 0x7455C0 // 
    void Material::SetConstantBuffer2(cs::string* name, UnityEngine::GraphicsBuffer* value, int offset, int size) { return method_call(SetConstantBuffer2, name, value, offset, size); }  // 0x745690 // 
    void Material::SetConstantBuffer3(int nameID, UnityEngine::GraphicsBuffer* value, int offset, int size) { return method_call(SetConstantBuffer3, nameID, value, offset, size); }  // 0x745600 // 
    void Material::SetFloatArray1(cs::string* name, System::Collections::Generic::List<float>* values) { return method_call(SetFloatArray1, name, values); }  // 0x745750 // 
    void Material::SetFloatArray2(int nameID, System::Collections::Generic::List<float>* values) { return method_call(SetFloatArray2, nameID, values); }  // 0x745900 // 
    void Material::SetFloatArray3(cs::string* name, cs::array<float>* values) { return method_call(SetFloatArray3, name, values); }  // 0x7457C0 // 
    void Material::SetFloatArray4(int nameID, cs::array<float>* values) { return method_call(SetFloatArray4, nameID, values); }  // 0x745720 // 
    void Material::SetColorArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values) { return method_call(SetColorArray1, name, values); }  // 0x7453D0 // 
    void Material::SetColorArray2(int nameID, System::Collections::Generic::List<UnityEngine::Color>* values) { return method_call(SetColorArray2, nameID, values); }  // 0x745440 // 
    void Material::SetColorArray3(cs::string* name, cs::array<UnityEngine::Color>* values) { return method_call(SetColorArray3, name, values); }  // 0x7453A0 // 
    void Material::SetColorArray4(int nameID, cs::array<UnityEngine::Color>* values) { return method_call(SetColorArray4, nameID, values); }  // 0x7454A0 // 
    void Material::SetVectorArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return method_call(SetVectorArray1, name, values); }  // 0x7463D0 // 
    void Material::SetVectorArray2(int nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return method_call(SetVectorArray2, nameID, values); }  // 0x746200 // 
    void Material::SetVectorArray3(cs::string* name, cs::array<UnityEngine::Vector4>* values) { return method_call(SetVectorArray3, name, values); }  // 0x746290 // 
    void Material::SetVectorArray4(int nameID, cs::array<UnityEngine::Vector4>* values) { return method_call(SetVectorArray4, nameID, values); }  // 0x746260 // 
    void Material::SetMatrixArray1(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return method_call(SetMatrixArray1, name, values); }  // 0x745AF0 // 
    void Material::SetMatrixArray2(int nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return method_call(SetMatrixArray2, nameID, values); }  // 0x745CA0 // 
    void Material::SetMatrixArray3(cs::string* name, cs::array<UnityEngine::Matrix4x4>* values) { return method_call(SetMatrixArray3, name, values); }  // 0x745AC0 // 
    void Material::SetMatrixArray4(int nameID, cs::array<UnityEngine::Matrix4x4>* values) { return method_call(SetMatrixArray4, nameID, values); }  // 0x745B60 // 
    float Material::GetFloat(cs::string* name) { return method_call(GetFloat, name); }  // 0x7444F0 // 
    float Material::GetFloat1(int nameID) { return method_call(GetFloat1, nameID); }  // 0x7444C0 // 
    int Material::GetInt(cs::string* name) { return method_call(GetInt, name); }  // 0x744530 // 
    int Material::GetInt1(int nameID) { return method_call(GetInt1, nameID); }  // 0x744580 // 
    UnityEngine::Color Material::GetColor(cs::string* name) { return method_call(GetColor, name); }  // 0x744220 // 
    UnityEngine::Color Material::GetColor1(int nameID) { return method_call(GetColor1, nameID); }  // 0x744280 // 
    UnityEngine::Vector4 Material::GetVector(cs::string* name) { return method_call(GetVector, name); }  // 0x744FA0 // 
    UnityEngine::Vector4 Material::GetVector1(int nameID) { return method_call(GetVector1, nameID); }  // 0x745020 // 
    UnityEngine::Matrix4x4 Material::GetMatrix(cs::string* name) { return method_call(GetMatrix, name); }  // 0x744790 // 
    UnityEngine::Matrix4x4 Material::GetMatrix1(int nameID) { return method_call(GetMatrix1, nameID); }  // 0x744810 // 
    UnityEngine::Texture* Material::GetTexture(cs::string* name) { return method_call(GetTexture, name); }  // 0x744E00 // 
    UnityEngine::Texture* Material::GetTexture1(int nameID) { return method_call(GetTexture1, nameID); }  // 0x744A00 // 
    cs::array<float>* Material::GetFloatArray(cs::string* name) { return method_call(GetFloatArray, name); }  // 0x7443F0 // 
    cs::array<float>* Material::GetFloatArray1(int nameID) { return method_call(GetFloatArray1, nameID); }  // 0x744460 // 
    cs::array<UnityEngine::Color>* Material::GetColorArray(cs::string* name) { return method_call(GetColorArray, name); }  // 0x744110 // 
    cs::array<UnityEngine::Color>* Material::GetColorArray1(int nameID) { return method_call(GetColorArray1, nameID); }  // 0x7440B0 // 
    cs::array<UnityEngine::Vector4>* Material::GetVectorArray(cs::string* name) { return method_call(GetVectorArray, name); }  // 0x744F30 // 
    cs::array<UnityEngine::Vector4>* Material::GetVectorArray1(int nameID) { return method_call(GetVectorArray1, nameID); }  // 0x744EB0 // 
    cs::array<UnityEngine::Matrix4x4>* Material::GetMatrixArray(cs::string* name) { return method_call(GetMatrixArray, name); }  // 0x7446B0 // 
    cs::array<UnityEngine::Matrix4x4>* Material::GetMatrixArray1(int nameID) { return method_call(GetMatrixArray1, nameID); }  // 0x744620 // 
    void Material::GetFloatArray2(cs::string* name, System::Collections::Generic::List<float>* values) { return method_call(GetFloatArray2, name, values); }  // 0x7443C0 // 
    void Material::GetFloatArray3(int nameID, System::Collections::Generic::List<float>* values) { return method_call(GetFloatArray3, nameID, values); }  // 0x7443E0 // 
    void Material::GetColorArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Color>* values) { return method_call(GetColorArray2, name, values); }  // 0x744180 // 
    void Material::GetColorArray3(int nameID, System::Collections::Generic::List<UnityEngine::Color>* values) { return method_call(GetColorArray3, nameID, values); }  // 0x7441A0 // 
    void Material::GetVectorArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return method_call(GetVectorArray2, name, values); }  // 0x744F10 // 
    void Material::GetVectorArray3(int nameID, System::Collections::Generic::List<UnityEngine::Vector4>* values) { return method_call(GetVectorArray3, nameID, values); }  // 0x744EA0 // 
    void Material::GetMatrixArray2(cs::string* name, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return method_call(GetMatrixArray2, name, values); }  // 0x744680 // 
    void Material::GetMatrixArray3(int nameID, System::Collections::Generic::List<UnityEngine::Matrix4x4>* values) { return method_call(GetMatrixArray3, nameID, values); }  // 0x7446A0 // 
    void Material::SetTextureOffset(cs::string* name, UnityEngine::Vector2 value) { return method_call(SetTextureOffset, name, value); }  // 0x745FC0 // 
    void Material::SetTextureOffset1(int nameID, UnityEngine::Vector2 value) { return method_call(SetTextureOffset1, nameID, value); }  // 0x746010 // 
    void Material::SetTextureScale(cs::string* name, UnityEngine::Vector2 value) { return method_call(SetTextureScale, name, value); }  // 0x7460F0 // 
    void Material::SetTextureScale1(int nameID, UnityEngine::Vector2 value) { return method_call(SetTextureScale1, nameID, value); }  // 0x7460B0 // 
    UnityEngine::Vector2 Material::GetTextureOffset(cs::string* name) { return method_call(GetTextureOffset, name); }  // 0x744A30 // 
    UnityEngine::Vector2 Material::GetTextureOffset1(int nameID) { return method_call(GetTextureOffset1, nameID); }  // 0x744AA0 // 
    UnityEngine::Vector2 Material::GetTextureScale(cs::string* name) { return method_call(GetTextureScale, name); }  // 0x744D90 // 
    UnityEngine::Vector2 Material::GetTextureScale1(int nameID) { return method_call(GetTextureScale1, nameID); }  // 0x744D30 // 
    void Material::SetColorImpl_Injected(int name, /*ref*/ UnityEngine::Color value) { return method_call(SetColorImpl_Injected, name, value); }  // 0x7454D0 // 
    void Material::SetMatrixImpl_Injected(int name, /*ref*/ UnityEngine::Matrix4x4 value) { return method_call(SetMatrixImpl_Injected, name, value); }  // 0x745D00 // 
    void Material::GetColorImpl_Injected(int name, /*out*/ UnityEngine::Color ret) { return method_call(GetColorImpl_Injected, name, ret); }  // 0x7441B0 // 
    void Material::GetMatrixImpl_Injected(int name, /*out*/ UnityEngine::Matrix4x4 ret) { return method_call(GetMatrixImpl_Injected, name, ret); }  // 0x744720 // 
    void Material::GetTextureScaleAndOffsetImpl_Injected(int name, /*out*/ UnityEngine::Vector4 ret) { return method_call(GetTextureScaleAndOffsetImpl_Injected, name, ret); }  // 0x744CC0 // 
    void Material::SetTextureOffsetImpl_Injected(int name, /*ref*/ UnityEngine::Vector2 offset) { return method_call(SetTextureOffsetImpl_Injected, name, offset); }  // 0x745F60 // 
    void Material::SetTextureScaleImpl_Injected(int name, /*ref*/ UnityEngine::Vector2 scale) { return method_call(SetTextureScaleImpl_Injected, name, scale); }  // 0x746050 // 

};


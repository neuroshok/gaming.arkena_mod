#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/Color.hpp>

namespace Unity
{
    struct Shader : ark::meta<Shader, Unity::Object>
    {

    };

    struct Material : ark::meta<Material, Unity::Object> // TypeDefIndex: 5334
    {
        ark_meta("UnityEngine", "Material", "");

        static void CreateWithShader(Material* self, struct Shader* shader) { return static_method_call(Material, CreateWithShader, self, shader); } // 0xC07740
        void CreateWithMaterial(Material* self, Material* source) { return method_call(CreateWithMaterial, self, source); }  // 0xC07710
        void CreateWithString(Material* self) { return method_call(CreateWithString, self); }                                // 0xC07770
        void _ctor(struct Shader* shader) { return method_call(_ctor, shader); }                                             // 0xC07FA0
        void _ctor_1(Material* source) { return method_call(_ctor_1, source); }                                              // 0xC07EB0
        void _ctor_2(cs::string* contents) { return method_call(_ctor_2, contents); }                                        // 0xC07F30
        void set_color(Unity::Color value) { return method_call(set_color, value); }                                         // 0xC080B0
        struct Texture* get_mainTexture() { return method_call(get_mainTexture, ); }                                         // 0xC08020
        std::int32_t GetFirstPropertyNameIdByAttribute(struct ShaderPropertyFlags* attributeFlag)
        {
            return method_call(GetFirstPropertyNameIdByAttribute, attributeFlag);
        }                                                                                                                                // 0xC078D0
        bool HasProperty(std::int32_t nameID) { return method_call(HasProperty, nameID); }                                               // 0xC07B90
        bool HasProperty_1(cs::string* name) { return method_call(HasProperty_1, name); }                                                // 0xC07B50
        void EnableKeyword(cs::string* keyword) { return method_call(EnableKeyword, keyword); }                                          // 0xC077D0
        void DisableKeyword(cs::string* keyword) { return method_call(DisableKeyword, keyword); }                                        // 0xC077A0
        void SetFloatImpl(std::int32_t name, float value) { return method_call(SetFloatImpl, name, value); }                             // 0xC07CB0
        void SetColorImpl(std::int32_t name, Unity::Color value) { return method_call(SetColorImpl, name, value); }                      // 0xC07BF0
        void SetTextureImpl(std::int32_t name, struct Texture* value) { return method_call(SetTextureImpl, name, value); }               // 0xC07D90
        float GetFloatImpl(std::int32_t name) { return method_call(GetFloatImpl, name); }                                                // 0xC07900
        Unity::Color GetColorImpl(std::int32_t name) { return method_call(GetColorImpl, name); }                                         // 0xC07830
        struct Texture* GetTextureImpl(std::int32_t name) { return method_call(GetTextureImpl, name); }                                  // 0xC07980
        struct Vector4* GetTextureScaleAndOffsetImpl(std::int32_t name) { return method_call(GetTextureScaleAndOffsetImpl, name); }      // 0xC07AD0
        void SetTextureOffsetImpl(std::int32_t name, struct Vector2* offset) { return method_call(SetTextureOffsetImpl, name, offset); } // 0xC07DF0
        void SetFloat(cs::string* name, float value) { return method_call(SetFloat, name, value); }                                      // 0xC07CF0
        void SetInt(cs::string* name, std::int32_t value) { return method_call(SetInt, name, value); }                                   // 0xC07D40
        void SetColor(cs::string* name, Unity::Color value) { return method_call(SetColor, name, value); }                               // 0xC07C60
        void SetColor_1(std::int32_t nameID, Unity::Color value) { return method_call(SetColor_1, nameID, value); }                      // 0xC07C20
        void SetVector(cs::string* name, struct Vector4* value) { return method_call(SetVector, name, value); }                          // 0xC07C60
        void SetTexture(cs::string* name, struct Texture* value) { return method_call(SetTexture, name, value); }                        // 0xC07E70
        std::int32_t GetInt(cs::string* name) { return method_call(GetInt, name); }                                                      // 0xC07930
        Unity::Color GetColor(cs::string* name) { return method_call(GetColor, name); }                                                  // 0xC07870
        struct Texture* GetTexture(cs::string* name) { return method_call(GetTexture, name); }                                           // 0xC07B10
        // struct Texture* GetTexture(std::int32_t nameID) { return method_call(GetTexture, nameID); }                                      //
        // 0xC07980
        void SetTextureOffset(cs::string* name, struct Vector2* value) { return method_call(SetTextureOffset, name, value); } // 0xC07E20
        struct Vector2* GetTextureOffset(cs::string* name) { return method_call(GetTextureOffset, name); }                    // 0xC079B0
        // struct Vector2* GetTextureOffset(std::int32_t nameID) { return method_call(GetTextureOffset, nameID); }                          //
        // 0xC07A30
        void SetColorImpl_Injected(std::int32_t name, Unity::Color value) { return method_call(SetColorImpl_Injected, name, value); } // 0xC07BC0
        void GetColorImpl_Injected(std::int32_t name, Unity::Color ret) { return method_call(GetColorImpl_Injected, name, ret); }     // 0xC07800
        void GetTextureScaleAndOffsetImpl_Injected(std::int32_t name, struct Vector4* ret)
        {
            return method_call(GetTextureScaleAndOffsetImpl_Injected, name, ret);
        } // 0xC07AA0
        void SetTextureOffsetImpl_Injected(std::int32_t name, struct Vector2* offset)
        {
            return method_call(SetTextureOffsetImpl_Injected, name, offset);
        } // 0xC07DC0
    };
}
namespace ark::method_info
{
    method_rva(Unity::Material::CreateWithShader, 0xC07740)
    method_rva(Unity::Material::CreateWithMaterial, 0xC07710)
    method_rva(Unity::Material::CreateWithString, 0xC07770)
    method_rva(Unity::Material::_ctor, 0xC07FA0)
    method_rva(Unity::Material::_ctor_1, 0xC07EB0)
    method_rva(Unity::Material::_ctor_2, 0xC07F30)
    method_rva(Unity::Material::set_color, 0xC080B0)
    method_rva(Unity::Material::get_mainTexture, 0xC08020)
    method_rva(Unity::Material::GetFirstPropertyNameIdByAttribute, 0xC078D0)
    method_rva(Unity::Material::HasProperty, 0xC07B90)
    method_rva(Unity::Material::HasProperty_1, 0xC07B50)
    method_rva(Unity::Material::EnableKeyword, 0xC077D0)
    method_rva(Unity::Material::DisableKeyword, 0xC077A0)
    method_rva(Unity::Material::SetFloatImpl, 0xC07CB0)
    method_rva(Unity::Material::SetColorImpl, 0xC07BF0)
    method_rva(Unity::Material::SetTextureImpl, 0xC07D90)
    method_rva(Unity::Material::GetFloatImpl, 0xC07900)
    method_rva(Unity::Material::GetColorImpl, 0xC07830)
    method_rva(Unity::Material::GetTextureImpl, 0xC07980)
    method_rva(Unity::Material::GetTextureScaleAndOffsetImpl, 0xC07AD0)
    method_rva(Unity::Material::SetTextureOffsetImpl, 0xC07DF0)
    method_rva(Unity::Material::SetFloat, 0xC07CF0)
    method_rva(Unity::Material::SetInt, 0xC07D40)
    method_rva(Unity::Material::SetColor, 0xC07C60)
    method_rva(Unity::Material::SetColor_1, 0xC07C20)
    method_rva(Unity::Material::SetVector, 0xC07C60)
    method_rva(Unity::Material::SetTexture, 0xC07E70)
    method_rva(Unity::Material::GetInt, 0xC07930)
    method_rva(Unity::Material::GetColor, 0xC07870)
    method_rva(Unity::Material::GetTexture, 0xC07B10)
    //method_rva(Unity::Material::GetTexture, 0xC07980)
    method_rva(Unity::Material::SetTextureOffset, 0xC07E20)
    method_rva(Unity::Material::GetTextureOffset, 0xC079B0)
    //method_rva(Unity::Material::GetTextureOffset, 0xC07A30)
    method_rva(Unity::Material::SetColorImpl_Injected, 0xC07BC0)
    method_rva(Unity::Material::GetColorImpl_Injected, 0xC07800)
    method_rva(Unity::Material::GetTextureScaleAndOffsetImpl_Injected, 0xC07AA0)
    method_rva(Unity::Material::SetTextureOffsetImpl_Injected, 0xC07DC0)
}
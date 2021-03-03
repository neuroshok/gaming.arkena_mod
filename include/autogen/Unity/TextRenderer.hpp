#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Color.hpp>

namespace Unity
{
    struct TextAsset : ark::meta<TextAsset, Unity::Object> {};
    struct MeshRenderer : ark::meta<MeshRenderer, Unity::Renderer> {};

    struct TextRenderer : ark::meta<TextRenderer, Unity::MonoBehaviour>
    {
        ark_meta("", "AELDHKGBIFD", "AELDHKGBIFD, Assembly-CSharp");

        TextAsset* TextAsset;// FontData; // 0xC
        float scale; // 0x10
        float TabWidth; // 0x14
        bool Centered; // 0x18
        bool RightAligned; // 0x19
        struct PHINFDJKKJM* textLinkPrefab; // 0x1C
        struct Mesh* JAKKLJIKCCB; // 0x20
        MeshRenderer* render; // 0x24
        cs::string* Text; // 0x28
        cs::string* LAHIBHEEDMH; // 0x2C
        Color color; // 0x30
        Color BHOFIDCCIGG; // 0x40
        Color OutlineColor; // 0x50
        Color OOAFCPMNNJD; // 0x60
        float maxWidth; // 0x70
    };
}
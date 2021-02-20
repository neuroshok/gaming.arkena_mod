#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Color.hpp>

namespace Unity
{
    struct TextRenderer : ark::meta<TextRenderer, Unity::MonoBehaviour>
    {
        static constexpr auto internal_name = "AELDHKGBIFD";

        void* TextAsset;// FontData; // 0xC
        float scale; // 0x10
        float TabWidth; // 0x14
        bool Centered; // 0x18
        bool RightAligned; // 0x19
        void* textLinkPrefab; // 0x1C
        void* JAKKLJIKCCB; // 0x20
        void* render; // 0x24
        System::String* Text; // 0x28
        void* LAHIBHEEDMH; // 0x2C
        Color color; // 0x30
        Color BHOFIDCCIGG; // 0x40
        Color OutlineColor; // 0x50
        Color OOAFCPMNNJD; // 0x60
        float maxWidth; // 0x70
    };
}
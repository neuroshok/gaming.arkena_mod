#pragma once
#include <ark/class.hpp>

#include <au/TMPro/HorizontalAlignmentOptions.hpp>
#include <au/TMPro/FontStyles.hpp>
#include <au/TMPro/TMP_TextInfo.hpp>
#include <au/TMPro/TMP_LineInfo.hpp>
#include <au/UnityEngine/Color32.hpp>
#include <au/TMPro/TMP_FontStyleStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_FontAsset.hpp>
#include <au/TMPro/TMP_SpriteAsset.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/TMPro/Extents.hpp>

namespace TMPro
{
    struct WordWrapState : ark::meta<WordWrapState>
    {
        int32_t previous_WordBreak; // 0x8
        int32_t total_CharacterCount; // 0xc
        int32_t visible_CharacterCount; // 0x10
        int32_t visible_SpriteCount; // 0x14
        int32_t visible_LinkCount; // 0x18
        int32_t firstCharacterIndex; // 0x1c
        int32_t firstVisibleCharacterIndex; // 0x20
        int32_t lastCharacterIndex; // 0x24
        int32_t lastVisibleCharIndex; // 0x28
        int32_t lineNumber; // 0x2c
        float maxCapHeight; // 0x30
        float maxAscender; // 0x34
        float maxDescender; // 0x38
        float startOfLineAscender; // 0x3c
        float maxLineAscender; // 0x40
        float maxLineDescender; // 0x44
        float pageAscender; // 0x48
        TMPro::HorizontalAlignmentOptions horizontalAlignment; // 0x4c
        float marginLeft; // 0x50
        float marginRight; // 0x54
        float xAdvance; // 0x58
        float preferredWidth; // 0x5c
        float preferredHeight; // 0x60
        float previousLineScale; // 0x64
        int32_t wordCount; // 0x68
        TMPro::FontStyles fontStyle; // 0x6c
        int32_t italicAngle; // 0x70
        float fontScaleMultiplier; // 0x74
        float currentFontSize; // 0x78
        float baselineOffset; // 0x7c
        float lineOffset; // 0x80
        bool isDrivenLineSpacing; // 0x84
        float glyphHorizontalAdvanceAdjustment; // 0x88
        float cSpace; // 0x8c
        float mSpace; // 0x90
        TMPro::TMP_TextInfo* textInfo; // 0x94
        TMPro::TMP_LineInfo lineInfo; // 0x98
        UnityEngine::Color32 vertexColor; // 0xf4
        UnityEngine::Color32 underlineColor; // 0xf8
        UnityEngine::Color32 strikethroughColor; // 0xfc
        UnityEngine::Color32 highlightColor; // 0x100
        TMPro::TMP_FontStyleStack basicStyleStack; // 0x104
        TMPro::TMP_TextProcessingStack<int32_t>* italicAngleStack; // 0x110
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* colorStack; // 0x128
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* underlineColorStack; // 0x140
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* strikethroughColorStack; // 0x158
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* highlightColorStack; // 0x170
        TMPro::TMP_TextProcessingStack<TMPro::HighlightState>* highlightStateStack; // 0x188
        TMPro::TMP_TextProcessingStack<TMPro::TMP_ColorGradient>* colorGradientStack; // 0x1b0
        TMPro::TMP_TextProcessingStack<float>* sizeStack; // 0x1c8
        TMPro::TMP_TextProcessingStack<float>* indentStack; // 0x1e0
        TMPro::TMP_TextProcessingStack<TMPro::FontWeight>* fontWeightStack; // 0x1f8
        TMPro::TMP_TextProcessingStack<int32_t>* styleStack; // 0x210
        TMPro::TMP_TextProcessingStack<float>* baselineStack; // 0x228
        TMPro::TMP_TextProcessingStack<int32_t>* actionStack; // 0x240
        TMPro::TMP_TextProcessingStack<TMPro::MaterialReference>* materialReferenceStack; // 0x258
        TMPro::TMP_TextProcessingStack<TMPro::HorizontalAlignmentOptions>* lineJustificationStack; // 0x28c
        int32_t spriteAnimationID; // 0x2a4
        TMPro::TMP_FontAsset* currentFontAsset; // 0x2a8
        TMPro::TMP_SpriteAsset* currentSpriteAsset; // 0x2ac
        UnityEngine::Material* currentMaterial; // 0x2b0
        int32_t currentMaterialIndex; // 0x2b4
        TMPro::Extents meshExtents; // 0x2b8
        bool tagNoParsing; // 0x2c8
        bool isNonBreakingSpace; // 0x2c9


    };

}
namespace ark {

        template<> struct meta_statics<TMPro::WordWrapState> {
        };

}


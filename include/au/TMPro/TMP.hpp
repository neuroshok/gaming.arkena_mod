#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/UI/MaskableGraphic.hpp>
#include <cs/string.hpp>
#include <au/TMPro/ITextPreprocessor.hpp>
#include <au/TMPro/TMP_FontAsset.hpp>
#include <au/UnityEngine/Material.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Color32.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/TMPro/ColorMode.hpp>
#include <au/TMPro/VertexGradient.hpp>
#include <au/TMPro/TMP_ColorGradient.hpp>
#include <au/TMPro/TMP_SpriteAsset.hpp>
#include <au/UnityEngine/Color32.hpp>
#include <au/TMPro/TMP_StyleSheet.hpp>
#include <au/TMPro/TMP_Style.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/FontWeight.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/FontStyles.hpp>
#include <au/TMPro/TMP_FontStyleStack.hpp>
#include <au/TMPro/HorizontalAlignmentOptions.hpp>
#include <au/TMPro/VerticalAlignmentOptions.hpp>
#include <au/TMPro/TextAlignmentOptions.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <cs/array.hpp>
#include <au/TMPro/TextOverflowModes.hpp>
#include <au/TMPro/TextureMappingOptions.hpp>
#include <au/TMPro/TextRenderFlags.hpp>
#include <au/TMPro/VertexSortingOrder.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/TMPro/TMP_TextInfo.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/RectTransform.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/System/Func.hpp>
#include <au/System/Func.hpp>
#include <au/System/Action.hpp>
#include <au/TMPro/TMP_SpriteAnimator.hpp>
#include <au/UnityEngine/UI/LayoutElement.hpp>
#include <au/TMPro/TMP_Text/TextInputSources.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/TMPro/WordWrapState.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/Extents.hpp>
#include <au/UnityEngine/Color32.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_ColorGradient.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <cs/array.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextProcessingStack.hpp>
#include <au/TMPro/TMP_TextElementType.hpp>
#include <au/TMPro/TMP_TextElement.hpp>
#include <au/TMPro/TMP_Text/SpecialCharacter.hpp>
#include <au/TMPro/TMP_SpriteAsset.hpp>
#include <au/Unity/Profiling/ProfilerMarker.hpp>
#include <au/TMPro/TMP_Text/TextBackingContainer.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/TMPro/ITextPreprocessor.hpp>
#include <au/TMPro/TMP_FontAsset.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/TMPro/VertexGradient.hpp>
#include <au/TMPro/TMP_ColorGradient.hpp>
#include <au/TMPro/TMP_SpriteAsset.hpp>
#include <au/TMPro/TMP_StyleSheet.hpp>
#include <au/TMPro/TMP_Style.hpp>
#include <au/UnityEngine/Color32.hpp>
#include <au/TMPro/FontWeight.hpp>
#include <au/TMPro/FontStyles.hpp>
#include <au/TMPro/HorizontalAlignmentOptions.hpp>
#include <au/TMPro/VerticalAlignmentOptions.hpp>
#include <au/TMPro/TextAlignmentOptions.hpp>
#include <au/TMPro/TextOverflowModes.hpp>
#include <au/TMPro/TMP_Text.hpp>
#include <au/TMPro/TextureMappingOptions.hpp>
#include <au/TMPro/TextRenderFlags.hpp>
#include <au/TMPro/VertexSortingOrder.hpp>
#include <au/System/Func.hpp>
#include <au/System/Func.hpp>
#include <au/TMPro/TMP_ColorGradient.hpp>
#include <au/TMPro/VertexSortingOrder.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/System/Text/StringBuilder.hpp>
#include <au/TMPro/TMP_Text/TextBackingContainer.hpp>
#include <cs/array.hpp>
#include <au/TMPro/TMP_Style.hpp>
#include <cs/array.hpp>
#include <au/TMPro/TMP_Text/TextBackingContainer.hpp>
#include <au/TMPro/TMP_Text/TextBackingContainer.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/TMPro/WordWrapState.hpp>
#include <au/TMPro/TMP_FontAsset.hpp>
#include <au/TMPro/TMP_Text.hpp>
#include <cs/array.hpp>
#include <au/System/Text/StringBuilder.hpp>
#include <au/TMPro/TMP_Text/TextBackingContainer.hpp>
#include <cs/array.hpp>

namespace TMPro
{
    struct TMP : ark::meta<TMP, UnityEngine::UI::MaskableGraphic>
    {
        static cs::array<TMPro::MaterialReference>* m_materialReferences(); // 0x0
        static System::Collections::Generic::Dictionary<int32_t, int32_t>* m_materialReferenceIndexLookup(); // 0x4
        static TMPro::TMP_TextProcessingStack<TMPro::MaterialReference>* m_materialReferenceStack(); // 0x8
        static UnityEngine::Color32 s_colorWhite(); // 0x3c
        static System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>* OnFontAssetRequest(); // 0x40
        static System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>* OnSpriteAssetRequest(); // 0x44
        static cs::array<char>* m_htmlTag(); // 0x48
        static cs::array<TMPro::RichTextTagAttribute>* m_xmlAttribute(); // 0x4c
        static cs::array<float>* m_attributeParameterValues(); // 0x50
        static TMPro::WordWrapState m_SavedWordWrapState(); // 0x54
        static TMPro::WordWrapState m_SavedLineState(); // 0x318
        static TMPro::WordWrapState m_SavedEllipsisState(); // 0x5dc
        static TMPro::WordWrapState m_SavedLastValidState(); // 0x8a0
        static TMPro::WordWrapState m_SavedSoftLineBreakState(); // 0xb64
        static TMPro::TMP_TextProcessingStack<TMPro::WordWrapState>* m_EllipsisInsertionCandidateStack(); // 0xe28
        static Unity::Profiling::ProfilerMarker k_ParseTextMarker(); // 0x1100
        static Unity::Profiling::ProfilerMarker k_InsertNewLineMarker(); // 0x1104
        static UnityEngine::Vector2 k_LargePositiveVector2(); // 0x1108
        static UnityEngine::Vector2 k_LargeNegativeVector2(); // 0x1110
        static float k_LargePositiveFloat(); // 0x1118
        static float k_LargeNegativeFloat(); // 0x111c
        static int32_t k_LargePositiveInt(); // 0x1120
        static int32_t k_LargeNegativeInt(); // 0x1124
        cs::string* m_text; // 0x80
        bool m_IsTextBackingStringDirty; // 0x84
        TMPro::ITextPreprocessor* m_TextPreprocessor; // 0x88
        bool m_isRightToLeft; // 0x8c
        TMPro::TMP_FontAsset* m_fontAsset; // 0x90
        TMPro::TMP_FontAsset* m_currentFontAsset; // 0x94
        bool m_isSDFShader; // 0x98
        UnityEngine::Material* m_sharedMaterial; // 0x9c
        UnityEngine::Material* m_currentMaterial; // 0xa0
        int32_t m_currentMaterialIndex; // 0xa4
        cs::array<UnityEngine::Material>* m_fontSharedMaterials; // 0xa8
        UnityEngine::Material* m_fontMaterial; // 0xac
        cs::array<UnityEngine::Material>* m_fontMaterials; // 0xb0
        bool m_isMaterialDirty; // 0xb4
        UnityEngine::Color32 m_fontColor32; // 0xb8
        UnityEngine::Color m_fontColor; // 0xbc
        UnityEngine::Color32 m_underlineColor; // 0xcc
        UnityEngine::Color32 m_strikethroughColor; // 0xd0
        bool m_enableVertexGradient; // 0xd4
        TMPro::ColorMode m_colorMode; // 0xd8
        TMPro::VertexGradient m_fontColorGradient; // 0xdc
        TMPro::TMP_ColorGradient* m_fontColorGradientPreset; // 0x11c
        TMPro::TMP_SpriteAsset* m_spriteAsset; // 0x120
        bool m_tintAllSprites; // 0x124
        bool m_tintSprite; // 0x125
        UnityEngine::Color32 m_spriteColor; // 0x128
        TMPro::TMP_StyleSheet* m_StyleSheet; // 0x12c
        TMPro::TMP_Style* m_TextStyle; // 0x130
        int32_t m_TextStyleHashCode; // 0x134
        bool m_overrideHtmlColors; // 0x138
        UnityEngine::Color32 m_faceColor; // 0x13c
        UnityEngine::Color32 m_outlineColor; // 0x140
        float m_outlineWidth; // 0x144
        float m_fontSize; // 0x148
        float m_currentFontSize; // 0x14c
        float m_fontSizeBase; // 0x150
        TMPro::TMP_TextProcessingStack<float>* m_sizeStack; // 0x154
        TMPro::FontWeight m_fontWeight; // 0x16c
        TMPro::FontWeight m_FontWeightInternal; // 0x170
        TMPro::TMP_TextProcessingStack<TMPro::FontWeight>* m_FontWeightStack; // 0x174
        bool m_enableAutoSizing; // 0x18c
        float m_maxFontSize; // 0x190
        float m_minFontSize; // 0x194
        int32_t m_AutoSizeIterationCount; // 0x198
        int32_t m_AutoSizeMaxIterationCount; // 0x19c
        bool m_IsAutoSizePointSizeSet; // 0x1a0
        float m_fontSizeMin; // 0x1a4
        float m_fontSizeMax; // 0x1a8
        TMPro::FontStyles m_fontStyle; // 0x1ac
        TMPro::FontStyles m_FontStyleInternal; // 0x1b0
        TMPro::TMP_FontStyleStack m_fontStyleStack; // 0x1b4
        bool m_isUsingBold; // 0x1be
        TMPro::HorizontalAlignmentOptions m_HorizontalAlignment; // 0x1c0
        TMPro::VerticalAlignmentOptions m_VerticalAlignment; // 0x1c4
        TMPro::TextAlignmentOptions m_textAlignment; // 0x1c8
        TMPro::HorizontalAlignmentOptions m_lineJustification; // 0x1cc
        TMPro::TMP_TextProcessingStack<TMPro::HorizontalAlignmentOptions>* m_lineJustificationStack; // 0x1d0
        cs::array<UnityEngine::Vector3>* m_textContainerLocalCorners; // 0x1e8
        float m_characterSpacing; // 0x1ec
        float m_cSpacing; // 0x1f0
        float m_monoSpacing; // 0x1f4
        float m_wordSpacing; // 0x1f8
        float m_lineSpacing; // 0x1fc
        float m_lineSpacingDelta; // 0x200
        float m_lineHeight; // 0x204
        bool m_IsDrivenLineSpacing; // 0x208
        float m_lineSpacingMax; // 0x20c
        float m_paragraphSpacing; // 0x210
        float m_charWidthMaxAdj; // 0x214
        float m_charWidthAdjDelta; // 0x218
        bool m_enableWordWrapping; // 0x21c
        bool m_isCharacterWrappingEnabled; // 0x21d
        bool m_isNonBreakingSpace; // 0x21e
        bool m_isIgnoringAlignment; // 0x21f
        float m_wordWrappingRatios; // 0x220
        TMPro::TextOverflowModes m_overflowMode; // 0x224
        int32_t m_firstOverflowCharacterIndex; // 0x228
        TMPro::TMP_Text* m_linkedTextComponent; // 0x22c
        TMPro::TMP_Text* parentLinkedComponent; // 0x230
        bool m_isTextTruncated; // 0x234
        bool m_enableKerning; // 0x235
        float m_GlyphHorizontalAdvanceAdjustment; // 0x238
        bool m_enableExtraPadding; // 0x23c
        bool checkPaddingRequired; // 0x23d
        bool m_isRichText; // 0x23e
        bool m_parseCtrlCharacters; // 0x23f
        bool m_isOverlay; // 0x240
        bool m_isOrthographic; // 0x241
        bool m_isCullingEnabled; // 0x242
        bool m_isMaskingEnabled; // 0x243
        bool isMaskUpdateRequired; // 0x244
        bool m_ignoreCulling; // 0x245
        TMPro::TextureMappingOptions m_horizontalMapping; // 0x248
        TMPro::TextureMappingOptions m_verticalMapping; // 0x24c
        float m_uvLineOffset; // 0x250
        TMPro::TextRenderFlags m_renderMode; // 0x254
        TMPro::VertexSortingOrder m_geometrySortingOrder; // 0x258
        bool m_IsTextObjectScaleStatic; // 0x25c
        bool m_VertexBufferAutoSizeReduction; // 0x25d
        int32_t m_firstVisibleCharacter; // 0x260
        int32_t m_maxVisibleCharacters; // 0x264
        int32_t m_maxVisibleWords; // 0x268
        int32_t m_maxVisibleLines; // 0x26c
        bool m_useMaxVisibleDescender; // 0x270
        int32_t m_pageToDisplay; // 0x274
        bool m_isNewPage; // 0x278
        UnityEngine::Vector4 m_margin; // 0x27c
        float m_marginLeft; // 0x28c
        float m_marginRight; // 0x290
        float m_marginWidth; // 0x294
        float m_marginHeight; // 0x298
        float m_width; // 0x29c
        TMPro::TMP_TextInfo* m_textInfo; // 0x2a0
        bool m_havePropertiesChanged; // 0x2a4
        bool m_isUsingLegacyAnimationComponent; // 0x2a5
        UnityEngine::Transform* m_transform; // 0x2a8
        UnityEngine::RectTransform* m_rectTransform; // 0x2ac
        UnityEngine::Vector2 m_PreviousRectTransformSize; // 0x2b0
        UnityEngine::Vector2 m_PreviousPivotPosition; // 0x2b8
        bool _autoSizeTextContainer_k__BackingField; // 0x2c0
        bool m_autoSizeTextContainer; // 0x2c1
        UnityEngine::Mesh* m_mesh; // 0x2c4
        bool m_isVolumetricText; // 0x2c8
        System::Action<TMPro::TMP_TextInfo>* OnPreRenderText; // 0x2cc
        TMPro::TMP_SpriteAnimator* m_spriteAnimator; // 0x2d0
        float m_flexibleHeight; // 0x2d4
        float m_flexibleWidth; // 0x2d8
        float m_minWidth; // 0x2dc
        float m_minHeight; // 0x2e0
        float m_maxWidth; // 0x2e4
        float m_maxHeight; // 0x2e8
        UnityEngine::UI::LayoutElement* m_LayoutElement; // 0x2ec
        float m_preferredWidth; // 0x2f0
        float m_renderedWidth; // 0x2f4
        bool m_isPreferredWidthDirty; // 0x2f8
        float m_preferredHeight; // 0x2fc
        float m_renderedHeight; // 0x300
        bool m_isPreferredHeightDirty; // 0x304
        bool m_isCalculatingPreferredValues; // 0x305
        int32_t m_layoutPriority; // 0x308
        bool m_isLayoutDirty; // 0x30c
        bool m_isAwake; // 0x30d
        bool m_isWaitingOnResourceLoad; // 0x30e
        TMPro::TMP_Text+TextInputSources m_inputSource; // 0x310
        float m_fontScaleMultiplier; // 0x314
        float tag_LineIndent; // 0x318
        float tag_Indent; // 0x31c
        TMPro::TMP_TextProcessingStack<float>* m_indentStack; // 0x320
        bool tag_NoParsing; // 0x338
        bool m_isParsingText; // 0x339
        UnityEngine::Matrix4x4 m_FXMatrix; // 0x33c
        bool m_isFXMatrixSet; // 0x37c
        cs::array<TMPro::TMP_Text+UnicodeChar>* m_TextProcessingArray; // 0x380
        int32_t m_InternalTextProcessingArraySize; // 0x384
        cs::array<TMPro::TMP_CharacterInfo>* m_internalCharacterInfo; // 0x388
        int32_t m_totalCharacterCount; // 0x38c
        int32_t m_characterCount; // 0x390
        int32_t m_firstCharacterOfLine; // 0x394
        int32_t m_firstVisibleCharacterOfLine; // 0x398
        int32_t m_lastCharacterOfLine; // 0x39c
        int32_t m_lastVisibleCharacterOfLine; // 0x3a0
        int32_t m_lineNumber; // 0x3a4
        int32_t m_lineVisibleCharacterCount; // 0x3a8
        int32_t m_pageNumber; // 0x3ac
        float m_PageAscender; // 0x3b0
        float m_maxTextAscender; // 0x3b4
        float m_maxCapHeight; // 0x3b8
        float m_ElementAscender; // 0x3bc
        float m_ElementDescender; // 0x3c0
        float m_maxLineAscender; // 0x3c4
        float m_maxLineDescender; // 0x3c8
        float m_startOfLineAscender; // 0x3cc
        float m_startOfLineDescender; // 0x3d0
        float m_lineOffset; // 0x3d4
        TMPro::Extents m_meshExtents; // 0x3d8
        UnityEngine::Color32 m_htmlColor; // 0x3e8
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* m_colorStack; // 0x3ec
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* m_underlineColorStack; // 0x404
        TMPro::TMP_TextProcessingStack<UnityEngine::Color32>* m_strikethroughColorStack; // 0x41c
        TMPro::TMP_TextProcessingStack<TMPro::HighlightState>* m_HighlightStateStack; // 0x434
        TMPro::TMP_ColorGradient* m_colorGradientPreset; // 0x45c
        TMPro::TMP_TextProcessingStack<TMPro::TMP_ColorGradient>* m_colorGradientStack; // 0x460
        bool m_colorGradientPresetIsTinted; // 0x478
        float m_tabSpacing; // 0x47c
        float m_spacing; // 0x480
        cs::array<TMPro::TMP_TextProcessingStack<int32_t>>* m_TextStyleStacks; // 0x484
        int32_t m_TextStyleStackDepth; // 0x488
        TMPro::TMP_TextProcessingStack<int32_t>* m_ItalicAngleStack; // 0x48c
        int32_t m_ItalicAngle; // 0x4a4
        TMPro::TMP_TextProcessingStack<int32_t>* m_actionStack; // 0x4a8
        float m_padding; // 0x4c0
        float m_baselineOffset; // 0x4c4
        TMPro::TMP_TextProcessingStack<float>* m_baselineOffsetStack; // 0x4c8
        float m_xAdvance; // 0x4e0
        TMPro::TMP_TextElementType m_textElementType; // 0x4e4
        TMPro::TMP_TextElement* m_cached_TextElement; // 0x4e8
        TMPro::TMP_Text+SpecialCharacter m_Ellipsis; // 0x4ec
        TMPro::TMP_Text+SpecialCharacter m_Underline; // 0x4fc
        TMPro::TMP_SpriteAsset* m_defaultSpriteAsset; // 0x50c
        TMPro::TMP_SpriteAsset* m_currentSpriteAsset; // 0x510
        int32_t m_spriteCount; // 0x514
        int32_t m_spriteIndex; // 0x518
        int32_t m_spriteAnimationID; // 0x51c
        bool m_ignoreActiveState; // 0x520
        TMPro::TMP_Text+TextBackingContainer m_TextBackingArray; // 0x524
        cs::array<System::Decimal>* k_Power; // 0x52c

        TMPro::ITextPreprocessor* get_textPreprocessor() { return il2cpp::call<TMPro::ITextPreprocessor*(*)(TMP*)>(0x373980)(this); } // 0x373980
        void set_textPreprocessor(TMPro::ITextPreprocessor* value) { return il2cpp::call<void(*)(TMP*, TMPro::ITextPreprocessor*)>(0x373a60)(this, value); } // 0x373a60
        bool get_isRightToLeftText() { return il2cpp::call<bool(*)(TMP*)>(0x46be50)(this); } // 0x46be50
        void set_isRightToLeftText(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d5a0)(this, value); } // 0x46d5a0
        TMPro::TMP_FontAsset* get_font() { return il2cpp::call<TMPro::TMP_FontAsset*(*)(TMP*)>(0x3739a0)(this); } // 0x3739a0
        void set_font(TMPro::TMP_FontAsset* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_FontAsset*)>(0x46d360)(this, value); } // 0x46d360
        UnityEngine::Material* get_fontMaterial() { return il2cpp::call<UnityEngine::Material*(*)(TMP*)>(0x46bd10)(this); } // 0x46bd10
        void set_fontMaterial(UnityEngine::Material* value) { return il2cpp::call<void(*)(TMP*, UnityEngine::Material*)>(0x46cfe0)(this, value); } // 0x46cfe0
        float get_alpha() { return il2cpp::call<float(*)(TMP*)>(0x46ba30)(this); } // 0x46ba30
        void set_alpha(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46cb70)(this, value); } // 0x46cb70
        bool get_enableVertexGradient() { return il2cpp::call<bool(*)(TMP*)>(0x46bbc0)(this); } // 0x46bbc0
        void set_enableVertexGradient(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46ce50)(this, value); } // 0x46ce50
        TMPro::VertexGradient get_colorGradient() { return il2cpp::call<TMPro::VertexGradient(*)(TMP*)>(0x46bb30)(this); } // 0x46bb30
        void set_colorGradient(TMPro::VertexGradient value) { return il2cpp::call<void(*)(TMP*, TMPro::VertexGradient)>(0x46ccd0)(this, value); } // 0x46ccd0
        TMPro::TMP_ColorGradient* get_colorGradientPreset() { return il2cpp::call<TMPro::TMP_ColorGradient*(*)(TMP*)>(0x46bb20)(this); } // 0x46bb20
        void set_colorGradientPreset(TMPro::TMP_ColorGradient* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_ColorGradient*)>(0x46cca0)(this, value); } // 0x46cca0
        TMPro::TMP_SpriteAsset* get_spriteAsset() { return il2cpp::call<TMPro::TMP_SpriteAsset*(*)(TMP*)>(0x46c610)(this); } // 0x46c610
        void set_spriteAsset(TMPro::TMP_SpriteAsset* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_SpriteAsset*)>(0x46dd00)(this, value); } // 0x46dd00
        bool get_tintAllSprites() { return il2cpp::call<bool(*)(TMP*)>(0x46c820)(this); } // 0x46c820
        void set_tintAllSprites(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46de70)(this, value); } // 0x46de70
        TMPro::TMP_StyleSheet* get_styleSheet() { return il2cpp::call<TMPro::TMP_StyleSheet*(*)(TMP*)>(0x46c620)(this); } // 0x46c620
        void set_styleSheet(TMPro::TMP_StyleSheet* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_StyleSheet*)>(0x46dd40)(this, value); } // 0x46dd40
        TMPro::TMP_Style* get_textStyle() { return il2cpp::call<TMPro::TMP_Style*(*)(TMP*)>(0x46c690)(this); } // 0x46c690
        void set_textStyle(TMPro::TMP_Style* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_Style*)>(0x46dd80)(this, value); } // 0x46dd80
        bool get_overrideColorTags() { return il2cpp::call<bool(*)(TMP*)>(0x46c210)(this); } // 0x46c210
        void set_overrideColorTags(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46db60)(this, value); } // 0x46db60
        UnityEngine::Color32 get_faceColor() { return il2cpp::call<UnityEngine::Color32(*)(TMP*)>(0x46bbf0)(this); } // 0x46bbf0
        void set_faceColor(UnityEngine::Color32 value) { return il2cpp::call<void(*)(TMP*, UnityEngine::Color32)>(0x46cf30)(this, value); } // 0x46cf30
        UnityEngine::Color32 get_outlineColor() { return il2cpp::call<UnityEngine::Color32(*)(TMP*)>(0x46c050)(this); } // 0x46c050
        void set_outlineColor(UnityEngine::Color32 value) { return il2cpp::call<void(*)(TMP*, UnityEngine::Color32)>(0x46da50)(this, value); } // 0x46da50
        float get_outlineWidth() { return il2cpp::call<float(*)(TMP*)>(0x46c130)(this); } // 0x46c130
        void set_outlineWidth(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46dab0)(this, value); } // 0x46dab0
        float get_fontSize() { return il2cpp::call<float(*)(TMP*)>(0x46bdb0)(this); } // 0x46bdb0
        void set_fontSize(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d250)(this, value); } // 0x46d250
        TMPro::FontWeight get_fontWeight() { return il2cpp::call<TMPro::FontWeight(*)(TMP*)>(0x46bdd0)(this); } // 0x46bdd0
        void set_fontWeight(TMPro::FontWeight value) { return il2cpp::call<void(*)(TMP*, TMPro::FontWeight)>(0x46d310)(this, value); } // 0x46d310
        float get_pixelsPerUnit() { return il2cpp::call<float(*)(TMP*)>(0x46c250)(this); } // 0x46c250
        bool get_enableAutoSizing() { return il2cpp::call<bool(*)(TMP*)>(0x46bb90)(this); } // 0x46bb90
        void set_enableAutoSizing(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46cd80)(this, value); } // 0x46cd80
        float get_fontSizeMin() { return il2cpp::call<float(*)(TMP*)>(0x46bda0)(this); } // 0x46bda0
        void set_fontSizeMin(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d200)(this, value); } // 0x46d200
        float get_fontSizeMax() { return il2cpp::call<float(*)(TMP*)>(0x46bd90)(this); } // 0x46bd90
        void set_fontSizeMax(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d1b0)(this, value); } // 0x46d1b0
        TMPro::FontStyles get_fontStyle() { return il2cpp::call<TMPro::FontStyles(*)(TMP*)>(0x46bdc0)(this); } // 0x46bdc0
        void set_fontStyle(TMPro::FontStyles value) { return il2cpp::call<void(*)(TMP*, TMPro::FontStyles)>(0x46d2c0)(this, value); } // 0x46d2c0
        bool get_isUsingBold() { return il2cpp::call<bool(*)(TMP*)>(0x46bea0)(this); } // 0x46bea0
        TMPro::HorizontalAlignmentOptions get_horizontalAlignment() { return il2cpp::call<TMPro::HorizontalAlignmentOptions(*)(TMP*)>(0x46be00)(this); } // 0x46be00
        void set_horizontalAlignment(TMPro::HorizontalAlignmentOptions value) { return il2cpp::call<void(*)(TMP*, TMPro::HorizontalAlignmentOptions)>(0x46d470)(this, value); } // 0x46d470
        TMPro::VerticalAlignmentOptions get_verticalAlignment() { return il2cpp::call<TMPro::VerticalAlignmentOptions(*)(TMP*)>(0x46c8e0)(this); } // 0x46c8e0
        void set_verticalAlignment(TMPro::VerticalAlignmentOptions value) { return il2cpp::call<void(*)(TMP*, TMPro::VerticalAlignmentOptions)>(0x46df20)(this, value); } // 0x46df20
        TMPro::TextAlignmentOptions get_alignment() { return il2cpp::call<TMPro::TextAlignmentOptions(*)(TMP*)>(0x46ba10)(this); } // 0x46ba10
        void set_alignment(TMPro::TextAlignmentOptions value) { return il2cpp::call<void(*)(TMP*, TMPro::TextAlignmentOptions)>(0x46cb20)(this, value); } // 0x46cb20
        float get_characterSpacing() { return il2cpp::call<float(*)(TMP*)>(0x46bb00)(this); } // 0x46bb00
        void set_characterSpacing(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46cbe0)(this, value); } // 0x46cbe0
        float get_wordSpacing() { return il2cpp::call<float(*)(TMP*)>(0x46c900)(this); } // 0x46c900
        void set_wordSpacing(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46dfa0)(this, value); } // 0x46dfa0
        float get_lineSpacing() { return il2cpp::call<float(*)(TMP*)>(0x46bf80)(this); } // 0x46bf80
        void set_lineSpacing(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d760)(this, value); } // 0x46d760
        float get_lineSpacingAdjustment() { return il2cpp::call<float(*)(TMP*)>(0x46bf70)(this); } // 0x46bf70
        void set_lineSpacingAdjustment(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d700)(this, value); } // 0x46d700
        float get_paragraphSpacing() { return il2cpp::call<float(*)(TMP*)>(0x46c230)(this); } // 0x46c230
        void set_paragraphSpacing(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46dbe0)(this, value); } // 0x46dbe0
        float get_characterWidthAdjustment() { return il2cpp::call<float(*)(TMP*)>(0x46bb10)(this); } // 0x46bb10
        void set_characterWidthAdjustment(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46cc40)(this, value); } // 0x46cc40
        bool get_enableWordWrapping() { return il2cpp::call<bool(*)(TMP*)>(0x46bbd0)(this); } // 0x46bbd0
        void set_enableWordWrapping(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46ce90)(this, value); } // 0x46ce90
        float get_wordWrappingRatios() { return il2cpp::call<float(*)(TMP*)>(0x46c910)(this); } // 0x46c910
        void set_wordWrappingRatios(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46e000)(this, value); } // 0x46e000
        TMPro::TextOverflowModes get_overflowMode() { return il2cpp::call<TMPro::TextOverflowModes(*)(TMP*)>(0x46c200)(this); } // 0x46c200
        void set_overflowMode(TMPro::TextOverflowModes value) { return il2cpp::call<void(*)(TMP*, TMPro::TextOverflowModes)>(0x46db10)(this, value); } // 0x46db10
        bool get_isTextOverflowing() { return il2cpp::call<bool(*)(TMP*)>(0x46be70)(this); } // 0x46be70
        int32_t get_firstOverflowCharacterIndex() { return il2cpp::call<int32_t(*)(TMP*)>(0x46bcd0)(this); } // 0x46bcd0
        TMPro::TMP_Text* get_linkedTextComponent() { return il2cpp::call<TMPro::TMP_Text*(*)(TMP*)>(0x46bf90)(this); } // 0x46bf90
        void set_linkedTextComponent(TMPro::TMP_Text* value) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_Text*)>(0x46d7c0)(this, value); } // 0x46d7c0
        bool get_isTextTruncated() { return il2cpp::call<bool(*)(TMP*)>(0x46be90)(this); } // 0x46be90
        bool get_enableKerning() { return il2cpp::call<bool(*)(TMP*)>(0x46bbb0)(this); } // 0x46bbb0
        void set_enableKerning(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46ce00)(this, value); } // 0x46ce00
        bool get_extraPadding() { return il2cpp::call<bool(*)(TMP*)>(0x46bbe0)(this); } // 0x46bbe0
        void set_extraPadding(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46cee0)(this, value); } // 0x46cee0
        bool get_richText() { return il2cpp::call<bool(*)(TMP*)>(0x46c510)(this); } // 0x46c510
        void set_richText(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46dcb0)(this, value); } // 0x46dcb0
        bool get_parseCtrlCharacters() { return il2cpp::call<bool(*)(TMP*)>(0x46c240)(this); } // 0x46c240
        void set_parseCtrlCharacters(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46dc40)(this, value); } // 0x46dc40
        bool get_isOverlay() { return il2cpp::call<bool(*)(TMP*)>(0x46be40)(this); } // 0x46be40
        void set_isOverlay(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d550)(this, value); } // 0x46d550
        bool get_isOrthographic() { return il2cpp::call<bool(*)(TMP*)>(0x46be30)(this); } // 0x46be30
        void set_isOrthographic(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d510)(this, value); } // 0x46d510
        bool get_enableCulling() { return il2cpp::call<bool(*)(TMP*)>(0x46bba0)(this); } // 0x46bba0
        void set_enableCulling(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46cdc0)(this, value); } // 0x46cdc0
        bool get_ignoreVisibility() { return il2cpp::call<bool(*)(TMP*)>(0x46be20)(this); } // 0x46be20
        void set_ignoreVisibility(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d4f0)(this, value); } // 0x46d4f0
        TMPro::TextureMappingOptions get_horizontalMapping() { return il2cpp::call<TMPro::TextureMappingOptions(*)(TMP*)>(0x46be10)(this); } // 0x46be10
        void set_horizontalMapping(TMPro::TextureMappingOptions value) { return il2cpp::call<void(*)(TMP*, TMPro::TextureMappingOptions)>(0x46d4b0)(this, value); } // 0x46d4b0
        TMPro::TextureMappingOptions get_verticalMapping() { return il2cpp::call<TMPro::TextureMappingOptions(*)(TMP*)>(0x46c8f0)(this); } // 0x46c8f0
        void set_verticalMapping(TMPro::TextureMappingOptions value) { return il2cpp::call<void(*)(TMP*, TMPro::TextureMappingOptions)>(0x46df60)(this, value); } // 0x46df60
        float get_mappingUvLineOffset() { return il2cpp::call<float(*)(TMP*)>(0x46bfa0)(this); } // 0x46bfa0
        void set_mappingUvLineOffset(float value) { return il2cpp::call<void(*)(TMP*, float)>(0x46d8a0)(this, value); } // 0x46d8a0
        TMPro::TextRenderFlags get_renderMode() { return il2cpp::call<TMPro::TextRenderFlags(*)(TMP*)>(0x46c500)(this); } // 0x46c500
        void set_renderMode(TMPro::TextRenderFlags value) { return il2cpp::call<void(*)(TMP*, TMPro::TextRenderFlags)>(0x46dc90)(this, value); } // 0x46dc90
        TMPro::VertexSortingOrder get_geometrySortingOrder() { return il2cpp::call<TMPro::VertexSortingOrder(*)(TMP*)>(0x46bde0)(this); } // 0x46bde0
        void set_geometrySortingOrder(TMPro::VertexSortingOrder value) { return il2cpp::call<void(*)(TMP*, TMPro::VertexSortingOrder)>(0x46d410)(this, value); } // 0x46d410
        bool get_isTextObjectScaleStatic() { return il2cpp::call<bool(*)(TMP*)>(0x46be60)(this); } // 0x46be60
        void set_isTextObjectScaleStatic(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d5f0)(this, value); } // 0x46d5f0
        bool get_vertexBufferAutoSizeReduction() { return il2cpp::call<bool(*)(TMP*)>(0x46c8d0)(this); } // 0x46c8d0
        void set_vertexBufferAutoSizeReduction(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46def0)(this, value); } // 0x46def0
        int32_t get_firstVisibleCharacter() { return il2cpp::call<int32_t(*)(TMP*)>(0x46bce0)(this); } // 0x46bce0
        void set_firstVisibleCharacter(int32_t value) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x46cfa0)(this, value); } // 0x46cfa0
        int32_t get_maxVisibleCharacters() { return il2cpp::call<int32_t(*)(TMP*)>(0x46bfe0)(this); } // 0x46bfe0
        void set_maxVisibleCharacters(int32_t value) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x46d990)(this, value); } // 0x46d990
        int32_t get_maxVisibleWords() { return il2cpp::call<int32_t(*)(TMP*)>(0x46c000)(this); } // 0x46c000
        void set_maxVisibleWords(int32_t value) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x46da10)(this, value); } // 0x46da10
        int32_t get_maxVisibleLines() { return il2cpp::call<int32_t(*)(TMP*)>(0x46bff0)(this); } // 0x46bff0
        void set_maxVisibleLines(int32_t value) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x46d9d0)(this, value); } // 0x46d9d0
        bool get_useMaxVisibleDescender() { return il2cpp::call<bool(*)(TMP*)>(0x46c8c0)(this); } // 0x46c8c0
        void set_useMaxVisibleDescender(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46deb0)(this, value); } // 0x46deb0
        int32_t get_pageToDisplay() { return il2cpp::call<int32_t(*)(TMP*)>(0x46c220)(this); } // 0x46c220
        void set_pageToDisplay(int32_t value) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x46dba0)(this, value); } // 0x46dba0
        TMPro::TMP_TextInfo* get_textInfo() { return il2cpp::call<TMPro::TMP_TextInfo*(*)(TMP*)>(0x46c680)(this); } // 0x46c680
        bool get_havePropertiesChanged() { return il2cpp::call<bool(*)(TMP*)>(0x46bdf0)(this); } // 0x46bdf0
        void set_havePropertiesChanged(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d440)(this, value); } // 0x46d440
        bool get_isUsingLegacyAnimationComponent() { return il2cpp::call<bool(*)(TMP*)>(0x46beb0)(this); } // 0x46beb0
        void set_isUsingLegacyAnimationComponent(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d680)(this, value); } // 0x46d680
        UnityEngine::Transform* get_transform() { return il2cpp::call<UnityEngine::Transform*(*)(TMP*)>(0x46c830)(this); } // 0x46c830
        UnityEngine::RectTransform* get_rectTransform() { return il2cpp::call<UnityEngine::RectTransform*(*)(TMP*)>(0x46c470)(this); } // 0x46c470
        bool get_isVolumetricText() { return il2cpp::call<bool(*)(TMP*)>(0x46bec0)(this); } // 0x46bec0
        void set_isVolumetricText(bool value) { return il2cpp::call<void(*)(TMP*, bool)>(0x46d6a0)(this, value); } // 0x46d6a0
        UnityEngine::Bounds get_bounds() { return il2cpp::call<UnityEngine::Bounds(*)(TMP*)>(0x46ba50)(this); } // 0x46ba50
        UnityEngine::Bounds get_textBounds() { return il2cpp::call<UnityEngine::Bounds(*)(TMP*)>(0x46c630)(this); } // 0x46c630
        void add_OnFontAssetRequest(System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>* value) { return il2cpp::call<void(*)(TMP*, System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>*)>(0x46b810)(this, value); } // 0x46b810
        void remove_OnFontAssetRequest(System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>* value) { return il2cpp::call<void(*)(TMP*, System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>*)>(0x46c920)(this, value); } // 0x46c920
        void add_OnSpriteAssetRequest(System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>* value) { return il2cpp::call<void(*)(TMP*, System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>*)>(0x46b950)(this, value); } // 0x46b950
        void remove_OnSpriteAssetRequest(System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>* value) { return il2cpp::call<void(*)(TMP*, System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>*)>(0x46ca60)(this, value); } // 0x46ca60
        TMPro::TMP_SpriteAnimator* get_spriteAnimator() { return il2cpp::call<TMPro::TMP_SpriteAnimator*(*)(TMP*)>(0x46c520)(this); } // 0x46c520
        float get_maxWidth() { return il2cpp::call<float(*)(TMP*)>(0x46c010)(this); } // 0x46c010
        float get_maxHeight() { return il2cpp::call<float(*)(TMP*)>(0x46bfd0)(this); } // 0x46bfd0
        UnityEngine::UI::LayoutElement* get_layoutElement() { return il2cpp::call<UnityEngine::UI::LayoutElement*(*)(TMP*)>(0x46bed0)(this); } // 0x46bed0
        void SetVertexColorGradient(TMPro::TMP_ColorGradient* gradient) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_ColorGradient*)>(0x463aa0)(this, gradient); } // 0x463aa0
        void SetTextSortingOrder(TMPro::VertexSortingOrder order) { return il2cpp::call<void(*)(TMP*, TMPro::VertexSortingOrder)>(0x2babf0)(this, order); } // 0x2babf0
        void SetTextSortingOrder(cs::array<int32_t>* order) { return il2cpp::call<void(*)(TMP*, cs::array<int32_t>*)>(0x2babf0)(this, order); } // 0x2babf0
        void ParseInputText() { return il2cpp::call<void(*)(TMP*)>(0x45edf0)(this); } // 0x45edf0
        void PopulateTextBackingArray(cs::string* sourceText) { return il2cpp::call<void(*)(TMP*, cs::string*)>(0x45f000)(this, sourceText); } // 0x45f000
        void PopulateTextBackingArray(cs::string* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, cs::string*, int32_t, int32_t)>(0x45f140)(this, sourceText, start, length); } // 0x45f140
        void PopulateTextBackingArray(System::Text::StringBuilder* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, System::Text::StringBuilder*, int32_t, int32_t)>(0x45ef00)(this, sourceText, start, length); } // 0x45ef00
        void PopulateTextBackingArray(cs::array<char>* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, cs::array<char>*, int32_t, int32_t)>(0x45f040)(this, sourceText, start, length); } // 0x45f040
        void PopulateTextProcessingArray() { return il2cpp::call<void(*)(TMP*)>(0x45f230)(this); } // 0x45f230
        void SetTextInternal(cs::string* sourceText) { return il2cpp::call<void(*)(TMP*, cs::string*)>(0x463200)(this, sourceText); } // 0x463200
        void SetText(cs::string* sourceText, bool syncTextInputBox) { return il2cpp::call<void(*)(TMP*, cs::string*, bool)>(0x4637a0)(this, sourceText, syncTextInputBox); } // 0x4637a0
        void SetText(cs::string* sourceText, float arg0) { return il2cpp::call<void(*)(TMP*, cs::string*, float)>(0x463470)(this, sourceText, arg0); } // 0x463470
        void SetText(cs::string* sourceText, float arg0, float arg1) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float)>(0x4633a0)(this, sourceText, arg0, arg1); } // 0x4633a0
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float)>(0x463740)(this, sourceText, arg0, arg1, arg2); } // 0x463740
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2, float arg3) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float, float)>(0x463950)(this, sourceText, arg0, arg1, arg2, arg3); } // 0x463950
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2, float arg3, float arg4) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float, float, float)>(0x4639c0)(this, sourceText, arg0, arg1, arg2, arg3, arg4); } // 0x4639c0
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float, float, float, float)>(0x463a30)(this, sourceText, arg0, arg1, arg2, arg3, arg4, arg5); } // 0x463a30
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float, float, float, float, float)>(0x463400)(this, sourceText, arg0, arg1, arg2, arg3, arg4, arg5, arg6); } // 0x463400
        void SetText(cs::string* sourceText, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7) { return il2cpp::call<void(*)(TMP*, cs::string*, float, float, float, float, float, float, float, float)>(0x4634d0)(this, sourceText, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); } // 0x4634d0
        void SetText(System::Text::StringBuilder* sourceText) { return il2cpp::call<void(*)(TMP*, System::Text::StringBuilder*)>(0x463810)(this, sourceText); } // 0x463810
        void SetText(System::Text::StringBuilder* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, System::Text::StringBuilder*, int32_t, int32_t)>(0x463260)(this, sourceText, start, length); } // 0x463260
        void SetText(cs::array<char>* sourceText) { return il2cpp::call<void(*)(TMP*, cs::array<char>*)>(0x4631c0)(this, sourceText); } // 0x4631c0
        void SetText(cs::array<char>* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, cs::array<char>*, int32_t, int32_t)>(0x463250)(this, sourceText, start, length); } // 0x463250
        void SetCharArray(cs::array<char>* sourceText) { return il2cpp::call<void(*)(TMP*, cs::array<char>*)>(0x4631c0)(this, sourceText); } // 0x4631c0
        void SetCharArray(cs::array<char>* sourceText, int32_t start, int32_t length) { return il2cpp::call<void(*)(TMP*, cs::array<char>*, int32_t, int32_t)>(0x463070)(this, sourceText, start, length); } // 0x463070
        TMPro::TMP_Style* GetStyle(int32_t hashCode) { return il2cpp::call<TMPro::TMP_Style*(*)(TMP*, int32_t)>(0x45b5d0)(this, hashCode); } // 0x45b5d0
        bool ReplaceOpeningStyleTag(TMPro::TMP_Text+TextBackingContainer sourceText, int32_t srcIndex, int32_t srcOffset, cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<bool(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t, int32_t, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x460850)(this, sourceText, srcIndex, srcOffset, charBuffer, writeIndex); } // 0x460850
        bool ReplaceOpeningStyleTag(cs::array<int32_t>* sourceText, int32_t srcIndex, int32_t srcOffset, cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<bool(*)(TMP*, cs::array<int32_t>*, int32_t, int32_t, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x460400)(this, sourceText, srcIndex, srcOffset, charBuffer, writeIndex); } // 0x460400
        void ReplaceClosingStyleTag(TMPro::TMP_Text+TextBackingContainer sourceText, int32_t srcIndex, cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x45fd30)(this, sourceText, srcIndex, charBuffer, writeIndex); } // 0x45fd30
        void ReplaceClosingStyleTag(cs::array<int32_t>* sourceText, int32_t srcIndex, cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<void(*)(TMP*, cs::array<int32_t>*, int32_t, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x4600a0)(this, sourceText, srcIndex, charBuffer, writeIndex); } // 0x4600a0
        bool InsertOpeningStyleTag(TMPro::TMP_Style* style, int32_t srcIndex, cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<bool(*)(TMP*, TMPro::TMP_Style*, int32_t, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x45e480)(this, style, srcIndex, charBuffer, writeIndex); } // 0x45e480
        void InsertClosingStyleTag(cs::array<TMPro::TMP_Text+UnicodeChar>* charBuffer, int32_t writeIndex) { return il2cpp::call<void(*)(TMP*, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t)>(0x45d8b0)(this, charBuffer, writeIndex); } // 0x45d8b0
        int32_t GetMarkupTagHashCode(cs::array<int32_t>* tagDefinition, int32_t readIndex) { return il2cpp::call<int32_t(*)(TMP*, cs::array<int32_t>*, int32_t)>(0x45a6f0)(this, tagDefinition, readIndex); } // 0x45a6f0
        int32_t GetMarkupTagHashCode(TMPro::TMP_Text+TextBackingContainer tagDefinition, int32_t readIndex) { return il2cpp::call<int32_t(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t)>(0x45a640)(this, tagDefinition, readIndex); } // 0x45a640
        int32_t GetStyleHashCode(cs::array<int32_t>* text, int32_t index, int32_t closeIndex) { return il2cpp::call<int32_t(*)(TMP*, cs::array<int32_t>*, int32_t, int32_t)>(0x45b4e0)(this, text, index, closeIndex); } // 0x45b4e0
        int32_t GetStyleHashCode(TMPro::TMP_Text+TextBackingContainer text, int32_t index, int32_t closeIndex) { return il2cpp::call<int32_t(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t, int32_t)>(0x45b410)(this, text, index, closeIndex); } // 0x45b410
        void ResizeInternalArray(cs::array<Typeid_30>* array) { return il2cpp::call<void(*)(TMP*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, array); } // 0xa4ae0000
        void ResizeInternalArray(cs::array<Typeid_30>* array, int32_t size) { return il2cpp::call<void(*)(TMP*, cs::array<Typeid_30>*, int32_t)>(0xa4ae0000)(this, array, size); } // 0xa4ae0000
        void AddFloatToInternalTextBackingArray(float value, int32_t padding, int32_t precision, int32_t writeIndex) { return il2cpp::call<void(*)(TMP*, float, int32_t, int32_t, int32_t)>(0x4532d0)(this, value, padding, precision, writeIndex); } // 0x4532d0
        void AddIntegerToInternalTextBackingArray(Typeid_13 number, int32_t padding, int32_t writeIndex) { return il2cpp::call<void(*)(TMP*, Typeid_13, int32_t, int32_t)>(0x453740)(this, number, padding, writeIndex); } // 0x453740
        cs::string* InternalTextBackingArrayToString() { return il2cpp::call<cs::string*(*)(TMP*)>(0x45e7e0)(this); } // 0x45e7e0
        UnityEngine::Vector2 GetPreferredValues() { return il2cpp::call<UnityEngine::Vector2(*)(TMP*)>(0x45ad70)(this); } // 0x45ad70
        UnityEngine::Vector2 GetPreferredValues(float width, float height) { return il2cpp::call<UnityEngine::Vector2(*)(TMP*, float, float)>(0x45ae80)(this, width, height); } // 0x45ae80
        UnityEngine::Vector2 GetPreferredValues(cs::string* text) { return il2cpp::call<UnityEngine::Vector2(*)(TMP*, cs::string*)>(0x45aee0)(this, text); } // 0x45aee0
        UnityEngine::Vector2 GetPreferredValues(cs::string* text, float width, float height) { return il2cpp::call<UnityEngine::Vector2(*)(TMP*, cs::string*, float, float)>(0x45add0)(this, text, width, height); } // 0x45add0
        float GetPreferredWidth() { return il2cpp::call<float(*)(TMP*)>(0x45b060)(this); } // 0x45b060
        float GetPreferredWidth(UnityEngine::Vector2 margin) { return il2cpp::call<float(*)(TMP*, UnityEngine::Vector2)>(0x45afd0)(this, margin); } // 0x45afd0
        float GetPreferredHeight() { return il2cpp::call<float(*)(TMP*)>(0x45ab80)(this); } // 0x45ab80
        float GetPreferredHeight(UnityEngine::Vector2 margin) { return il2cpp::call<float(*)(TMP*, UnityEngine::Vector2)>(0x45aac0)(this, margin); } // 0x45aac0
        UnityEngine::Vector2 GetRenderedValues() { return il2cpp::call<UnityEngine::Vector2(*)(TMP*)>(0x45b2e0)(this); } // 0x45b2e0
        UnityEngine::Vector2 GetRenderedValues(bool onlyVisibleCharacters) { return il2cpp::call<UnityEngine::Vector2(*)(TMP*, bool)>(0x45b270)(this, onlyVisibleCharacters); } // 0x45b270
        float GetRenderedWidth() { return il2cpp::call<float(*)(TMP*)>(0x45b350)(this); } // 0x45b350
        float GetRenderedWidth(bool onlyVisibleCharacters) { return il2cpp::call<float(*)(TMP*, bool)>(0x45b3a0)(this, onlyVisibleCharacters); } // 0x45b3a0
        float GetRenderedHeight() { return il2cpp::call<float(*)(TMP*)>(0x45b220)(this); } // 0x45b220
        float GetRenderedHeight(bool onlyVisibleCharacters) { return il2cpp::call<float(*)(TMP*, bool)>(0x45b1d0)(this, onlyVisibleCharacters); } // 0x45b1d0
        UnityEngine::Bounds GetTextBounds() { return il2cpp::call<UnityEngine::Bounds(*)(TMP*)>(0x45ba10)(this); } // 0x45ba10
        UnityEngine::Bounds GetTextBounds(bool onlyVisibleCharacters) { return il2cpp::call<UnityEngine::Bounds(*)(TMP*, bool)>(0x45b6c0)(this, onlyVisibleCharacters); } // 0x45b6c0
        void AdjustLineOffset(int32_t startIndex, int32_t endIndex, float offset) { return il2cpp::call<void(*)(TMP*, int32_t, int32_t, float)>(0x453850)(this, startIndex, endIndex, offset); } // 0x453850
        void ResizeLineExtents(int32_t size) { return il2cpp::call<void(*)(TMP*, int32_t)>(0x460cf0)(this, size); } // 0x460cf0
        void InsertNewLine(int32_t i, float baseScale, float currentElementScale, float currentEmScale, float glyphAdjustment, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, bool isMaxVisibleDescenderSet, float maxVisibleDescender) { return il2cpp::call<void(*)(TMP*, int32_t, float, float, float, float, float, float, float, float, bool, float)>(0x45dc00)(this, i, baseScale, currentElementScale, currentEmScale, glyphAdjustment, boldSpacingAdjustment, characterSpacingAdjustment, width, lineGap, isMaxVisibleDescenderSet, maxVisibleDescender); } // 0x45dc00
        void SaveWordWrappingState(TMPro::WordWrapState state, int32_t index, int32_t count) { return il2cpp::call<void(*)(TMP*, TMPro::WordWrapState, int32_t, int32_t)>(0x462c50)(this, state, index, count); } // 0x462c50
        int32_t RestoreWordWrappingState(TMPro::WordWrapState state) { return il2cpp::call<int32_t(*)(TMP*, TMPro::WordWrapState)>(0x460eb0)(this, state); } // 0x460eb0
        void LoadDefaultSettings() { return il2cpp::call<void(*)(TMP*)>(0x45e970)(this); } // 0x45e970
        void GetSpecialCharacters(TMPro::TMP_FontAsset* fontAsset) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_FontAsset*)>(0x45b3f0)(this, fontAsset); } // 0x45b3f0
        void GetEllipsisSpecialCharacter(TMPro::TMP_FontAsset* fontAsset) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_FontAsset*)>(0x45a330)(this, fontAsset); } // 0x45a330
        void GetUnderlineSpecialCharacter(TMPro::TMP_FontAsset* fontAsset) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_FontAsset*)>(0x45ca30)(this, fontAsset); } // 0x45ca30
        void ReplaceTagWithCharacter(cs::array<int32_t>* chars, int32_t insertionIndex, int32_t tagLength, char c) { return il2cpp::call<void(*)(TMP*, cs::array<int32_t>*, int32_t, int32_t, char)>(0x460c90)(this, chars, insertionIndex, tagLength, c); } // 0x460c90
        TMPro::TMP_FontAsset* GetFontAssetForWeight(int32_t fontWeight) { return il2cpp::call<TMPro::TMP_FontAsset*(*)(TMP*, int32_t)>(0x45a5a0)(this, fontWeight); } // 0x45a5a0
        TMPro::TMP_TextElement* GetTextElement(uint32_t unicode, TMPro::TMP_FontAsset* fontAsset, TMPro::FontStyles fontStyle, TMPro::FontWeight fontWeight, bool isUsingAlternativeTypeface) { return il2cpp::call<TMPro::TMP_TextElement*(*)(TMP*, uint32_t, TMPro::TMP_FontAsset*, TMPro::FontStyles, TMPro::FontWeight, bool)>(0x45bd30)(this, unicode, fontAsset, fontStyle, fontWeight, isUsingAlternativeTypeface); } // 0x45bd30
        bool IsSelfOrLinkedAncestor(TMPro::TMP_Text* targetTextComponent) { return il2cpp::call<bool(*)(TMP*, TMPro::TMP_Text*)>(0x45e890)(this, targetTextComponent); } // 0x45e890
        void ReleaseLinkedTextComponent(TMPro::TMP_Text* targetTextComponent) { return il2cpp::call<void(*)(TMP*, TMPro::TMP_Text*)>(0x45fc10)(this, targetTextComponent); } // 0x45fc10
        UnityEngine::Vector2 PackUV(float x, float y, float scale) { return il2cpp::call<UnityEngine::Vector2(*)(TMP*, float, float, float)>(0x45ed80)(this, x, y, scale); } // 0x45ed80
        float PackUV(float x, float y) { return il2cpp::call<float(*)(TMP*, float, float)>(0x45ed20)(this, x, y); } // 0x45ed20
        int32_t HexToInt(char hex) { return il2cpp::call<int32_t(*)(TMP*, char)>(0x45d7a0)(this, hex); } // 0x45d7a0
        int32_t GetUTF16(cs::string* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::string*, int32_t)>(0x45c2f0)(this, text, i); } // 0x45c2f0
        int32_t GetUTF16(cs::array<int32_t>* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::array<int32_t>*, int32_t)>(0x45c160)(this, text, i); } // 0x45c160
        int32_t GetUTF16(cs::array<uint32_t>* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::array<uint32_t>*, int32_t)>(0x45c160)(this, text, i); } // 0x45c160
        int32_t GetUTF16(System::Text::StringBuilder* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, System::Text::StringBuilder*, int32_t)>(0x45c3b0)(this, text, i); } // 0x45c3b0
        int32_t GetUTF16(TMPro::TMP_Text+TextBackingContainer text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t)>(0x45c240)(this, text, i); } // 0x45c240
        int32_t GetUTF32(cs::string* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::string*, int32_t)>(0x45c470)(this, text, i); } // 0x45c470
        int32_t GetUTF32(cs::array<int32_t>* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::array<int32_t>*, int32_t)>(0x45c5d0)(this, text, i); } // 0x45c5d0
        int32_t GetUTF32(cs::array<uint32_t>* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, cs::array<uint32_t>*, int32_t)>(0x45c5d0)(this, text, i); } // 0x45c5d0
        int32_t GetUTF32(System::Text::StringBuilder* text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, System::Text::StringBuilder*, int32_t)>(0x45c780)(this, text, i); } // 0x45c780
        int32_t GetUTF32(TMPro::TMP_Text+TextBackingContainer text, int32_t i) { return il2cpp::call<int32_t(*)(TMP*, TMPro::TMP_Text+TextBackingContainer, int32_t)>(0x45c8e0)(this, text, i); } // 0x45c8e0
        UnityEngine::Color32 HexCharsToColor(cs::array<char>* hexChars, int32_t tagCount) { return il2cpp::call<UnityEngine::Color32(*)(TMP*, cs::array<char>*, int32_t)>(0x45cee0)(this, hexChars, tagCount); } // 0x45cee0
        UnityEngine::Color32 HexCharsToColor(cs::array<char>* hexChars, int32_t startIndex, int32_t length) { return il2cpp::call<UnityEngine::Color32(*)(TMP*, cs::array<char>*, int32_t, int32_t)>(0x45cb60)(this, hexChars, startIndex, length); } // 0x45cb60
        int32_t GetAttributeParameters(cs::array<char>* chars, int32_t startIndex, int32_t length, cs::array<float>* parameters) { return il2cpp::call<int32_t(*)(TMP*, cs::array<char>*, int32_t, int32_t, cs::array<float>*)>(0x45a240)(this, chars, startIndex, length, parameters); } // 0x45a240
        float ConvertToFloat(cs::array<char>* chars, int32_t startIndex, int32_t length) { return il2cpp::call<float(*)(TMP*, cs::array<char>*, int32_t, int32_t)>(0x456d20)(this, chars, startIndex, length); } // 0x456d20
        float ConvertToFloat(cs::array<char>* chars, int32_t startIndex, int32_t length, int32_t lastIndex) { return il2cpp::call<float(*)(TMP*, cs::array<char>*, int32_t, int32_t, int32_t)>(0x456b60)(this, chars, startIndex, length, lastIndex); } // 0x456b60
        bool ValidateHtmlTag(cs::array<TMPro::TMP_Text+UnicodeChar>* chars, int32_t startIndex, int32_t endIndex) { return il2cpp::call<bool(*)(TMP*, cs::array<TMPro::TMP_Text+UnicodeChar>*, int32_t, int32_t)>(0x463b70)(this, chars, startIndex, endIndex); } // 0x463b70
        void ctor() { return il2cpp::call<void(*)(TMP*)>(0x46ad00)(this); } // 0x46ad00
        void cctor() { return il2cpp::call<void(*)(TMP*)>(0x46a9b0)(this); } // 0x46a9b0

    };

}
namespace ark {

        template<> struct meta_statics<TMPro::TMP> {
        cs::array<TMPro::MaterialReference>* m_materialReferences; // 0x0
        System::Collections::Generic::Dictionary<int32_t, int32_t>* m_materialReferenceIndexLookup; // 0x4
        TMPro::TMP_TextProcessingStack<TMPro::MaterialReference>* m_materialReferenceStack; // 0x8
        UnityEngine::Color32 s_colorWhite; // 0x3c
        System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>* OnFontAssetRequest; // 0x40
        System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>* OnSpriteAssetRequest; // 0x44
        cs::array<char>* m_htmlTag; // 0x48
        cs::array<TMPro::RichTextTagAttribute>* m_xmlAttribute; // 0x4c
        cs::array<float>* m_attributeParameterValues; // 0x50
        TMPro::WordWrapState m_SavedWordWrapState; // 0x54
        TMPro::WordWrapState m_SavedLineState; // 0x318
        TMPro::WordWrapState m_SavedEllipsisState; // 0x5dc
        TMPro::WordWrapState m_SavedLastValidState; // 0x8a0
        TMPro::WordWrapState m_SavedSoftLineBreakState; // 0xb64
        TMPro::TMP_TextProcessingStack<TMPro::WordWrapState>* m_EllipsisInsertionCandidateStack; // 0xe28
        Unity::Profiling::ProfilerMarker k_ParseTextMarker; // 0x1100
        Unity::Profiling::ProfilerMarker k_InsertNewLineMarker; // 0x1104
        UnityEngine::Vector2 k_LargePositiveVector2; // 0x1108
        UnityEngine::Vector2 k_LargeNegativeVector2; // 0x1110
        float k_LargePositiveFloat; // 0x1118
        float k_LargeNegativeFloat; // 0x111c
        int32_t k_LargePositiveInt; // 0x1120
        int32_t k_LargeNegativeInt; // 0x1124
        };

}



cs::array<TMPro::MaterialReference>* TMPro::TMP::m_materialReferences() { return statics()->m_materialReferences; }; // 0x0

System::Collections::Generic::Dictionary<int32_t, int32_t>* TMPro::TMP::m_materialReferenceIndexLookup() { return statics()->m_materialReferenceIndexLookup; }; // 0x4

TMPro::TMP_TextProcessingStack<TMPro::MaterialReference>* TMPro::TMP::m_materialReferenceStack() { return statics()->m_materialReferenceStack; }; // 0x8

UnityEngine::Color32 TMPro::TMP::s_colorWhite() { return statics()->s_colorWhite; }; // 0x3c

System::Func<int32_t, cs::string*, TMPro::TMP_FontAsset>* TMPro::TMP::OnFontAssetRequest() { return statics()->OnFontAssetRequest; }; // 0x40

System::Func<int32_t, cs::string*, TMPro::TMP_SpriteAsset>* TMPro::TMP::OnSpriteAssetRequest() { return statics()->OnSpriteAssetRequest; }; // 0x44

cs::array<char>* TMPro::TMP::m_htmlTag() { return statics()->m_htmlTag; }; // 0x48

cs::array<TMPro::RichTextTagAttribute>* TMPro::TMP::m_xmlAttribute() { return statics()->m_xmlAttribute; }; // 0x4c

cs::array<float>* TMPro::TMP::m_attributeParameterValues() { return statics()->m_attributeParameterValues; }; // 0x50

TMPro::WordWrapState TMPro::TMP::m_SavedWordWrapState() { return statics()->m_SavedWordWrapState; }; // 0x54

TMPro::WordWrapState TMPro::TMP::m_SavedLineState() { return statics()->m_SavedLineState; }; // 0x318

TMPro::WordWrapState TMPro::TMP::m_SavedEllipsisState() { return statics()->m_SavedEllipsisState; }; // 0x5dc

TMPro::WordWrapState TMPro::TMP::m_SavedLastValidState() { return statics()->m_SavedLastValidState; }; // 0x8a0

TMPro::WordWrapState TMPro::TMP::m_SavedSoftLineBreakState() { return statics()->m_SavedSoftLineBreakState; }; // 0xb64

TMPro::TMP_TextProcessingStack<TMPro::WordWrapState>* TMPro::TMP::m_EllipsisInsertionCandidateStack() { return statics()->m_EllipsisInsertionCandidateStack; }; // 0xe28

Unity::Profiling::ProfilerMarker TMPro::TMP::k_ParseTextMarker() { return statics()->k_ParseTextMarker; }; // 0x1100

Unity::Profiling::ProfilerMarker TMPro::TMP::k_InsertNewLineMarker() { return statics()->k_InsertNewLineMarker; }; // 0x1104

UnityEngine::Vector2 TMPro::TMP::k_LargePositiveVector2() { return statics()->k_LargePositiveVector2; }; // 0x1108

UnityEngine::Vector2 TMPro::TMP::k_LargeNegativeVector2() { return statics()->k_LargeNegativeVector2; }; // 0x1110

float TMPro::TMP::k_LargePositiveFloat() { return statics()->k_LargePositiveFloat; }; // 0x1118

float TMPro::TMP::k_LargeNegativeFloat() { return statics()->k_LargeNegativeFloat; }; // 0x111c

int32_t TMPro::TMP::k_LargePositiveInt() { return statics()->k_LargePositiveInt; }; // 0x1120

int32_t TMPro::TMP::k_LargeNegativeInt() { return statics()->k_LargeNegativeInt; }; // 0x1124
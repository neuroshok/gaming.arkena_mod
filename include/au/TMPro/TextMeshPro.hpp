#pragma once
#include <ark/class.hpp>

#include <au/TMPro/TMP_Text.hpp>
#include <au/UnityEngine/Renderer.hpp>
#include <au/UnityEngine/MeshFilter.hpp>
#include <cs/array.hpp>
#include <au/TMPro/MaskingTypes.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <cs/array.hpp>
#include <au/Unity/Profiling/ProfilerMarker.hpp>
#include <au/System/Action.hpp>
#include <au/UnityEngine/Vector4.hpp>

namespace TMPro
{
    struct TextMeshPro : ark::meta<TextMeshPro, TMPro::TMP_Text>
    {
        static Unity::Profiling::ProfilerMarker k_GenerateTextMarker(); // 0x0
        static Unity::Profiling::ProfilerMarker k_SetArraySizesMarker(); // 0x4
        static Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker(); // 0x8
        static Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker(); // 0xc
        static Unity::Profiling::ProfilerMarker k_CharacterLookupMarker(); // 0x10
        static Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker(); // 0x14
        static Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker(); // 0x18
        static Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker(); // 0x1c
        static Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker(); // 0x20
        static Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker(); // 0x24
        static Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker(); // 0x28
        static Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker(); // 0x2c
        static Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker(); // 0x30
        static Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker(); // 0x34
        static Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker(); // 0x38
        static Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker(); // 0x3c
        static Unity::Profiling::ProfilerMarker k_SavePageInfoMarker(); // 0x40
        static Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker(); // 0x44
        static Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker(); // 0x48
        static Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker(); // 0x4c
        bool m_hasFontAssetChanged; // 0x530
        float m_previousLossyScaleY; // 0x534
        UnityEngine::Renderer* m_renderer; // 0x538
        UnityEngine::MeshFilter* m_meshFilter; // 0x53c
        bool m_isFirstAllocation; // 0x540
        int32_t m_max_characters; // 0x544
        int32_t m_max_numberOfLines; // 0x548
        cs::array<TMPro::TMP_SubMesh>* m_subTextObjects; // 0x54c
        TMPro::MaskingTypes m_maskType; // 0x550
        UnityEngine::Matrix4x4 m_EnvMapMatrix; // 0x554
        cs::array<UnityEngine::Vector3>* m_RectTransformCorners; // 0x594
        bool m_isRegisteredForEvents; // 0x598
        int32_t _SortingLayer; // 0x59c
        int32_t _SortingLayerID; // 0x5a0
        int32_t _SortingOrder; // 0x5a4
        System::Action<TMPro::TMP_TextInfo>* OnPreRenderText; // 0x5a8
        bool m_currentAutoSizeMode; // 0x5ac

        void UpdateEnvMapMatrix() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa67e00)(this); } // 0xa67e00
        void SetMask(TMPro::MaskingTypes maskType) { return il2cpp::call<void(*)(TextMeshPro*, TMPro::MaskingTypes)>(0xa670d0)(this, maskType); } // 0xa670d0
        void SetMaskCoordinates(UnityEngine::Vector4 coords) { return il2cpp::call<void(*)(TextMeshPro*, UnityEngine::Vector4)>(0xa66ec0)(this, coords); } // 0xa66ec0
        void SetMaskCoordinates(UnityEngine::Vector4 coords, float softX, float softY) { return il2cpp::call<void(*)(TextMeshPro*, UnityEngine::Vector4, float, float)>(0xa66de0)(this, coords, softX, softY); } // 0xa66de0
        void EnableMasking() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa571c0)(this); } // 0xa571c0
        void DisableMasking() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa570b0)(this); } // 0xa570b0
        void UpdateMask() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa680a0)(this); } // 0xa680a0
        void CreateMaterialInstance() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa56ef0)(this); } // 0xa56ef0
        void SetPerspectiveCorrection() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa676c0)(this); } // 0xa676c0
        void OnPreRenderObject() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa63fa0)(this); } // 0xa63fa0
        void SetMeshFilters(bool state) { return il2cpp::call<void(*)(TextMeshPro*, bool)>(0xa67250)(this, state); } // 0xa67250
        void SetActiveSubTextObjectRenderers(bool state) { return il2cpp::call<void(*)(TextMeshPro*, bool)>(0xa64770)(this, state); } // 0xa64770
        void UpdateSubMeshSortingLayerID(int32_t id) { return il2cpp::call<void(*)(TextMeshPro*, int32_t)>(0xa685f0)(this, id); } // 0xa685f0
        void UpdateSubMeshSortingOrder(int32_t order) { return il2cpp::call<void(*)(TextMeshPro*, int32_t)>(0xa68720)(this, order); } // 0xa68720
        void UpdateSDFScale(float scaleDelta) { return il2cpp::call<void(*)(TextMeshPro*, float)>(0xa68410)(this, scaleDelta); } // 0xa68410
        int32_t get_sortingLayerID() { return il2cpp::call<int32_t(*)(TextMeshPro*)>(0xa69220)(this); } // 0xa69220
        void set_sortingLayerID(int32_t value) { return il2cpp::call<void(*)(TextMeshPro*, int32_t)>(0xa695e0)(this, value); } // 0xa695e0
        int32_t get_sortingOrder() { return il2cpp::call<int32_t(*)(TextMeshPro*)>(0xa692b0)(this); } // 0xa692b0
        void set_sortingOrder(int32_t value) { return il2cpp::call<void(*)(TextMeshPro*, int32_t)>(0xa697a0)(this, value); } // 0xa697a0
        TMPro::TextContainer* get_textContainer() { return il2cpp::call<TMPro::TextContainer*(*)(TextMeshPro*)>(0x387470)(this); } // 0x387470
        UnityEngine::Transform* get_transform() { return il2cpp::call<UnityEngine::Transform*(*)(TextMeshPro*)>(0xa69340)(this); } // 0xa69340
        UnityEngine::Renderer* get_renderer() { return il2cpp::call<UnityEngine::Renderer*(*)(TextMeshPro*)>(0xa69190)(this); } // 0xa69190
        UnityEngine::MeshFilter* get_meshFilter() { return il2cpp::call<UnityEngine::MeshFilter*(*)(TextMeshPro*)>(0xa68fe0)(this); } // 0xa68fe0
        TMPro::MaskingTypes get_maskType() { return il2cpp::call<TMPro::MaskingTypes(*)(TextMeshPro*)>(0xa68fc0)(this); } // 0xa68fc0
        void set_maskType(TMPro::MaskingTypes value) { return il2cpp::call<void(*)(TextMeshPro*, TMPro::MaskingTypes)>(0xa695b0)(this, value); } // 0xa695b0
        void SetMask(TMPro::MaskingTypes type, UnityEngine::Vector4 maskCoords) { return il2cpp::call<void(*)(TextMeshPro*, TMPro::MaskingTypes, UnityEngine::Vector4)>(0xa67040)(this, type, maskCoords); } // 0xa67040
        void SetMask(TMPro::MaskingTypes type, UnityEngine::Vector4 maskCoords, float softnessX, float softnessY) { return il2cpp::call<void(*)(TextMeshPro*, TMPro::MaskingTypes, UnityEngine::Vector4, float, float)>(0xa66f50)(this, type, maskCoords, softnessX, softnessY); } // 0xa66f50
        void UpdateFontAsset() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa68060)(this); } // 0xa68060
        void ctor() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa68e80)(this); } // 0xa68e80
        void cctor() { return il2cpp::call<void(*)(TextMeshPro*)>(0xa68b10)(this); } // 0xa68b10

    };

}
namespace ark {

        template<> struct meta_statics<TMPro::TextMeshPro> {
        Unity::Profiling::ProfilerMarker k_GenerateTextMarker; // 0x0
        Unity::Profiling::ProfilerMarker k_SetArraySizesMarker; // 0x4
        Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker; // 0x8
        Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker; // 0xc
        Unity::Profiling::ProfilerMarker k_CharacterLookupMarker; // 0x10
        Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker; // 0x14
        Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker; // 0x18
        Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker; // 0x1c
        Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker; // 0x20
        Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker; // 0x24
        Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker; // 0x28
        Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker; // 0x2c
        Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker; // 0x30
        Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker; // 0x34
        Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker; // 0x38
        Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker; // 0x3c
        Unity::Profiling::ProfilerMarker k_SavePageInfoMarker; // 0x40
        Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker; // 0x44
        Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker; // 0x48
        Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker; // 0x4c
        };

}



Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_GenerateTextMarker() { return statics()->k_GenerateTextMarker; }; // 0x0

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_SetArraySizesMarker() { return statics()->k_SetArraySizesMarker; }; // 0x4

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_GenerateTextPhaseIMarker() { return statics()->k_GenerateTextPhaseIMarker; }; // 0x8

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_ParseMarkupTextMarker() { return statics()->k_ParseMarkupTextMarker; }; // 0xc

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_CharacterLookupMarker() { return statics()->k_CharacterLookupMarker; }; // 0x10

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleGPOSFeaturesMarker() { return statics()->k_HandleGPOSFeaturesMarker; }; // 0x14

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_CalculateVerticesPositionMarker() { return statics()->k_CalculateVerticesPositionMarker; }; // 0x18

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_ComputeTextMetricsMarker() { return statics()->k_ComputeTextMetricsMarker; }; // 0x1c

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleVisibleCharacterMarker() { return statics()->k_HandleVisibleCharacterMarker; }; // 0x20

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleWhiteSpacesMarker() { return statics()->k_HandleWhiteSpacesMarker; }; // 0x24

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleHorizontalLineBreakingMarker() { return statics()->k_HandleHorizontalLineBreakingMarker; }; // 0x28

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleVerticalLineBreakingMarker() { return statics()->k_HandleVerticalLineBreakingMarker; }; // 0x2c

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_SaveGlyphVertexDataMarker() { return statics()->k_SaveGlyphVertexDataMarker; }; // 0x30

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_ComputeCharacterAdvanceMarker() { return statics()->k_ComputeCharacterAdvanceMarker; }; // 0x34

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleCarriageReturnMarker() { return statics()->k_HandleCarriageReturnMarker; }; // 0x38

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_HandleLineTerminationMarker() { return statics()->k_HandleLineTerminationMarker; }; // 0x3c

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_SavePageInfoMarker() { return statics()->k_SavePageInfoMarker; }; // 0x40

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_SaveProcessingStatesMarker() { return statics()->k_SaveProcessingStatesMarker; }; // 0x44

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_GenerateTextPhaseIIMarker() { return statics()->k_GenerateTextPhaseIIMarker; }; // 0x48

Unity::Profiling::ProfilerMarker TMPro::TextMeshPro::k_GenerateTextPhaseIIIMarker() { return statics()->k_GenerateTextPhaseIIIMarker; }; // 0x4c
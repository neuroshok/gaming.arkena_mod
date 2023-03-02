#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/EventSystems/UIBehaviour.hpp>
#include <au/UnityEngine/UI/RectangularVertexClipper.hpp>
#include <au/UnityEngine/RectTransform.hpp>
#include <au/System/Collections/Generic/HashSet.hpp>
#include <au/System/Collections/Generic/HashSet.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector2Int.hpp>
#include <au/UnityEngine/Canvas.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/UI/IClippable.hpp>

namespace UnityEngine::UI
{
    struct RectMask2D : ark::meta<RectMask2D, UnityEngine::EventSystems::UIBehaviour>
    {
        UnityEngine::UI::RectangularVertexClipper* m_VertexClipper; // 0xc
        UnityEngine::RectTransform* m_RectTransform; // 0x10
        System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* m_MaskableTargets; // 0x14
        System::Collections::Generic::HashSet<UnityEngine::UI::IClippable>* m_ClipTargets; // 0x18
        bool m_ShouldRecalculateClipRects; // 0x1c
        System::Collections::Generic::List<UnityEngine::UI::RectMask2D>* m_Clippers; // 0x20
        UnityEngine::Rect m_LastClipRectCanvasSpace; // 0x24
        bool m_ForceClip; // 0x34
        UnityEngine::Vector4 m_Padding; // 0x38
        UnityEngine::Vector2Int m_Softness; // 0x48
        UnityEngine::Canvas* m_Canvas; // 0x50
        cs::array<UnityEngine::Vector3>* m_Corners; // 0x54

        UnityEngine::Vector4 get_padding() { return il2cpp::call<UnityEngine::Vector4(*)(RectMask2D*)>(0x4d9220)(this); } // 0x4d9220
        void set_padding(UnityEngine::Vector4 value) { return il2cpp::call<void(*)(RectMask2D*, UnityEngine::Vector4)>(0x132d480)(this, value); } // 0x132d480
        UnityEngine::Vector2Int get_softness() { return il2cpp::call<UnityEngine::Vector2Int(*)(RectMask2D*)>(0x9ba520)(this); } // 0x9ba520
        void set_softness(UnityEngine::Vector2Int value) { return il2cpp::call<void(*)(RectMask2D*, UnityEngine::Vector2Int)>(0x132d4a0)(this, value); } // 0x132d4a0
        UnityEngine::Canvas* get_Canvas() { return il2cpp::call<UnityEngine::Canvas*(*)(RectMask2D*)>(0x132d0c0)(this); } // 0x132d0c0
        UnityEngine::Rect get_canvasRect() { return il2cpp::call<UnityEngine::Rect(*)(RectMask2D*)>(0x132d210)(this); } // 0x132d210
        UnityEngine::RectTransform* get_rectTransform() { return il2cpp::call<UnityEngine::RectTransform*(*)(RectMask2D*)>(0x132d290)(this); } // 0x132d290
        void ctor() { return il2cpp::call<void(*)(RectMask2D*)>(0x132cf80)(this); } // 0x132cf80
        UnityEngine::Rect get_rootCanvasRect() { return il2cpp::call<UnityEngine::Rect(*)(RectMask2D*)>(0x132d2d0)(this); } // 0x132d2d0
        void AddClippable(UnityEngine::UI::IClippable* clippable) { return il2cpp::call<void(*)(RectMask2D*, UnityEngine::UI::IClippable*)>(0x132c160)(this, clippable); } // 0x132c160
        void RemoveClippable(UnityEngine::UI::IClippable* clippable) { return il2cpp::call<void(*)(RectMask2D*, UnityEngine::UI::IClippable*)>(0x132cb90)(this, clippable); } // 0x132cb90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::RectMask2D> {
        };

}


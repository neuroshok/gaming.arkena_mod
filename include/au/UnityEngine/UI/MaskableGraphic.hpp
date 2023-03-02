#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/UI/Graphic.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/UI/RectMask2D.hpp>
#include <au/UnityEngine/UI/MaskableGraphic/CullStateChangedEvent.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/UI/MaskableGraphic/CullStateChangedEvent.hpp>

namespace UnityEngine::UI
{
    struct MaskableGraphic : ark::meta<MaskableGraphic, UnityEngine::UI::Graphic>
    {
        bool m_ShouldRecalculateStencil; // 0x60
        UnityEngine::Material* m_MaskMaterial; // 0x64
        UnityEngine::UI::RectMask2D* m_ParentMask; // 0x68
        bool m_Maskable; // 0x6c
        bool m_IsMaskingGraphic; // 0x6d
        bool m_IncludeForMasking; // 0x6e
        UnityEngine::UI::MaskableGraphic+CullStateChangedEvent*NESTEDTYPE m_OnCullStateChanged; // 0x70
        bool m_ShouldRecalculate; // 0x74
        int32_t m_StencilValue; // 0x78
        cs::array<UnityEngine::Vector3>* m_Corners; // 0x7c

        UnityEngine::UI::MaskableGraphic+CullStateChangedEvent*NESTEDTYPE get_onCullStateChanged() { return il2cpp::call<UnityEngine::UI::MaskableGraphic+CullStateChangedEvent*NESTEDTYPE(*)(MaskableGraphic*)>(0x373a00)(this); } // 0x373a00
        void set_onCullStateChanged(UnityEngine::UI::MaskableGraphic+CullStateChangedEvent*NESTEDTYPE value) { return il2cpp::call<void(*)(MaskableGraphic*, UnityEngine::UI::MaskableGraphic+CullStateChangedEvent*NESTEDTYPE)>(0x3a37d0)(this, value); } // 0x3a37d0
        bool get_maskable() { return il2cpp::call<bool(*)(MaskableGraphic*)>(0x1327090)(this); } // 0x1327090
        void set_maskable(bool value) { return il2cpp::call<void(*)(MaskableGraphic*, bool)>(0x1327430)(this, value); } // 0x1327430
        bool get_isMaskingGraphic() { return il2cpp::call<bool(*)(MaskableGraphic*)>(0x1327080)(this); } // 0x1327080
        void set_isMaskingGraphic(bool value) { return il2cpp::call<void(*)(MaskableGraphic*, bool)>(0x1327410)(this, value); } // 0x1327410
        void UpdateCull(bool cull) { return il2cpp::call<void(*)(MaskableGraphic*, bool)>(0x1326f30)(this, cull); } // 0x1326f30
        UnityEngine::Rect get_rootCanvasRect() { return il2cpp::call<UnityEngine::Rect(*)(MaskableGraphic*)>(0x13270a0)(this); } // 0x13270a0
        void UpdateClipParent() { return il2cpp::call<void(*)(MaskableGraphic*)>(0x1326c00)(this); } // 0x1326c00
        void ctor() { return il2cpp::call<void(*)(MaskableGraphic*)>(0x1326fe0)(this); } // 0x1326fe0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::MaskableGraphic> {
        };

}


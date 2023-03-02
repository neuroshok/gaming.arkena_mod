#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/EventSystems/UIBehaviour.hpp>

namespace UnityEngine::UI
{
    struct LayoutElement : ark::meta<LayoutElement, UnityEngine::EventSystems::UIBehaviour>
    {
        bool m_IgnoreLayout; // 0xc
        float m_MinWidth; // 0x10
        float m_MinHeight; // 0x14
        float m_PreferredWidth; // 0x18
        float m_PreferredHeight; // 0x1c
        float m_FlexibleWidth; // 0x20
        float m_FlexibleHeight; // 0x24
        int32_t m_LayoutPriority; // 0x28

        void ctor() { return il2cpp::call<void(*)(LayoutElement*)>(0x1736990)(this); } // 0x1736990
        void SetDirty() { return il2cpp::call<void(*)(LayoutElement*)>(0x17368f0)(this); } // 0x17368f0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::LayoutElement> {
        };

}


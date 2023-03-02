#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/RectTransform/ReapplyDrivenProperties.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/DrivenTransformProperties.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/RectTransform/Edge.hpp>
#include <au/UnityEngine/RectTransform/Axis.hpp>
#include <au/UnityEngine/RectTransform.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine
{
    struct RectTransform : ark::meta<RectTransform, UnityEngine::Transform>
    {
        static UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE reapplyDrivenProperties(); // 0x0

        void add_reapplyDrivenProperties(UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE)>(0x13a7790)(this, value); } // 0x13a7790
        void remove_reapplyDrivenProperties(UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE)>(0x13a7d70)(this, value); } // 0x13a7d70
        UnityEngine::Rect get_rect() { return il2cpp::call<UnityEngine::Rect(*)(RectTransform*)>(0x13a7cc0)(this); } // 0x13a7cc0
        UnityEngine::Vector2 get_anchorMin() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a78c0)(this); } // 0x13a78c0
        void set_anchorMin(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7e90)(this, value); } // 0x13a7e90
        UnityEngine::Vector2 get_anchorMax() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a7850)(this); } // 0x13a7850
        void set_anchorMax(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7e30)(this, value); } // 0x13a7e30
        UnityEngine::Vector2 get_anchoredPosition() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a79c0)(this); } // 0x13a79c0
        void set_anchoredPosition(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7f70)(this, value); } // 0x13a7f70
        UnityEngine::Vector2 get_sizeDelta() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a7d30)(this); } // 0x13a7d30
        void set_sizeDelta(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a84c0)(this, value); } // 0x13a84c0
        UnityEngine::Vector2 get_pivot() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a7c50)(this); } // 0x13a7c50
        void set_pivot(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a8460)(this, value); } // 0x13a8460
        UnityEngine::Vector3 get_anchoredPosition3D() { return il2cpp::call<UnityEngine::Vector3(*)(RectTransform*)>(0x13a7900)(this); } // 0x13a7900
        void set_anchoredPosition3D(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector3)>(0x13a7ec0)(this, value); } // 0x13a7ec0
        UnityEngine::Vector2 get_offsetMin() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a7b50)(this); } // 0x13a7b50
        void set_offsetMin(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a8220)(this, value); } // 0x13a8220
        UnityEngine::Vector2 get_offsetMax() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a7a60)(this); } // 0x13a7a60
        void set_offsetMax(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a8000)(this, value); } // 0x13a8000
        UnityEngine::Object* get_drivenByObject() { return il2cpp::call<UnityEngine::Object*(*)(RectTransform*)>(0x13a7a00)(this); } // 0x13a7a00
        void set_drivenByObject(UnityEngine::Object* value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Object*)>(0x13a7fa0)(this, value); } // 0x13a7fa0
        UnityEngine::DrivenTransformProperties get_drivenProperties() { return il2cpp::call<UnityEngine::DrivenTransformProperties(*)(RectTransform*)>(0x13a7a30)(this); } // 0x13a7a30
        void set_drivenProperties(UnityEngine::DrivenTransformProperties value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::DrivenTransformProperties)>(0x13a7fd0)(this, value); } // 0x13a7fd0
        void ForceUpdateRectTransforms() { return il2cpp::call<void(*)(RectTransform*)>(0x13a6710)(this); } // 0x13a6710
        void GetLocalCorners(cs::array<UnityEngine::Vector3>* fourCornersArray) { return il2cpp::call<void(*)(RectTransform*, cs::array<UnityEngine::Vector3>*)>(0x13a6740)(this, fourCornersArray); } // 0x13a6740
        void GetWorldCorners(cs::array<UnityEngine::Vector3>* fourCornersArray) { return il2cpp::call<void(*)(RectTransform*, cs::array<UnityEngine::Vector3>*)>(0x13a6d80)(this, fourCornersArray); } // 0x13a6d80
        void SetInsetAndSizeFromParentEdge(UnityEngine::RectTransform+Edge edge, float inset, float size) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::RectTransform+Edge, float, float)>(0x13a71a0)(this, edge, inset, size); } // 0x13a71a0
        void SetSizeWithCurrentAnchors(UnityEngine::RectTransform+Axis axis, float size) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::RectTransform+Axis, float)>(0x13a74c0)(this, axis, size); } // 0x13a74c0
        void SendReapplyDrivenProperties(UnityEngine::RectTransform* driven) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::RectTransform*)>(0x13a7160)(this, driven); } // 0x13a7160
        UnityEngine::Rect GetRectInParentSpace() { return il2cpp::call<UnityEngine::Rect(*)(RectTransform*)>(0x13a6a60)(this); } // 0x13a6a60
        UnityEngine::Vector2 GetParentSize() { return il2cpp::call<UnityEngine::Vector2(*)(RectTransform*)>(0x13a68e0)(this); } // 0x13a68e0
        void ctor() { return il2cpp::call<void(*)(RectTransform*)>(0x310ec0)(this); } // 0x310ec0
        void get_rect_Injected(UnityEngine::Rect ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Rect)>(0x13a7c90)(this, ret); } // 0x13a7c90
        void get_anchorMin_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7890)(this, ret); } // 0x13a7890
        void set_anchorMin_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7e60)(this, value); } // 0x13a7e60
        void get_anchorMax_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7820)(this, ret); } // 0x13a7820
        void set_anchorMax_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7e00)(this, value); } // 0x13a7e00
        void get_anchoredPosition_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7990)(this, ret); } // 0x13a7990
        void set_anchoredPosition_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7f40)(this, value); } // 0x13a7f40
        void get_sizeDelta_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7d00)(this, ret); } // 0x13a7d00
        void set_sizeDelta_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a8490)(this, value); } // 0x13a8490
        void get_pivot_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a7c20)(this, ret); } // 0x13a7c20
        void set_pivot_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(RectTransform*, UnityEngine::Vector2)>(0x13a8430)(this, value); } // 0x13a8430

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RectTransform> {
        UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE reapplyDrivenProperties; // 0x0
        };

}



UnityEngine::RectTransform+ReapplyDrivenProperties*NESTEDTYPE UnityEngine::RectTransform::reapplyDrivenProperties() { return statics()->reapplyDrivenProperties; }; // 0x0
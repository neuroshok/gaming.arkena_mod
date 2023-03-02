#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/EventSystems/UIBehaviour.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Texture2D.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/RectTransform.hpp>
#include <au/UnityEngine/CanvasRenderer.hpp>
#include <au/UnityEngine/Canvas.hpp>
#include <au/UnityEngine/Events/UnityAction.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/UnityEngine/UI/VertexHelper.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/UI/CoroutineTween/TweenRunner.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Events/UnityAction.hpp>

namespace UnityEngine::UI
{
    struct Graphic : ark::meta<Graphic, UnityEngine::EventSystems::UIBehaviour>
    {
        static UnityEngine::Material* s_DefaultUI(); // 0x0
        static UnityEngine::Texture2D* s_WhiteTexture(); // 0x4
        static UnityEngine::Mesh* s_Mesh(); // 0x8
        static UnityEngine::UI::VertexHelper* s_VertexHelper(); // 0xc
        UnityEngine::Material* m_Material; // 0xc
        UnityEngine::Color m_Color; // 0x10
        bool m_SkipLayoutUpdate; // 0x20
        bool m_SkipMaterialUpdate; // 0x21
        bool m_RaycastTarget; // 0x22
        UnityEngine::Vector4 m_RaycastPadding; // 0x24
        UnityEngine::RectTransform* m_RectTransform; // 0x34
        UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x38
        UnityEngine::Canvas* m_Canvas; // 0x3c
        bool m_VertsDirty; // 0x40
        bool m_MaterialDirty; // 0x41
        UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback; // 0x44
        UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback; // 0x48
        UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback; // 0x4c
        UnityEngine::Mesh* m_CachedMesh; // 0x50
        cs::array<UnityEngine::Vector2>* m_CachedUvs; // 0x54
        UnityEngine::UI::CoroutineTween::TweenRunner<UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner; // 0x58
        bool _useLegacyMeshGeneration_k__BackingField; // 0x5c

        UnityEngine::Material* get_defaultGraphicMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Graphic*)>(0xb64c80)(this); } // 0xb64c80
        UnityEngine::Vector4 get_raycastPadding() { return il2cpp::call<UnityEngine::Vector4(*)(Graphic*)>(0x39e1c0)(this); } // 0x39e1c0
        void set_raycastPadding(UnityEngine::Vector4 value) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Vector4)>(0xb653b0)(this, value); } // 0xb653b0
        bool get_useLegacyMeshGeneration() { return il2cpp::call<bool(*)(Graphic*)>(0x70dd10)(this); } // 0x70dd10
        void set_useLegacyMeshGeneration(bool value) { return il2cpp::call<void(*)(Graphic*, bool)>(0xb65490)(this, value); } // 0xb65490
        void ctor() { return il2cpp::call<void(*)(Graphic*)>(0xb64af0)(this); } // 0xb64af0
        int32_t get_depth() { return il2cpp::call<int32_t(*)(Graphic*)>(0xb64e80)(this); } // 0xb64e80
        UnityEngine::Canvas* get_canvas() { return il2cpp::call<UnityEngine::Canvas*(*)(Graphic*)>(0xb64c10)(this); } // 0xb64c10
        void CacheCanvas() { return il2cpp::call<void(*)(Graphic*)>(0xb62680)(this); } // 0xb62680
        UnityEngine::CanvasRenderer* get_canvasRenderer() { return il2cpp::call<UnityEngine::CanvasRenderer*(*)(Graphic*)>(0xb64b90)(this); } // 0xb64b90
        void DoMeshGeneration() { return il2cpp::call<void(*)(Graphic*)>(0xb62f30)(this); } // 0xb62f30
        void DoLegacyMeshGeneration() { return il2cpp::call<void(*)(Graphic*)>(0xb62b20)(this); } // 0xb62b20
        UnityEngine::Mesh* get_workerMesh() { return il2cpp::call<UnityEngine::Mesh*(*)(Graphic*)>(0xb651b0)(this); } // 0xb651b0
        UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point) { return il2cpp::call<UnityEngine::Vector2(*)(Graphic*, UnityEngine::Vector2)>(0xb63fe0)(this, point); } // 0xb63fe0
        UnityEngine::Rect GetPixelAdjustedRect() { return il2cpp::call<UnityEngine::Rect(*)(Graphic*)>(0xb63360)(this); } // 0xb63360
        UnityEngine::Color CreateColorFromAlpha(float alpha) { return il2cpp::call<UnityEngine::Color(*)(Graphic*, float)>(0xb627e0)(this, alpha); } // 0xb627e0
        void RegisterDirtyLayoutCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb64520)(this, action); } // 0xb64520
        void UnregisterDirtyLayoutCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb64890)(this, action); } // 0xb64890
        void RegisterDirtyVerticesCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb645e0)(this, action); } // 0xb645e0
        void UnregisterDirtyVerticesCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb64950)(this, action); } // 0xb64950
        void RegisterDirtyMaterialCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb64580)(this, action); } // 0xb64580
        void UnregisterDirtyMaterialCallback(UnityEngine::Events::UnityAction* action) { return il2cpp::call<void(*)(Graphic*, UnityEngine::Events::UnityAction*)>(0xb648f0)(this, action); } // 0xb648f0
        void cctor() { return il2cpp::call<void(*)(Graphic*)>(0xb64a80)(this); } // 0xb64a80

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::Graphic> {
        UnityEngine::Material* s_DefaultUI; // 0x0
        UnityEngine::Texture2D* s_WhiteTexture; // 0x4
        UnityEngine::Mesh* s_Mesh; // 0x8
        UnityEngine::UI::VertexHelper* s_VertexHelper; // 0xc
        };

}



UnityEngine::Material* UnityEngine::UI::Graphic::s_DefaultUI() { return statics()->s_DefaultUI; }; // 0x0

UnityEngine::Texture2D* UnityEngine::UI::Graphic::s_WhiteTexture() { return statics()->s_WhiteTexture; }; // 0x4

UnityEngine::Mesh* UnityEngine::UI::Graphic::s_Mesh() { return statics()->s_Mesh; }; // 0x8

UnityEngine::UI::VertexHelper* UnityEngine::UI::Graphic::s_VertexHelper() { return statics()->s_VertexHelper; }; // 0xc
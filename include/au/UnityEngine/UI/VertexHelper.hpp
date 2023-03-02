#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/UnityEngine/UIVertex.hpp>
#include <au/UnityEngine/UIVertex.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/UIVertex.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/List.hpp>

namespace UnityEngine::UI
{
    struct VertexHelper : ark::meta<VertexHelper, il2cpp::Il2CppObject>
    {
        static UnityEngine::Vector4 s_DefaultTangent(); // 0x0
        static UnityEngine::Vector3 s_DefaultNormal(); // 0x10
        System::Collections::Generic::List<UnityEngine::Vector3>* m_Positions; // 0x8
        System::Collections::Generic::List<UnityEngine::Color32>* m_Colors; // 0xc
        System::Collections::Generic::List<UnityEngine::Vector4>* m_Uv0S; // 0x10
        System::Collections::Generic::List<UnityEngine::Vector4>* m_Uv1S; // 0x14
        System::Collections::Generic::List<UnityEngine::Vector4>* m_Uv2S; // 0x18
        System::Collections::Generic::List<UnityEngine::Vector4>* m_Uv3S; // 0x1c
        System::Collections::Generic::List<UnityEngine::Vector3>* m_Normals; // 0x20
        System::Collections::Generic::List<UnityEngine::Vector4>* m_Tangents; // 0x24
        System::Collections::Generic::List<int32_t>* m_Indices; // 0x28
        bool m_ListsInitalized; // 0x2c

        void ctor() { return il2cpp::call<void(*)(VertexHelper*)>(0x2c4c60)(this); } // 0x2c4c60
        void ctor(UnityEngine::Mesh* m) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::Mesh*)>(0x1810990)(this, m); } // 0x1810990
        void InitializeListIfRequired() { return il2cpp::call<void(*)(VertexHelper*)>(0x1810410)(this); } // 0x1810410
        void Clear() { return il2cpp::call<void(*)(VertexHelper*)>(0x180ffc0)(this); } // 0x180ffc0
        int32_t get_currentVertCount() { return il2cpp::call<int32_t(*)(VertexHelper*)>(0x1810bb0)(this); } // 0x1810bb0
        int32_t get_currentIndexCount() { return il2cpp::call<int32_t(*)(VertexHelper*)>(0x1810b70)(this); } // 0x1810b70
        void PopulateUIVertex(UnityEngine::UIVertex vertex, int32_t i) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::UIVertex, int32_t)>(0x1810590)(this, vertex, i); } // 0x1810590
        void SetUIVertex(UnityEngine::UIVertex vertex, int32_t i) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::UIVertex, int32_t)>(0x1810770)(this, vertex, i); } // 0x1810770
        void FillMesh(UnityEngine::Mesh* mesh) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::Mesh*)>(0x18102b0)(this, mesh); } // 0x18102b0
        void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector4 uv2, UnityEngine::Vector4 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector3, UnityEngine::Vector4)>(0x180fc60)(this, position, color, uv0, uv1, uv2, uv3, normal, tangent); } // 0x180fc60
        void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector4, UnityEngine::Vector4, UnityEngine::Vector3, UnityEngine::Vector4)>(0x180fde0)(this, position, color, uv0, uv1, normal, tangent); } // 0x180fde0
        void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector4)>(0x180fe80)(this, position, color, uv0); } // 0x180fe80
        void AddVert(UnityEngine::UIVertex v) { return il2cpp::call<void(*)(VertexHelper*, UnityEngine::UIVertex)>(0x180ff40)(this, v); } // 0x180ff40
        void AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2) { return il2cpp::call<void(*)(VertexHelper*, int32_t, int32_t, int32_t)>(0x180f940)(this, idx0, idx1, idx2); } // 0x180f940
        void AddUIVertexQuad(cs::array<UnityEngine::UIVertex>* verts) { return il2cpp::call<void(*)(VertexHelper*, cs::array<UnityEngine::UIVertex>*)>(0x180f9d0)(this, verts); } // 0x180f9d0
        void AddUIVertexStream(System::Collections::Generic::List<UnityEngine::UIVertex>* verts, System::Collections::Generic::List<int32_t>* indices) { return il2cpp::call<void(*)(VertexHelper*, System::Collections::Generic::List<UnityEngine::UIVertex>*, System::Collections::Generic::List<int32_t>*)>(0x180fba0)(this, verts, indices); } // 0x180fba0
        void AddUIVertexTriangleStream(System::Collections::Generic::List<UnityEngine::UIVertex>* verts) { return il2cpp::call<void(*)(VertexHelper*, System::Collections::Generic::List<UnityEngine::UIVertex>*)>(0x180fc20)(this, verts); } // 0x180fc20
        void GetUIVertexStream(System::Collections::Generic::List<UnityEngine::UIVertex>* stream) { return il2cpp::call<void(*)(VertexHelper*, System::Collections::Generic::List<UnityEngine::UIVertex>*)>(0x18103d0)(this, stream); } // 0x18103d0
        void cctor() { return il2cpp::call<void(*)(VertexHelper*)>(0x1810900)(this); } // 0x1810900

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::VertexHelper> {
        UnityEngine::Vector4 s_DefaultTangent; // 0x0
        UnityEngine::Vector3 s_DefaultNormal; // 0x10
        };

}



UnityEngine::Vector4 UnityEngine::UI::VertexHelper::s_DefaultTangent() { return statics()->s_DefaultTangent; }; // 0x0

UnityEngine::Vector3 UnityEngine::UI::VertexHelper::s_DefaultNormal() { return statics()->s_DefaultNormal; }; // 0x10
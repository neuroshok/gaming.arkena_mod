#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Mesh.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <il2cpp/core.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine
{
    struct CanvasRenderer : ark::meta<CanvasRenderer, UnityEngine::Component>
    {
        bool _isMask_k__BackingField; // 0xc

        void set_hasPopInstruction(bool value) { return il2cpp::call<void(*)(CanvasRenderer*, bool)>(0x1ad1a40)(this, value); } // 0x1ad1a40
        int32_t get_materialCount() { return il2cpp::call<int32_t(*)(CanvasRenderer*)>(0x1ad1950)(this); } // 0x1ad1950
        void set_materialCount(int32_t value) { return il2cpp::call<void(*)(CanvasRenderer*, int32_t)>(0x1ad1a70)(this, value); } // 0x1ad1a70
        void set_popMaterialCount(int32_t value) { return il2cpp::call<void(*)(CanvasRenderer*, int32_t)>(0x1ad1aa0)(this, value); } // 0x1ad1aa0
        int32_t get_absoluteDepth() { return il2cpp::call<int32_t(*)(CanvasRenderer*)>(0x1ad1890)(this); } // 0x1ad1890
        bool get_hasMoved() { return il2cpp::call<bool(*)(CanvasRenderer*)>(0x1ad1920)(this); } // 0x1ad1920
        bool get_cullTransparentMesh() { return il2cpp::call<bool(*)(CanvasRenderer*)>(0x1ad18c0)(this); } // 0x1ad18c0
        void set_cullTransparentMesh(bool value) { return il2cpp::call<void(*)(CanvasRenderer*, bool)>(0x1ad19e0)(this, value); } // 0x1ad19e0
        bool get_cull() { return il2cpp::call<bool(*)(CanvasRenderer*)>(0x1ad18f0)(this); } // 0x1ad18f0
        void set_cull(bool value) { return il2cpp::call<void(*)(CanvasRenderer*, bool)>(0x1ad1a10)(this, value); } // 0x1ad1a10
        void SetColor(UnityEngine::Color color) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Color)>(0x1ad1610)(this, color); } // 0x1ad1610
        UnityEngine::Color GetColor() { return il2cpp::call<UnityEngine::Color(*)(CanvasRenderer*)>(0x1ad1510)(this); } // 0x1ad1510
        void EnableRectClipping(UnityEngine::Rect rect) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Rect)>(0x1ad14b0)(this, rect); } // 0x1ad14b0
        void set_clippingSoftness(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Vector2)>(0x1ad19b0)(this, value); } // 0x1ad19b0
        void DisableRectClipping() { return il2cpp::call<void(*)(CanvasRenderer*)>(0x1ad1450)(this); } // 0x1ad1450
        void SetMaterial(UnityEngine::Material* material, int32_t index) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Material*, int32_t)>(0x1ad1640)(this, material, index); } // 0x1ad1640
        UnityEngine::Material* GetMaterial(int32_t index) { return il2cpp::call<UnityEngine::Material*(*)(CanvasRenderer*, int32_t)>(0x1ad1550)(this, index); } // 0x1ad1550
        void SetPopMaterial(UnityEngine::Material* material, int32_t index) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Material*, int32_t)>(0x1ad1790)(this, material, index); } // 0x1ad1790
        void SetTexture(UnityEngine::Texture* texture) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Texture*)>(0x1ad17c0)(this, texture); } // 0x1ad17c0
        void SetAlphaTexture(UnityEngine::Texture* texture) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Texture*)>(0x1ad15b0)(this, texture); } // 0x1ad15b0
        void SetMesh(UnityEngine::Mesh* mesh) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Mesh*)>(0x1ad1760)(this, mesh); } // 0x1ad1760
        void Clear() { return il2cpp::call<void(*)(CanvasRenderer*)>(0x1ad13d0)(this); } // 0x1ad13d0
        void SetMaterial(UnityEngine::Material* material, UnityEngine::Texture* texture) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Material*, UnityEngine::Texture*)>(0x1ad1670)(this, material, texture); } // 0x1ad1670
        UnityEngine::Material* GetMaterial() { return il2cpp::call<UnityEngine::Material*(*)(CanvasRenderer*)>(0x1ad1580)(this); } // 0x1ad1580
        void SplitUIVertexStreams(System::Collections::Generic::List<UnityEngine::UIVertex>* verts, System::Collections::Generic::List<UnityEngine::Vector3>* positions, System::Collections::Generic::List<UnityEngine::Color32>* colors, System::Collections::Generic::List<UnityEngine::Vector4>* uv0S, System::Collections::Generic::List<UnityEngine::Vector4>* uv1S, System::Collections::Generic::List<UnityEngine::Vector4>* uv2S, System::Collections::Generic::List<UnityEngine::Vector4>* uv3S, System::Collections::Generic::List<UnityEngine::Vector3>* normals, System::Collections::Generic::List<UnityEngine::Vector4>* tangents, System::Collections::Generic::List<int32_t>* indices) { return il2cpp::call<void(*)(CanvasRenderer*, System::Collections::Generic::List<UnityEngine::UIVertex>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Color32>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<int32_t>*)>(0x1ad1820)(this, verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices); } // 0x1ad1820
        void CreateUIVertexStream(System::Collections::Generic::List<UnityEngine::UIVertex>* verts, System::Collections::Generic::List<UnityEngine::Vector3>* positions, System::Collections::Generic::List<UnityEngine::Color32>* colors, System::Collections::Generic::List<UnityEngine::Vector4>* uv0S, System::Collections::Generic::List<UnityEngine::Vector4>* uv1S, System::Collections::Generic::List<UnityEngine::Vector4>* uv2S, System::Collections::Generic::List<UnityEngine::Vector4>* uv3S, System::Collections::Generic::List<UnityEngine::Vector3>* normals, System::Collections::Generic::List<UnityEngine::Vector4>* tangents, System::Collections::Generic::List<int32_t>* indices) { return il2cpp::call<void(*)(CanvasRenderer*, System::Collections::Generic::List<UnityEngine::UIVertex>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Color32>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<int32_t>*)>(0x1ad1400)(this, verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices); } // 0x1ad1400
        void AddUIVertexStream(System::Collections::Generic::List<UnityEngine::UIVertex>* verts, System::Collections::Generic::List<UnityEngine::Vector3>* positions, System::Collections::Generic::List<UnityEngine::Color32>* colors, System::Collections::Generic::List<UnityEngine::Vector4>* uv0S, System::Collections::Generic::List<UnityEngine::Vector4>* uv1S, System::Collections::Generic::List<UnityEngine::Vector4>* uv2S, System::Collections::Generic::List<UnityEngine::Vector4>* uv3S, System::Collections::Generic::List<UnityEngine::Vector3>* normals, System::Collections::Generic::List<UnityEngine::Vector4>* tangents) { return il2cpp::call<void(*)(CanvasRenderer*, System::Collections::Generic::List<UnityEngine::UIVertex>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Color32>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector4>*, System::Collections::Generic::List<UnityEngine::Vector3>*, System::Collections::Generic::List<UnityEngine::Vector4>*)>(0x1ad1390)(this, verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents); } // 0x1ad1390
        void SplitIndicesStreamsInternal(il2cpp::Il2CppObject* verts, il2cpp::Il2CppObject* indices) { return il2cpp::call<void(*)(CanvasRenderer*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x1ad17f0)(this, verts, indices); } // 0x1ad17f0
        void SplitUIVertexStreamsInternal(il2cpp::Il2CppObject* verts, il2cpp::Il2CppObject* positions, il2cpp::Il2CppObject* colors, il2cpp::Il2CppObject* uv0S, il2cpp::Il2CppObject* uv1S, il2cpp::Il2CppObject* uv2S, il2cpp::Il2CppObject* uv3S, il2cpp::Il2CppObject* normals, il2cpp::Il2CppObject* tangents) { return il2cpp::call<void(*)(CanvasRenderer*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x1ad1390)(this, verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents); } // 0x1ad1390
        void CreateUIVertexStreamInternal(il2cpp::Il2CppObject* verts, il2cpp::Il2CppObject* positions, il2cpp::Il2CppObject* colors, il2cpp::Il2CppObject* uv0S, il2cpp::Il2CppObject* uv1S, il2cpp::Il2CppObject* uv2S, il2cpp::Il2CppObject* uv3S, il2cpp::Il2CppObject* normals, il2cpp::Il2CppObject* tangents, il2cpp::Il2CppObject* indices) { return il2cpp::call<void(*)(CanvasRenderer*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x1ad1400)(this, verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices); } // 0x1ad1400
        void SetColor_Injected(UnityEngine::Color color) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Color)>(0x1ad15e0)(this, color); } // 0x1ad15e0
        void GetColor_Injected(UnityEngine::Color ret) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Color)>(0x1ad14e0)(this, ret); } // 0x1ad14e0
        void EnableRectClipping_Injected(UnityEngine::Rect rect) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Rect)>(0x1ad1480)(this, rect); } // 0x1ad1480
        void set_clippingSoftness_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(CanvasRenderer*, UnityEngine::Vector2)>(0x1ad1980)(this, value); } // 0x1ad1980

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::CanvasRenderer> {
        };

}


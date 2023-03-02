#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Texture2D.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/System/Collections/Generic/IList.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Texture2D.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector4.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Bounds.hpp>
#include <au/UnityEngine/Vector4.hpp>

namespace UnityEngine
{
    struct Sprite : ark::meta<Sprite, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(Sprite*)>(0xeebd60)(this); } // 0xeebd60
        int32_t GetPackingMode() { return il2cpp::call<int32_t(*)(Sprite*)>(0xeeb590)(this); } // 0xeeb590
        int32_t GetPackingRotation() { return il2cpp::call<int32_t(*)(Sprite*)>(0xeeb5c0)(this); } // 0xeeb5c0
        int32_t GetPacked() { return il2cpp::call<int32_t(*)(Sprite*)>(0xeeb560)(this); } // 0xeeb560
        UnityEngine::Rect GetTextureRect() { return il2cpp::call<UnityEngine::Rect(*)(Sprite*)>(0xeeb9b0)(this); } // 0xeeb9b0
        UnityEngine::Vector2 GetTextureRectOffset() { return il2cpp::call<UnityEngine::Vector2(*)(Sprite*)>(0xeeb940)(this); } // 0xeeb940
        UnityEngine::Vector4 GetInnerUVs() { return il2cpp::call<UnityEngine::Vector4(*)(Sprite*)>(0xeeb4b0)(this); } // 0xeeb4b0
        UnityEngine::Vector4 GetOuterUVs() { return il2cpp::call<UnityEngine::Vector4(*)(Sprite*)>(0xeeb520)(this); } // 0xeeb520
        UnityEngine::Vector4 GetPadding() { return il2cpp::call<UnityEngine::Vector4(*)(Sprite*)>(0xeeb620)(this); } // 0xeeb620
        UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Rect, UnityEngine::Vector2, float, UnityEngine::Texture2D*)>(0xeead50)(this, rect, pivot, pixelsToUnits, texture); } // 0xeead50
        UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t, UnityEngine::SpriteMeshType, UnityEngine::Vector4, bool)>(0xeeade0)(this, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); } // 0xeeade0
        UnityEngine::Bounds get_bounds() { return il2cpp::call<UnityEngine::Bounds(*)(Sprite*)>(0xeebe80)(this); } // 0xeebe80
        UnityEngine::Rect get_rect() { return il2cpp::call<UnityEngine::Rect(*)(Sprite*)>(0xeebfc0)(this); } // 0xeebfc0
        UnityEngine::Vector4 get_border() { return il2cpp::call<UnityEngine::Vector4(*)(Sprite*)>(0xeebe10)(this); } // 0xeebe10
        UnityEngine::Texture2D* get_texture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Sprite*)>(0xeec1d0)(this); } // 0xeec1d0
        UnityEngine::Texture2D* GetSecondaryTexture(int32_t index) { return il2cpp::call<UnityEngine::Texture2D*(*)(Sprite*, int32_t)>(0xeeb8e0)(this, index); } // 0xeeb8e0
        float get_pixelsPerUnit() { return il2cpp::call<float(*)(Sprite*)>(0xeebf60)(this); } // 0xeebf60
        float get_spriteAtlasTextureScale() { return il2cpp::call<float(*)(Sprite*)>(0xeec000)(this); } // 0xeec000
        UnityEngine::Texture2D* get_associatedAlphaSplitTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Sprite*)>(0xeebdb0)(this); } // 0xeebdb0
        UnityEngine::Vector2 get_pivot() { return il2cpp::call<UnityEngine::Vector2(*)(Sprite*)>(0xeebf20)(this); } // 0xeebf20
        bool get_packed() { return il2cpp::call<bool(*)(Sprite*)>(0xeebec0)(this); } // 0xeebec0
        UnityEngine::SpritePackingMode get_packingMode() { return il2cpp::call<UnityEngine::SpritePackingMode(*)(Sprite*)>(0xeeb590)(this); } // 0xeeb590
        UnityEngine::SpritePackingRotation get_packingRotation() { return il2cpp::call<UnityEngine::SpritePackingRotation(*)(Sprite*)>(0xeeb5c0)(this); } // 0xeeb5c0
        UnityEngine::Rect get_textureRect() { return il2cpp::call<UnityEngine::Rect(*)(Sprite*)>(0xeec110)(this); } // 0xeec110
        UnityEngine::Vector2 get_textureRectOffset() { return il2cpp::call<UnityEngine::Vector2(*)(Sprite*)>(0xeec030)(this); } // 0xeec030
        cs::array<UnityEngine::Vector2>* get_vertices() { return il2cpp::call<cs::array<UnityEngine::Vector2>*(*)(Sprite*)>(0xeec260)(this); } // 0xeec260
        cs::array<uint16_t>* get_triangles() { return il2cpp::call<cs::array<uint16_t>*(*)(Sprite*)>(0xeec200)(this); } // 0xeec200
        cs::array<UnityEngine::Vector2>* get_uv() { return il2cpp::call<cs::array<UnityEngine::Vector2>*(*)(Sprite*)>(0xeec230)(this); } // 0xeec230
        int32_t GetPhysicsShapeCount() { return il2cpp::call<int32_t(*)(Sprite*)>(0xeeb660)(this); } // 0xeeb660
        int32_t GetPhysicsShapePointCount(int32_t shapeIdx) { return il2cpp::call<int32_t(*)(Sprite*, int32_t)>(0xeeb6c0)(this, shapeIdx); } // 0xeeb6c0
        int32_t Internal_GetPhysicsShapePointCount(int32_t shapeIdx) { return il2cpp::call<int32_t(*)(Sprite*, int32_t)>(0xeeb9f0)(this, shapeIdx); } // 0xeeb9f0
        int32_t GetPhysicsShape(int32_t shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape) { return il2cpp::call<int32_t(*)(Sprite*, int32_t, System::Collections::Generic::List<UnityEngine::Vector2>*)>(0xeeb7b0)(this, shapeIdx, physicsShape); } // 0xeeb7b0
        void GetPhysicsShapeImpl(UnityEngine::Sprite* sprite, int32_t shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Sprite*, int32_t, System::Collections::Generic::List<UnityEngine::Vector2>*)>(0xeeb690)(this, sprite, shapeIdx, physicsShape); } // 0xeeb690
        void OverridePhysicsShape(System::Collections::Generic::IList<cs::array<UnityEngine::Vector2>*>* physicsShapes) { return il2cpp::call<void(*)(Sprite*, System::Collections::Generic::IList<cs::array<UnityEngine::Vector2>*>*)>(0xeeba80)(this, physicsShapes); } // 0xeeba80
        void OverridePhysicsShapeCount(UnityEngine::Sprite* sprite, int32_t physicsShapeCount) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Sprite*, int32_t)>(0xeeba50)(this, sprite, physicsShapeCount); } // 0xeeba50
        void OverridePhysicsShape(UnityEngine::Sprite* sprite, cs::array<UnityEngine::Vector2>* physicsShape, int32_t idx) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Sprite*, cs::array<UnityEngine::Vector2>*, int32_t)>(0xeebd30)(this, sprite, physicsShape, idx); } // 0xeebd30
        void OverrideGeometry(cs::array<UnityEngine::Vector2>* vertices, cs::array<uint16_t>* triangles) { return il2cpp::call<void(*)(Sprite*, cs::array<UnityEngine::Vector2>*, cs::array<uint16_t>*)>(0xeeba20)(this, vertices, triangles); } // 0xeeba20
        UnityEngine::Sprite* Create(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Rect, UnityEngine::Vector2, float, UnityEngine::Texture2D*)>(0xeeae30)(this, rect, pivot, pixelsToUnits, texture); } // 0xeeae30
        UnityEngine::Sprite* Create(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Rect, UnityEngine::Vector2, float)>(0xeeb3c0)(this, rect, pivot, pixelsToUnits); } // 0xeeb3c0
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t, UnityEngine::SpriteMeshType, UnityEngine::Vector4, bool)>(0xeeb020)(this, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); } // 0xeeb020
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t, UnityEngine::SpriteMeshType, UnityEngine::Vector4)>(0xeeafd0)(this, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border); } // 0xeeafd0
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t, UnityEngine::SpriteMeshType)>(0xeeaf60)(this, texture, rect, pivot, pixelsPerUnit, extrude, meshType); } // 0xeeaf60
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t)>(0xeeb410)(this, texture, rect, pivot, pixelsPerUnit, extrude); } // 0xeeb410
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float)>(0xeeaef0)(this, texture, rect, pivot, pixelsPerUnit); } // 0xeeaef0
        UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2)>(0xeeae80)(this, texture, rect, pivot); } // 0xeeae80
        void GetTextureRect_Injected(UnityEngine::Rect ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Rect)>(0xeeb980)(this, ret); } // 0xeeb980
        void GetTextureRectOffset_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector2)>(0xeeb910)(this, ret); } // 0xeeb910
        void GetInnerUVs_Injected(UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector4)>(0xeeb480)(this, ret); } // 0xeeb480
        void GetOuterUVs_Injected(UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector4)>(0xeeb4f0)(this, ret); } // 0xeeb4f0
        void GetPadding_Injected(UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector4)>(0xeeb5f0)(this, ret); } // 0xeeb5f0
        UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Rect, UnityEngine::Vector2, float, UnityEngine::Texture2D*)>(0xeead10)(this, rect, pivot, pixelsToUnits, texture); } // 0xeead10
        UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return il2cpp::call<UnityEngine::Sprite*(*)(Sprite*, UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint32_t, UnityEngine::SpriteMeshType, UnityEngine::Vector4, bool)>(0xeead90)(this, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); } // 0xeead90
        void get_bounds_Injected(UnityEngine::Bounds ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Bounds)>(0xeebe50)(this, ret); } // 0xeebe50
        void get_rect_Injected(UnityEngine::Rect ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Rect)>(0xeebf90)(this, ret); } // 0xeebf90
        void get_border_Injected(UnityEngine::Vector4 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector4)>(0xeebde0)(this, ret); } // 0xeebde0
        void get_pivot_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Sprite*, UnityEngine::Vector2)>(0xeebef0)(this, ret); } // 0xeebef0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Sprite> {
        };

}


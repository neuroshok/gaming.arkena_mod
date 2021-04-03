#include <au/UnityEngine/Sprite.hpp>

namespace UnityEngine {

    // Methods

    void Sprite::ctor() { return method_call(ctor); }  // 0xAAE550 // 
    int Sprite::GetPackingMode() { return method_call(GetPackingMode); }  // 0xAADD70 // 
    int Sprite::GetPackingRotation() { return method_call(GetPackingRotation); }  // 0xAADDA0 // 
    int Sprite::GetPacked() { return method_call(GetPacked); }  // 0xAADD40 // 
    UnityEngine::Rect Sprite::GetTextureRect() { return method_call(GetTextureRect); }  // 0xAAE1A0 // 
    UnityEngine::Vector2 Sprite::GetTextureRectOffset() { return method_call(GetTextureRectOffset); }  // 0xAAE130 // 
    UnityEngine::Vector4 Sprite::GetInnerUVs() { return method_call(GetInnerUVs); }  // 0xAADC90 // 
    UnityEngine::Vector4 Sprite::GetOuterUVs() { return method_call(GetOuterUVs); }  // 0xAADD00 // 
    UnityEngine::Vector4 Sprite::GetPadding() { return method_call(GetPadding); }  // 0xAADE00 // 
    UnityEngine::Sprite* Sprite::CreateSpriteWithoutTextureScripting(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return method_call(CreateSpriteWithoutTextureScripting, rect, pivot, pixelsToUnits, texture); }  // 0xAAD530 // 
    UnityEngine::Sprite* Sprite::CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return method_call(CreateSprite, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); }  // 0xAAD5C0 // 
    UnityEngine::Bounds Sprite::get_bounds() { return method_call(get_bounds); }  // 0xAAE670 // 
    UnityEngine::Rect Sprite::get_rect() { return method_call(get_rect); }  // 0xAAE7B0 // 
    UnityEngine::Vector4 Sprite::get_border() { return method_call(get_border); }  // 0xAAE600 // 
    UnityEngine::Texture2D* Sprite::get_texture() { return method_call(get_texture); }  // 0xAAE9C0 // 
    UnityEngine::Texture2D* Sprite::GetSecondaryTexture(int index) { return method_call(GetSecondaryTexture, index); }  // 0xAAE0D0 // 
    float Sprite::get_pixelsPerUnit() { return method_call(get_pixelsPerUnit); }  // 0xAAE750 // 
    float Sprite::get_spriteAtlasTextureScale() { return method_call(get_spriteAtlasTextureScale); }  // 0xAAE7F0 // 
    UnityEngine::Texture2D* Sprite::get_associatedAlphaSplitTexture() { return method_call(get_associatedAlphaSplitTexture); }  // 0xAAE5A0 // 
    UnityEngine::Vector2 Sprite::get_pivot() { return method_call(get_pivot); }  // 0xAAE710 // 
    bool Sprite::get_packed() { return method_call(get_packed); }  // 0xAAE6B0 // 
    UnityEngine::SpritePackingMode Sprite::get_packingMode() { return method_call(get_packingMode); }  // 0xAADD70 // 
    UnityEngine::SpritePackingRotation Sprite::get_packingRotation() { return method_call(get_packingRotation); }  // 0xAADDA0 // 
    UnityEngine::Rect Sprite::get_textureRect() { return method_call(get_textureRect); }  // 0xAAE900 // 
    UnityEngine::Vector2 Sprite::get_textureRectOffset() { return method_call(get_textureRectOffset); }  // 0xAAE820 // 
    cs::array<UnityEngine::Vector2>* Sprite::get_vertices() { return method_call(get_vertices); }  // 0xAAEA50 // 
    cs::array<uint16_t>* Sprite::get_triangles() { return method_call(get_triangles); }  // 0xAAE9F0 // 
    cs::array<UnityEngine::Vector2>* Sprite::get_uv() { return method_call(get_uv); }  // 0xAAEA20 // 
    int Sprite::GetPhysicsShapeCount() { return method_call(GetPhysicsShapeCount); }  // 0xAADE40 // 
    int Sprite::GetPhysicsShapePointCount(int shapeIdx) { return method_call(GetPhysicsShapePointCount, shapeIdx); }  // 0xAADEA0 // 
    int Sprite::Internal_GetPhysicsShapePointCount(int shapeIdx) { return method_call(Internal_GetPhysicsShapePointCount, shapeIdx); }  // 0xAAE1E0 // 
    int Sprite::GetPhysicsShape(int shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape) { return method_call(GetPhysicsShape, shapeIdx, physicsShape); }  // 0xAADFA0 // 
    void Sprite::GetPhysicsShapeImpl(UnityEngine::Sprite* sprite, int shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape) { return method_call(GetPhysicsShapeImpl, sprite, shapeIdx, physicsShape); }  // 0xAADE70 // 
    void Sprite::OverridePhysicsShape(System::Collections::Generic::IList<cs::array<UnityEngine::Vector2>*>* physicsShapes) { return method_call(OverridePhysicsShape, physicsShapes); }  // 0xAAE270 // 
    void Sprite::OverridePhysicsShapeCount(UnityEngine::Sprite* sprite, int physicsShapeCount) { return method_call(OverridePhysicsShapeCount, sprite, physicsShapeCount); }  // 0xAAE240 // 
    void Sprite::OverridePhysicsShape1(UnityEngine::Sprite* sprite, cs::array<UnityEngine::Vector2>* physicsShape, int idx) { return method_call(OverridePhysicsShape1, sprite, physicsShape, idx); }  // 0xAAE520 // 
    void Sprite::OverrideGeometry(cs::array<UnityEngine::Vector2>* vertices, cs::array<uint16_t>* triangles) { return method_call(OverrideGeometry, vertices, triangles); }  // 0xAAE210 // 
    UnityEngine::Sprite* Sprite::Create(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return method_call(Create, rect, pivot, pixelsToUnits, texture); }  // 0xAAD610 // 
    UnityEngine::Sprite* Sprite::Create1(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits) { return method_call(Create1, rect, pivot, pixelsToUnits); }  // 0xAADBA0 // 
    UnityEngine::Sprite* Sprite::Create2(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return method_call(Create2, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); }  // 0xAAD800 // 
    UnityEngine::Sprite* Sprite::Create3(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border) { return method_call(Create3, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border); }  // 0xAAD7B0 // 
    UnityEngine::Sprite* Sprite::Create4(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType) { return method_call(Create4, texture, rect, pivot, pixelsPerUnit, extrude, meshType); }  // 0xAAD740 // 
    UnityEngine::Sprite* Sprite::Create5(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude) { return method_call(Create5, texture, rect, pivot, pixelsPerUnit, extrude); }  // 0xAADBF0 // 
    UnityEngine::Sprite* Sprite::Create6(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit) { return method_call(Create6, texture, rect, pivot, pixelsPerUnit); }  // 0xAAD6D0 // 
    UnityEngine::Sprite* Sprite::Create7(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot) { return method_call(Create7, texture, rect, pivot); }  // 0xAAD660 // 
    void Sprite::GetTextureRect_Injected(/*out*/ UnityEngine::Rect ret) { return method_call(GetTextureRect_Injected, ret); }  // 0xAAE170 // 
    void Sprite::GetTextureRectOffset_Injected(/*out*/ UnityEngine::Vector2 ret) { return method_call(GetTextureRectOffset_Injected, ret); }  // 0xAAE100 // 
    void Sprite::GetInnerUVs_Injected(/*out*/ UnityEngine::Vector4 ret) { return method_call(GetInnerUVs_Injected, ret); }  // 0xAADC60 // 
    void Sprite::GetOuterUVs_Injected(/*out*/ UnityEngine::Vector4 ret) { return method_call(GetOuterUVs_Injected, ret); }  // 0xAADCD0 // 
    void Sprite::GetPadding_Injected(/*out*/ UnityEngine::Vector4 ret) { return method_call(GetPadding_Injected, ret); }  // 0xAADDD0 // 
    UnityEngine::Sprite* Sprite::CreateSpriteWithoutTextureScripting_Injected(/*ref*/ UnityEngine::Rect rect, /*ref*/ UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture) { return method_call(CreateSpriteWithoutTextureScripting_Injected, rect, pivot, pixelsToUnits, texture); }  // 0xAAD4F0 // 
    UnityEngine::Sprite* Sprite::CreateSprite_Injected(UnityEngine::Texture2D* texture, /*ref*/ UnityEngine::Rect rect, /*ref*/ UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, /*ref*/ UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) { return method_call(CreateSprite_Injected, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape); }  // 0xAAD570 // 
    void Sprite::get_bounds_Injected(/*out*/ UnityEngine::Bounds ret) { return method_call(get_bounds_Injected, ret); }  // 0xAAE640 // 
    void Sprite::get_rect_Injected(/*out*/ UnityEngine::Rect ret) { return method_call(get_rect_Injected, ret); }  // 0xAAE780 // 
    void Sprite::get_border_Injected(/*out*/ UnityEngine::Vector4 ret) { return method_call(get_border_Injected, ret); }  // 0xAAE5D0 // 
    void Sprite::get_pivot_Injected(/*out*/ UnityEngine::Vector2 ret) { return method_call(get_pivot_Injected, ret); }  // 0xAAE6E0 // 

};


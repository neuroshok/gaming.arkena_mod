//au/UnityEngine/Sprite
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector4.hpp>
namespace UnityEngine{ struct Texture2D; }
#include <au/UnityEngine/SpriteMeshType.hpp>
#include <au/UnityEngine/Bounds.hpp>
#include <au/UnityEngine/SpritePackingMode.hpp>
#include <au/UnityEngine/SpritePackingRotation.hpp>
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
namespace System::Collections::Generic{ template <class...> struct IList; }


namespace UnityEngine {
struct Sprite : ark::meta<Sprite, UnityEngine::Object>
{
ark_meta("UnityEngine", "Sprite", "");

    // Methods

    void ctor(); // 0xAAE550 // private 
    int GetPackingMode(); // 0xAADD70 // internal 
    int GetPackingRotation(); // 0xAADDA0 // internal 
    int GetPacked(); // 0xAADD40 // internal 
    UnityEngine::Rect GetTextureRect(); // 0xAAE1A0 // internal 
    UnityEngine::Vector2 GetTextureRectOffset(); // 0xAAE130 // internal 
    UnityEngine::Vector4 GetInnerUVs(); // 0xAADC90 // internal 
    UnityEngine::Vector4 GetOuterUVs(); // 0xAADD00 // internal 
    UnityEngine::Vector4 GetPadding(); // 0xAADE00 // internal 
    UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture); // 0xAAD530 // internal static 
    UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape); // 0xAAD5C0 // internal static 
    UnityEngine::Bounds get_bounds(); // 0xAAE670 // public 
    UnityEngine::Rect get_rect(); // 0xAAE7B0 // public 
    UnityEngine::Vector4 get_border(); // 0xAAE600 // public 
    UnityEngine::Texture2D* get_texture(); // 0xAAE9C0 // public 
    UnityEngine::Texture2D* GetSecondaryTexture(int index); // 0xAAE0D0 // internal 
    float get_pixelsPerUnit(); // 0xAAE750 // public 
    float get_spriteAtlasTextureScale(); // 0xAAE7F0 // public 
    UnityEngine::Texture2D* get_associatedAlphaSplitTexture(); // 0xAAE5A0 // public 
    UnityEngine::Vector2 get_pivot(); // 0xAAE710 // public 
    bool get_packed(); // 0xAAE6B0 // public 
    UnityEngine::SpritePackingMode get_packingMode(); // 0xAADD70 // public 
    UnityEngine::SpritePackingRotation get_packingRotation(); // 0xAADDA0 // public 
    UnityEngine::Rect get_textureRect(); // 0xAAE900 // public 
    UnityEngine::Vector2 get_textureRectOffset(); // 0xAAE820 // public 
    cs::array<UnityEngine::Vector2>* get_vertices(); // 0xAAEA50 // public 
    cs::array<uint16_t>* get_triangles(); // 0xAAE9F0 // public 
    cs::array<UnityEngine::Vector2>* get_uv(); // 0xAAEA20 // public 
    int GetPhysicsShapeCount(); // 0xAADE40 // public 
    int GetPhysicsShapePointCount(int shapeIdx); // 0xAADEA0 // public 
    int Internal_GetPhysicsShapePointCount(int shapeIdx); // 0xAAE1E0 // private 
    int GetPhysicsShape(int shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape); // 0xAADFA0 // public 
    void GetPhysicsShapeImpl(UnityEngine::Sprite* sprite, int shapeIdx, System::Collections::Generic::List<UnityEngine::Vector2>* physicsShape); // 0xAADE70 // private static 
    void OverridePhysicsShape(System::Collections::Generic::IList<cs::array<UnityEngine::Vector2>*>* physicsShapes); // 0xAAE270 // public 
    void OverridePhysicsShapeCount(UnityEngine::Sprite* sprite, int physicsShapeCount); // 0xAAE240 // private static 
    void OverridePhysicsShape1(UnityEngine::Sprite* sprite, cs::array<UnityEngine::Vector2>* physicsShape, int idx); // 0xAAE520 // private static 
    void OverrideGeometry(cs::array<UnityEngine::Vector2>* vertices, cs::array<uint16_t>* triangles); // 0xAAE210 // public 
    UnityEngine::Sprite* Create(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture); // 0xAAD610 // internal static 
    UnityEngine::Sprite* Create1(UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsToUnits); // 0xAADBA0 // internal static 
    UnityEngine::Sprite* Create2(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape); // 0xAAD800 // public static 
    UnityEngine::Sprite* Create3(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border); // 0xAAD7B0 // public static 
    UnityEngine::Sprite* Create4(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType); // 0xAAD740 // public static 
    UnityEngine::Sprite* Create5(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude); // 0xAADBF0 // public static 
    UnityEngine::Sprite* Create6(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit); // 0xAAD6D0 // public static 
    UnityEngine::Sprite* Create7(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot); // 0xAAD660 // public static 
    void GetTextureRect_Injected(/*out*/ UnityEngine::Rect ret); // 0xAAE170 // private 
    void GetTextureRectOffset_Injected(/*out*/ UnityEngine::Vector2 ret); // 0xAAE100 // private 
    void GetInnerUVs_Injected(/*out*/ UnityEngine::Vector4 ret); // 0xAADC60 // private 
    void GetOuterUVs_Injected(/*out*/ UnityEngine::Vector4 ret); // 0xAADCD0 // private 
    void GetPadding_Injected(/*out*/ UnityEngine::Vector4 ret); // 0xAADDD0 // private 
    UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(/*ref*/ UnityEngine::Rect rect, /*ref*/ UnityEngine::Vector2 pivot, float pixelsToUnits, UnityEngine::Texture2D* texture); // 0xAAD4F0 // private static 
    UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, /*ref*/ UnityEngine::Rect rect, /*ref*/ UnityEngine::Vector2 pivot, float pixelsPerUnit, unsigned int extrude, UnityEngine::SpriteMeshType meshType, /*ref*/ UnityEngine::Vector4 border, bool generateFallbackPhysicsShape); // 0xAAD570 // private static 
    void get_bounds_Injected(/*out*/ UnityEngine::Bounds ret); // 0xAAE640 // private 
    void get_rect_Injected(/*out*/ UnityEngine::Rect ret); // 0xAAE780 // private 
    void get_border_Injected(/*out*/ UnityEngine::Vector4 ret); // 0xAAE5D0 // private 
    void get_pivot_Injected(/*out*/ UnityEngine::Vector2 ret); // 0xAAE6E0 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Sprite>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Sprite::ctor> () { return 0xAAE550; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPackingMode> () { return 0xAADD70; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPackingRotation> () { return 0xAADDA0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPacked> () { return 0xAADD40; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetTextureRect> () { return 0xAAE1A0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetTextureRectOffset> () { return 0xAAE130; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetInnerUVs> () { return 0xAADC90; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetOuterUVs> () { return 0xAADD00; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPadding> () { return 0xAADE00; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::CreateSpriteWithoutTextureScripting> () { return 0xAAD530; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::CreateSprite> () { return 0xAAD5C0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_bounds> () { return 0xAAE670; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_rect> () { return 0xAAE7B0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_border> () { return 0xAAE600; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_texture> () { return 0xAAE9C0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetSecondaryTexture> () { return 0xAAE0D0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_pixelsPerUnit> () { return 0xAAE750; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_spriteAtlasTextureScale> () { return 0xAAE7F0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_associatedAlphaSplitTexture> () { return 0xAAE5A0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_pivot> () { return 0xAAE710; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_packed> () { return 0xAAE6B0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_packingMode> () { return 0xAADD70; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_packingRotation> () { return 0xAADDA0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_textureRect> () { return 0xAAE900; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_textureRectOffset> () { return 0xAAE820; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_vertices> () { return 0xAAEA50; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_triangles> () { return 0xAAE9F0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_uv> () { return 0xAAEA20; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPhysicsShapeCount> () { return 0xAADE40; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPhysicsShapePointCount> () { return 0xAADEA0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Internal_GetPhysicsShapePointCount> () { return 0xAAE1E0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPhysicsShape> () { return 0xAADFA0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPhysicsShapeImpl> () { return 0xAADE70; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::OverridePhysicsShape> () { return 0xAAE270; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::OverridePhysicsShapeCount> () { return 0xAAE240; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::OverridePhysicsShape1> () { return 0xAAE520; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::OverrideGeometry> () { return 0xAAE210; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create> () { return 0xAAD610; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create1> () { return 0xAADBA0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create2> () { return 0xAAD800; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create3> () { return 0xAAD7B0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create4> () { return 0xAAD740; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create5> () { return 0xAADBF0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create6> () { return 0xAAD6D0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::Create7> () { return 0xAAD660; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetTextureRect_Injected> () { return 0xAAE170; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetTextureRectOffset_Injected> () { return 0xAAE100; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetInnerUVs_Injected> () { return 0xAADC60; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetOuterUVs_Injected> () { return 0xAADCD0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::GetPadding_Injected> () { return 0xAADDD0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::CreateSpriteWithoutTextureScripting_Injected> () { return 0xAAD4F0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::CreateSprite_Injected> () { return 0xAAD570; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_bounds_Injected> () { return 0xAAE640; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_rect_Injected> () { return 0xAAE780; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_border_Injected> () { return 0xAAE5D0; }
    template<> inline uintptr_t rva<&UnityEngine::Sprite::get_pivot_Injected> () { return 0xAAE6E0; }
} // ark::method_info
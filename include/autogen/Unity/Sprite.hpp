#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/Object.hpp>
#include <autogen/Unity/Texture2D.hpp>

namespace Unity
{
    struct Rect { float x; float y; float w; float h; };

    struct Sprite : ark::meta<Sprite, Object> // TypeDefIndex: 5474
    {
        ark_meta("UnityEngine", "Sprite");

        void _ctor() { return method_call(_ctor, ); }                           // 0xB8C250
        std::int32_t GetPackingMode() { return method_call(GetPackingMode, ); } // 0xB8C140
        std::int32_t GetPacked() { return method_call(GetPacked, ); }           // 0xB8C110
        Rect GetTextureRect() { return method_call(GetTextureRect, ); } // 0xB8C210
        struct Vector4* GetInnerUVs() { return method_call(GetInnerUVs, ); }    // 0xB8C060
        struct Vector4* GetOuterUVs() { return method_call(GetOuterUVs, ); }    // 0xB8C0D0
        struct Vector4* GetPadding() { return method_call(GetPadding, ); }      // 0xB8C1A0
        Sprite* CreateSprite(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit, std::uint32_t extrude,
                                    struct SpriteMeshType* meshType, struct Vector4* border, bool generateFallbackPhysicsShape)
        {
            return method_call(CreateSprite, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
        }                                                                                                              // 0xB8B980
        struct Bounds* get_bounds() { return method_call(get_bounds, ); }                                              // 0xB8C370
        Rect get_rect() { return method_call(get_rect, ); }                                                    // 0xB8C4B0
        struct Vector4* get_border() { return method_call(get_border, ); }                                             // 0xB8C300
        Texture2D* get_texture() { return method_call(get_texture, ); }                                         // 0xB8C5A0
        float get_pixelsPerUnit() { return method_call(get_pixelsPerUnit, ); }                                         // 0xB8C450
        Texture2D* get_associatedAlphaSplitTexture() { return method_call(get_associatedAlphaSplitTexture, ); } // 0xB8C2A0
        struct Vector2* get_pivot() { return method_call(get_pivot, ); }                                               // 0xB8C410
        bool get_packed() { return method_call(get_packed, ); }                                                        // 0xB8C3B0
        struct SpritePackingMode* get_packingMode() { return method_call(get_packingMode, ); }                         // 0xB8C140
        Rect get_textureRect() { return method_call(get_textureRect, ); }                                      // 0xB8C4F0
        Vector2* get_vertices() { return method_call(get_vertices, ); }                                      // 0xB8C630
        struct ushort* get_triangles() { return method_call(get_triangles, ); }                                     // 0xB8C5D0
        Vector2* get_uv() { return method_call(get_uv, ); }                                                  // 0xB8C600
        
        /*Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit, std::uint32_t extrude,
                              struct SpriteMeshType* meshType, struct Vector4* border, bool generateFallbackPhysicsShape)
        {
            return method_call(Create, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
        } // 0xB8BC60
        Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit, std::uint32_t extrude,
                              struct SpriteMeshType* meshType, struct Vector4* border)
        {
            return method_call(Create, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border);
        } // 0xB8B9D0
        Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit, std::uint32_t extrude,
                              struct SpriteMeshType* meshType)
        {
            return method_call(Create, texture, rect, pivot, pixelsPerUnit, extrude, meshType);
        } // 0xB8BB40
        Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit, std::uint32_t extrude)
        {
            return method_call(Create, texture, rect, pivot, pixelsPerUnit, extrude);
        } // 0xB8BBD0
        Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit)
        {
            return method_call(Create, texture, rect, pivot, pixelsPerUnit);
        } // 0xB8BA20
        Sprite* Create(Texture2D* texture, Rect rect, struct Vector2* pivot)
        {
            return method_call(Create, texture, rect, pivot);
        }   */                                                                                                // 0xB8BAB0
        void GetTextureRect_Injected(Rect ret) { return method_call(GetTextureRect_Injected, ret); } // 0xB8C1E0
        void GetInnerUVs_Injected(struct Vector4* ret) { return method_call(GetInnerUVs_Injected, ret); }    // 0xB8C030
        void GetOuterUVs_Injected(struct Vector4* ret) { return method_call(GetOuterUVs_Injected, ret); }    // 0xB8C0A0
        void GetPadding_Injected(struct Vector4* ret) { return method_call(GetPadding_Injected, ret); }      // 0xB8C170
        Sprite* CreateSprite_Injected(Texture2D* texture, Rect rect, struct Vector2* pivot, float pixelsPerUnit,
                                             std::uint32_t extrude, struct SpriteMeshType* meshType, struct Vector4* border,
                                             bool generateFallbackPhysicsShape)
        {
            return method_call(CreateSprite_Injected, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
        }                                                                                               // 0xB8B930
        void get_bounds_Injected(struct Bounds* ret) { return method_call(get_bounds_Injected, ret); }  // 0xB8C340
        void get_rect_Injected(Rect ret) { return method_call(get_rect_Injected, ret); }        // 0xB8C480
        void get_border_Injected(struct Vector4* ret) { return method_call(get_border_Injected, ret); } // 0xB8C2D0
        void get_pivot_Injected(struct Vector2* ret) { return method_call(get_pivot_Injected, ret); }   // 0xB8C3E0
    };
}

namespace ark::method_info
{

	method_rva(Unity::Sprite::_ctor, 0xB8C250)
	method_rva(Unity::Sprite::GetPackingMode, 0xB8C140)
	method_rva(Unity::Sprite::GetPacked, 0xB8C110)
	method_rva(Unity::Sprite::GetTextureRect, 0xB8C210)
	method_rva(Unity::Sprite::GetInnerUVs, 0xB8C060)
	method_rva(Unity::Sprite::GetOuterUVs, 0xB8C0D0)
	method_rva(Unity::Sprite::GetPadding, 0xB8C1A0)
	method_rva(Unity::Sprite::CreateSprite, 0xB8B980)
	method_rva(Unity::Sprite::get_bounds, 0xB8C370)
	method_rva(Unity::Sprite::get_rect, 0xB8C4B0)
	method_rva(Unity::Sprite::get_border, 0xB8C300)
	method_rva(Unity::Sprite::get_texture, 0xB8C5A0)
	method_rva(Unity::Sprite::get_pixelsPerUnit, 0xB8C450)
	method_rva(Unity::Sprite::get_associatedAlphaSplitTexture, 0xB8C2A0)
	method_rva(Unity::Sprite::get_pivot, 0xB8C410)
	method_rva(Unity::Sprite::get_packed, 0xB8C3B0)
	method_rva(Unity::Sprite::get_packingMode, 0xB8C140)
	method_rva(Unity::Sprite::get_textureRect, 0xB8C4F0)
	method_rva(Unity::Sprite::get_vertices, 0xB8C630)
	method_rva(Unity::Sprite::get_triangles, 0xB8C5D0)
	method_rva(Unity::Sprite::get_uv, 0xB8C600)

	method_rva(Unity::Sprite::GetTextureRect_Injected, 0xB8C1E0)
	method_rva(Unity::Sprite::GetInnerUVs_Injected, 0xB8C030)
	method_rva(Unity::Sprite::GetOuterUVs_Injected, 0xB8C0A0)
	method_rva(Unity::Sprite::GetPadding_Injected, 0xB8C170)
	method_rva(Unity::Sprite::CreateSprite_Injected, 0xB8B930)
	method_rva(Unity::Sprite::get_bounds_Injected, 0xB8C340)
	method_rva(Unity::Sprite::get_rect_Injected, 0xB8C480)
	method_rva(Unity::Sprite::get_border_Injected, 0xB8C2D0)
	method_rva(Unity::Sprite::get_pivot_Injected, 0xB8C3E0)
}
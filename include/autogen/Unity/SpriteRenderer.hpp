#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/Object.hpp>

namespace Unity
{
    struct SpriteRenderer : ark::meta<SpriteRenderer, Unity::Object> // TypeDefIndex: 5334
    {
        ark_meta("UnityEngine", "SpriteRenderer");

        struct Sprite* get_sprite() { return method_call(get_sprite, ); }                               // 0xB8B7B0
        void set_sprite(struct Sprite* value) { return method_call(set_sprite, value); }                // 0xB8B900
        struct Vector2* get_size() { return method_call(get_size, ); }                                  // 0xB8B770
        void set_size(struct Vector2* value) { return method_call(set_size, value); }                   // 0xB8B8D0
        struct Color* get_color() { return method_call(get_color, ); }                                  // 0xB8B6A0
        void set_color(struct Color* value) { return method_call(set_color, value); }                   // 0xB8B810
        bool get_flipX() { return method_call(get_flipX, ); }                                           // 0xB8B6E0
        void set_flipX(bool value) { return method_call(set_flipX, value); }                            // 0xB8B840
        bool get_flipY() { return method_call(get_flipY, ); }                                           // 0xB8B710
        void set_flipY(bool value) { return method_call(set_flipY, value); }                            // 0xB8B870
        void get_size_Injected(struct Vector2* ret) { return method_call(get_size_Injected, ret); }     // 0xB8B740
        void set_size_Injected(struct Vector2* value) { return method_call(set_size_Injected, value); } // 0xB8B8A0
        void get_color_Injected(struct Color* ret) { return method_call(get_color_Injected, ret); }     // 0xB8B670
        void set_color_Injected(struct Color* value) { return method_call(set_color_Injected, value); } // 0xB8B7E0
    };
}
namespace ark::method_info
{
    method_rva(SpriteRenderer::get_sprite, 0xB8B7B0)
    method_rva(SpriteRenderer::set_sprite, 0xB8B900)
    method_rva(SpriteRenderer::get_size, 0xB8B770)
    method_rva(SpriteRenderer::set_size, 0xB8B8D0)
    method_rva(SpriteRenderer::get_color, 0xB8B6A0)
    method_rva(SpriteRenderer::set_color, 0xB8B810)
    method_rva(SpriteRenderer::get_flipX, 0xB8B6E0)
    method_rva(SpriteRenderer::set_flipX, 0xB8B840)
    method_rva(SpriteRenderer::get_flipY, 0xB8B710)
    method_rva(SpriteRenderer::set_flipY, 0xB8B870)
    method_rva(SpriteRenderer::get_size_Injected, 0xB8B740)
    method_rva(SpriteRenderer::set_size_Injected, 0xB8B8A0)
    method_rva(SpriteRenderer::get_color_Injected, 0xB8B670)
    method_rva(SpriteRenderer::set_color_Injected, 0xB8B7E0)
}
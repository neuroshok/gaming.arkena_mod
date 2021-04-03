//au/UnityEngine/SpriteRenderer
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Renderer.hpp>
namespace UnityEngine{ struct Sprite; }
#include <au/UnityEngine/SpriteDrawMode.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/SpriteTileMode.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/SpriteMaskInteraction.hpp>
#include <au/UnityEngine/SpriteSortPoint.hpp>
#include <au/UnityEngine/Bounds.hpp>


namespace UnityEngine {
struct SpriteRenderer : ark::meta<SpriteRenderer, UnityEngine::Renderer>
{
ark_meta("UnityEngine", "SpriteRenderer", "");

    // Methods

    bool get_shouldSupportTiling(); // 0xAAD170 // internal 
    UnityEngine::Sprite* get_sprite(); // 0xAAD240 // public 
    void set_sprite(UnityEngine::Sprite* value); // 0xAAD490 // public 
    UnityEngine::SpriteDrawMode get_drawMode(); // 0xAAD0B0 // public 
    void set_drawMode(UnityEngine::SpriteDrawMode value); // 0xAAD340 // public 
    UnityEngine::Vector2 get_size(); // 0xAAD1D0 // public 
    void set_size(UnityEngine::Vector2 value); // 0xAAD430 // public 
    float get_adaptiveModeThreshold(); // 0xAAD010 // public 
    void set_adaptiveModeThreshold(float value); // 0xAAD2A0 // public 
    UnityEngine::SpriteTileMode get_tileMode(); // 0xAAD270 // public 
    void set_tileMode(UnityEngine::SpriteTileMode value); // 0xAAD4C0 // public 
    UnityEngine::Color get_color(); // 0xAAD070 // public 
    void set_color(UnityEngine::Color value); // 0xAAD310 // public 
    UnityEngine::SpriteMaskInteraction get_maskInteraction(); // 0xAAD140 // public 
    void set_maskInteraction(UnityEngine::SpriteMaskInteraction value); // 0xAAD3D0 // public 
    bool get_flipX(); // 0xAAD0E0 // public 
    void set_flipX(bool value); // 0xAAD370 // public 
    bool get_flipY(); // 0xAAD110 // public 
    void set_flipY(bool value); // 0xAAD3A0 // public 
    UnityEngine::SpriteSortPoint get_spriteSortPoint(); // 0xAAD210 // public 
    void set_spriteSortPoint(UnityEngine::SpriteSortPoint value); // 0xAAD460 // public 
    UnityEngine::Bounds Internal_GetSpriteBounds(UnityEngine::SpriteDrawMode mode); // 0xAACFD0 // internal 
    UnityEngine::Bounds GetSpriteBounds(); // 0xAACF10 // internal 
    void ctor(); // 0x2931C0 // public 
    void get_size_Injected(/*out*/ UnityEngine::Vector2 ret); // 0xAAD1A0 // private 
    void set_size_Injected(/*ref*/ UnityEngine::Vector2 value); // 0xAAD400 // private 
    void get_color_Injected(/*out*/ UnityEngine::Color ret); // 0xAAD040 // private 
    void set_color_Injected(/*ref*/ UnityEngine::Color value); // 0xAAD2E0 // private 
    void Internal_GetSpriteBounds_Injected(UnityEngine::SpriteDrawMode mode, /*out*/ UnityEngine::Bounds ret); // 0xAACFA0 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SpriteRenderer>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_shouldSupportTiling> () { return 0xAAD170; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_sprite> () { return 0xAAD240; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_sprite> () { return 0xAAD490; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_drawMode> () { return 0xAAD0B0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_drawMode> () { return 0xAAD340; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_size> () { return 0xAAD1D0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_size> () { return 0xAAD430; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_adaptiveModeThreshold> () { return 0xAAD010; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_adaptiveModeThreshold> () { return 0xAAD2A0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_tileMode> () { return 0xAAD270; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_tileMode> () { return 0xAAD4C0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_color> () { return 0xAAD070; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_color> () { return 0xAAD310; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_maskInteraction> () { return 0xAAD140; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_maskInteraction> () { return 0xAAD3D0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_flipX> () { return 0xAAD0E0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_flipX> () { return 0xAAD370; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_flipY> () { return 0xAAD110; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_flipY> () { return 0xAAD3A0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_spriteSortPoint> () { return 0xAAD210; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_spriteSortPoint> () { return 0xAAD460; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::Internal_GetSpriteBounds> () { return 0xAACFD0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::GetSpriteBounds> () { return 0xAACF10; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::ctor> () { return 0x2931C0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_size_Injected> () { return 0xAAD1A0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_size_Injected> () { return 0xAAD400; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::get_color_Injected> () { return 0xAAD040; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::set_color_Injected> () { return 0xAAD2E0; }
    template<> inline uintptr_t rva<&UnityEngine::SpriteRenderer::Internal_GetSpriteBounds_Injected> () { return 0xAACFA0; }
} // ark::method_info
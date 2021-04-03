//au/UnityEngine/Texture
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/TextureWrapMode.hpp>
#include <au/UnityEngine/FilterMode.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/ColorSpace.hpp>
#include <au/UnityEngine/TextureFormat.hpp>
#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <au/UnityEngine/Experimental/Rendering/FormatUsage.hpp>
namespace UnityEngine{ struct UnityException; }


namespace UnityEngine {
struct Texture : ark::meta<Texture, UnityEngine::Object>
{
ark_meta("UnityEngine", "Texture", "");

    // Fields

    static int GenerateAllMips(); // 0x3225321E

    // Methods

    void ctor(); // 0xAB43A0 // protected 
    int GetDataWidth(); // 0xAB3F00 // private 
    int GetDataHeight(); // 0xAB3ED0 // private 
    int get_width(); // 0xAB3F00 // public virtual 
    void set_width(int value); // 0xAB4550 // public virtual 
    int get_height(); // 0xAB3ED0 // public virtual 
    void set_height(int value); // 0xAB4520 // public virtual 
    bool get_isReadable(); // 0xAB4420 // public virtual 
    UnityEngine::TextureWrapMode get_wrapMode(); // 0xAB44C0 // public 
    void set_wrapMode(UnityEngine::TextureWrapMode value); // 0xAB45E0 // public 
    void set_wrapModeU(UnityEngine::TextureWrapMode value); // 0xAB4580 // public 
    void set_wrapModeV(UnityEngine::TextureWrapMode value); // 0xAB45B0 // public 
    void set_filterMode(UnityEngine::FilterMode value); // 0xAB44F0 // public 
    UnityEngine::Vector2 get_texelSize(); // 0xAB4480 // public 
    int Internal_GetActiveTextureColorSpace(); // 0xAB3F90 // private 
    UnityEngine::ColorSpace get_activeTextureColorSpace(); // 0xAB43F0 // internal 
    int GetPixelDataSize(int mipLevel, int element = int(0)); // 0xAB3F60 // internal 
    int GetPixelDataOffset(int mipLevel, int element = int(0)); // 0xAB3F30 // internal 
    bool ValidateFormat(UnityEngine::TextureFormat format); // 0xAB4110 // internal 
    bool ValidateFormat1(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage); // 0xAB3FD0 // internal 
    UnityEngine::UnityException* CreateNonReadableException(UnityEngine::Texture* t); // 0xAB3E10 // internal 
    void cctor(); // 0xAB4370 // private static 
    void get_texelSize_Injected(/*out*/ UnityEngine::Vector2 ret); // 0xAB4450 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Texture>
{
    int GenerateAllMips;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Texture::ctor> () { return 0xAB43A0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::GetDataWidth> () { return 0xAB3F00; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::GetDataHeight> () { return 0xAB3ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_width> () { return 0xAB3F00; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_width> () { return 0xAB4550; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_height> () { return 0xAB3ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_height> () { return 0xAB4520; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_isReadable> () { return 0xAB4420; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_wrapMode> () { return 0xAB44C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_wrapMode> () { return 0xAB45E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_wrapModeU> () { return 0xAB4580; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_wrapModeV> () { return 0xAB45B0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::set_filterMode> () { return 0xAB44F0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_texelSize> () { return 0xAB4480; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::Internal_GetActiveTextureColorSpace> () { return 0xAB3F90; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_activeTextureColorSpace> () { return 0xAB43F0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::GetPixelDataSize> () { return 0xAB3F60; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::GetPixelDataOffset> () { return 0xAB3F30; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::ValidateFormat> () { return 0xAB4110; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::ValidateFormat1> () { return 0xAB3FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::CreateNonReadableException> () { return 0xAB3E10; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::cctor> () { return 0xAB4370; }
    template<> inline uintptr_t rva<&UnityEngine::Texture::get_texelSize_Injected> () { return 0xAB4450; }
} // ark::method_info
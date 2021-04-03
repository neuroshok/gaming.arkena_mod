#include <au/UnityEngine/Texture.hpp>

namespace UnityEngine {

    // Methods

    void Texture::ctor() { return method_call(ctor); }  // 0xAB43A0 // 
    int Texture::GetDataWidth() { return method_call(GetDataWidth); }  // 0xAB3F00 // 
    int Texture::GetDataHeight() { return method_call(GetDataHeight); }  // 0xAB3ED0 // 
    int Texture::get_width() { return method_call(get_width); }  // 0xAB3F00 // 
    void Texture::set_width(int value) { return method_call(set_width, value); }  // 0xAB4550 // 
    int Texture::get_height() { return method_call(get_height); }  // 0xAB3ED0 // 
    void Texture::set_height(int value) { return method_call(set_height, value); }  // 0xAB4520 // 
    bool Texture::get_isReadable() { return method_call(get_isReadable); }  // 0xAB4420 // 
    UnityEngine::TextureWrapMode Texture::get_wrapMode() { return method_call(get_wrapMode); }  // 0xAB44C0 // 
    void Texture::set_wrapMode(UnityEngine::TextureWrapMode value) { return method_call(set_wrapMode, value); }  // 0xAB45E0 // 
    void Texture::set_wrapModeU(UnityEngine::TextureWrapMode value) { return method_call(set_wrapModeU, value); }  // 0xAB4580 // 
    void Texture::set_wrapModeV(UnityEngine::TextureWrapMode value) { return method_call(set_wrapModeV, value); }  // 0xAB45B0 // 
    void Texture::set_filterMode(UnityEngine::FilterMode value) { return method_call(set_filterMode, value); }  // 0xAB44F0 // 
    UnityEngine::Vector2 Texture::get_texelSize() { return method_call(get_texelSize); }  // 0xAB4480 // 
    int Texture::Internal_GetActiveTextureColorSpace() { return method_call(Internal_GetActiveTextureColorSpace); }  // 0xAB3F90 // 
    UnityEngine::ColorSpace Texture::get_activeTextureColorSpace() { return method_call(get_activeTextureColorSpace); }  // 0xAB43F0 // 
    int Texture::GetPixelDataSize(int mipLevel, int element) { return method_call(GetPixelDataSize, mipLevel, element); }  // 0xAB3F60 // 
    int Texture::GetPixelDataOffset(int mipLevel, int element) { return method_call(GetPixelDataOffset, mipLevel, element); }  // 0xAB3F30 // 
    bool Texture::ValidateFormat(UnityEngine::TextureFormat format) { return method_call(ValidateFormat, format); }  // 0xAB4110 // 
    bool Texture::ValidateFormat1(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage) { return method_call(ValidateFormat1, format, usage); }  // 0xAB3FD0 // 
    UnityEngine::UnityException* Texture::CreateNonReadableException(UnityEngine::Texture* t) { return method_call(CreateNonReadableException, t); }  // 0xAB3E10 // 
    void Texture::cctor() { return method_call(cctor); }  // 0xAB4370 // 
    void Texture::get_texelSize_Injected(/*out*/ UnityEngine::Vector2 ret) { return method_call(get_texelSize_Injected, ret); }  // 0xAB4450 // 

};


int UnityEngine::Texture::GenerateAllMips() { return statics()->GenerateAllMips; }
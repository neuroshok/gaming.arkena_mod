#include <au/UnityEngine/Texture2D.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::TextureFormat Texture2D::get_format() { return method_call(get_format); }  // 0xAB3030 // 
    UnityEngine::Texture2D* Texture2D::get_whiteTexture() { return method_call(get_whiteTexture); }  // 0xAB32C0 // 
    UnityEngine::Texture2D* Texture2D::get_blackTexture() { return method_call(get_blackTexture); }  // 0xAB2FB0 // 
    UnityEngine::Texture2D* Texture2D::get_redTexture() { return method_call(get_redTexture); }  // 0xAB31E0 // 
    UnityEngine::Texture2D* Texture2D::get_grayTexture() { return method_call(get_grayTexture); }  // 0xAB3060 // 
    UnityEngine::Texture2D* Texture2D::get_linearGrayTexture() { return method_call(get_linearGrayTexture); }  // 0xAB30E0 // 
    UnityEngine::Texture2D* Texture2D::get_normalTexture() { return method_call(get_normalTexture); }  // 0xAB31C0 // 
    void Texture2D::Compress(bool highQuality) { return method_call(Compress, highQuality); }  // 0xAB15D0 // 
    bool Texture2D::Internal_CreateImpl(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex) { return method_call(Internal_CreateImpl, mono, w, h, mipCount, format, flags, nativeTex); }  // 0xAB1F00 // 
    void Texture2D::Internal_Create(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex) { return method_call(Internal_Create, mono, w, h, mipCount, format, flags, nativeTex); }  // 0xAB1F40 // 
    bool Texture2D::get_isReadable() { return method_call(get_isReadable); }  // 0xAB30B0 // 
    bool Texture2D::get_vtOnly() { return method_call(get_vtOnly); }  // 0xAB3290 // 
    void Texture2D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) { return method_call(ApplyImpl, updateMipmaps, makeNoLongerReadable); }  // 0xAB1490 // 
    bool Texture2D::ResizeImpl(int width, int height) { return method_call(ResizeImpl, width, height); }  // 0xAB24D0 // 
    void Texture2D::SetPixelImpl(int image, int x, int y, UnityEngine::Color color) { return method_call(SetPixelImpl, image, x, y, color); }  // 0xAB27C0 // 
    UnityEngine::Color Texture2D::GetPixelImpl(int image, int x, int y) { return method_call(GetPixelImpl, image, x, y); }  // 0xAB1B30 // 
    UnityEngine::Color Texture2D::GetPixelBilinearImpl(int image, float u, float v) { return method_call(GetPixelBilinearImpl, image, u, v); }  // 0xAB1930 // 
    bool Texture2D::ResizeWithFormatImpl(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) { return method_call(ResizeWithFormatImpl, width, height, format, hasMipMap); }  // 0xAB2500 // 
    void Texture2D::ReadPixelsImpl(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps) { return method_call(ReadPixelsImpl, source, destX, destY, recalculateMipMaps); }  // 0xAB2390 // 
    void Texture2D::SetPixelsImpl(int x, int y, int w, int h, cs::array<UnityEngine::Color>* pixel, int miplevel, int frame) { return method_call(SetPixelsImpl, x, y, w, h, pixel, miplevel, frame); }  // 0xAB2960 // 
    bool Texture2D::LoadRawTextureDataImpl(intptr_t data, int size) { return method_call(LoadRawTextureDataImpl, data, size); }  // 0xAB2030 // 
    bool Texture2D::LoadRawTextureDataImplArray(cs::array<uint8_t>* data) { return method_call(LoadRawTextureDataImplArray, data); }  // 0xAB2000 // 
    bool Texture2D::SetPixelDataImplArray(System::Array* data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex) { return method_call(SetPixelDataImplArray, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex); }  // 0xAB2700 // 
    bool Texture2D::SetPixelDataImpl(intptr_t data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex) { return method_call(SetPixelDataImpl, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex); }  // 0xAB2740 // 
    intptr_t Texture2D::GetWritableImageData(int frame) { return method_call(GetWritableImageData, frame); }  // 0xAB1ED0 // 
    long Texture2D::GetRawImageDataSize() { return method_call(GetRawImageDataSize); }  // 0xAB1E70 // 
    void Texture2D::GenerateAtlasImpl(cs::array<UnityEngine::Vector2>* sizes, int padding, int atlasSize, cs::array<UnityEngine::Rect>* rect) { return method_call(GenerateAtlasImpl, sizes, padding, atlasSize, rect); }  // 0xAB16C0 // 
    bool Texture2D::get_isPreProcessed() { return method_call(get_isPreProcessed); }  // 0xAB3080 // 
    bool Texture2D::get_streamingMipmaps() { return method_call(get_streamingMipmaps); }  // 0xAB3260 // 
    int Texture2D::get_streamingMipmapsPriority() { return method_call(get_streamingMipmapsPriority); }  // 0xAB3230 // 
    int Texture2D::get_requestedMipmapLevel() { return method_call(get_requestedMipmapLevel); }  // 0xAB3200 // 
    void Texture2D::set_requestedMipmapLevel(int value) { return method_call(set_requestedMipmapLevel, value); }  // 0xAB3340 // 
    int Texture2D::get_minimumMipmapLevel() { return method_call(get_minimumMipmapLevel); }  // 0xAB3190 // 
    void Texture2D::set_minimumMipmapLevel(int value) { return method_call(set_minimumMipmapLevel, value); }  // 0xAB3310 // 
    bool Texture2D::get_loadAllMips() { return method_call(get_loadAllMips); }  // 0xAB3100 // 
    void Texture2D::set_loadAllMips(bool value) { return method_call(set_loadAllMips, value); }  // 0xAB32E0 // 
    int Texture2D::get_calculatedMipmapLevel() { return method_call(get_calculatedMipmapLevel); }  // 0xAB2FD0 // 
    int Texture2D::get_desiredMipmapLevel() { return method_call(get_desiredMipmapLevel); }  // 0xAB3000 // 
    int Texture2D::get_loadingMipmapLevel() { return method_call(get_loadingMipmapLevel); }  // 0xAB3160 // 
    int Texture2D::get_loadedMipmapLevel() { return method_call(get_loadedMipmapLevel); }  // 0xAB3130 // 
    void Texture2D::ClearRequestedMipmapLevel() { return method_call(ClearRequestedMipmapLevel); }  // 0xAB15A0 // 
    bool Texture2D::IsRequestedMipmapLevelLoaded() { return method_call(IsRequestedMipmapLevelLoaded); }  // 0xAB1FC0 // 
    void Texture2D::ClearMinimumMipmapLevel() { return method_call(ClearMinimumMipmapLevel); }  // 0xAB1570 // 
    void Texture2D::UpdateExternalTexture(intptr_t nativeTex) { return method_call(UpdateExternalTexture, nativeTex); }  // 0xAB2B10 // 
    void Texture2D::SetAllPixels32(cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetAllPixels32, colors, miplevel); }  // 0xAB2690 //
    void Texture2D::SetBlockOfPixels32(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetBlockOfPixels32, x, y, blockWidth, blockHeight, colors, miplevel); }  // 0xAB26C0 //
    cs::array<uint8_t>* Texture2D::GetRawTextureData() { return method_call(GetRawTextureData); }  // 0xAB1EA0 // 
    cs::array<UnityEngine::Color>* Texture2D::GetPixels(int x, int y, int blockWidth, int blockHeight, int miplevel) { return method_call(GetPixels, x, y, blockWidth, blockHeight, miplevel); }  // 0xAB1CF0 // 
    cs::array<UnityEngine::Color>* Texture2D::GetPixels1(int x, int y, int blockWidth, int blockHeight) { return method_call(GetPixels1, x, y, blockWidth, blockHeight); }  // 0xAB1D30 // 
    cs::array<UnityEngine::Color>* Texture2D::GetPixels32(int miplevel) { return method_call(GetPixels32, miplevel); }  // 0xAB1CC0 //
    cs::array<UnityEngine::Color>* Texture2D::GetPixels321() { return method_call(GetPixels321); }  // 0xAB1C90 //
    cs::array<UnityEngine::Rect>* Texture2D::PackTextures(cs::array<UnityEngine::Texture2D*>* textures, int padding, int maximumAtlasSize, bool makeNoLongerReadable) { return method_call(PackTextures, textures, padding, maximumAtlasSize, makeNoLongerReadable); }  // 0xAB2310 // 
    cs::array<UnityEngine::Rect>* Texture2D::PackTextures1(cs::array<UnityEngine::Texture2D*>* textures, int padding, int maximumAtlasSize) { return method_call(PackTextures1, textures, padding, maximumAtlasSize); }  // 0xAB22E0 // 
    cs::array<UnityEngine::Rect>* Texture2D::PackTextures2(cs::array<UnityEngine::Texture2D*>* textures, int padding) { return method_call(PackTextures2, textures, padding); }  // 0xAB22A0 // 
    void Texture2D::ctor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount, intptr_t nativeTex) { return method_call(ctor, width, height, format, flags, mipCount, nativeTex); }  // 0xAB2BF0 // 
    void Texture2D::ctor1(int width, int height, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return method_call(ctor1, width, height, format, flags); }  // 0xAB2ED0 // 
    void Texture2D::ctor2(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return method_call(ctor2, width, height, format, flags); }  // 0xAB2B40 // 
    void Texture2D::ctor3(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, int mipCount, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return method_call(ctor3, width, height, format, mipCount, flags); }  // 0xAB2F70 // 
    void Texture2D::ctor4(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear, intptr_t nativeTex) { return method_call(ctor4, width, height, textureFormat, mipCount, linear, nativeTex); }  // 0xAB2DE0 // 
    void Texture2D::ctor5(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) { return method_call(ctor5, width, height, textureFormat, mipCount, linear); }  // 0xAB2BB0 // 
    void Texture2D::ctor6(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) { return method_call(ctor6, width, height, textureFormat, mipChain, linear); }  // 0xAB2CB0 // 
    void Texture2D::ctor7(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain) { return method_call(ctor7, width, height, textureFormat, mipChain); }  // 0xAB2D80 // 
    void Texture2D::ctor8(int width, int height) { return method_call(ctor8, width, height); }  // 0xAB2D10 // 
    UnityEngine::Texture2D* Texture2D::CreateExternalTexture(int width, int height, UnityEngine::TextureFormat format, bool mipChain, bool linear, intptr_t nativeTex) { return method_call(CreateExternalTexture, width, height, format, mipChain, linear, nativeTex); }  // 0xAB1600 // 
    void Texture2D::SetPixel(int x, int y, UnityEngine::Color color) { return method_call(SetPixel, x, y, color); }  // 0xAB2880 // 
    void Texture2D::SetPixel1(int x, int y, UnityEngine::Color color, int mipLevel) { return method_call(SetPixel1, x, y, color, mipLevel); }  // 0xAB2800 // 
    void Texture2D::SetPixels(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetPixels, x, y, blockWidth, blockHeight, colors, miplevel); }  // 0xAB29A0 // 
    void Texture2D::SetPixels1(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors) { return method_call(SetPixels1, x, y, blockWidth, blockHeight, colors); }  // 0xAB2A70 // 
    void Texture2D::SetPixels2(cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetPixels2, colors, miplevel); }  // 0xAB2AA0 // 
    void Texture2D::SetPixels3(cs::array<UnityEngine::Color>* colors) { return method_call(SetPixels3, colors); }  // 0xAB2A20 // 
    UnityEngine::Color Texture2D::GetPixel(int x, int y) { return method_call(GetPixel, x, y); }  // 0xAB1C00 // 
    UnityEngine::Color Texture2D::GetPixel1(int x, int y, int mipLevel) { return method_call(GetPixel1, x, y, mipLevel); }  // 0xAB1B70 // 
    UnityEngine::Color Texture2D::GetPixelBilinear(float u, float v) { return method_call(GetPixelBilinear, u, v); }  // 0xAB1A40 // 
    UnityEngine::Color Texture2D::GetPixelBilinear1(float u, float v, int mipLevel) { return method_call(GetPixelBilinear1, u, v, mipLevel); }  // 0xAB1990 // 
    void Texture2D::LoadRawTextureData(intptr_t data, int size) { return method_call(LoadRawTextureData, data, size); }  // 0xAB2170 // 
    void Texture2D::LoadRawTextureData1(cs::array<uint8_t>* data) { return method_call(LoadRawTextureData1, data); }  // 0xAB2060 // 
    // void Texture2D::LoadRawTextureData2(Unity::Collections::NativeArray<T>* data) { return method_call(LoadRawTextureData2, data); }  // 0x0 // 
    // void Texture2D::SetPixelData(cs::array<T>* data, int mipLevel, int sourceDataStartIndex) { return method_call(SetPixelData, data, mipLevel, sourceDataStartIndex); }  // 0x0 // 
    // void Texture2D::SetPixelData1(Unity::Collections::NativeArray<T>* data, int mipLevel, int sourceDataStartIndex) { return method_call(SetPixelData1, data, mipLevel, sourceDataStartIndex); }  // 0x0 // 
    // Unity::Collections::NativeArray<T>* Texture2D::GetPixelData(int mipLevel) { return method_call(GetPixelData, mipLevel); }  // 0x0 // 
    // Unity::Collections::NativeArray<T>* Texture2D::GetRawTextureData1() { return method_call(GetRawTextureData1); }  // 0x0 // 
    void Texture2D::Apply(bool updateMipmaps, bool makeNoLongerReadable) { return method_call(Apply, updateMipmaps, makeNoLongerReadable); }  // 0xAB14E0 // 
    void Texture2D::Apply1(bool updateMipmaps) { return method_call(Apply1, updateMipmaps); }  // 0xAB1550 // 
    void Texture2D::Apply2() { return method_call(Apply2); }  // 0xAB14C0 // 
    bool Texture2D::Resize(int width, int height) { return method_call(Resize, width, height); }  // 0xAB25B0 // 
    bool Texture2D::Resize1(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap) { return method_call(Resize1, width, height, format, hasMipMap); }  // 0xAB2540 // 
    bool Texture2D::Resize2(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) { return method_call(Resize2, width, height, format, hasMipMap); }  // 0xAB2620 // 
    void Texture2D::ReadPixels(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps) { return method_call(ReadPixels, source, destX, destY, recalculateMipMaps); }  // 0xAB2450 // 
    void Texture2D::ReadPixels1(UnityEngine::Rect source, int destX, int destY) { return method_call(ReadPixels1, source, destX, destY); }  // 0xAB23D0 // 
    bool Texture2D::GenerateAtlas(cs::array<UnityEngine::Vector2>* sizes, int padding, int atlasSize, System::Collections::Generic::List<UnityEngine::Rect>* results) { return method_call(GenerateAtlas, sizes, padding, atlasSize, results); }  // 0xAB1700 // 
    void Texture2D::SetPixels32(cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetPixels32, colors, miplevel); }  // 0xAB2690 //
    void Texture2D::SetPixels321(cs::array<UnityEngine::Color>* colors) { return method_call(SetPixels321, colors); }  // 0xAB2900 //
    void Texture2D::SetPixels322(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel) { return method_call(SetPixels322, x, y, blockWidth, blockHeight, colors, miplevel); }  // 0xAB26C0 //
    void Texture2D::SetPixels323(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors) { return method_call(SetPixels323, x, y, blockWidth, blockHeight, colors); }  // 0xAB2930 //
    cs::array<UnityEngine::Color>* Texture2D::GetPixels2(int miplevel) { return method_call(GetPixels2, miplevel); }  // 0xAB1DE0 // 
    cs::array<UnityEngine::Color>* Texture2D::GetPixels3() { return method_call(GetPixels3); }  // 0xAB1D60 // 
    void Texture2D::SetPixelImpl_Injected(int image, int x, int y, /*ref*/ UnityEngine::Color color) { return method_call(SetPixelImpl_Injected, image, x, y, color); }  // 0xAB2780 // 
    void Texture2D::GetPixelImpl_Injected(int image, int x, int y, /*out*/ UnityEngine::Color ret) { return method_call(GetPixelImpl_Injected, image, x, y, ret); }  // 0xAB1AF0 // 
    void Texture2D::GetPixelBilinearImpl_Injected(int image, float u, float v, /*out*/ UnityEngine::Color ret) { return method_call(GetPixelBilinearImpl_Injected, image, u, v, ret); }  // 0xAB18E0 // 
    void Texture2D::ReadPixelsImpl_Injected(/*ref*/ UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps) { return method_call(ReadPixelsImpl_Injected, source, destX, destY, recalculateMipMaps); }  // 0xAB2350 // 

};


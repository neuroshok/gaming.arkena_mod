#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Texture2D.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/Unity/Collections/NativeArray.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Rect.hpp>

namespace UnityEngine
{
    struct Texture2D : ark::meta<Texture2D, UnityEngine::Texture>
    {

        UnityEngine::TextureFormat get_format() { return il2cpp::call<UnityEngine::TextureFormat(*)(Texture2D*)>(0xef0b90)(this); } // 0xef0b90
        UnityEngine::Texture2D* get_whiteTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0e20)(this); } // 0xef0e20
        UnityEngine::Texture2D* get_blackTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0b10)(this); } // 0xef0b10
        UnityEngine::Texture2D* get_redTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0d40)(this); } // 0xef0d40
        UnityEngine::Texture2D* get_grayTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0bc0)(this); } // 0xef0bc0
        UnityEngine::Texture2D* get_linearGrayTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0c40)(this); } // 0xef0c40
        UnityEngine::Texture2D* get_normalTexture() { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*)>(0xef0d20)(this); } // 0xef0d20
        void Compress(bool highQuality) { return il2cpp::call<void(*)(Texture2D*, bool)>(0xeef140)(this, highQuality); } // 0xeef140
        bool Internal_CreateImpl(UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int nativeTex) { return il2cpp::call<bool(*)(Texture2D*, UnityEngine::Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int)>(0xeefa70)(this, mono, w, h, mipCount, format, flags, nativeTex); } // 0xeefa70
        void Internal_Create(UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int nativeTex) { return il2cpp::call<void(*)(Texture2D*, UnityEngine::Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int)>(0xeefab0)(this, mono, w, h, mipCount, format, flags, nativeTex); } // 0xeefab0
        bool get_vtOnly() { return il2cpp::call<bool(*)(Texture2D*)>(0xef0df0)(this); } // 0xef0df0
        void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) { return il2cpp::call<void(*)(Texture2D*, bool, bool)>(0xeef000)(this, updateMipmaps, makeNoLongerReadable); } // 0xeef000
        bool ResizeImpl(int32_t width, int32_t height) { return il2cpp::call<bool(*)(Texture2D*, int32_t, int32_t)>(0xef0030)(this, width, height); } // 0xef0030
        void SetPixelImpl(int32_t image, int32_t x, int32_t y, UnityEngine::Color color) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Color)>(0xef0320)(this, image, x, y, color); } // 0xef0320
        UnityEngine::Color GetPixelImpl(int32_t image, int32_t x, int32_t y) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, int32_t, int32_t, int32_t)>(0xeef6a0)(this, image, x, y); } // 0xeef6a0
        UnityEngine::Color GetPixelBilinearImpl(int32_t image, float u, float v) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, int32_t, float, float)>(0xeef4a0)(this, image, u, v); } // 0xeef4a0
        bool ResizeWithFormatImpl(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) { return il2cpp::call<bool(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(0xef0060)(this, width, height, format, hasMipMap); } // 0xef0060
        void ReadPixelsImpl(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) { return il2cpp::call<void(*)(Texture2D*, UnityEngine::Rect, int32_t, int32_t, bool)>(0xeefef0)(this, source, destX, destY, recalculateMipMaps); } // 0xeefef0
        void SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, cs::array<UnityEngine::Color>* pixel, int32_t miplevel, int32_t frame) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color>*, int32_t, int32_t)>(0xef04c0)(this, x, y, w, h, pixel, miplevel, frame); } // 0xef04c0
        bool LoadRawTextureDataImpl(int data, int32_t size) { return il2cpp::call<bool(*)(Texture2D*, int, int32_t)>(0xeefb90)(this, data, size); } // 0xeefb90
        bool LoadRawTextureDataImplArray(cs::array<uint8_t>* data) { return il2cpp::call<bool(*)(Texture2D*, cs::array<uint8_t>*)>(0xeefb60)(this, data); } // 0xeefb60
        bool SetPixelDataImplArray(System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) { return il2cpp::call<bool(*)(Texture2D*, System::Array*, int32_t, int32_t, int32_t, int32_t)>(0xef0260)(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex); } // 0xef0260
        bool SetPixelDataImpl(int data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) { return il2cpp::call<bool(*)(Texture2D*, int, int32_t, int32_t, int32_t, int32_t)>(0xef02a0)(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex); } // 0xef02a0
        int GetWritableImageData(int32_t frame) { return il2cpp::call<int(*)(Texture2D*, int32_t)>(0xeefa40)(this, frame); } // 0xeefa40
        int64_t GetRawImageDataSize() { return il2cpp::call<int64_t(*)(Texture2D*)>(0xeef9e0)(this); } // 0xeef9e0
        void GenerateAtlasImpl(cs::array<UnityEngine::Vector2>* sizes, int32_t padding, int32_t atlasSize, cs::array<UnityEngine::Rect>* rect) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Vector2>*, int32_t, int32_t, cs::array<UnityEngine::Rect>*)>(0xeef230)(this, sizes, padding, atlasSize, rect); } // 0xeef230
        bool get_isPreProcessed() { return il2cpp::call<bool(*)(Texture2D*)>(0xef0be0)(this); } // 0xef0be0
        bool get_streamingMipmaps() { return il2cpp::call<bool(*)(Texture2D*)>(0xef0dc0)(this); } // 0xef0dc0
        int32_t get_streamingMipmapsPriority() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0d90)(this); } // 0xef0d90
        int32_t get_requestedMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0d60)(this); } // 0xef0d60
        void set_requestedMipmapLevel(int32_t value) { return il2cpp::call<void(*)(Texture2D*, int32_t)>(0xef0ea0)(this, value); } // 0xef0ea0
        int32_t get_minimumMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0cf0)(this); } // 0xef0cf0
        void set_minimumMipmapLevel(int32_t value) { return il2cpp::call<void(*)(Texture2D*, int32_t)>(0xef0e70)(this, value); } // 0xef0e70
        bool get_loadAllMips() { return il2cpp::call<bool(*)(Texture2D*)>(0xef0c60)(this); } // 0xef0c60
        void set_loadAllMips(bool value) { return il2cpp::call<void(*)(Texture2D*, bool)>(0xef0e40)(this, value); } // 0xef0e40
        int32_t get_calculatedMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0b30)(this); } // 0xef0b30
        int32_t get_desiredMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0b60)(this); } // 0xef0b60
        int32_t get_loadingMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0cc0)(this); } // 0xef0cc0
        int32_t get_loadedMipmapLevel() { return il2cpp::call<int32_t(*)(Texture2D*)>(0xef0c90)(this); } // 0xef0c90
        void ClearRequestedMipmapLevel() { return il2cpp::call<void(*)(Texture2D*)>(0xeef110)(this); } // 0xeef110
        bool IsRequestedMipmapLevelLoaded() { return il2cpp::call<bool(*)(Texture2D*)>(0xeefb30)(this); } // 0xeefb30
        void ClearMinimumMipmapLevel() { return il2cpp::call<void(*)(Texture2D*)>(0xeef0e0)(this); } // 0xeef0e0
        void UpdateExternalTexture(int nativeTex) { return il2cpp::call<void(*)(Texture2D*, int)>(0xef0670)(this, nativeTex); } // 0xef0670
        void SetAllPixels32(cs::array<UnityEngine::Color32>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Color32>*, int32_t)>(0xef01f0)(this, colors, miplevel); } // 0xef01f0
        void SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, cs::array<UnityEngine::Color32>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color32>*, int32_t)>(0xef0220)(this, x, y, blockWidth, blockHeight, colors, miplevel); } // 0xef0220
        cs::array<uint8_t>* GetRawTextureData() { return il2cpp::call<cs::array<uint8_t>*(*)(Texture2D*)>(0xeefa10)(this); } // 0xeefa10
        cs::array<UnityEngine::Color>* GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, int32_t)>(0xeef860)(this, x, y, blockWidth, blockHeight, miplevel); } // 0xeef860
        cs::array<UnityEngine::Color>* GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t)>(0xeef8a0)(this, x, y, blockWidth, blockHeight); } // 0xeef8a0
        cs::array<UnityEngine::Color32>* GetPixels32(int32_t miplevel) { return il2cpp::call<cs::array<UnityEngine::Color32>*(*)(Texture2D*, int32_t)>(0xeef830)(this, miplevel); } // 0xeef830
        cs::array<UnityEngine::Color32>* GetPixels32() { return il2cpp::call<cs::array<UnityEngine::Color32>*(*)(Texture2D*)>(0xeef800)(this); } // 0xeef800
        cs::array<UnityEngine::Rect>* PackTextures(cs::array<UnityEngine::Texture2D>* textures, int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable) { return il2cpp::call<cs::array<UnityEngine::Rect>*(*)(Texture2D*, cs::array<UnityEngine::Texture2D>*, int32_t, int32_t, bool)>(0xeefe70)(this, textures, padding, maximumAtlasSize, makeNoLongerReadable); } // 0xeefe70
        cs::array<UnityEngine::Rect>* PackTextures(cs::array<UnityEngine::Texture2D>* textures, int32_t padding, int32_t maximumAtlasSize) { return il2cpp::call<cs::array<UnityEngine::Rect>*(*)(Texture2D*, cs::array<UnityEngine::Texture2D>*, int32_t, int32_t)>(0xeefe40)(this, textures, padding, maximumAtlasSize); } // 0xeefe40
        cs::array<UnityEngine::Rect>* PackTextures(cs::array<UnityEngine::Texture2D>* textures, int32_t padding) { return il2cpp::call<cs::array<UnityEngine::Rect>*(*)(Texture2D*, cs::array<UnityEngine::Texture2D>*, int32_t)>(0xeefe00)(this, textures, padding); } // 0xeefe00
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, int nativeTex) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, int)>(0xef0750)(this, width, height, format, flags, mipCount, nativeTex); } // 0xef0750
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::DefaultFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xef0a30)(this, width, height, format, flags); } // 0xef0a30
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xef06a0)(this, width, height, format, flags); } // 0xef06a0
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xef0ad0)(this, width, height, format, mipCount, flags); } // 0xef0ad0
        void ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, int nativeTex) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, int32_t, bool, int)>(0xef0940)(this, width, height, textureFormat, mipCount, linear, nativeTex); } // 0xef0940
        void ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, int32_t, bool)>(0xef0710)(this, width, height, textureFormat, mipCount, linear); } // 0xef0710
        void ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool, bool)>(0xef0810)(this, width, height, textureFormat, mipChain, linear); } // 0xef0810
        void ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool)>(0xef08e0)(this, width, height, textureFormat, mipChain); } // 0xef08e0
        void ctor(int32_t width, int32_t height) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t)>(0xef0870)(this, width, height); } // 0xef0870
        UnityEngine::Texture2D* CreateExternalTexture(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool mipChain, bool linear, int nativeTex) { return il2cpp::call<UnityEngine::Texture2D*(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool, bool, int)>(0xeef170)(this, width, height, format, mipChain, linear, nativeTex); } // 0xeef170
        void SetPixel(int32_t x, int32_t y, UnityEngine::Color color) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Color)>(0xef03e0)(this, x, y, color); } // 0xef03e0
        void SetPixel(int32_t x, int32_t y, UnityEngine::Color color, int32_t mipLevel) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, UnityEngine::Color, int32_t)>(0xef0360)(this, x, y, color, mipLevel); } // 0xef0360
        void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, cs::array<UnityEngine::Color>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color>*, int32_t)>(0xef0500)(this, x, y, blockWidth, blockHeight, colors, miplevel); } // 0xef0500
        void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, cs::array<UnityEngine::Color>* colors) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color>*)>(0xef05d0)(this, x, y, blockWidth, blockHeight, colors); } // 0xef05d0
        void SetPixels(cs::array<UnityEngine::Color>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Color>*, int32_t)>(0xef0600)(this, colors, miplevel); } // 0xef0600
        void SetPixels(cs::array<UnityEngine::Color>* colors) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Color>*)>(0xef0580)(this, colors); } // 0xef0580
        UnityEngine::Color GetPixel(int32_t x, int32_t y) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, int32_t, int32_t)>(0xeef770)(this, x, y); } // 0xeef770
        UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t mipLevel) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, int32_t, int32_t, int32_t)>(0xeef6e0)(this, x, y, mipLevel); } // 0xeef6e0
        UnityEngine::Color GetPixelBilinear(float u, float v) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, float, float)>(0xeef5b0)(this, u, v); } // 0xeef5b0
        UnityEngine::Color GetPixelBilinear(float u, float v, int32_t mipLevel) { return il2cpp::call<UnityEngine::Color(*)(Texture2D*, float, float, int32_t)>(0xeef500)(this, u, v, mipLevel); } // 0xeef500
        void LoadRawTextureData(int data, int32_t size) { return il2cpp::call<void(*)(Texture2D*, int, int32_t)>(0xeefcd0)(this, data, size); } // 0xeefcd0
        void LoadRawTextureData(cs::array<uint8_t>* data) { return il2cpp::call<void(*)(Texture2D*, cs::array<uint8_t>*)>(0xeefbc0)(this, data); } // 0xeefbc0
        void LoadRawTextureData(Unity::Collections::NativeArray<Typeid_30>* data) { return il2cpp::call<void(*)(Texture2D*, Unity::Collections::NativeArray<Typeid_30>*)>(0xa4ae0000)(this, data); } // 0xa4ae0000
        void SetPixelData(cs::array<Typeid_30>* data, int32_t mipLevel, int32_t sourceDataStartIndex) { return il2cpp::call<void(*)(Texture2D*, cs::array<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, data, mipLevel, sourceDataStartIndex); } // 0xa4ae0000
        void SetPixelData(Unity::Collections::NativeArray<Typeid_30>* data, int32_t mipLevel, int32_t sourceDataStartIndex) { return il2cpp::call<void(*)(Texture2D*, Unity::Collections::NativeArray<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, data, mipLevel, sourceDataStartIndex); } // 0xa4ae0000
        Unity::Collections::NativeArray<Typeid_30>* GetPixelData(int32_t mipLevel) { return il2cpp::call<Unity::Collections::NativeArray<Typeid_30>*(*)(Texture2D*, int32_t)>(0xa4ae0000)(this, mipLevel); } // 0xa4ae0000
        Unity::Collections::NativeArray<Typeid_30>* GetRawTextureData() { return il2cpp::call<Unity::Collections::NativeArray<Typeid_30>*(*)(Texture2D*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void Apply(bool updateMipmaps, bool makeNoLongerReadable) { return il2cpp::call<void(*)(Texture2D*, bool, bool)>(0xeef050)(this, updateMipmaps, makeNoLongerReadable); } // 0xeef050
        void Apply(bool updateMipmaps) { return il2cpp::call<void(*)(Texture2D*, bool)>(0xeef0c0)(this, updateMipmaps); } // 0xeef0c0
        void Apply() { return il2cpp::call<void(*)(Texture2D*)>(0xeef030)(this); } // 0xeef030
        bool Resize(int32_t width, int32_t height) { return il2cpp::call<bool(*)(Texture2D*, int32_t, int32_t)>(0xef0110)(this, width, height); } // 0xef0110
        bool Resize(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool hasMipMap) { return il2cpp::call<bool(*)(Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool)>(0xef00a0)(this, width, height, format, hasMipMap); } // 0xef00a0
        bool Resize(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) { return il2cpp::call<bool(*)(Texture2D*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(0xef0180)(this, width, height, format, hasMipMap); } // 0xef0180
        void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) { return il2cpp::call<void(*)(Texture2D*, UnityEngine::Rect, int32_t, int32_t, bool)>(0xeeffb0)(this, source, destX, destY, recalculateMipMaps); } // 0xeeffb0
        void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY) { return il2cpp::call<void(*)(Texture2D*, UnityEngine::Rect, int32_t, int32_t)>(0xeeff30)(this, source, destX, destY); } // 0xeeff30
        bool GenerateAtlas(cs::array<UnityEngine::Vector2>* sizes, int32_t padding, int32_t atlasSize, System::Collections::Generic::List<UnityEngine::Rect>* results) { return il2cpp::call<bool(*)(Texture2D*, cs::array<UnityEngine::Vector2>*, int32_t, int32_t, System::Collections::Generic::List<UnityEngine::Rect>*)>(0xeef270)(this, sizes, padding, atlasSize, results); } // 0xeef270
        void SetPixels32(cs::array<UnityEngine::Color32>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Color32>*, int32_t)>(0xef01f0)(this, colors, miplevel); } // 0xef01f0
        void SetPixels32(cs::array<UnityEngine::Color32>* colors) { return il2cpp::call<void(*)(Texture2D*, cs::array<UnityEngine::Color32>*)>(0xef0460)(this, colors); } // 0xef0460
        void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, cs::array<UnityEngine::Color32>* colors, int32_t miplevel) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color32>*, int32_t)>(0xef0220)(this, x, y, blockWidth, blockHeight, colors, miplevel); } // 0xef0220
        void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, cs::array<UnityEngine::Color32>* colors) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, cs::array<UnityEngine::Color32>*)>(0xef0490)(this, x, y, blockWidth, blockHeight, colors); } // 0xef0490
        cs::array<UnityEngine::Color>* GetPixels(int32_t miplevel) { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Texture2D*, int32_t)>(0xeef950)(this, miplevel); } // 0xeef950
        cs::array<UnityEngine::Color>* GetPixels() { return il2cpp::call<cs::array<UnityEngine::Color>*(*)(Texture2D*)>(0xeef8d0)(this); } // 0xeef8d0
        void SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine::Color color) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Color)>(0xef02e0)(this, image, x, y, color); } // 0xef02e0
        void GetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine::Color ret) { return il2cpp::call<void(*)(Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Color)>(0xeef660)(this, image, x, y, ret); } // 0xeef660
        void GetPixelBilinearImpl_Injected(int32_t image, float u, float v, UnityEngine::Color ret) { return il2cpp::call<void(*)(Texture2D*, int32_t, float, float, UnityEngine::Color)>(0xeef450)(this, image, u, v, ret); } // 0xeef450
        void ReadPixelsImpl_Injected(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) { return il2cpp::call<void(*)(Texture2D*, UnityEngine::Rect, int32_t, int32_t, bool)>(0xeefeb0)(this, source, destX, destY, recalculateMipMaps); } // 0xeefeb0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Texture2D> {
        };

}


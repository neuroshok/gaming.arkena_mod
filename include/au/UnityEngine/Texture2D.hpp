//au/UnityEngine/Texture2D
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/TextureFormat.hpp>
#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <au/UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Rect.hpp>
#include <cs/array.hpp>
namespace System{ struct Array; }
#include <au/UnityEngine/Experimental/Rendering/DefaultFormat.hpp>
namespace Unity::Collections{ template <class...> struct NativeArray; }
namespace System::Collections::Generic{ template <class> struct List; }


namespace UnityEngine {
struct Texture2D : ark::meta<Texture2D, UnityEngine::Texture>
{
ark_meta("UnityEngine", "Texture2D", "");

    // Methods

    UnityEngine::TextureFormat get_format(); // 0xAB3030 // public 
    UnityEngine::Texture2D* get_whiteTexture(); // 0xAB32C0 // public static 
    UnityEngine::Texture2D* get_blackTexture(); // 0xAB2FB0 // public static 
    UnityEngine::Texture2D* get_redTexture(); // 0xAB31E0 // public static 
    UnityEngine::Texture2D* get_grayTexture(); // 0xAB3060 // public static 
    UnityEngine::Texture2D* get_linearGrayTexture(); // 0xAB30E0 // public static 
    UnityEngine::Texture2D* get_normalTexture(); // 0xAB31C0 // public static 
    void Compress(bool highQuality); // 0xAB15D0 // public 
    bool Internal_CreateImpl(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex); // 0xAB1F00 // private static 
    void Internal_Create(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex); // 0xAB1F40 // private static 
    bool get_isReadable(); // 0xAB30B0 // public override 
    bool get_vtOnly(); // 0xAB3290 // public 
    void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable); // 0xAB1490 // private 
    bool ResizeImpl(int width, int height); // 0xAB24D0 // private 
    void SetPixelImpl(int image, int x, int y, UnityEngine::Color color); // 0xAB27C0 // private 
    UnityEngine::Color GetPixelImpl(int image, int x, int y); // 0xAB1B30 // private 
    UnityEngine::Color GetPixelBilinearImpl(int image, float u, float v); // 0xAB1930 // private 
    bool ResizeWithFormatImpl(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap); // 0xAB2500 // private 
    void ReadPixelsImpl(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps); // 0xAB2390 // private 
    void SetPixelsImpl(int x, int y, int w, int h, cs::array<UnityEngine::Color>* pixel, int miplevel, int frame); // 0xAB2960 // private 
    bool LoadRawTextureDataImpl(intptr_t data, int size); // 0xAB2030 // private 
    bool LoadRawTextureDataImplArray(cs::array<uint8_t>* data); // 0xAB2000 // private 
    bool SetPixelDataImplArray(System::Array* data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex = int(0)); // 0xAB2700 // private 
    bool SetPixelDataImpl(intptr_t data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex = int(0)); // 0xAB2740 // private 
    intptr_t GetWritableImageData(int frame); // 0xAB1ED0 // private 
    long GetRawImageDataSize(); // 0xAB1E70 // private 
    void GenerateAtlasImpl(cs::array<UnityEngine::Vector2>* sizes, int padding, int atlasSize, cs::array<UnityEngine::Rect>* rect); // 0xAB16C0 // private static 
    bool get_isPreProcessed(); // 0xAB3080 // internal 
    bool get_streamingMipmaps(); // 0xAB3260 // public 
    int get_streamingMipmapsPriority(); // 0xAB3230 // public 
    int get_requestedMipmapLevel(); // 0xAB3200 // public 
    void set_requestedMipmapLevel(int value); // 0xAB3340 // public 
    int get_minimumMipmapLevel(); // 0xAB3190 // public 
    void set_minimumMipmapLevel(int value); // 0xAB3310 // public 
    bool get_loadAllMips(); // 0xAB3100 // internal 
    void set_loadAllMips(bool value); // 0xAB32E0 // internal 
    int get_calculatedMipmapLevel(); // 0xAB2FD0 // public 
    int get_desiredMipmapLevel(); // 0xAB3000 // public 
    int get_loadingMipmapLevel(); // 0xAB3160 // public 
    int get_loadedMipmapLevel(); // 0xAB3130 // public 
    void ClearRequestedMipmapLevel(); // 0xAB15A0 // public 
    bool IsRequestedMipmapLevelLoaded(); // 0xAB1FC0 // public 
    void ClearMinimumMipmapLevel(); // 0xAB1570 // public 
    void UpdateExternalTexture(intptr_t nativeTex); // 0xAB2B10 // public 
    void SetAllPixels32(cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB2690 // private
    void SetBlockOfPixels32(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB26C0 // private
    cs::array<uint8_t>* GetRawTextureData(); // 0xAB1EA0 // public 
    cs::array<UnityEngine::Color>* GetPixels(int x, int y, int blockWidth, int blockHeight, int miplevel); // 0xAB1CF0 // public 
    cs::array<UnityEngine::Color>* GetPixels1(int x, int y, int blockWidth, int blockHeight); // 0xAB1D30 // public 
    cs::array<UnityEngine::Color>* GetPixels32(int miplevel); // 0xAB1CC0 // public
    cs::array<UnityEngine::Color>* GetPixels321(); // 0xAB1C90 // public
    cs::array<UnityEngine::Rect>* PackTextures(cs::array<UnityEngine::Texture2D*>* textures, int padding, int maximumAtlasSize, bool makeNoLongerReadable); // 0xAB2310 // public 
    cs::array<UnityEngine::Rect>* PackTextures1(cs::array<UnityEngine::Texture2D*>* textures, int padding, int maximumAtlasSize); // 0xAB22E0 // public 
    cs::array<UnityEngine::Rect>* PackTextures2(cs::array<UnityEngine::Texture2D*>* textures, int padding); // 0xAB22A0 // public 
    void ctor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount, intptr_t nativeTex); // 0xAB2BF0 // internal 
    void ctor1(int width, int height, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags); // 0xAB2ED0 // public 
    void ctor2(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags); // 0xAB2B40 // public 
    void ctor3(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, int mipCount, UnityEngine::Experimental::Rendering::TextureCreationFlags flags); // 0xAB2F70 // public 
    void ctor4(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear, intptr_t nativeTex); // 0xAB2DE0 // internal 
    void ctor5(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear); // 0xAB2BB0 // public 
    void ctor6(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear); // 0xAB2CB0 // public 
    void ctor7(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain); // 0xAB2D80 // public 
    void ctor8(int width, int height); // 0xAB2D10 // public 
    UnityEngine::Texture2D* CreateExternalTexture(int width, int height, UnityEngine::TextureFormat format, bool mipChain, bool linear, intptr_t nativeTex); // 0xAB1600 // public static 
    void SetPixel(int x, int y, UnityEngine::Color color); // 0xAB2880 // public 
    void SetPixel1(int x, int y, UnityEngine::Color color, int mipLevel); // 0xAB2800 // public 
    void SetPixels(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB29A0 // public 
    void SetPixels1(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors); // 0xAB2A70 // public 
    void SetPixels2(cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB2AA0 // public 
    void SetPixels3(cs::array<UnityEngine::Color>* colors); // 0xAB2A20 // public 
    UnityEngine::Color GetPixel(int x, int y); // 0xAB1C00 // public 
    UnityEngine::Color GetPixel1(int x, int y, int mipLevel); // 0xAB1B70 // public 
    UnityEngine::Color GetPixelBilinear(float u, float v); // 0xAB1A40 // public 
    UnityEngine::Color GetPixelBilinear1(float u, float v, int mipLevel); // 0xAB1990 // public 
    void LoadRawTextureData(intptr_t data, int size); // 0xAB2170 // public 
    void LoadRawTextureData1(cs::array<uint8_t>* data); // 0xAB2060 // public 
    // void LoadRawTextureData2(Unity::Collections::NativeArray<T>* data); // 0x0 // public 
    // void SetPixelData(cs::array<T>* data, int mipLevel, int sourceDataStartIndex = int(0)); // 0x0 // public 
    // void SetPixelData1(Unity::Collections::NativeArray<T>* data, int mipLevel, int sourceDataStartIndex = int(0)); // 0x0 // public 
    // Unity::Collections::NativeArray<T>* GetPixelData(int mipLevel); // 0x0 // public 
    // Unity::Collections::NativeArray<T>* GetRawTextureData1(); // 0x0 // public 
    void Apply(bool updateMipmaps, bool makeNoLongerReadable); // 0xAB14E0 // public 
    void Apply1(bool updateMipmaps); // 0xAB1550 // public 
    void Apply2(); // 0xAB14C0 // public 
    bool Resize(int width, int height); // 0xAB25B0 // public 
    bool Resize1(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap); // 0xAB2540 // public 
    bool Resize2(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap); // 0xAB2620 // public 
    void ReadPixels(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps); // 0xAB2450 // public 
    void ReadPixels1(UnityEngine::Rect source, int destX, int destY); // 0xAB23D0 // public 
    bool GenerateAtlas(cs::array<UnityEngine::Vector2>* sizes, int padding, int atlasSize, System::Collections::Generic::List<UnityEngine::Rect>* results); // 0xAB1700 // public static 
    void SetPixels32(cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB2690 // public
    void SetPixels321(cs::array<UnityEngine::Color>* colors); // 0xAB2900 // public
    void SetPixels322(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors, int miplevel); // 0xAB26C0 // public
    void SetPixels323(int x, int y, int blockWidth, int blockHeight, cs::array<UnityEngine::Color>* colors); // 0xAB2930 // public
    cs::array<UnityEngine::Color>* GetPixels2(int miplevel); // 0xAB1DE0 // public 
    cs::array<UnityEngine::Color>* GetPixels3(); // 0xAB1D60 // public 
    void SetPixelImpl_Injected(int image, int x, int y, /*ref*/ UnityEngine::Color color); // 0xAB2780 // private 
    void GetPixelImpl_Injected(int image, int x, int y, /*out*/ UnityEngine::Color ret); // 0xAB1AF0 // private 
    void GetPixelBilinearImpl_Injected(int image, float u, float v, /*out*/ UnityEngine::Color ret); // 0xAB18E0 // private 
    void ReadPixelsImpl_Injected(/*ref*/ UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps); // 0xAB2350 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Texture2D>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_format> () { return 0xAB3030; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_whiteTexture> () { return 0xAB32C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_blackTexture> () { return 0xAB2FB0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_redTexture> () { return 0xAB31E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_grayTexture> () { return 0xAB3060; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_linearGrayTexture> () { return 0xAB30E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_normalTexture> () { return 0xAB31C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Compress> () { return 0xAB15D0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Internal_CreateImpl> () { return 0xAB1F00; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Internal_Create> () { return 0xAB1F40; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_isReadable> () { return 0xAB30B0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_vtOnly> () { return 0xAB3290; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ApplyImpl> () { return 0xAB1490; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ResizeImpl> () { return 0xAB24D0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixelImpl> () { return 0xAB27C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelImpl> () { return 0xAB1B30; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelBilinearImpl> () { return 0xAB1930; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ResizeWithFormatImpl> () { return 0xAB2500; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ReadPixelsImpl> () { return 0xAB2390; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixelsImpl> () { return 0xAB2960; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::LoadRawTextureDataImpl> () { return 0xAB2030; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::LoadRawTextureDataImplArray> () { return 0xAB2000; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixelDataImplArray> () { return 0xAB2700; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixelDataImpl> () { return 0xAB2740; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetWritableImageData> () { return 0xAB1ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetRawImageDataSize> () { return 0xAB1E70; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GenerateAtlasImpl> () { return 0xAB16C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_isPreProcessed> () { return 0xAB3080; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_streamingMipmaps> () { return 0xAB3260; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_streamingMipmapsPriority> () { return 0xAB3230; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_requestedMipmapLevel> () { return 0xAB3200; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::set_requestedMipmapLevel> () { return 0xAB3340; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_minimumMipmapLevel> () { return 0xAB3190; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::set_minimumMipmapLevel> () { return 0xAB3310; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_loadAllMips> () { return 0xAB3100; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::set_loadAllMips> () { return 0xAB32E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_calculatedMipmapLevel> () { return 0xAB2FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_desiredMipmapLevel> () { return 0xAB3000; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_loadingMipmapLevel> () { return 0xAB3160; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::get_loadedMipmapLevel> () { return 0xAB3130; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ClearRequestedMipmapLevel> () { return 0xAB15A0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded> () { return 0xAB1FC0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ClearMinimumMipmapLevel> () { return 0xAB1570; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::UpdateExternalTexture> () { return 0xAB2B10; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetAllPixels32> () { return 0xAB2690; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetBlockOfPixels32> () { return 0xAB26C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetRawTextureData> () { return 0xAB1EA0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels> () { return 0xAB1CF0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels1> () { return 0xAB1D30; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels32> () { return 0xAB1CC0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels321> () { return 0xAB1C90; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::PackTextures> () { return 0xAB2310; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::PackTextures1> () { return 0xAB22E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::PackTextures2> () { return 0xAB22A0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor> () { return 0xAB2BF0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor1> () { return 0xAB2ED0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor2> () { return 0xAB2B40; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor3> () { return 0xAB2F70; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor4> () { return 0xAB2DE0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor5> () { return 0xAB2BB0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor6> () { return 0xAB2CB0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor7> () { return 0xAB2D80; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ctor8> () { return 0xAB2D10; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::CreateExternalTexture> () { return 0xAB1600; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixel> () { return 0xAB2880; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixel1> () { return 0xAB2800; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels> () { return 0xAB29A0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels1> () { return 0xAB2A70; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels2> () { return 0xAB2AA0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels3> () { return 0xAB2A20; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixel> () { return 0xAB1C00; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixel1> () { return 0xAB1B70; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelBilinear> () { return 0xAB1A40; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelBilinear1> () { return 0xAB1990; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::LoadRawTextureData> () { return 0xAB2170; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::LoadRawTextureData1> () { return 0xAB2060; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Apply> () { return 0xAB14E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Apply1> () { return 0xAB1550; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Apply2> () { return 0xAB14C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Resize> () { return 0xAB25B0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Resize1> () { return 0xAB2540; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::Resize2> () { return 0xAB2620; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ReadPixels> () { return 0xAB2450; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ReadPixels1> () { return 0xAB23D0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GenerateAtlas> () { return 0xAB1700; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels32> () { return 0xAB2690; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels321> () { return 0xAB2900; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels322> () { return 0xAB26C0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixels323> () { return 0xAB2930; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels2> () { return 0xAB1DE0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixels3> () { return 0xAB1D60; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::SetPixelImpl_Injected> () { return 0xAB2780; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelImpl_Injected> () { return 0xAB1AF0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::GetPixelBilinearImpl_Injected> () { return 0xAB18E0; }
    template<> inline uintptr_t rva<&UnityEngine::Texture2D::ReadPixelsImpl_Injected> () { return 0xAB2350; }
} // ark::method_info
#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/Color.hpp>
#include <autogen/Unity/Texture.hpp>

namespace Unity
{
    struct Texture2D : ark::meta<Texture2D, Texture> // TypeDefIndex: 5358
    {
        ark_meta("UnityEngine", "Texture2D", "");

        Texture2D* get_whiteTexture() { return method_call(get_whiteTexture); } // 0xB8ECB0
	static bool Internal_CreateImpl(Texture2D* mono, std::int32_t w, std::int32_t h, std::int32_t mipCount, /* struct GraphicsFormat* */ int format, /* /* TextureCreationFlags */ int flags, void* nativeTex) { return static_method_call(Texture2D, Internal_CreateImpl, mono, w, h, mipCount, format, flags, nativeTex); } // 0xB8E540
	void Internal_Create(Texture2D* mono, std::int32_t w, std::int32_t h, std::int32_t mipCount, /* GraphicsFormat */ int format, /* TextureCreationFlags */ int flags, struct IntPtr* nativeTex) { return method_call(Internal_Create, mono, w, h, mipCount, format, flags, nativeTex); } // 0xB8E580
	// virtual // bool get_isReadable() { return method_call(get_isReadable); } // 0xB8EC80 // Slot: 8
	void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) { return method_call(ApplyImpl, updateMipmaps, makeNoLongerReadable); } // 0xB8E2A0
	void SetPixelImpl(std::int32_t image, std::int32_t x, std::int32_t y, Unity::Color color) { return method_call(SetPixelImpl, image, x, y, color); } // 0xB8E840
	Unity::Color GetPixelBilinearImpl(std::int32_t image, float u, float v) { return method_call(GetPixelBilinearImpl, image, u, v); } // 0xB8E420
	bool ResizeWithFormatImpl(std::int32_t width, std::int32_t height, /* struct TextureFormat* */ int format, bool hasMipMap) { return method_call(ResizeWithFormatImpl, width, height, format, hasMipMap); } // 0xB8E730
	//void SetPixelsImpl(std::int32_t x, std::int32_t y, std::int32_t w, std::int32_t h, struct Color[]* pixel, std::int32_t miplevel, std::int32_t frame) { return method_call(SetPixelsImpl, x, y, w, h, pixel, miplevel, frame); } // 0xB8E920
	bool LoadRawTextureDataImplArray(std::int8_t* data) { return method_call(LoadRawTextureDataImplArray, data); } // 0xB8E610
	//void _ctor(std::int32_t width, std::int32_t height, /* struct TextureFormat* */ int textureFormat, std::int32_t mipCount, bool linear, struct IntPtr* nativeTex) { return method_call(_ctor, width, height, textureFormat, mipCount, linear, nativeTex); } // 0xB8EB30
	//void _ctor(std::int32_t width, std::int32_t height, /* struct TextureFormat* */ int textureFormat, bool mipChain, bool linear) { return method_call(_ctor, width, height, textureFormat, mipChain, linear); } // 0xB8EA70
	void _ctor(std::int32_t width, std::int32_t height, /* struct TextureFormat* */ int textureFormat, bool mipChain) { return method_call(_ctor, width, height, textureFormat, mipChain); } // 0xB8EAD0
	void SetPixel(std::int32_t x, std::int32_t y, Unity::Color color) { return method_call(SetPixel, x, y, color); } // 0xB8E880
	//void SetPixels(std::int32_t x, std::int32_t y, std::int32_t blockWidth, std::int32_t blockHeight, struct Color[]* colors, std::int32_t miplevel) { return method_call(SetPixels, x, y, blockWidth, blockHeight, colors, miplevel); } // 0xB8E990
	//void SetPixels(std::int32_t x, std::int32_t y, std::int32_t blockWidth, std::int32_t blockHeight, struct Color[]* colors) { return method_call(SetPixels, x, y, blockWidth, blockHeight, colors); } // 0xB8E960
	//void SetPixels(struct Color[]* colors) { return method_call(SetPixels, colors); } // 0xB8EA20
	Unity::Color GetPixelBilinear(float u, float v) { return method_call(GetPixelBilinear, u, v); } // 0xB8E480
	void LoadRawTextureData(std::int8_t* data) { return method_call(LoadRawTextureData, data); } // 0xB8E640
	//void Apply(bool updateMipmaps, bool makeNoLongerReadable) { return method_call(Apply, updateMipmaps, makeNoLongerReadable); } // 0xB8E350
	void Apply() { return method_call(Apply); } // 0xB8E2D0
	bool Resize(std::int32_t width, std::int32_t height, /* struct TextureFormat* */ int format, bool hasMipMap) { return method_call(Resize, width, height, format, hasMipMap); } // 0xB8E770
	void SetPixelImpl_Injected(std::int32_t image, std::int32_t x, std::int32_t y, Unity::Color color) { return method_call(SetPixelImpl_Injected, image, x, y, color); } // 0xB8E800
	void GetPixelBilinearImpl_Injected(std::int32_t image, float u, float v, Unity::Color ret) { return method_call(GetPixelBilinearImpl_Injected, image, u, v, ret); } // 0xB8E3D0
    };
}
namespace ark::method_info
{

	method_rva(Unity::Texture2D::get_whiteTexture, 0xB8ECB0)
	method_rva(Unity::Texture2D::Internal_CreateImpl, 0xB8E540)
	method_rva(Unity::Texture2D::Internal_Create, 0xB8E580)
	// method_rva(Unity::Texture2D::get_isReadable, 0xB8EC80)
	method_rva(Unity::Texture2D::ApplyImpl, 0xB8E2A0)
	method_rva(Unity::Texture2D::SetPixelImpl, 0xB8E840)
	method_rva(Unity::Texture2D::GetPixelBilinearImpl, 0xB8E420)
	method_rva(Unity::Texture2D::ResizeWithFormatImpl, 0xB8E730)
	//method_rva(Unity::Texture2D::SetPixelsImpl, 0xB8E920)
	method_rva(Unity::Texture2D::LoadRawTextureDataImplArray, 0xB8E610)
	//method_rva(Unity::Texture2D::_ctor, 0xB8EB30)
	//method_rva(Unity::Texture2D::_ctor, 0xB8EA70)
	method_rva(Unity::Texture2D::_ctor, 0xB8EAD0)
	method_rva(Unity::Texture2D::SetPixel, 0xB8E880)
	//method_rva(Unity::Texture2D::SetPixels, 0xB8E990)
	//method_rva(Unity::Texture2D::SetPixels, 0xB8E960)
	//method_rva(Unity::Texture2D::SetPixels, 0xB8EA20)
	method_rva(Unity::Texture2D::GetPixelBilinear, 0xB8E480)
	method_rva(Unity::Texture2D::LoadRawTextureData, 0xB8E640)
	//method_rva(Unity::Texture2D::Apply, 0xB8E350)
	method_rva(Unity::Texture2D::Apply, 0xB8E2D0)
	method_rva(Unity::Texture2D::Resize, 0xB8E770)
	method_rva(Unity::Texture2D::SetPixelImpl_Injected, 0xB8E800)
	method_rva(Unity::Texture2D::GetPixelBilinearImpl_Injected, 0xB8E3D0)
}
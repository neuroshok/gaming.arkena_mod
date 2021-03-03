#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/Object.hpp>

namespace Unity
{
    // Namespace: UnityEngine
    struct Texture : ark::meta<Texture, Object> // TypeDefIndex: 5357
    {
    	ark_meta("UnityEngine", "Texture", "");

    	static std::int32_t GenerateAllMips; // 0x3FC53FA0

    	void _ctor() { return method_call(_ctor); } // 0xB8F7C0
    	std::int32_t GetDataWidth() { return method_call(GetDataWidth); } // 0xB8F410
    	std::int32_t GetDataHeight() { return method_call(GetDataHeight); } // 0xB8F3E0
    	//std::int32_t get_width() { return method_call(get_width); } // 0xB8F410 // Slot: 4
    	// virtual // void set_width(std::int32_t value) { return method_call(set_width, value); } // 0xB8F960 // Slot: 5
    	// virtual // std::int32_t get_height() { return method_call(get_height); } // 0xB8F3E0 // Slot: 6
    	// virtual // void set_height(std::int32_t value) { return method_call(set_height, value); } // 0xB8F910 // Slot: 7
    	bool get_isReadable() { return method_call(get_isReadable); } // 0xB8F810 // Slot: 8
    	struct TextureWrapMode* get_wrapMode() { return method_call(get_wrapMode); } // 0xB8F8B0
    	void set_wrapMode(struct TextureWrapMode* value) { return method_call(set_wrapMode, value); } // 0xB8F9B0
    	void set_filterMode(struct FilterMode* value) { return method_call(set_filterMode, value); } // 0xB8F8E0
    	struct Vector2* get_texelSize() { return method_call(get_texelSize); } // 0xB8F870
    	bool ValidateFormat(struct TextureFormat* format) { return method_call(ValidateFormat, format); } // 0xB8F440
    	//bool ValidateFormat(struct GraphicsFormat* format, struct FormatUsage* usage) { return method_call(ValidateFormat, format, usage); } // 0xB8F670
    	struct UnityException* CreateNonReadableException(struct Texture* t) { return method_call(CreateNonReadableException, t); } // 0xB8F2D0
    	void _cctor() { return method_call(_cctor); } // 0xB8F790
    	void get_texelSize_Injected(struct Vector2* ret) { return method_call(get_texelSize_Injected, ret); } // 0xB8F840
    };
} // Unity
namespace ark::method_info
{

	method_rva(Unity::Texture::_ctor, 0xB8F7C0)
	method_rva(Unity::Texture::GetDataWidth, 0xB8F410)
	method_rva(Unity::Texture::GetDataHeight, 0xB8F3E0)
	//method_rva(Unity::Texture::get_width, 0xB8F410)
	// method_rva(Unity::Texture::set_width, 0xB8F960)
	// method_rva(Unity::Texture::get_height, 0xB8F3E0)
	// method_rva(Unity::Texture::set_height, 0xB8F910)
	method_rva(Unity::Texture::get_isReadable, 0xB8F810)
	method_rva(Unity::Texture::get_wrapMode, 0xB8F8B0)
	method_rva(Unity::Texture::set_wrapMode, 0xB8F9B0)
	method_rva(Unity::Texture::set_filterMode, 0xB8F8E0)
	method_rva(Unity::Texture::get_texelSize, 0xB8F870)
	method_rva(Unity::Texture::ValidateFormat, 0xB8F440)
	//method_rva(Unity::Texture::ValidateFormat, 0xB8F670)
	method_rva(Unity::Texture::CreateNonReadableException, 0xB8F2D0)
	method_rva(Unity::Texture::_cctor, 0xB8F790)
	method_rva(Unity::Texture::get_texelSize_Injected, 0xB8F840)
}
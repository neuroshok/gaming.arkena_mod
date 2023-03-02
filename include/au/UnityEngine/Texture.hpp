#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/TextureWrapMode.hpp>
#include <au/UnityEngine/FilterMode.hpp>
#include <au/UnityEngine/TextureFormat.hpp>
#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine
{
    struct Texture : ark::meta<Texture, UnityEngine::Object>
    {
        static int32_t GenerateAllMips(); // 0x0

        void ctor() { return il2cpp::call<void(*)(Texture*)>(0xef1e90)(this); } // 0xef1e90
        int32_t GetDataWidth() { return il2cpp::call<int32_t(*)(Texture*)>(0xef1a60)(this); } // 0xef1a60
        int32_t GetDataHeight() { return il2cpp::call<int32_t(*)(Texture*)>(0xef1a30)(this); } // 0xef1a30
        UnityEngine::TextureWrapMode get_wrapMode() { return il2cpp::call<UnityEngine::TextureWrapMode(*)(Texture*)>(0xef1fb0)(this); } // 0xef1fb0
        void set_wrapMode(UnityEngine::TextureWrapMode value) { return il2cpp::call<void(*)(Texture*, UnityEngine::TextureWrapMode)>(0xef20d0)(this, value); } // 0xef20d0
        void set_wrapModeU(UnityEngine::TextureWrapMode value) { return il2cpp::call<void(*)(Texture*, UnityEngine::TextureWrapMode)>(0xef2070)(this, value); } // 0xef2070
        void set_wrapModeV(UnityEngine::TextureWrapMode value) { return il2cpp::call<void(*)(Texture*, UnityEngine::TextureWrapMode)>(0xef20a0)(this, value); } // 0xef20a0
        void set_filterMode(UnityEngine::FilterMode value) { return il2cpp::call<void(*)(Texture*, UnityEngine::FilterMode)>(0xef1fe0)(this, value); } // 0xef1fe0
        UnityEngine::Vector2 get_texelSize() { return il2cpp::call<UnityEngine::Vector2(*)(Texture*)>(0xef1f70)(this); } // 0xef1f70
        int32_t Internal_GetActiveTextureColorSpace() { return il2cpp::call<int32_t(*)(Texture*)>(0xef1af0)(this); } // 0xef1af0
        UnityEngine::ColorSpace get_activeTextureColorSpace() { return il2cpp::call<UnityEngine::ColorSpace(*)(Texture*)>(0xef1ee0)(this); } // 0xef1ee0
        int32_t GetPixelDataSize(int32_t mipLevel, int32_t element) { return il2cpp::call<int32_t(*)(Texture*, int32_t, int32_t)>(0xef1ac0)(this, mipLevel, element); } // 0xef1ac0
        int32_t GetPixelDataOffset(int32_t mipLevel, int32_t element) { return il2cpp::call<int32_t(*)(Texture*, int32_t, int32_t)>(0xef1a90)(this, mipLevel, element); } // 0xef1a90
        bool ValidateFormat(UnityEngine::TextureFormat format) { return il2cpp::call<bool(*)(Texture*, UnityEngine::TextureFormat)>(0xef1c60)(this, format); } // 0xef1c60
        bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage) { return il2cpp::call<bool(*)(Texture*, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::FormatUsage)>(0xef1b20)(this, format, usage); } // 0xef1b20
        UnityEngine::UnityException* CreateNonReadableException(UnityEngine::Texture* t) { return il2cpp::call<UnityEngine::UnityException*(*)(Texture*, UnityEngine::Texture*)>(0xef1970)(this, t); } // 0xef1970
        void cctor() { return il2cpp::call<void(*)(Texture*)>(0xef1e60)(this); } // 0xef1e60
        void get_texelSize_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Texture*, UnityEngine::Vector2)>(0xef1f40)(this, ret); } // 0xef1f40

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Texture> {
        int32_t GenerateAllMips; // 0x0
        };

}



int32_t UnityEngine::Texture::GenerateAllMips() { return statics()->GenerateAllMips; }; // 0x0
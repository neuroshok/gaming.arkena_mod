#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Cubemap.hpp>
#include <au/UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp>

namespace UnityEngine
{
    struct Cubemap : ark::meta<Cubemap, UnityEngine::Texture>
    {

        bool Internal_CreateImpl(UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int nativeTex) { return il2cpp::call<bool(*)(Cubemap*, UnityEngine::Cubemap*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int)>(0xf569f0)(this, mono, ext, mipCount, format, flags, nativeTex); } // 0xf569f0
        void Internal_Create(UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int nativeTex) { return il2cpp::call<void(*)(Cubemap*, UnityEngine::Cubemap*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int)>(0xf56a30)(this, mono, ext, mipCount, format, flags, nativeTex); } // 0xf56a30
        void ctor(int32_t width, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::Experimental::Rendering::DefaultFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xf56b80)(this, width, format, flags); } // 0xf56b80
        void ctor(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xf56d80)(this, width, format, flags); } // 0xf56d80
        void ctor(int32_t width, UnityEngine::TextureFormat format, int32_t mipCount) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::TextureFormat, int32_t)>(0xf56d40)(this, width, format, mipCount); } // 0xf56d40
        void ctor(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(0xf56e30)(this, width, format, flags, mipCount); } // 0xf56e30
        void ctor(int32_t width, UnityEngine::TextureFormat textureFormat, int32_t mipCount, int nativeTex) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::TextureFormat, int32_t, int)>(0xf56c40)(this, width, textureFormat, mipCount, nativeTex); } // 0xf56c40
        void ctor(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain, int nativeTex) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::TextureFormat, bool, int)>(0xf56b50)(this, width, textureFormat, mipChain, nativeTex); } // 0xf56b50
        void ctor(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain) { return il2cpp::call<void(*)(Cubemap*, int32_t, UnityEngine::TextureFormat, bool)>(0xf56b00)(this, width, textureFormat, mipChain); } // 0xf56b00
        void ValidateIsNotCrunched(UnityEngine::Experimental::Rendering::TextureCreationFlags flags) { return il2cpp::call<void(*)(Cubemap*, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(0xf56ab0)(this, flags); } // 0xf56ab0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Cubemap> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Texture.hpp>
#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <au/UnityEngine/RenderTexture.hpp>
#include <au/UnityEngine/RenderTextureDescriptor.hpp>
#include <au/UnityEngine/RenderTexture.hpp>
#include <au/UnityEngine/RenderTextureDescriptor.hpp>
#include <au/UnityEngine/RenderTextureFormat.hpp>
#include <au/UnityEngine/RenderTextureDescriptor.hpp>

namespace UnityEngine
{
    struct RenderTexture : ark::meta<RenderTexture, UnityEngine::Texture>
    {

        void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::Experimental::Rendering::GraphicsFormat)>(0x13ab790)(this, value); } // 0x13ab790
        UnityEngine::RenderTexture* GetActive() { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*)>(0x13aa650)(this); } // 0x13aa650
        void SetActive(UnityEngine::RenderTexture* rt) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTexture*)>(0x13aaae0)(this, rt); } // 0x13aaae0
        UnityEngine::RenderTexture* get_active() { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*)>(0x13aa650)(this); } // 0x13aa650
        void set_active(UnityEngine::RenderTexture* value) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTexture*)>(0x13aaae0)(this, value); } // 0x13aaae0
        bool Create() { return il2cpp::call<bool(*)(RenderTexture*)>(0x13aa620)(this); } // 0x13aa620
        void Release() { return il2cpp::call<void(*)(RenderTexture*)>(0x13aaab0)(this); } // 0x13aaab0
        void SetSRGBReadWrite(bool srgb) { return il2cpp::call<void(*)(RenderTexture*, bool)>(0x13aab70)(this, srgb); } // 0x13aab70
        void Internal_Create(UnityEngine::RenderTexture* rt) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTexture*)>(0x13aaa50)(this, rt); } // 0x13aaa50
        void SetRenderTextureDescriptor(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aab40)(this, desc); } // 0x13aab40
        UnityEngine::RenderTextureDescriptor GetDescriptor() { return il2cpp::call<UnityEngine::RenderTextureDescriptor(*)(RenderTexture*)>(0x13aa7d0)(this); } // 0x13aa7d0
        UnityEngine::RenderTexture* GetTemporary_Internal(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aa930)(this, desc); } // 0x13aa930
        void ReleaseTemporary(UnityEngine::RenderTexture* temp) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTexture*)>(0x13aaa80)(this, temp); } // 0x13aaa80
        void set_depth(int32_t value) { return il2cpp::call<void(*)(RenderTexture*, int32_t)>(0x13ab6e0)(this, value); } // 0x13ab6e0
        void ctor() { return il2cpp::call<void(*)(RenderTexture*)>(0x13ab100)(this); } // 0x13ab100
        void ctor(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13ab1b0)(this, desc); } // 0x13ab1b0
        void ctor(UnityEngine::RenderTexture* textureToCopy) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTexture*)>(0x13aaea0)(this, textureToCopy); } // 0x13aaea0
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::DefaultFormat)>(0x13ab5f0)(this, width, height, depth, format); } // 0x13ab5f0
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat)>(0x13ab2a0)(this, width, height, depth, format); } // 0x13ab2a0
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(0x13ab3f0)(this, width, height, depth, format, mipCount); } // 0x13ab3f0
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::RenderTextureFormat, UnityEngine::RenderTextureReadWrite)>(0x13ab0d0)(this, width, height, depth, format, readWrite); } // 0x13ab0d0
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::RenderTextureFormat)>(0x13ab180)(this, width, height, depth, format); } // 0x13ab180
        void ctor(int32_t width, int32_t height, int32_t depth) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t)>(0x13ab150)(this, width, height, depth); } // 0x13ab150
        void ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, int32_t mipCount) { return il2cpp::call<void(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::RenderTextureFormat, int32_t)>(0x13aae70)(this, width, height, depth, format, mipCount); } // 0x13aae70
        UnityEngine::RenderTextureDescriptor get_descriptor() { return il2cpp::call<UnityEngine::RenderTextureDescriptor(*)(RenderTexture*)>(0x13ab610)(this); } // 0x13ab610
        void set_descriptor(UnityEngine::RenderTextureDescriptor value) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13ab710)(this, value); } // 0x13ab710
        void ValidateRenderTextureDesc(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aaba0)(this, desc); } // 0x13aaba0
        UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine::RenderTextureFormat renderTextureFormat, UnityEngine::RenderTextureReadWrite readWrite) { return il2cpp::call<UnityEngine::Experimental::Rendering::GraphicsFormat(*)(RenderTexture*, UnityEngine::RenderTextureFormat, UnityEngine::RenderTextureReadWrite)>(0x13aa670)(this, renderTextureFormat, readWrite); } // 0x13aa670
        UnityEngine::RenderTexture* GetTemporary(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aa960)(this, desc); } // 0x13aa960
        UnityEngine::RenderTexture* GetTemporaryImpl(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t antiAliasing, UnityEngine::RenderTextureMemoryless memorylessMode, UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, UnityEngine::RenderTextureMemoryless, UnityEngine::VRTextureUsage, bool)>(0x13aa810)(this, width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage, useDynamicScale); } // 0x13aa810
        UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::RenderTextureFormat format) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, int32_t, int32_t, int32_t, UnityEngine::RenderTextureFormat)>(0x13aa9f0)(this, width, height, depthBuffer, format); } // 0x13aa9f0
        UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, int32_t, int32_t)>(0x13aaa20)(this, width, height); } // 0x13aaa20
        void SetRenderTextureDescriptor_Injected(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aab10)(this, desc); } // 0x13aab10
        void GetDescriptor_Injected(UnityEngine::RenderTextureDescriptor ret) { return il2cpp::call<void(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aa7a0)(this, ret); } // 0x13aa7a0
        UnityEngine::RenderTexture* GetTemporary_Internal_Injected(UnityEngine::RenderTextureDescriptor desc) { return il2cpp::call<UnityEngine::RenderTexture*(*)(RenderTexture*, UnityEngine::RenderTextureDescriptor)>(0x13aa900)(this, desc); } // 0x13aa900

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RenderTexture> {
        };

}


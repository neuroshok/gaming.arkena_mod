#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Rendering/TextureDimension.hpp>
#include <au/UnityEngine/Rendering/ShadowSamplingMode.hpp>
#include <au/UnityEngine/VRTextureUsage.hpp>
#include <au/UnityEngine/RenderTextureCreationFlags.hpp>
#include <au/UnityEngine/RenderTextureMemoryless.hpp>
#include <au/UnityEngine/Experimental/Rendering/GraphicsFormat.hpp>
#include <au/UnityEngine/Rendering/ShadowSamplingMode.hpp>

namespace UnityEngine
{
    struct RenderTextureDescriptor : ark::meta<RenderTextureDescriptor>
    {
        static cs::array<int32_t>* depthFormatBits(); // 0x0
        int32_t _width_k__BackingField; // 0x8
        int32_t _height_k__BackingField; // 0xc
        int32_t _msaaSamples_k__BackingField; // 0x10
        int32_t _volumeDepth_k__BackingField; // 0x14
        int32_t _mipCount_k__BackingField; // 0x18
        UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat; // 0x1c
        UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField; // 0x20
        int32_t _depthBufferBits; // 0x24
        UnityEngine::Rendering::TextureDimension _dimension_k__BackingField; // 0x28
        UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField; // 0x2c
        UnityEngine::VRTextureUsage _vrUsage_k__BackingField; // 0x30
        UnityEngine::RenderTextureCreationFlags _flags; // 0x34
        UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField; // 0x38

        int32_t get_width() { return il2cpp::call<int32_t(*)(RenderTextureDescriptor*)>(0x50e10)(this); } // 0x50e10
        void set_width(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x54760)(this, value); } // 0x54760
        int32_t get_height() { return il2cpp::call<int32_t(*)(RenderTextureDescriptor*)>(0x50de0)(this); } // 0x50de0
        void set_height(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x50a50)(this, value); } // 0x50a50
        int32_t get_msaaSamples() { return il2cpp::call<int32_t(*)(RenderTextureDescriptor*)>(0x5a980)(this); } // 0x5a980
        void set_msaaSamples(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x51680)(this, value); } // 0x51680
        int32_t get_volumeDepth() { return il2cpp::call<int32_t(*)(RenderTextureDescriptor*)>(0x51020)(this); } // 0x51020
        void set_volumeDepth(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x54250)(this, value); } // 0x54250
        void set_mipCount(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x50a70)(this, value); } // 0x50a70
        UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() { return il2cpp::call<UnityEngine::Experimental::Rendering::GraphicsFormat(*)(RenderTextureDescriptor*)>(0x52360)(this); } // 0x52360
        void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, UnityEngine::Experimental::Rendering::GraphicsFormat)>(0x142430)(this, value); } // 0x142430
        int32_t get_depthBufferBits() { return il2cpp::call<int32_t(*)(RenderTextureDescriptor*)>(0x142370)(this); } // 0x142370
        void set_depthBufferBits(int32_t value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t)>(0x142400)(this, value); } // 0x142400
        void set_dimension(UnityEngine::Rendering::TextureDimension value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, UnityEngine::Rendering::TextureDimension)>(0x5a4d0)(this, value); } // 0x5a4d0
        void set_shadowSamplingMode(UnityEngine::Rendering::ShadowSamplingMode value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, UnityEngine::Rendering::ShadowSamplingMode)>(0x63d90)(this, value); } // 0x63d90
        void set_vrUsage(UnityEngine::VRTextureUsage value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, UnityEngine::VRTextureUsage)>(0x643b0)(this, value); } // 0x643b0
        void set_memoryless(UnityEngine::RenderTextureMemoryless value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, UnityEngine::RenderTextureMemoryless)>(0x142470)(this, value); } // 0x142470
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(0x1422f0)(this, width, height, colorFormat, depthBufferBits); } // 0x1422f0
        void ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits, int32_t mipCount) { return il2cpp::call<void(*)(RenderTextureDescriptor*, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(0x142360)(this, width, height, colorFormat, depthBufferBits, mipCount); } // 0x142360
        void SetOrClearRenderTextureCreationFlag(bool value, UnityEngine::RenderTextureCreationFlags flag) { return il2cpp::call<void(*)(RenderTextureDescriptor*, bool, UnityEngine::RenderTextureCreationFlags)>(0x1422c0)(this, value, flag); } // 0x1422c0
        void set_createdFromScript(bool value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, bool)>(0x1423e0)(this, value); } // 0x1423e0
        void set_useDynamicScale(bool value) { return il2cpp::call<void(*)(RenderTextureDescriptor*, bool)>(0x142480)(this, value); } // 0x142480
        void cctor() { return il2cpp::call<void(*)(RenderTextureDescriptor*)>(0xee3bb0)(this); } // 0xee3bb0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RenderTextureDescriptor> {
        cs::array<int32_t>* depthFormatBits; // 0x0
        };

}



cs::array<int32_t>* UnityEngine::RenderTextureDescriptor::depthFormatBits() { return statics()->depthFormatBits; }; // 0x0
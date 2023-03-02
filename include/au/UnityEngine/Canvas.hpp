#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>
#include <au/UnityEngine/Canvas/WillRenderCanvases.hpp>
#include <au/UnityEngine/RenderMode.hpp>
#include <au/UnityEngine/AdditionalCanvasShaderChannels.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace UnityEngine
{
    struct Canvas : ark::meta<Canvas, UnityEngine::Behaviour>
    {
        static UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE preWillRenderCanvases(); // 0x0
        static UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE willRenderCanvases(); // 0x4

        void add_preWillRenderCanvases(UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE)>(0x1ad1c00)(this, value); } // 0x1ad1c00
        void remove_preWillRenderCanvases(UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE)>(0x1ad2000)(this, value); } // 0x1ad2000
        void add_willRenderCanvases(UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE)>(0x1ad1c90)(this, value); } // 0x1ad1c90
        void remove_willRenderCanvases(UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE)>(0x1ad2090)(this, value); } // 0x1ad2090
        UnityEngine::RenderMode get_renderMode() { return il2cpp::call<UnityEngine::RenderMode(*)(Canvas*)>(0x1ad1e10)(this); } // 0x1ad1e10
        void set_renderMode(UnityEngine::RenderMode value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::RenderMode)>(0x1ad21c0)(this, value); } // 0x1ad21c0
        bool get_isRootCanvas() { return il2cpp::call<bool(*)(Canvas*)>(0x1ad1d50)(this); } // 0x1ad1d50
        float get_scaleFactor() { return il2cpp::call<float(*)(Canvas*)>(0x1ad1f10)(this); } // 0x1ad1f10
        void set_scaleFactor(float value) { return il2cpp::call<void(*)(Canvas*, float)>(0x1ad21f0)(this, value); } // 0x1ad21f0
        float get_referencePixelsPerUnit() { return il2cpp::call<float(*)(Canvas*)>(0x1ad1de0)(this); } // 0x1ad1de0
        void set_referencePixelsPerUnit(float value) { return il2cpp::call<void(*)(Canvas*, float)>(0x1ad2180)(this, value); } // 0x1ad2180
        bool get_pixelPerfect() { return il2cpp::call<bool(*)(Canvas*)>(0x1ad1db0)(this); } // 0x1ad1db0
        int32_t get_renderOrder() { return il2cpp::call<int32_t(*)(Canvas*)>(0x1ad1e40)(this); } // 0x1ad1e40
        bool get_overrideSorting() { return il2cpp::call<bool(*)(Canvas*)>(0x1ad1d80)(this); } // 0x1ad1d80
        void set_overrideSorting(bool value) { return il2cpp::call<void(*)(Canvas*, bool)>(0x1ad2150)(this, value); } // 0x1ad2150
        int32_t get_sortingOrder() { return il2cpp::call<int32_t(*)(Canvas*)>(0x1ad1f70)(this); } // 0x1ad1f70
        void set_sortingOrder(int32_t value) { return il2cpp::call<void(*)(Canvas*, int32_t)>(0x1ad2260)(this, value); } // 0x1ad2260
        int32_t get_targetDisplay() { return il2cpp::call<int32_t(*)(Canvas*)>(0x1ad1fa0)(this); } // 0x1ad1fa0
        int32_t get_sortingLayerID() { return il2cpp::call<int32_t(*)(Canvas*)>(0x1ad1f40)(this); } // 0x1ad1f40
        void set_sortingLayerID(int32_t value) { return il2cpp::call<void(*)(Canvas*, int32_t)>(0x1ad2230)(this, value); } // 0x1ad2230
        UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() { return il2cpp::call<UnityEngine::AdditionalCanvasShaderChannels(*)(Canvas*)>(0x1ad1d20)(this); } // 0x1ad1d20
        void set_additionalShaderChannels(UnityEngine::AdditionalCanvasShaderChannels value) { return il2cpp::call<void(*)(Canvas*, UnityEngine::AdditionalCanvasShaderChannels)>(0x1ad2120)(this, value); } // 0x1ad2120
        UnityEngine::Canvas* get_rootCanvas() { return il2cpp::call<UnityEngine::Canvas*(*)(Canvas*)>(0x1ad1ee0)(this); } // 0x1ad1ee0
        UnityEngine::Vector2 get_renderingDisplaySize() { return il2cpp::call<UnityEngine::Vector2(*)(Canvas*)>(0x1ad1ea0)(this); } // 0x1ad1ea0
        UnityEngine::Camera* get_worldCamera() { return il2cpp::call<UnityEngine::Camera*(*)(Canvas*)>(0x1ad1fd0)(this); } // 0x1ad1fd0
        UnityEngine::Material* GetDefaultCanvasMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Canvas*)>(0x1ad1b40)(this); } // 0x1ad1b40
        UnityEngine::Material* GetETC1SupportedCanvasMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Canvas*)>(0x1ad1b60)(this); } // 0x1ad1b60
        void ForceUpdateCanvases() { return il2cpp::call<void(*)(Canvas*)>(0x1ad1ad0)(this); } // 0x1ad1ad0
        void SendPreWillRenderCanvases() { return il2cpp::call<void(*)(Canvas*)>(0x1ad1b80)(this); } // 0x1ad1b80
        void SendWillRenderCanvases() { return il2cpp::call<void(*)(Canvas*)>(0x1ad1bc0)(this); } // 0x1ad1bc0
        void ctor() { return il2cpp::call<void(*)(Canvas*)>(0xee3f90)(this); } // 0xee3f90
        void get_renderingDisplaySize_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Canvas*, UnityEngine::Vector2)>(0x1ad1e70)(this, ret); } // 0x1ad1e70

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Canvas> {
        UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE preWillRenderCanvases; // 0x0
        UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE willRenderCanvases; // 0x4
        };

}



UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE UnityEngine::Canvas::preWillRenderCanvases() { return statics()->preWillRenderCanvases; }; // 0x0

UnityEngine::Canvas+WillRenderCanvases*NESTEDTYPE UnityEngine::Canvas::willRenderCanvases() { return statics()->willRenderCanvases; }; // 0x4
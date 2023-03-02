#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/LightSource.hpp>
#include <au/LightSourceRendererType.hpp>

namespace 
{
    struct LightSourceRenderer : ark::meta<LightSourceRenderer, il2cpp::Il2CppObject>
    {
        au::LightSource* lightSource; // 0x8

        void ctor(au::LightSource* lightSource) { return il2cpp::call<void(*)(LightSourceRenderer*, au::LightSource*)>(0x2d6220)(this, lightSource); } // 0x2d6220
        au::LightSourceRenderer* Create(au::LightSourceRendererType type, au::LightSource* lightSource) { return il2cpp::call<au::LightSourceRenderer*(*)(LightSourceRenderer*, au::LightSourceRendererType, au::LightSource*)>(0x60f440)(this, type, lightSource); } // 0x60f440
        au::LightSourceRendererType GetPlatformType() { return il2cpp::call<au::LightSourceRendererType(*)(LightSourceRenderer*)>(0x60fa10)(this); } // 0x60fa10

    };

}
namespace ark {

        template<> struct meta_statics<::LightSourceRenderer> {
        };

}


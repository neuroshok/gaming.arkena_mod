#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Events/UnityEvent.hpp>

namespace 
{
    struct ColorTween_ColorTweenCallback : ark::meta<ColorTween_ColorTweenCallback, UnityEngine::Events::UnityEvent<UnityEngine::Color>>
    {

        void ctor() { return il2cpp::call<void(*)(ColorTween_ColorTweenCallback*)>(0x1805200)(this); } // 0x1805200

    };

}
namespace ark {

        template<> struct meta_statics<::ColorTween_ColorTweenCallback> {
        };

}


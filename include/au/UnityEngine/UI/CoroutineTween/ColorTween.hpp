#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/UI/CoroutineTween/ColorTween/ColorTweenCallback.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/UI/CoroutineTween/ColorTween/ColorTweenMode.hpp>
#include <au/UnityEngine/UI/CoroutineTween/ColorTween/ColorTweenMode.hpp>
#include <au/UnityEngine/Events/UnityAction.hpp>

namespace UnityEngine::UI::CoroutineTween
{
    struct ColorTween : ark::meta<ColorTween>
    {
        UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenCallback*NESTEDTYPE m_Target; // 0x8
        UnityEngine::Color m_StartColor; // 0xc
        UnityEngine::Color m_TargetColor; // 0x1c
        UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenMode m_TweenMode; // 0x2c
        float m_Duration; // 0x30
        bool m_IgnoreTimeScale; // 0x34

        UnityEngine::Color get_startColor() { return il2cpp::call<UnityEngine::Color(*)(ColorTween*)>(0xaa810)(this); } // 0xaa810
        void set_startColor(UnityEngine::Color value) { return il2cpp::call<void(*)(ColorTween*, UnityEngine::Color)>(0xaa8e0)(this, value); } // 0xaa8e0
        UnityEngine::Color get_targetColor() { return il2cpp::call<UnityEngine::Color(*)(ColorTween*)>(0x105300)(this); } // 0x105300
        void set_targetColor(UnityEngine::Color value) { return il2cpp::call<void(*)(ColorTween*, UnityEngine::Color)>(0x105350)(this, value); } // 0x105350
        UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenMode get_tweenMode() { return il2cpp::call<UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenMode(*)(ColorTween*)>(0x63b50)(this); } // 0x63b50
        void set_tweenMode(UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenMode value) { return il2cpp::call<void(*)(ColorTween*, UnityEngine::UI::CoroutineTween::ColorTween+ColorTweenMode)>(0x63d90)(this, value); } // 0x63d90
        void set_duration(float value) { return il2cpp::call<void(*)(ColorTween*, float)>(0x105320)(this, value); } // 0x105320
        void set_ignoreTimeScale(bool value) { return il2cpp::call<void(*)(ColorTween*, bool)>(0x105340)(this, value); } // 0x105340
        void AddOnChangedCallback(UnityEngine::Events::UnityAction<UnityEngine::Color>* callback) { return il2cpp::call<void(*)(ColorTween*, UnityEngine::Events::UnityAction<UnityEngine::Color>*)>(0x11eac0)(this, callback); } // 0x11eac0
        bool GetIgnoreTimescale() { return il2cpp::call<bool(*)(ColorTween*)>(0x105210)(this); } // 0x105210
        float GetDuration() { return il2cpp::call<float(*)(ColorTween*)>(0x105200)(this); } // 0x105200

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::CoroutineTween::ColorTween> {
        };

}


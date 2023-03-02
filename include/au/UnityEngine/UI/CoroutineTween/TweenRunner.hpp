#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/System/Collections/IEnumerator.hpp>
#include <au/UnityEngine/UI/CoroutineTween/ColorTween.hpp>

namespace UnityEngine::UI::CoroutineTween
{
    template<class... Ts>
struct TweenRunner : ark::meta<TweenRunner<Ts...>, il2cpp::Il2CppObject>
    {
        UnityEngine::MonoBehaviour* m_CoroutineContainer; // 0x8
        System::Collections::IEnumerator* m_Tween; // 0xc

        System::Collections::IEnumerator* Start(UnityEngine::UI::CoroutineTween::ColorTween tweenInfo) { return il2cpp::call<System::Collections::IEnumerator*(*)(TweenRunner*, UnityEngine::UI::CoroutineTween::ColorTween)>(0x14a3fe0)(this, tweenInfo); } // 0x14a3fe0
        void Init(UnityEngine::MonoBehaviour* coroutineContainer) { return il2cpp::call<void(*)(TweenRunner*, UnityEngine::MonoBehaviour*)>(0x2c5140)(this, coroutineContainer); } // 0x2c5140
        void StartTween(UnityEngine::UI::CoroutineTween::ColorTween info) { return il2cpp::call<void(*)(TweenRunner*, UnityEngine::UI::CoroutineTween::ColorTween)>(0x14a3e90)(this, info); } // 0x14a3e90
        void StopTween() { return il2cpp::call<void(*)(TweenRunner*)>(0x14a4150)(this); } // 0x14a4150
        void ctor() { return il2cpp::call<void(*)(TweenRunner*)>(0x2b7380)(this); } // 0x2b7380

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<UnityEngine::UI::CoroutineTween::TweenRunner<Ts...>> {
        };

}


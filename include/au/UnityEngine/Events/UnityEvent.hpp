#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Events/UnityEventBase.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Events/UnityAction.hpp>
#include <au/UnityEngine/Color.hpp>

namespace UnityEngine::Events
{
    template<class... Ts>
struct UnityEvent : ark::meta<UnityEvent<Ts...>, UnityEngine::Events::UnityEventBase>
    {
        cs::array<il2cpp::Il2CppObject>* m_InvokeArray; // 0x14

        void ctor() { return il2cpp::call<void(*)(UnityEvent*)>(0x14a5eb0)(this); } // 0x14a5eb0
        void AddListener(UnityEngine::Events::UnityAction<UnityEngine::Color>* call) { return il2cpp::call<void(*)(UnityEvent*, UnityEngine::Events::UnityAction<UnityEngine::Color>*)>(0x14a4a00)(this, call); } // 0x14a4a00
        void RemoveListener(UnityEngine::Events::UnityAction<UnityEngine::Color>* call) { return il2cpp::call<void(*)(UnityEvent*, UnityEngine::Events::UnityAction<UnityEngine::Color>*)>(0x14a5e70)(this, call); } // 0x14a5e70
        UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine::Events::UnityAction<UnityEngine::Color>* action) { return il2cpp::call<UnityEngine::Events::BaseInvokableCall*(*)(UnityEvent*, UnityEngine::Events::UnityAction<UnityEngine::Color>*)>(0x14a4ff0)(this, action); } // 0x14a4ff0
        void Invoke(UnityEngine::Color arg0) { return il2cpp::call<void(*)(UnityEvent*, UnityEngine::Color)>(0x14a52d0)(this, arg0); } // 0x14a52d0

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<UnityEngine::Events::UnityEvent<Ts...>> {
        };

}


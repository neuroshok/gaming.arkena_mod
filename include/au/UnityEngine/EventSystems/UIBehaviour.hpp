#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>

namespace UnityEngine::EventSystems
{
    struct UIBehaviour : ark::meta<UIBehaviour, UnityEngine::MonoBehaviour>
    {

        void ctor() { return il2cpp::call<void(*)(UIBehaviour*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::EventSystems::UIBehaviour> {
        };

}


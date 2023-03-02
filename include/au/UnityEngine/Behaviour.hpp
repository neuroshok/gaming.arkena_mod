#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>

namespace UnityEngine
{
    struct Behaviour : ark::meta<Behaviour, UnityEngine::Component>
    {

        bool get_enabled() { return il2cpp::call<bool(*)(Behaviour*)>(0xf4e0b0)(this); } // 0xf4e0b0
        void set_enabled(bool value) { return il2cpp::call<void(*)(Behaviour*, bool)>(0xf4e110)(this, value); } // 0xf4e110
        bool get_isActiveAndEnabled() { return il2cpp::call<bool(*)(Behaviour*)>(0xf4e0e0)(this); } // 0xf4e0e0
        void ctor() { return il2cpp::call<void(*)(Behaviour*)>(0xf4e060)(this); } // 0xf4e060

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Behaviour> {
        };

}


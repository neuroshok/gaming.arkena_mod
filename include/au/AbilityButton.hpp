#pragma once
#include <ark/class.hpp>

#include <au/ActionButton.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/AbilityButtonSettings.hpp>

namespace 
{
    struct AbilityButton : ark::meta<AbilityButton, au::ActionButton>
    {
        UnityEngine::GameObject* commsDown; // 0x3c

        void Refresh() { return il2cpp::call<void(*)(AbilityButton*)>(0x70a5e0)(this); } // 0x70a5e0
        void SetFromSettings(au::AbilityButtonSettings* settings) { return il2cpp::call<void(*)(AbilityButton*, au::AbilityButtonSettings*)>(0x70a6d0)(this, settings); } // 0x70a6d0
        void Update() { return il2cpp::call<void(*)(AbilityButton*)>(0x70a800)(this); } // 0x70a800
        void ctor() { return il2cpp::call<void(*)(AbilityButton*)>(0x578250)(this); } // 0x578250

    };

}
namespace ark {

        template<> struct meta_statics<::AbilityButton> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/TMPro/TextMeshPro.hpp>
#include <au/ActionMapGlyphDisplay.hpp>
#include <au/Logger.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Color.hpp>

namespace 
{
    struct ActionButton : ark::meta<ActionButton, UnityEngine::MonoBehaviour>
    {
        UnityEngine::SpriteRenderer* graphic; // 0xc
        UnityEngine::SpriteRenderer* usesRemainingSprite; // 0x10
        TMPro::TextMeshPro* usesRemainingText; // 0x14
        TMPro::TextMeshPro* buttonLabelText; // 0x18
        TMPro::TextMeshPro* cooldownTimerText; // 0x1c
        au::ActionMapGlyphDisplay* glyph; // 0x20
        bool isCoolingDown; // 0x24
        au::Logger* logger; // 0x28
        bool canInteract; // 0x2c
        UnityEngine::Vector3 position; // 0x30

        void Start() { return il2cpp::call<void(*)(ActionButton*)>(0x713070)(this); } // 0x713070
        bool CanInteract() { return il2cpp::call<bool(*)(ActionButton*)>(0x313330)(this); } // 0x313330
        void SetCoolDown(float timer, float maxTimer) { return il2cpp::call<void(*)(ActionButton*, float, float)>(0x712a00)(this, timer, maxTimer); } // 0x712a00
        void SetUsesRemaining(int32_t num) { return il2cpp::call<void(*)(ActionButton*, int32_t)>(0x712fe0)(this, num); } // 0x712fe0
        void SetInfiniteUses() { return il2cpp::call<void(*)(ActionButton*)>(0x69fe90)(this); } // 0x69fe90
        void SetFillUp(float timer, float maxTimer) { return il2cpp::call<void(*)(ActionButton*, float, float)>(0x712dc0)(this, timer, maxTimer); } // 0x712dc0
        void SetEnabled() { return il2cpp::call<void(*)(ActionButton*)>(0x712cb0)(this); } // 0x712cb0
        void SetDisabled() { return il2cpp::call<void(*)(ActionButton*)>(0x712ba0)(this); } // 0x712ba0
        void ToggleVisible(bool visible) { return il2cpp::call<void(*)(ActionButton*, bool)>(0x7130c0)(this, visible); } // 0x7130c0
        void Hide() { return il2cpp::call<void(*)(ActionButton*)>(0x429cd0)(this); } // 0x429cd0
        void Show() { return il2cpp::call<void(*)(ActionButton*)>(0x429d00)(this); } // 0x429d00
        void SetCooldownFill(float percentCool) { return il2cpp::call<void(*)(ActionButton*, float)>(0x712b40)(this, percentCool); } // 0x712b40
        void OverrideText(cs::string* text) { return il2cpp::call<void(*)(ActionButton*, cs::string*)>(0x7129d0)(this, text); } // 0x7129d0
        void OverrideColor(UnityEngine::Color color) { return il2cpp::call<void(*)(ActionButton*, UnityEngine::Color)>(0x7129a0)(this, color); } // 0x7129a0
        void ctor() { return il2cpp::call<void(*)(ActionButton*)>(0x713120)(this); } // 0x713120

    };

}
namespace ark {

        template<> struct meta_statics<::ActionButton> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/PowerTools/SpriteAnim.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/PlayerAnimationGroup.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/UnityEngine/AnimationClip.hpp>

namespace 
{
    struct PlayerAnimations : ark::meta<PlayerAnimations, UnityEngine::MonoBehaviour>
    {
        PowerTools::SpriteAnim* glowAnimator; // 0xc
        UnityEngine::SpriteRenderer* glowSpriteRenderer; // 0x10
        System::Collections::Generic::List<au::PlayerAnimationGroup>* animationGroups; // 0x14
        cs::array<PowerTools::SpriteAnim>* scannerAnims; // 0x18
        cs::array<UnityEngine::SpriteRenderer>* scannersImages; // 0x1c
        au::PlayerAnimationGroup* group; // 0x20
        au::PlayerBodyTypes type; // 0x24

        float get_Time() { return il2cpp::call<float(*)(PlayerAnimations*)>(0x6b6b00)(this); } // 0x6b6b00
        float get_ShapeshiftScale() { return il2cpp::call<float(*)(PlayerAnimations*)>(0x6b6ae0)(this); } // 0x6b6ae0
        PowerTools::SpriteAnim* get_Animator() { return il2cpp::call<PowerTools::SpriteAnim*(*)(PlayerAnimations*)>(0x6b6a80)(this); } // 0x6b6a80
        void SetBodyType(au::PlayerBodyTypes bodyType, UnityEngine::Vector3 flippedCosmeticOffset) { return il2cpp::call<void(*)(PlayerAnimations*, au::PlayerBodyTypes, UnityEngine::Vector3)>(0x6b67a0)(this, bodyType, flippedCosmeticOffset); } // 0x6b67a0
        cs::array<au::OverlayKillAnimation>* GetKillAnimations() { return il2cpp::call<cs::array<au::OverlayKillAnimation>*(*)(PlayerAnimations*)>(0x6b5f00)(this); } // 0x6b5f00
        bool IsPlayingRunAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b6190)(this); } // 0x6b6190
        bool IsPlayingSpawnAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b62f0)(this); } // 0x6b62f0
        bool IsPlayingClimbAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b5f20)(this); } // 0x6b5f20
        bool IsPlayingGuardianAngelIdleAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b60e0)(this); } // 0x6b60e0
        bool IsPlayingGhostIdleAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b6030)(this); } // 0x6b6030
        bool IsPlayingSomeAnimation() { return il2cpp::call<bool(*)(PlayerAnimations*)>(0x6b6240)(this); } // 0x6b6240
        void PlayRunAnimation() { return il2cpp::call<void(*)(PlayerAnimations*)>(0x6b65c0)(this); } // 0x6b65c0
        void PlayIdleAnimation() { return il2cpp::call<void(*)(PlayerAnimations*)>(0x6b6540)(this); } // 0x6b6540
        void PlayClimbAnimation(bool down) { return il2cpp::call<void(*)(PlayerAnimations*, bool)>(0x6b63a0)(this, down); } // 0x6b63a0
        void PlayGuardianAngleIdleAnimation() { return il2cpp::call<void(*)(PlayerAnimations*)>(0x6b64c0)(this); } // 0x6b64c0
        void PlayGhostIdleAnimation() { return il2cpp::call<void(*)(PlayerAnimations*)>(0x6b6440)(this); } // 0x6b6440
        System::Collections::IEnumerator* CoPlaySpawnAnimation(bool flipX) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerAnimations*, bool)>(0x6b5ea0)(this, flipX); } // 0x6b5ea0
        System::Collections::IEnumerator* CoPlayEnterVentAnimation() { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerAnimations*)>(0x6b5e00)(this); } // 0x6b5e00
        System::Collections::IEnumerator* CoPlayExitVentAnimation() { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerAnimations*)>(0x6b5e50)(this); } // 0x6b5e50
        System::Collections::IEnumerator* CoPlayCustomAnimation(UnityEngine::AnimationClip* customAnim) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerAnimations*, UnityEngine::AnimationClip*)>(0x6b5da0)(this, customAnim); } // 0x6b5da0
        void PlayScanner(bool on, bool isDead, bool flipX) { return il2cpp::call<void(*)(PlayerAnimations*, bool, bool, bool)>(0x6b6680)(this, on, isDead, flipX); } // 0x6b6680
        void ctor() { return il2cpp::call<void(*)(PlayerAnimations*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerAnimations> {
        };

}


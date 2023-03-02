#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/PowerTools/SpriteAnim.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/AnimationClip.hpp>

namespace 
{
    struct PlayerAnimationGroup : ark::meta<PlayerAnimationGroup, il2cpp::Il2CppObject>
    {
        au::PlayerBodyTypes BodyType; // 0x8
        PowerTools::SpriteAnim* SpriteAnimator; // 0xc
        System::Collections::Generic::List<PowerTools::SpriteAnimNodeSync>* NodeSyncs; // 0x10
        cs::array<au::OverlayKillAnimation>* KillAnims; // 0x14
        UnityEngine::AnimationClip* RunAnim; // 0x18
        UnityEngine::AnimationClip* IdleAnim; // 0x1c
        UnityEngine::AnimationClip* GhostIdleAnim; // 0x20
        UnityEngine::AnimationClip* EnterVentAnim; // 0x24
        UnityEngine::AnimationClip* ExitVentAnim; // 0x28
        UnityEngine::AnimationClip* SpawnAnim; // 0x2c
        UnityEngine::AnimationClip* SpawnGlowAnim; // 0x30
        UnityEngine::AnimationClip* ClimbUpAnim; // 0x34
        UnityEngine::AnimationClip* ClimbDownAnim; // 0x38
        UnityEngine::AnimationClip* GhostGuardianAngelAnim; // 0x3c
        float RunAnimTime; // 0x40
        float ShapeshiftScale; // 0x44

        void ctor() { return il2cpp::call<void(*)(PlayerAnimationGroup*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerAnimationGroup> {
        };

}


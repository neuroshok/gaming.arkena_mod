#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ScriptableObject.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/HatData.hpp>
#include <au/VisorData.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <cs/array.hpp>

namespace 
{
    struct SkinViewData : ark::meta<SkinViewData, UnityEngine::ScriptableObject>
    {
        UnityEngine::Sprite* IdleFrame; // 0xc
        UnityEngine::Sprite* EjectFrame; // 0x10
        au::HatData* RelatedHat; // 0x14
        au::VisorData* RelatedVisor; // 0x18
        bool MatchPlayerColor; // 0x1c
        UnityEngine::AnimationClip* IdleAnim; // 0x20
        UnityEngine::AnimationClip* IdleLeftAnim; // 0x24
        UnityEngine::AnimationClip* RunAnim; // 0x28
        UnityEngine::AnimationClip* RunLeftAnim; // 0x2c
        UnityEngine::AnimationClip* EnterVentAnim; // 0x30
        UnityEngine::AnimationClip* ExitVentAnim; // 0x34
        UnityEngine::AnimationClip* EnterLeftVentAnim; // 0x38
        UnityEngine::AnimationClip* ExitLeftVentAnim; // 0x3c
        UnityEngine::AnimationClip* ClimbAnim; // 0x40
        UnityEngine::AnimationClip* ClimbDownAnim; // 0x44
        UnityEngine::AnimationClip* SpawnAnim; // 0x48
        UnityEngine::AnimationClip* SpawnLeftAnim; // 0x4c
        UnityEngine::AnimationClip* KillTongueImpostor; // 0x50
        UnityEngine::AnimationClip* KillTongueVictim; // 0x54
        UnityEngine::AnimationClip* KillShootImpostor; // 0x58
        UnityEngine::AnimationClip* KillShootVictim; // 0x5c
        UnityEngine::AnimationClip* KillNeckImpostor; // 0x60
        UnityEngine::AnimationClip* KillNeckVictim; // 0x64
        UnityEngine::AnimationClip* KillStabImpostor; // 0x68
        UnityEngine::AnimationClip* KillStabVictim; // 0x6c
        UnityEngine::AnimationClip* KillRHMVictim; // 0x70
        cs::array<au::OverlayKillAnimation>* KillAnims; // 0x74

        void ctor() { return il2cpp::call<void(*)(SkinViewData*)>(0x42fd90)(this); } // 0x42fd90

    };

}
namespace ark {

        template<> struct meta_statics<::SkinViewData> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/InnerNet/InnerNetObject.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/PlayerAnimations.hpp>
#include <au/SpecialInputHandler.hpp>
#include <au/Logger.hpp>
#include <au/UnityEngine/Rigidbody2D.hpp>
#include <au/PlayerControl.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/UnityEngine/Coroutine.hpp>
#include <au/Ladder.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <cs/string.hpp>
#include <au/Ladder.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/LobbyBehaviour.hpp>

namespace 
{
    struct PlayerPhysics : ark::meta<PlayerPhysics, InnerNet::InnerNetObject>
    {
        uint8_t lastClimbLadderSid; // 0x24
        UnityEngine::AudioClip* ImpostorDiscoveredSound; // 0x28
        au::PlayerAnimations* Animations; // 0x2c
        au::SpecialInputHandler* inputHandler; // 0x30
        float Speed; // 0x34
        float GhostSpeed; // 0x38
        au::Logger* logger; // 0x3c
        UnityEngine::Rigidbody2D* body; // 0x40
        au::PlayerControl* myPlayer; // 0x44
        au::PlayerBodyTypes bodyType; // 0x48
        UnityEngine::Coroutine* petCoroutine; // 0x4c
        bool _DoingCustomAnimation_k__BackingField; // 0x50

        void RpcClimbLadder(au::Ladder* source) { return il2cpp::call<void(*)(PlayerPhysics*, au::Ladder*)>(0x4744c0)(this, source); } // 0x4744c0
        void RpcEnterVent(int32_t id) { return il2cpp::call<void(*)(PlayerPhysics*, int32_t)>(0x474580)(this, id); } // 0x474580
        void RpcExitVent(int32_t id) { return il2cpp::call<void(*)(PlayerPhysics*, int32_t)>(0x474630)(this, id); } // 0x474630
        void RpcBootFromVent(int32_t ventId) { return il2cpp::call<void(*)(PlayerPhysics*, int32_t)>(0x474390)(this, ventId); } // 0x474390
        void RpcPet(UnityEngine::Vector2 pos, UnityEngine::Vector2 petPos) { return il2cpp::call<void(*)(PlayerPhysics*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x4746e0)(this, pos, petPos); } // 0x4746e0
        void RpcCancelPet() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x474430)(this); } // 0x474430
        bool get_DoingCustomAnimation() { return il2cpp::call<bool(*)(PlayerPhysics*)>(0x474cc0)(this); } // 0x474cc0
        void set_DoingCustomAnimation(bool value) { return il2cpp::call<void(*)(PlayerPhysics*, bool)>(0x474ff0)(this, value); } // 0x474ff0
        float get_TrueSpeed() { return il2cpp::call<float(*)(PlayerPhysics*)>(0x474e60)(this); } // 0x474e60
        float get_SpeedMod() { return il2cpp::call<float(*)(PlayerPhysics*)>(0x474d00)(this); } // 0x474d00
        bool get_FlipX() { return il2cpp::call<bool(*)(PlayerPhysics*)>(0x474cd0)(this); } // 0x474cd0
        void set_FlipX(bool value) { return il2cpp::call<void(*)(PlayerPhysics*, bool)>(0x475000)(this, value); } // 0x475000
        void Awake() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x472a40)(this); } // 0x472a40
        void EnableInterpolation() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x4734e0)(this); } // 0x4734e0
        void SetBodyType(au::PlayerBodyTypes bodyType) { return il2cpp::call<void(*)(PlayerPhysics*, au::PlayerBodyTypes)>(0x4747d0)(this, bodyType); } // 0x4747d0
        void FixedUpdate() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x473600)(this); } // 0x473600
        UnityEngine::Vector2 GetVelocity() { return il2cpp::call<UnityEngine::Vector2(*)(PlayerPhysics*)>(0x473750)(this); } // 0x473750
        void SetNormalizedVelocity(UnityEngine::Vector2 direction) { return il2cpp::call<void(*)(PlayerPhysics*, UnityEngine::Vector2)>(0x474860)(this, direction); } // 0x474860
        void LateUpdate() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x473dc0)(this); } // 0x473dc0
        UnityEngine::Vector3 Vec2ToPosition(UnityEngine::Vector2 pos) { return il2cpp::call<UnityEngine::Vector3(*)(PlayerPhysics*, UnityEngine::Vector2)>(0x474ba0)(this, pos); } // 0x474ba0
        void SetSkin(cs::string* skinId, int32_t color) { return il2cpp::call<void(*)(PlayerPhysics*, cs::string*, int32_t)>(0x474a10)(this, skinId, color); } // 0x474a10
        void StartClimb(bool down) { return il2cpp::call<void(*)(PlayerPhysics*, bool)>(0x474a90)(this, down); } // 0x474a90
        void ClimbLadder(au::Ladder* source, uint8_t climbLadderSid) { return il2cpp::call<void(*)(PlayerPhysics*, au::Ladder*, uint8_t)>(0x4731b0)(this, source, climbLadderSid); } // 0x4731b0
        void PetPet(UnityEngine::Vector2 pos, UnityEngine::Vector2 petPos) { return il2cpp::call<void(*)(PlayerPhysics*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x473e50)(this, pos, petPos); } // 0x473e50
        System::Collections::IEnumerator* CoClimbLadder(au::Ladder* source, uint8_t climbLadderSid) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, au::Ladder*, uint8_t)>(0x4732e0)(this, source, climbLadderSid); } // 0x4732e0
        void ResetMoveState(bool stopCoroutines) { return il2cpp::call<void(*)(PlayerPhysics*, bool)>(0x4740c0)(this, stopCoroutines); } // 0x4740c0
        void ResetAnimState() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x473ee0)(this); } // 0x473ee0
        UnityEngine::Vector2 get_Velocity() { return il2cpp::call<UnityEngine::Vector2(*)(PlayerPhysics*)>(0x473750)(this); } // 0x473750
        void HandleAnimation(bool amDead) { return il2cpp::call<void(*)(PlayerPhysics*, bool)>(0x473780)(this, amDead); } // 0x473780
        void AnimateCustom(UnityEngine::AnimationClip* anim) { return il2cpp::call<void(*)(PlayerPhysics*, UnityEngine::AnimationClip*)>(0x4729d0)(this, anim); } // 0x4729d0
        System::Collections::IEnumerator* CoAnimateCustom(UnityEngine::AnimationClip* anim) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, UnityEngine::AnimationClip*)>(0x473280)(this, anim); } // 0x473280
        System::Collections::IEnumerator* CoSpawnPlayer(au::LobbyBehaviour* lobby) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, au::LobbyBehaviour*)>(0x473480)(this, lobby); } // 0x473480
        void ExitAllVents() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x473510)(this); } // 0x473510
        System::Collections::IEnumerator* CoPet(UnityEngine::Vector2 pos, UnityEngine::Vector2 petPos) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x473400)(this, pos, petPos); } // 0x473400
        void CheckCancelPetting() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x472f60)(this); } // 0x472f60
        void CancelPet() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x472e10)(this); } // 0x472e10
        System::Collections::IEnumerator* CoEnterVent(int32_t id) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, int32_t)>(0x473340)(this, id); } // 0x473340
        System::Collections::IEnumerator* CoExitVent(int32_t id) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, int32_t)>(0x4733a0)(this, id); } // 0x4733a0
        System::Collections::IEnumerator* WalkPlayerTo(UnityEngine::Vector2 worldPos, float tolerance, float speedMul) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPhysics*, UnityEngine::Vector2, float, float)>(0x474bd0)(this, worldPos, tolerance, speedMul); } // 0x474bd0
        void BootFromVent(int32_t ventId) { return il2cpp::call<void(*)(PlayerPhysics*, int32_t)>(0x472be0)(this, ventId); } // 0x472be0
        void ctor() { return il2cpp::call<void(*)(PlayerPhysics*)>(0x474c50)(this); } // 0x474c50

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerPhysics> {
        };

}


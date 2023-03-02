#pragma once
#include <ark/class.hpp>

#include <au/PowerTools/SpriteAnimEventHandler.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/UnityEngine/RuntimeAnimatorController.hpp>
#include <au/UnityEngine/Animator.hpp>
#include <au/UnityEngine/AnimatorOverrideController.hpp>
#include <au/PowerTools/SpriteAnimNodes.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <cs/string.hpp>

namespace PowerTools
{
    struct SpriteAnim : ark::meta<SpriteAnim, PowerTools::SpriteAnimEventHandler>
    {
        static cs::string* STATE_NAME(); // 0x0
        static cs::string* CONTROLLER_PATH(); // 0x4
        static UnityEngine::RuntimeAnimatorController* m_sharedAnimatorController(); // 0x8
        UnityEngine::AnimationClip* m_defaultAnim; // 0x14
        UnityEngine::Animator* m_animator; // 0x18
        UnityEngine::AnimatorOverrideController* m_controller; // 0x1c
        PowerTools::SpriteAnimNodes* m_nodes; // 0x20
        System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<UnityEngine::AnimationClip, UnityEngine::AnimationClip>>* m_clipPairList; // 0x24
        UnityEngine::AnimationClip* m_currAnim; // 0x28
        float m_speed; // 0x2c
        bool m_initialized; // 0x30

        bool get_Playing() { return il2cpp::call<bool(*)(SpriteAnim*)>(0x6ccbe0)(this); } // 0x6ccbe0
        bool get_Paused() { return il2cpp::call<bool(*)(SpriteAnim*)>(0x6cbee0)(this); } // 0x6cbee0
        void set_Paused(bool value) { return il2cpp::call<void(*)(SpriteAnim*, bool)>(0x6ccd40)(this, value); } // 0x6ccd40
        float get_Speed() { return il2cpp::call<float(*)(SpriteAnim*)>(0x355b70)(this); } // 0x355b70
        void set_Speed(float value) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6cc850)(this, value); } // 0x6cc850
        int32_t get_FrameTime() { return il2cpp::call<int32_t(*)(SpriteAnim*)>(0x6ccaf0)(this); } // 0x6ccaf0
        void set_FrameTime(int32_t value) { return il2cpp::call<void(*)(SpriteAnim*, int32_t)>(0x6ccce0)(this, value); } // 0x6ccce0
        float get_Time() { return il2cpp::call<float(*)(SpriteAnim*)>(0x6cccd0)(this); } // 0x6cccd0
        void set_Time(float value) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6ccd90)(this, value); } // 0x6ccd90
        float get_NormalizedTime() { return il2cpp::call<float(*)(SpriteAnim*)>(0x6ccb20)(this); } // 0x6ccb20
        void set_NormalizedTime(float value) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6ccd20)(this, value); } // 0x6ccd20
        UnityEngine::AnimationClip* get_Clip() { return il2cpp::call<UnityEngine::AnimationClip*(*)(SpriteAnim*)>(0x302440)(this); } // 0x302440
        cs::string* get_ClipName() { return il2cpp::call<cs::string*(*)(SpriteAnim*)>(0x6cca60)(this); } // 0x6cca60
        void Play(UnityEngine::AnimationClip* anim, float speed) { return il2cpp::call<void(*)(SpriteAnim*, UnityEngine::AnimationClip*, float)>(0x6cc170)(this, anim, speed); } // 0x6cc170
        void Stop() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc960)(this); } // 0x6cc960
        void Pause() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc140)(this); } // 0x6cc140
        void Resume() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc720)(this); } // 0x6cc720
        UnityEngine::AnimationClip* GetCurrentAnimation() { return il2cpp::call<UnityEngine::AnimationClip*(*)(SpriteAnim*)>(0x302440)(this); } // 0x302440
        bool IsPlaying(UnityEngine::AnimationClip* clip) { return il2cpp::call<bool(*)(SpriteAnim*, UnityEngine::AnimationClip*)>(0x6cc050)(this, clip); } // 0x6cc050
        bool IsPlaying(cs::string* animName) { return il2cpp::call<bool(*)(SpriteAnim*, cs::string*)>(0x6cbf70)(this, animName); } // 0x6cbf70
        bool IsPaused() { return il2cpp::call<bool(*)(SpriteAnim*)>(0x6cbee0)(this); } // 0x6cbee0
        void SetSpeed(float speed) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6cc850)(this, speed); } // 0x6cc850
        float GetSpeed() { return il2cpp::call<float(*)(SpriteAnim*)>(0x355b70)(this); } // 0x355b70
        float GetTime() { return il2cpp::call<float(*)(SpriteAnim*)>(0x6cbc70)(this); } // 0x6cbc70
        void SetTime(float time) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6cc8b0)(this, time); } // 0x6cc8b0
        float GetNormalisedTime() { return il2cpp::call<float(*)(SpriteAnim*)>(0x6cbbc0)(this); } // 0x6cbbc0
        void SetNormalizedTime(float ratio) { return il2cpp::call<void(*)(SpriteAnim*, float)>(0x6cc750)(this, ratio); } // 0x6cc750
        void Initialize() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cbd30)(this); } // 0x6cbd30
        void Awake() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cbb90)(this); } // 0x6cbb90
        void Reset() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc5b0)(this); } // 0x6cc5b0
        void ctor() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc9f0)(this); } // 0x6cc9f0
        void cctor() { return il2cpp::call<void(*)(SpriteAnim*)>(0x6cc990)(this); } // 0x6cc990

    };

}
namespace ark {

        template<> struct meta_statics<PowerTools::SpriteAnim> {
        cs::string* STATE_NAME; // 0x0
        cs::string* CONTROLLER_PATH; // 0x4
        UnityEngine::RuntimeAnimatorController* m_sharedAnimatorController; // 0x8
        };

}



cs::string* PowerTools::SpriteAnim::STATE_NAME() { return statics()->STATE_NAME; }; // 0x0

cs::string* PowerTools::SpriteAnim::CONTROLLER_PATH() { return statics()->CONTROLLER_PATH; }; // 0x4

UnityEngine::RuntimeAnimatorController* PowerTools::SpriteAnim::m_sharedAnimatorController() { return statics()->m_sharedAnimatorController; }; // 0x8
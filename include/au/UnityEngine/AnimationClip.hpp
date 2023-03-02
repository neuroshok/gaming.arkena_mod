#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Motion.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/WrapMode.hpp>
#include <au/UnityEngine/Bounds.hpp>
#include <au/UnityEngine/AnimationEvent.hpp>
#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <au/UnityEngine/Bounds.hpp>

namespace UnityEngine
{
    struct AnimationClip : ark::meta<AnimationClip, UnityEngine::Motion>
    {

        void ctor() { return il2cpp::call<void(*)(AnimationClip*)>(0x1a95f50)(this); } // 0x1a95f50
        void Internal_CreateAnimationClip(UnityEngine::AnimationClip* self) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::AnimationClip*)>(0x1a95e10)(this, self); } // 0x1a95e10
        void SampleAnimation(UnityEngine::GameObject* go, float time) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::GameObject*, float)>(0x1a95e80)(this, go, time); } // 0x1a95e80
        void SampleAnimation(UnityEngine::GameObject* go, UnityEngine::AnimationClip* clip, float inTime, UnityEngine::WrapMode wrapMode) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::GameObject*, UnityEngine::AnimationClip*, float, UnityEngine::WrapMode)>(0x1a95e40)(this, go, clip, inTime, wrapMode); } // 0x1a95e40
        float get_length() { return il2cpp::call<float(*)(AnimationClip*)>(0x1a961f0)(this); } // 0x1a961f0
        float get_startTime() { return il2cpp::call<float(*)(AnimationClip*)>(0x1a96290)(this); } // 0x1a96290
        float get_stopTime() { return il2cpp::call<float(*)(AnimationClip*)>(0x1a962c0)(this); } // 0x1a962c0
        float get_frameRate() { return il2cpp::call<float(*)(AnimationClip*)>(0x1a96070)(this); } // 0x1a96070
        void set_frameRate(float value) { return il2cpp::call<void(*)(AnimationClip*, float)>(0x1a96320)(this, value); } // 0x1a96320
        void SetCurve(cs::string* relativePath, System::Type* type, cs::string* propertyName, UnityEngine::AnimationCurve* curve) { return il2cpp::call<void(*)(AnimationClip*, cs::string*, System::Type*, cs::string*, UnityEngine::AnimationCurve*)>(0x1a95ee0)(this, relativePath, type, propertyName, curve); } // 0x1a95ee0
        void EnsureQuaternionContinuity() { return il2cpp::call<void(*)(AnimationClip*)>(0x1a95db0)(this); } // 0x1a95db0
        void ClearCurves() { return il2cpp::call<void(*)(AnimationClip*)>(0x1a95d80)(this); } // 0x1a95d80
        UnityEngine::WrapMode get_wrapMode() { return il2cpp::call<UnityEngine::WrapMode(*)(AnimationClip*)>(0x1a962f0)(this); } // 0x1a962f0
        void set_wrapMode(UnityEngine::WrapMode value) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::WrapMode)>(0x1a963f0)(this, value); } // 0x1a963f0
        UnityEngine::Bounds get_localBounds() { return il2cpp::call<UnityEngine::Bounds(*)(AnimationClip*)>(0x1a96250)(this); } // 0x1a96250
        void set_localBounds(UnityEngine::Bounds value) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::Bounds)>(0x1a963c0)(this, value); } // 0x1a963c0
        bool get_legacy() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a961c0)(this); } // 0x1a961c0
        void set_legacy(bool value) { return il2cpp::call<void(*)(AnimationClip*, bool)>(0x1a96360)(this, value); } // 0x1a96360
        bool get_humanMotion() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a96190)(this); } // 0x1a96190
        bool get_empty() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a95fc0)(this); } // 0x1a95fc0
        bool get_hasGenericRootTransform() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a960a0)(this); } // 0x1a960a0
        bool get_hasMotionFloatCurves() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a96100)(this); } // 0x1a96100
        bool get_hasMotionCurves() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a960d0)(this); } // 0x1a960d0
        bool get_hasRootCurves() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a96130)(this); } // 0x1a96130
        bool get_hasRootMotion() { return il2cpp::call<bool(*)(AnimationClip*)>(0x1a96160)(this); } // 0x1a96160
        void AddEvent(UnityEngine::AnimationEvent* evt) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::AnimationEvent*)>(0x1a95d00)(this, evt); } // 0x1a95d00
        void AddEventInternal(il2cpp::Il2CppObject* evt) { return il2cpp::call<void(*)(AnimationClip*, il2cpp::Il2CppObject*)>(0x1a95cd0)(this, evt); } // 0x1a95cd0
        cs::array<UnityEngine::AnimationEvent>* get_events() { return il2cpp::call<cs::array<UnityEngine::AnimationEvent>*(*)(AnimationClip*)>(0x1a96000)(this); } // 0x1a96000
        void set_events(cs::array<UnityEngine::AnimationEvent>* value) { return il2cpp::call<void(*)(AnimationClip*, cs::array<UnityEngine::AnimationEvent>*)>(0x1a95f20)(this, value); } // 0x1a95f20
        void SetEventsInternal(System::Array* value) { return il2cpp::call<void(*)(AnimationClip*, System::Array*)>(0x1a95f20)(this, value); } // 0x1a95f20
        System::Array* GetEventsInternal() { return il2cpp::call<System::Array*(*)(AnimationClip*)>(0x1a95de0)(this); } // 0x1a95de0
        void get_localBounds_Injected(UnityEngine::Bounds ret) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::Bounds)>(0x1a96220)(this, ret); } // 0x1a96220
        void set_localBounds_Injected(UnityEngine::Bounds value) { return il2cpp::call<void(*)(AnimationClip*, UnityEngine::Bounds)>(0x1a96390)(this, value); } // 0x1a96390

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimationClip> {
        };

}


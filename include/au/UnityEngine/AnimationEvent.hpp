#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/AnimationEventSource.hpp>
#include <au/UnityEngine/AnimationState.hpp>
#include <au/UnityEngine/AnimatorStateInfo.hpp>
#include <au/UnityEngine/AnimatorClipInfo.hpp>

namespace UnityEngine
{
    struct AnimationEvent : ark::meta<AnimationEvent, il2cpp::Il2CppObject>
    {
        float m_Time; // 0x8
        cs::string* m_FunctionName; // 0xc
        cs::string* m_StringParameter; // 0x10
        UnityEngine::Object* m_ObjectReferenceParameter; // 0x14
        float m_FloatParameter; // 0x18
        int32_t m_IntParameter; // 0x1c
        int32_t m_MessageOptions; // 0x20
        UnityEngine::AnimationEventSource m_Source; // 0x24
        UnityEngine::AnimationState* m_StateSender; // 0x28
        UnityEngine::AnimatorStateInfo m_AnimatorStateInfo; // 0x2c
        UnityEngine::AnimatorClipInfo m_AnimatorClipInfo; // 0x50

        void ctor() { return il2cpp::call<void(*)(AnimationEvent*)>(0x1a96420)(this); } // 0x1a96420

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimationEvent> {
        };

}


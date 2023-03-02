#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>

namespace UnityEngine
{
    struct RuntimeAnimatorController : ark::meta<RuntimeAnimatorController, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(RuntimeAnimatorController*)>(0x1a9bab0)(this); } // 0x1a9bab0
        cs::array<UnityEngine::AnimationClip>* get_animationClips() { return il2cpp::call<cs::array<UnityEngine::AnimationClip>*(*)(RuntimeAnimatorController*)>(0x1a9bb00)(this); } // 0x1a9bb00

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::RuntimeAnimatorController> {
        };

}


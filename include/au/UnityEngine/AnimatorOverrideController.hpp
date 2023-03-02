#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/RuntimeAnimatorController.hpp>
#include <au/UnityEngine/AnimatorOverrideController/OnOverrideControllerDirtyCallback.hpp>
#include <au/UnityEngine/AnimatorOverrideController.hpp>
#include <au/UnityEngine/RuntimeAnimatorController.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/IList.hpp>
#include <au/UnityEngine/AnimatorOverrideController.hpp>

namespace UnityEngine
{
    struct AnimatorOverrideController : ark::meta<AnimatorOverrideController, UnityEngine::RuntimeAnimatorController>
    {
        UnityEngine::AnimatorOverrideController+OnOverrideControllerDirtyCallback*NESTEDTYPE OnOverrideControllerDirty; // 0xc

        void ctor() { return il2cpp::call<void(*)(AnimatorOverrideController*)>(0x1a97830)(this); } // 0x1a97830
        void Internal_Create(UnityEngine::AnimatorOverrideController* self, UnityEngine::RuntimeAnimatorController* controller) { return il2cpp::call<void(*)(AnimatorOverrideController*, UnityEngine::AnimatorOverrideController*, UnityEngine::RuntimeAnimatorController*)>(0x1a97760)(this, self, controller); } // 0x1a97760
        void set_runtimeAnimatorController(UnityEngine::RuntimeAnimatorController* value) { return il2cpp::call<void(*)(AnimatorOverrideController*, UnityEngine::RuntimeAnimatorController*)>(0x1a978e0)(this, value); } // 0x1a978e0
        void SetClip(UnityEngine::AnimationClip* originalClip, UnityEngine::AnimationClip* overrideClip, bool notify) { return il2cpp::call<void(*)(AnimatorOverrideController*, UnityEngine::AnimationClip*, UnityEngine::AnimationClip*, bool)>(0x1a977f0)(this, originalClip, overrideClip, notify); } // 0x1a977f0
        void SendNotification() { return il2cpp::call<void(*)(AnimatorOverrideController*)>(0x1a977c0)(this); } // 0x1a977c0
        UnityEngine::AnimationClip* GetOriginalClip(int32_t index) { return il2cpp::call<UnityEngine::AnimationClip*(*)(AnimatorOverrideController*, int32_t)>(0x1a97570)(this, index); } // 0x1a97570
        UnityEngine::AnimationClip* GetOverrideClip(UnityEngine::AnimationClip* originalClip) { return il2cpp::call<UnityEngine::AnimationClip*(*)(AnimatorOverrideController*, UnityEngine::AnimationClip*)>(0x1a975a0)(this, originalClip); } // 0x1a975a0
        int32_t get_overridesCount() { return il2cpp::call<int32_t(*)(AnimatorOverrideController*)>(0x1a978b0)(this); } // 0x1a978b0
        void GetOverrides(System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<UnityEngine::AnimationClip, UnityEngine::AnimationClip>>* overrides) { return il2cpp::call<void(*)(AnimatorOverrideController*, System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<UnityEngine::AnimationClip, UnityEngine::AnimationClip>>*)>(0x1a975d0)(this, overrides); } // 0x1a975d0
        void ApplyOverrides(System::Collections::Generic::IList<System::Collections::Generic::KeyValuePair<UnityEngine::AnimationClip, UnityEngine::AnimationClip>>* overrides) { return il2cpp::call<void(*)(AnimatorOverrideController*, System::Collections::Generic::IList<System::Collections::Generic::KeyValuePair<UnityEngine::AnimationClip, UnityEngine::AnimationClip>>*)>(0x1a97350)(this, overrides); } // 0x1a97350
        void OnInvalidateOverrideController(UnityEngine::AnimatorOverrideController* controller) { return il2cpp::call<void(*)(AnimatorOverrideController*, UnityEngine::AnimatorOverrideController*)>(0x1a97790)(this, controller); } // 0x1a97790

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimatorOverrideController> {
        };

}


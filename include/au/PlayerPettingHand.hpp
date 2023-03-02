#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/PowerTools/SpriteAnim.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/PetBehaviour.hpp>

namespace 
{
    struct PlayerPettingHand : ark::meta<PlayerPettingHand, UnityEngine::MonoBehaviour>
    {
        UnityEngine::SpriteRenderer* HandSprite; // 0xc
        PowerTools::SpriteAnim* HandSpriteAnim; // 0x10
        UnityEngine::AnimationClip* PetClip; // 0x14

        void StartPet(au::PetBehaviour* pet) { return il2cpp::call<void(*)(PlayerPettingHand*, au::PetBehaviour*)>(0x4727a0)(this, pet); } // 0x4727a0
        System::Collections::IEnumerator* WaitForPetAnimStart(au::PetBehaviour* pet) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPettingHand*, au::PetBehaviour*)>(0x472920)(this, pet); } // 0x472920
        System::Collections::IEnumerator* WaitUntilFinishedPetting() { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerPettingHand*)>(0x472980)(this); } // 0x472980
        void StopPetting() { return il2cpp::call<void(*)(PlayerPettingHand*)>(0x429cd0)(this); } // 0x429cd0
        void ctor() { return il2cpp::call<void(*)(PlayerPettingHand*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerPettingHand> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/InnerNet/InnerNetObject.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>

namespace 
{
    struct LobbyBehaviour : ark::meta<LobbyBehaviour, InnerNet::InnerNetObject>
    {
        static au::LobbyBehaviour* Instance(); // 0x0
        UnityEngine::AudioClip* SpawnSound; // 0x24
        UnityEngine::AnimationClip* SpawnInClip; // 0x28
        cs::array<UnityEngine::Vector2>* SpawnPositions; // 0x2c
        UnityEngine::AudioClip* DropShipSound; // 0x30
        cs::array<au::SkeldShipRoom>* AllRooms; // 0x34
        float timer; // 0x38

        void Start() { return il2cpp::call<void(*)(LobbyBehaviour*)>(0x612770)(this); } // 0x612770
        System::Collections::IEnumerator* DelayPlayDropshipAmbience() { return il2cpp::call<System::Collections::IEnumerator*(*)(LobbyBehaviour*)>(0x612470)(this); } // 0x612470
        void FixedUpdate() { return il2cpp::call<void(*)(LobbyBehaviour*)>(0x6124c0)(this); } // 0x6124c0
        void ctor() { return il2cpp::call<void(*)(LobbyBehaviour*)>(0x6128a0)(this); } // 0x6128a0

    };

}
namespace ark {

        template<> struct meta_statics<::LobbyBehaviour> {
        au::LobbyBehaviour* Instance; // 0x0
        };

}



au::LobbyBehaviour* ::LobbyBehaviour::Instance() { return statics()->Instance; }; // 0x0
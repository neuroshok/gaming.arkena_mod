#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/TransitionType.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/PlayerTask.hpp>
#include <au/NormalPlayerTask.hpp>
#include <au/Console.hpp>
#include <au/Minigame/CloseState.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/SpecialInputHandler.hpp>
#include <au/Logger.hpp>
#include <au/Console.hpp>

namespace 
{
    struct Minigame : ark::meta<Minigame, UnityEngine::MonoBehaviour>
    {
        static au::Minigame* Instance(); // 0x0
        au::TransitionType TransType; // 0xc
        UnityEngine::Vector2 TargetPosition; // 0x10
        au::PlayerTask* MyTask; // 0x18
        au::NormalPlayerTask* MyNormTask; // 0x1c
        au::Console* _Console_k__BackingField; // 0x20
        Minigame+CloseState amClosing; // 0x24
        bool amOpening; // 0x28
        UnityEngine::AudioClip* OpenSound; // 0x2c
        UnityEngine::AudioClip* CloseSound; // 0x30
        au::SpecialInputHandler* inputHandler; // 0x34
        au::Logger* logger; // 0x38

        au::TaskTypes get_TaskType() { return il2cpp::call<au::TaskTypes(*)(Minigame*)>(0x6a9330)(this); } // 0x6a9330
        au::Console* get_Console() { return il2cpp::call<au::Console*(*)(Minigame*)>(0x2d8c00)(this); } // 0x2d8c00
        void set_Console(au::Console* value) { return il2cpp::call<void(*)(Minigame*, au::Console*)>(0x2d8b20)(this, value); } // 0x2d8b20
        int32_t get_ConsoleId() { return il2cpp::call<int32_t(*)(Minigame*)>(0x6a92c0)(this); } // 0x6a92c0
        System::Collections::IEnumerator* CoStartClose(float duration) { return il2cpp::call<System::Collections::IEnumerator*(*)(Minigame*, float)>(0x6a9070)(this, duration); } // 0x6a9070
        void Close(bool allowMovement) { return il2cpp::call<void(*)(Minigame*, bool)>(0x6a8d00)(this, allowMovement); } // 0x6a8d00
        void ForceClose() { return il2cpp::call<void(*)(Minigame*)>(0x6a90d0)(this); } // 0x6a90d0
        void SetupInput(bool disableCursor, bool suppressInGamePlayerList) { return il2cpp::call<void(*)(Minigame*, bool, bool)>(0x6a9140)(this, disableCursor, suppressInGamePlayerList); } // 0x6a9140
        void ctor() { return il2cpp::call<void(*)(Minigame*)>(0x6a9250)(this); } // 0x6a9250

    };

}
namespace ark {

        template<> struct meta_statics<::Minigame> {
        au::Minigame* Instance; // 0x0
        };

}



au::Minigame* ::Minigame::Instance() { return statics()->Instance; }; // 0x0
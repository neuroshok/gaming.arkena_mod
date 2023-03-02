#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/SystemTypes.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/PlayerControl.hpp>

namespace 
{
    struct Console : ark::meta<Console, UnityEngine::MonoBehaviour>
    {
        float usableDistance; // 0xc
        int32_t ConsoleId; // 0x10
        bool onlyFromBelow; // 0x14
        bool onlySameRoom; // 0x15
        bool checkWalls; // 0x16
        bool GhostsIgnored; // 0x17
        bool AllowImpostor; // 0x18
        au::SystemTypes Room; // 0x19
        cs::array<au::TaskTypes>* TaskTypes; // 0x1c
        cs::array<au::TaskSet>* ValidTasks; // 0x20
        UnityEngine::SpriteRenderer* Image; // 0x24

        bool InRoom(UnityEngine::Vector2 truePos) { return il2cpp::call<bool(*)(Console*, UnityEngine::Vector2)>(0x3d14c0)(this, truePos); } // 0x3d14c0
        au::PlayerTask* FindTask(au::PlayerControl* pc) { return il2cpp::call<au::PlayerTask*(*)(Console*, au::PlayerControl*)>(0x3d1400)(this, pc); } // 0x3d1400
        void ctor() { return il2cpp::call<void(*)(Console*)>(0x3d1a20)(this); } // 0x3d1a20

    };

}
namespace ark {

        template<> struct meta_statics<::Console> {
        };

}


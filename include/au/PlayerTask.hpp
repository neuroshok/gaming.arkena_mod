#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/PlayerControl.hpp>
#include <au/SystemTypes.hpp>
#include <au/TaskTypes.hpp>
#include <au/Minigame.hpp>
#include <au/PlayerTask.hpp>
#include <au/System/Func.hpp>

namespace 
{
    struct PlayerTask : ark::meta<PlayerTask, UnityEngine::MonoBehaviour>
    {
        int32_t _Index_k__BackingField; // 0xc
        uint32_t _Id_k__BackingField; // 0x10
        au::PlayerControl* _Owner_k__BackingField; // 0x14
        au::SystemTypes StartAt; // 0x18
        au::TaskTypes TaskType; // 0x1c
        au::Minigame* MinigamePrefab; // 0x20
        bool HasLocation; // 0x24
        bool LocationDirty; // 0x25

        int32_t get_Index() { return il2cpp::call<int32_t(*)(PlayerTask*)>(0x2c50f0)(this); } // 0x2c50f0
        void set_Index(int32_t value) { return il2cpp::call<void(*)(PlayerTask*, int32_t)>(0x2c5120)(this, value); } // 0x2c5120
        uint32_t get_Id() { return il2cpp::call<uint32_t(*)(PlayerTask*)>(0x2b40b0)(this); } // 0x2b40b0
        void set_Id(uint32_t value) { return il2cpp::call<void(*)(PlayerTask*, uint32_t)>(0x2c4370)(this, value); } // 0x2c4370
        au::PlayerControl* get_Owner() { return il2cpp::call<au::PlayerControl*(*)(PlayerTask*)>(0x2c5100)(this); } // 0x2c5100
        void set_Owner(au::PlayerControl* value) { return il2cpp::call<void(*)(PlayerTask*, au::PlayerControl*)>(0x2c5130)(this, value); } // 0x2c5130
        System::Collections::Generic::List<UnityEngine::Vector2>* get_Locations() { return il2cpp::call<System::Collections::Generic::List<UnityEngine::Vector2>*(*)(PlayerTask*)>(0x47cab0)(this); } // 0x47cab0
        bool TaskIsEmergency(au::PlayerTask* arg) { return il2cpp::call<bool(*)(PlayerTask*, au::PlayerTask*)>(0x47c960)(this, arg); } // 0x47c960
        System::Collections::Generic::List<au::Console>* FindConsoles() { return il2cpp::call<System::Collections::Generic::List<au::Console>*(*)(PlayerTask*)>(0x47c550)(this); } // 0x47c550
        Typeid_30 GetOrCreateTask(au::PlayerControl* localPlayer, int32_t insertAt) { return il2cpp::call<Typeid_30(*)(PlayerTask*, au::PlayerControl*, int32_t)>(0xa4ae0000)(this, localPlayer, insertAt); } // 0xa4ae0000
        bool DestroyTasksOfType(au::PlayerControl* localPlayer) { return il2cpp::call<bool(*)(PlayerTask*, au::PlayerControl*)>(0xa4ae0000)(this, localPlayer); } // 0xa4ae0000
        bool PlayerHasTaskOfType(au::PlayerControl* localPlayer) { return il2cpp::call<bool(*)(PlayerTask*, au::PlayerControl*)>(0xa4ae0000)(this, localPlayer); } // 0xa4ae0000
        System::Collections::Generic::List<UnityEngine::Vector2>* FindValidConsolesPositions() { return il2cpp::call<System::Collections::Generic::List<UnityEngine::Vector2>*(*)(PlayerTask*)>(0x47c800)(this); } // 0x47c800
        au::Console* FindSpecialConsole(System::Func<au::Console, bool>* func) { return il2cpp::call<au::Console*(*)(PlayerTask*, System::Func<au::Console, bool>*)>(0x47c750)(this, func); } // 0x47c750
        au::Console* FindObjectPos() { return il2cpp::call<au::Console*(*)(PlayerTask*)>(0x47c640)(this); } // 0x47c640
        System::Collections::Generic::List<UnityEngine::Vector2>* FindConsolesPos() { return il2cpp::call<System::Collections::Generic::List<UnityEngine::Vector2>*(*)(PlayerTask*)>(0x47c3d0)(this); } // 0x47c3d0
        bool AllTasksCompleted(au::PlayerControl* player) { return il2cpp::call<bool(*)(PlayerTask*, au::PlayerControl*)>(0x47c2f0)(this, player); } // 0x47c2f0
        void ctor() { return il2cpp::call<void(*)(PlayerTask*)>(0x47ca90)(this); } // 0x47ca90

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerTask> {
        };

}


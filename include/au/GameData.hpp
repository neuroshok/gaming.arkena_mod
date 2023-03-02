#pragma once
#include <ark/class.hpp>

#include <au/InnerNet/InnerNetObject.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/RoleBehaviour.hpp>
#include <au/System/Random.hpp>
#include <au/PlayerControl.hpp>
#include <cs/string.hpp>

namespace 
{
    struct GameData : ark::meta<GameData, InnerNet::InnerNetObject>
    {
        static au::GameData* Instance(); // 0x0
        static System::Random* randy(); // 0x4
        System::Collections::Generic::List<GameData+PlayerInfoNESTEDTYPE>* AllPlayers; // 0x24
        int32_t TotalTasks; // 0x28
        int32_t CompletedTasks; // 0x2c
        au::RoleBehaviour* DefaultRole; // 0x30

        void RpcSetTasks(uint8_t playerId, cs::array<uint8_t>* taskTypeIds) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::array<uint8_t>*)>(0x586ae0)(this, playerId, taskTypeIds); } // 0x586ae0
        int32_t get_PlayerCount() { return il2cpp::call<int32_t(*)(GameData*)>(0x587b80)(this); } // 0x587b80
        void Awake() { return il2cpp::call<void(*)(GameData*)>(0x585c90)(this); } // 0x585c90
        void SetDirty() { return il2cpp::call<void(*)(GameData*)>(0x586df0)(this); } // 0x586df0
        GameData+PlayerInfo*NESTEDTYPE GetHost() { return il2cpp::call<GameData+PlayerInfo*NESTEDTYPE(*)(GameData*)>(0x586310)(this); } // 0x586310
        int8_t GetAvailableId() { return il2cpp::call<int8_t(*)(GameData*)>(0x586240)(this); } // 0x586240
        GameData+PlayerInfo*NESTEDTYPE GetPlayerById(uint8_t id) { return il2cpp::call<GameData+PlayerInfo*NESTEDTYPE(*)(GameData*, uint8_t)>(0x5863b0)(this, id); } // 0x5863b0
        void UpdateName(uint8_t playerId, cs::string* name, bool dontCensor) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*, bool)>(0x5878f0)(this, playerId, name, dontCensor); } // 0x5878f0
        void UpdateLevel(uint8_t playerId, uint32_t level) { return il2cpp::call<void(*)(GameData*, uint8_t, uint32_t)>(0x587850)(this, playerId, level); } // 0x587850
        void UpdateColor(uint8_t playerId, int32_t color) { return il2cpp::call<void(*)(GameData*, uint8_t, int32_t)>(0x587740)(this, playerId, color); } // 0x587740
        void UpdateHat(uint8_t playerId, cs::string* hat) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*)>(0x5877f0)(this, playerId, hat); } // 0x5877f0
        void UpdatePet(uint8_t playerId, cs::string* petId) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*)>(0x5879b0)(this, playerId, petId); } // 0x5879b0
        void UpdateSkin(uint8_t playerId, cs::string* skin) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*)>(0x587a10)(this, playerId, skin); } // 0x587a10
        void UpdateVisor(uint8_t playerId, cs::string* visor) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*)>(0x587a70)(this, playerId, visor); } // 0x587a70
        void UpdateNamePlate(uint8_t playerId, cs::string* namePlate) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::string*)>(0x587890)(this, playerId, namePlate); } // 0x587890
        GameData+PlayerInfo*NESTEDTYPE AddPlayer(au::PlayerControl* pc) { return il2cpp::call<GameData+PlayerInfo*NESTEDTYPE(*)(GameData*, au::PlayerControl*)>(0x585b90)(this, pc); } // 0x585b90
        bool RemovePlayer(uint8_t playerId) { return il2cpp::call<bool(*)(GameData*, uint8_t)>(0x586a10)(this, playerId); } // 0x586a10
        void RecomputeTaskCounts() { return il2cpp::call<void(*)(GameData*)>(0x5867e0)(this); } // 0x5867e0
        void TutOnlyRemoveTask(uint8_t playerId, uint32_t taskId) { return il2cpp::call<void(*)(GameData*, uint8_t, uint32_t)>(0x5876d0)(this, playerId, taskId); } // 0x5876d0
        uint32_t TutOnlyAddTask(uint8_t playerId) { return il2cpp::call<uint32_t(*)(GameData*, uint8_t)>(0x587550)(this, playerId); } // 0x587550
        void SetTasks(uint8_t playerId, cs::array<uint8_t>* taskTypeIds) { return il2cpp::call<void(*)(GameData*, uint8_t, cs::array<uint8_t>*)>(0x586e10)(this, playerId, taskTypeIds); } // 0x586e10
        void CompleteTask(au::PlayerControl* pc, uint32_t taskId) { return il2cpp::call<void(*)(GameData*, au::PlayerControl*, uint32_t)>(0x585eb0)(this, pc, taskId); } // 0x585eb0
        void ShowNotification(cs::string* playerName, au::DisconnectReasons reason) { return il2cpp::call<void(*)(GameData*, cs::string*, au::DisconnectReasons)>(0x587110)(this, playerName, reason); } // 0x587110
        void ctor() { return il2cpp::call<void(*)(GameData*)>(0x587b20)(this); } // 0x587b20
        void cctor() { return il2cpp::call<void(*)(GameData*)>(0x587ad0)(this); } // 0x587ad0

    };

}
namespace ark {

        template<> struct meta_statics<::GameData> {
        au::GameData* Instance; // 0x0
        System::Random* randy; // 0x4
        };

}



au::GameData* ::GameData::Instance() { return statics()->Instance; }; // 0x0

System::Random* ::GameData::randy() { return statics()->randy; }; // 0x4
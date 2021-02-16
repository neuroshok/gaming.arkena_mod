#pragma once

#include <ark/class.hpp>

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/System/String.hpp>

struct PlayerControl;

// EGLJNOMOGNP in 2020.12.9s
struct GameData : InnerNet::InnerNetObject, ark::meta<GameData> {

    // EGLJNOMOGNP.CAAACHLJJNE in 2020.12.9s
    struct TaskInfo : il2cpp::Il2CppClass {
        // [marker] is PlayerInfo.Tasks
        std::uint32_t Id;
        std::uint8_t TypeId;
        bool Complete;
    };


    // EGLJNOMOGNP.DCJMABDDJCF in 2020.12.9s
    struct PlayerInfo : il2cpp::Il2CppClass {
        // [marker] is GameData.AllPlayers
        std::uint8_t PlayerId;
        System::String* PlayerName;
        std::uint8_t ColorId;
        std::uint32_t HatId;
        std::uint32_t PetId;
        std::uint32_t SkinId;
        bool Disconnected;
        System::Collections::Generic::List<TaskInfo>* Tasks;
        bool IsImpostor;
        bool IsDead;
        PlayerControl *_object;
    };

    System::Collections::Generic::List<PlayerInfo>* AllPlayers; // [marker]
    std::int32_t TotalTasks;
    std::int32_t CompletedTasks;

    struct StaticFields {
        GameData* instance;
    };

    PlayerInfo* GetPlayerById(std::uint8_t pid)
    {
        return nullptr;
    }

    void RpcUpdateGameData();
    void UpdateGameData();

};

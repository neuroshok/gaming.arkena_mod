#pragma once

#include <ark/class.hpp>

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/System/String.hpp>

struct PlayerControl;

// EGLJNOMOGNP in 2020.12.9s
struct GameData : ark::meta<GameData, InnerNet::InnerNetObject>
{
    ark_meta("", "EGLJNOMOGNP");

    struct internal_statics
    {
        GameData* instance;
    };

    // EGLJNOMOGNP.CAAACHLJJNE in 2020.12.9s
    struct TaskInfo : il2cpp::Il2CppObject {
        // [marker] is PlayerInfo.Tasks
        std::uint32_t Id;
        std::uint8_t TypeId;
        bool Complete;
    };


    // EGLJNOMOGNP.DCJMABDDJCF in 2020.12.9s
    struct PlayerInfo : il2cpp::Il2CppObject {
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


    PlayerInfo* GetPlayerById(std::uint8_t id) { return method_call(GetPlayerById, id); }

    void RpcUpdateGameData();
    void UpdateGameData();

};

namespace ark::method_info
{
    method_rva(GameData::GetPlayerById, 0x5EB310)
}
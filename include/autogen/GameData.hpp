#pragma once

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/System/String.hpp>

struct PlayerControl;

// EGLJNOMOGNP in 2020.12.9s
struct GameData : InnerNet::InnerNetObject {

    // EGLJNOMOGNP.CAAACHLJJNE in 2020.12.9s
    struct TaskInfo : ::Object {
        // [marker] is PlayerInfo.Tasks
        std::uint32_t Id;
        std::uint8_t TypeId;
        bool Complete;
    };
    CHECK_TYPE(TaskInfo, 0x8);


    // EGLJNOMOGNP.DCJMABDDJCF in 2020.12.9s
    struct PlayerInfo : ::Object {
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
    CHECK_TYPE(PlayerInfo, 0x28);

    System::Collections::Generic::List<PlayerInfo>* AllPlayers; // [marker]
    std::int32_t TotalTasks;
    std::int32_t CompletedTasks;

    struct StaticFields {
        GameData* instance;
    };

    PlayerInfo* GetPlayerById(std::uint8_t pid)
    {
        return get_method<PlayerInfo* (*)(GameData*, std::uint8_t)>("GetPlayerById")(this, pid);
    }

    void RpcUpdateGameData();
    void UpdateGameData();


    static Class<GameData>* get_class() { return Class<GameData>::find("EGLJNOMOGNP");   }

    static GameData* instance() {
        return get_class()->statics()->instance;
    }
};
CHECK_TYPE(GameData, 0x28);

template <> inline const char* get_method_name<&GameData::UpdateGameData>() { return "UpdateGameData"; }
template <> inline const char* get_method_name<&GameData::RpcUpdateGameData>() { return "RpcUpdateGameData"; }

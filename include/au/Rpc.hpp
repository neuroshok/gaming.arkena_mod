//au//Rpc
#pragma once
#include <ark/class.hpp>
#include <au/Rpc.hpp>

enum class Rpc : uint8_t
{


    // Fields


    PlayAnimation = 0,
    CompleteTask = 1,
    SyncSettings = 2,
    SetInfected = 3,
    Exiled = 4,
    CheckName = 5,
    SetName = 6,
    CheckColor = 7,
    SetColor = 8,
    SetHat = 9,
    SetSkin = 10,
    ReportDeadBody = 11,
    MurderPlayer = 12,
    SendChat = 13,
    StartMeeting = 14,
    SetScanner = 15,
    SendChatNote = 16,
    SetPet = 17,
    SetStartCounter = 18,
    EnterVent = 19,
    ExitVent = 20,
    SnapTo = 21,
    CloseMeeting = 22,
    VotingComplete = 23,
    CastVote = 24,
    ClearVote = 25,
    AddVote = 26,
    CloseDoorsOfType = 27,
    RepairSystem = 28,
    SetTasks = 29,
    UpdateGameData = 30,
    ClimbLadder = 31,
    UsePlatform = 32,

};


namespace ark
{
template<>
struct meta_statics<Rpc>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info
#pragma once

#include <cstdint>

// FPHOMIDIMBN in 2020.9.22
// JHNKMAGPAEP in 2020.10.8i
// FOBFDOIGNKE in 2020.10.22s
// GODNMPFGJHC in 2020.11.4s
// FBGKAFLCOBO in 2020.11.17s
// KPLHBGFHGBI in 2020.12.9s
enum class rpc : std::uint8_t {
    PlayAnimation = 0, // [marker]
    CompleteTask = 1,
    SyncSettings = 2,
    SetInfected = 3, // set the impostors ?
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
    Close = 22,
    VotingComplete = 23,
    CastVote = 24,
    ClearVote = 25,
    AddVote = 26,
    CloseDoorsOfType = 27,
    RepairSystem = 28,
    SetTasks = 29,
    UpdateGameData = 30,
};

enum class rpc_mod : std::uint8_t
{
    // system
    check_mods = 31,
    mods_status,
    sync_mods,
    role_distribution,
    // generic
    generic_kill,
    generic_ability,
    generic_role,
};
#pragma once

//#include <au/Rpc.hpp>

enum class rpc_mod : std::uint8_t
{
    // system
    check_mods = 40,
    mods_status,
    sync_mods,
    role_distribution,
    // generic
    generic_kill,
    generic_ability,
    generic_role,
};
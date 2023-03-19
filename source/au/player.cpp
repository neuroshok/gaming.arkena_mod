#pragma once

#include <au/mod.hpp>
#include <au/core.hpp>
#include <au/player.hpp>

#include <ark/log.hpp>

#include <gen/au/GameData_PlayerInfo.hpp>
#include <gen/au/PlayerControl.hpp>
#include <gen/au/PlayerOutfitType.hpp>

namespace au
{
    player::player() = default;

    std::string player::name() const
    {
        return au_player_->_cachedData->get_PlayerName()->str();
    }

    au::player* player::local()
    {
        return new player;
    }
    au::mod& player::mod()
    {
        ark_assert(mod_, "player::mod is null");
        return *mod_;
    }

    au::gamestate& player::gamestate()
    {
        ark_assert(mod_, "player::mod is null");
        return mod_->core().gamestate();
    }

    /*void player::set_color(uint32_t hex_value)
    {
        au_player_->RawSetColor(hex_value);
    }*/

} // au
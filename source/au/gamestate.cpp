#pragma once

#include <au/gamestate.hpp>

#include <ark/log.hpp>
#include <au/player.hpp>
#include <vector>

namespace au
{
    class core;

    void gamestate::on_start_meeting(au::player& reporter/*, au::playerstate& target*/)
    {
        ark_trace("on start meeting by {}", reporter.name());
        //reporter.set_color(0x00FF00);
        // net_servercall(reported, set_color, value);
    }

    au::mod& gamestate::mod()
    {
        ark_assert(mod_, "gamestate::mod is null");
        return *mod_;
    }
    const std::vector<au::player>& gamestate::players() { return players_; }

} // au
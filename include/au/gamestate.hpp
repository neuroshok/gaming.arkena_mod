#pragma once

#include <ark/log.hpp>
#include <au/player.hpp>
#include <vector>

namespace au
{
    class core;

    class gamestate
    {
    public:
        gamestate(au::core& core) : core_{ core } {}

        void on_start_meeting(au::player reporter/*, au::playerstate& target*/)
        {
            ark_trace("on start meeting by {}", reporter.name());
            reporter.set_color(0x00FF00);
            // net_servercall(reported, set_color, value);
        }

        const std::vector<au::player>& players() { return players_; }


    private:
        au::core& core_;
        std::vector<au::player> players_;
    };
} // auv
#pragma once

#include <au/player.hpp>
#include <vector>

namespace au
{
    class core;
    class mod;

    class ARK_SHARED gamestate
    {
        friend class core;

    public:
        virtual void on_start_meeting(au::player& reporter/*, au::playerstate& target*/);
        virtual void on_cast_vote(uint8_t playerId, uint8_t suspectIdx) {}

        au::mod& mod();
        const std::vector<au::player>& players();

    private:
        au::mod* mod_ = nullptr;
        std::vector<au::player> players_;
    };
} // au
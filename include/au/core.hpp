#pragma once

#include <ark/module.hpp>
#include <ark/log.hpp>
#include <au/network.hpp>
#include <au/gamestate.hpp>
#include <au/player.hpp>

#include <memory>

namespace ark { class core; }

namespace au
{
    class mod;

    class core
    {
    public:
        core(ark::core& core);

        void load();

        void set_gamestate_class(au::mod*, std::unique_ptr<au::gamestate>);
        void set_player_class(au::mod*, std::unique_ptr<au::player>);

        ark::core& ark_core();
        au::gamestate& gamestate();

    private:
        ark::core& ark_core_;
        au::network network_;
        std::unique_ptr<au::gamestate> gamestate_;
        std::unique_ptr<au::player> player_;
    };

    // wtf this bug, symbol not found when defined in the .cpp, working without unique_ptr as parameter but working for gamestate ?!!
    inline void core::set_player_class(au::mod* mod, std::unique_ptr<au::player> player)
    {
        player_ = std::move(player);
        player_->mod_ = mod;
    }
} // au
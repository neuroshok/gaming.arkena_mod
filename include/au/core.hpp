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

        void make_gamestate();

        void set_gamestate_class(au::mod*, std::function<std::unique_ptr<au::gamestate>()>);
        void set_player_class(au::mod*, std::function<std::unique_ptr<au::player>()>);

        void init_hooks();
        void game_hooks();

        ark::core& ark_core();
        au::gamestate& gamestate();

        au::GameManager* au_game_manager() { return au_game_manager_;}
        au::HudManager* au_hud_manager() { return au_hud_manager_; }

    private:
        ark::core& ark_core_;
        au::network network_;
        std::function<std::unique_ptr<au::player>()> make_player_;
        std::function<std::unique_ptr<au::gamestate>()> make_gamestate_;
        std::unique_ptr<au::gamestate> gamestate_;

        au::GameManager* au_game_manager_ = nullptr;
        au::HudManager* au_hud_manager_ = nullptr;

        // todo support multiple mods // std::vector<std::map<au::mod, au::game>> with au::game { player, gamestate }
        au::mod* mod_ = nullptr;
    };
} // au
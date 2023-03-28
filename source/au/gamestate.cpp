#include <au/gamestate.hpp>

#include <ark/log.hpp>
#include <au/core.hpp>
#include <au/mod.hpp>
#include <au/player.hpp>

#include <gen/au/GameManager.hpp>


#include <vector>

namespace au
{
    class core;

    gamestate::gamestate(au::mod& mod)
        : mod_{ mod }
    {}

    void gamestate::add_player(std::unique_ptr<au::player> player)
    {
        players_.emplace_back(std::move(player));
    }

    void gamestate::end_game(int reason)
    {
        auto* au_game_manager = mod().core().au_game_manager();
        ark_assert(au_game_manager, "au_game_manager_ is null");
        au_game_manager->RpcEndGame(static_cast<au::GameOverReason>(reason), false);
    }

    au::mod& gamestate::mod()
    {
        return mod_;
    }

    au::player* gamestate::player(au::PlayerControl* player_control)
    {
        for (const auto& player : players_)
        {
            if (player->au_player() == player_control) return player.get();
        }
        return nullptr;
    }

    const std::vector<std::unique_ptr<au::player>>& gamestate::players() { return players_; }

} // au
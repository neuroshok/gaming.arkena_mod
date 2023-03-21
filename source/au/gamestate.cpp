#include <au/gamestate.hpp>

#include <ark/log.hpp>
#include <au/player.hpp>

#include <gen/au/GameManager.hpp>


#include <vector>

namespace au
{
    class core;

    gamestate::gamestate() = default;

    void gamestate::add_player(std::unique_ptr<au::player> player)
    {
        players_.emplace_back(std::move(player));
    }

    void gamestate::end_game(int reason)
    {
        ark_assert(au_game_manager_, "au_game_manager_ is null");
        au_game_manager_->RpcEndGame(static_cast<au::GameOverReason>(reason), false);
    }

    au::mod& gamestate::mod()
    {
        ark_assert(mod_, "gamestate::mod is null");
        return *mod_;
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
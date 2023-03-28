#include <au/mod.hpp>
#include <au/core.hpp>
#include <au/player.hpp>

#include <ark/log.hpp>

#include <gen/au/GameData_PlayerInfo.hpp>
#include <gen/au/PlayerControl.hpp>
#include <gen/au/PlayerOutfitType.hpp>

namespace au
{
    std::unique_ptr<au::player> player::local_player;

    player::player(au::mod& mod, au::PlayerControl* au_player)
        : mod_{ mod }
        , au_player_{ au_player }
    {}

    std::string player::name() const
    {
        return au_player_->_cachedData->get_PlayerName()->str();
    }

    au::PlayerControl* player::au_player() const
    {
        return au_player_;
    }

    au::player& player::local()
    {
        ark_assert(local_player, "player::local_player is null");
        return *local_player;
    }
    au::mod& player::mod()
    {
        return mod_;
    }

    au::gamestate& player::gamestate()
    {
        return mod_.core().gamestate();
    }

    /*void player::set_color(uint32_t hex_value)
    {
        au_player_->RawSetColor(hex_value);
    }*/

} // au
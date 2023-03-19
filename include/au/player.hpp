#pragma once

#include <cs/string.hpp>

#include <gen/au/PlayerOutfitType.hpp>
#include <gen/au/GameData_PlayerInfo.hpp>
#include <gen/au/PlayerControl.hpp>

namespace au
{
    struct player
    {
        player(au::PlayerControl* au_player) : au_player_{ au_player } {}

        std::string name() const
        {
            return au_player_->_cachedData->get_PlayerName()->str();
        }

        // rpc_server(set_color)
        void server_set_color(uint32_t hex_value)
        {
            // net_servercall(player, set_color)
            // netsend(server_set_color, hex_value);
            // network.send();
            // send(player.id, 99, rpc_id<&server_set_color>)
            //StartRpcImmediately(uint32_t targetNetId, uint8_t callId, Hazel::SendOption option, int32_t targetClientId)
        }

        void server_set_color_impl()
        {
            //au_player_->SetColor()
        }

        void set_color(uint32_t hex_value)
        {
            au_player_->RawSetColor(hex_value);
        }

        static au::player from(au::PlayerControl* au_player)
        {
            au::player player{ au_player };
            return player;
        }

        au::PlayerControl* au_player_;
    };
} // au
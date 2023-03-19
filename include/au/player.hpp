#pragma once

#include "au/DeathReason.hpp"
#include <cs/string.hpp>

namespace au
{
    class PlayerControl;
    class mod;
    class gamestate;

    struct ARK_SHARED player
    {
        friend class core;
        player();
        player(au::PlayerControl* au_player) : au_player_{ au_player } {}

        virtual void on_die(au::DeathReason reason, bool assignGhostRole) {}

        au::mod& mod();
        au::gamestate& gamestate();

        std::string name() const;
        /*
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
        void set_color(uint32_t hex_value);*/

        static au::player* local();

        static au::player* get(au::PlayerControl* au_player)
        {
            return new au::player;
        }

        au::PlayerControl* au_player_;

    private:
        au::mod* mod_ = nullptr;
    };
} // au
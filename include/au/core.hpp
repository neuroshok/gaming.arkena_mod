#pragma once

#include <ark/hook.hpp>
#include <au/gamestate.hpp>
#include <au/network.hpp>
#include <au/player.hpp>

#include <gen/au/ShipStatus.hpp>
#include <gen/InnerNet/InnerNetClient.hpp>

namespace au
{
    class core
    {
    public:
        core(ark::core& core)
            : ark_core_{ core }
            , network_{ *this }
            , gamestate_{ *this }
        {}

        void load()
        {
            ark::hook<&au::PlayerControl::HandleRpc>::before([this](auto&&, auto event, Hazel::MessageReader* data){
                ark_trace("RPC {}", (int)event);

                if (event == 99)
                {
                    network_.receive();

                    // auto rpc_id = readid();
                    // network.rpc(rpc_id)(params);
                    ark_trace("custom rpc");
                }
            });

            ark::hook<&au::ShipStatus::StartMeeting>::before([this](auto&&, au::PlayerControl* reporter, au::GameData_PlayerInfo* target){
                ark_trace("StartMeeting");
                gamestate_.on_start_meeting(au::player::from(reporter));
                network_.send();
            });
        }

    private:
        ark::core& ark_core_;
        au::network network_;
        au::gamestate gamestate_;
    };
} // au
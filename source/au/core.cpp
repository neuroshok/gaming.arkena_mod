#include <au/core.hpp>

#include <ark/hook.hpp>

#include <au/gamestate.hpp>
#include <au/network.hpp>
#include <au/mod.hpp>
#include <au/player.hpp>

#include <gen/au/PlayerControl.hpp>
#include <gen/au/ShipStatus.hpp>
#include <gen/au/MeetingHud.hpp>
#include <gen/InnerNet/InnerNetClient.hpp>

#include <memory>

#define hook_gamestate(AuMethod, Method) \
ark::hook<&AuMethod>::after([this](auto&&, auto&&... ts) \
{ \
    if (gamestate_) gamestate_->Method(ts...); \
});
#define hook_player(AuMethod, Method) \
ark::hook<&AuMethod>::after([this](auto&&, auto&&... ts) \
{ \
    if (player_) player_->Method(ts...); \
});

namespace au
{
    core::core(ark::core& core)
        : ark_core_{ core }
        , network_{ *this }
    {}

    void core::load()
    {
        ark::hook<&au::PlayerControl::HandleRpc>::before([this](auto&&, auto event, Hazel::MessageReader* data){
            ark_trace("RPC {}", (int)event);

            if (event == 99)
            {
                //network_.receive();

                // auto rpc_id = readid();
                // network.rpc(rpc_id)(params);
                ark_trace("custom rpc");
            }
        });

        ark::hook<&au::ShipStatus::StartMeeting>::before([this](auto&&, au::PlayerControl* reporter, au::GameData_PlayerInfo* target){
            ark_trace("StartMeeting");
            if (gamestate_)
            {
                gamestate_->on_start_meeting(*au::player::get(reporter));
            }
            //network_.send();
        });

        hook_player(au::PlayerControl::Die, on_die);

        hook_gamestate(au::MeetingHud::CmdCastVote, on_cast_vote);
        //hook_gamestate(au::MeetingHud::RpcVotingComplete, on_cast_vote);
    }

    void core::set_gamestate_class(au::mod* mod, std::unique_ptr<au::gamestate> gamestate)
    {
        gamestate_ = std::move(gamestate);
        gamestate_->mod_ = mod;
    }

    /*    void core::set_player_class(au::mod&, std::unique_ptr<au::player> player)
    {
        player_ = std::move(player);
    }*/

    ark::core& core::ark_core() { return ark_core_; }
    au::gamestate& core::gamestate() { return *gamestate_; }
} // au
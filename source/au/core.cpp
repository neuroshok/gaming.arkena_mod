#include <au/core.hpp>

#include <ark/hook.hpp>

#include <au/gamestate.hpp>
#include <au/network.hpp>
#include <au/mod.hpp>
#include <au/player.hpp>

#include <gen/au/IntroCutscene.hpp>
#include <gen/au/GameManager.hpp>
#include <gen/au/PlayerControl.hpp>
#include <gen/au/ShipStatus.hpp>
#include <gen/au/MeetingHud.hpp>
#include <gen/au/AmongUsClient.hpp>
#include <gen/au/PlayerPhysics.hpp>
#include <gen/au/GameData.hpp>
#include <gen/au/GameData_PlayerInfo.hpp>
#include <gen/au/GameData_PlayerOutfit.hpp>

#include <gen/InnerNet/InnerNetClient.hpp>
#include <gen/InnerNet/ClientData.hpp>
#include <gen/TMPro/TextMeshPro.hpp>

#include <gen/UnityEngine/Application.hpp>
#include <gen/UnityEngine/Collider2D.hpp>

#include "au/LogicGameFlowNormal.hpp"
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
        init_hooks(); // initialisation hooks
        game_hooks();

        ark_core_.on_debug([]{
            ark_trace("ok {}", (uintptr_t)au::PlayerControl::LocalPlayer());
            if (au::PlayerControl::LocalPlayer())
            {
                static bool state = false;
                state = !state;
                au::PlayerControl::LocalPlayer()->SetLevel(99999);
                ark_trace("MyPhysics {}", (uintptr_t)au::PlayerControl::LocalPlayer()->MyPhysics);
                ark_trace("Collider {}", (uintptr_t)au::PlayerControl::LocalPlayer()->Collider);
                au::PlayerControl::LocalPlayer()->Collider->set_enabled(state);

            }
        });

        //player_hooks();

        ark::hook<&au::PlayerControl::HandleRpc>::before([this](auto&&, auto event, Hazel::MessageReader* data){
            //ark_trace("RPC {}", (int)event);
            if (event == 99)
            {
                //network_.receive();

                // auto rpc_id = readid();
                // network.rpc(rpc_id)(params);
                ark_trace("custom rpc");
            }
        });


        ark::hook<&au::PlayerControl::Die>::after([this](auto* self, au::DeathReason reason, bool assignGhostRole) {
            auto* player = gamestate_->player(self);
            ark_assert(player, "player not found");
            player->on_die(reason, assignGhostRole);
            gamestate_->on_die(*gamestate_->player(self), reason, assignGhostRole);
        });

        ark::hook<&au::IntroCutscene::CoBegin>::after([this](au::IntroCutscene* self) -> System::Collections::IEnumerator* {
            ark_trace("IntroCutscene end");
            self->RoleText->m_text = cs::make_string("test________________________");
            self->YouAreText->m_text = cs::make_string("test________________________");
             //gamestate_->on_die(gamestate_->player(self), endReason, showAd);
        });




        // update player list, create new players // clientData->Id is unique
        ark::hook<&InnerNet::InnerNetClient::UpdateCachedClients>::after([this](auto* self, InnerNet::ClientData* clientData, au::PlayerControl* character) {
            ark_assert(gamestate_, "gamestate is null");
            auto mod_player = make_player_();
            mod_player->au_player_ = character;
            mod_player->mod_ = mod_;
            gamestate_->add_player(std::move(mod_player));
        });


        /*ark::hook<static_cast<void(au::GameData_PlayerInfo::*)(au::PlayerControl*)>(&au::GameData_PlayerInfo::ctor)>::after([this](au::GameData_PlayerInfo* self, au::PlayerControl* pc){
            ark_trace("GameData_PlayerInfo {} {} {}", self->PlayerId, (intptr_t)pc, self->get_PlayerName()->str());
        });

        ark::hook<static_cast<void(au::GameData::*)(au::PlayerControl* player, au::DisconnectReasons reason)>(&au::GameData::HandleDisconnect)>::after([this](auto* self, au::PlayerControl* player, au::DisconnectReasons reason){
            ark_trace("GameData HandleDisconnect {}", player->NetId);
        });

*/

        /*
        ark::hook<&InnerNet::InnerNetClient::FixedUpdate>::after([this](auto&&){
            ark_trace("{}", (intptr_t)au::PlayerControl::LocalPlayer());
        });*/

        ark::hook<&au::ShipStatus::StartMeeting>::before([this](auto&&, au::PlayerControl* reporter, au::GameData_PlayerInfo* target){
            if (gamestate_)
            {
                auto* player = gamestate_->player(reporter);
                au::player* autarget = nullptr;
                if (target) autarget = gamestate_->player(target->_object);
                ark_assert(player, "player not found");
                gamestate_->on_start_meeting(*player, autarget);
            }
        });

        //hook_player(au::PlayerControl::Die, on_die);

        hook_gamestate(au::MeetingHud::CmdCastVote, on_cast_vote);
        //hook_gamestate(au::MeetingHud::RpcVotingComplete, on_cast_vote);
    }

    void core::make_gamestate()
    {
        ark_assert(make_gamestate_, "gamestate not registered");
        if (!gamestate_)
        {
            ark_trace("make gamestate");
            gamestate_ = make_gamestate_();
            gamestate_->mod_ = mod_;
        }
    }

    void core::set_gamestate_class(au::mod* mod, std::function<std::unique_ptr<au::gamestate>()> make_gamestate)
    {
        mod_ = mod;
        make_gamestate_ = std::move(make_gamestate);
    }

    void core::set_player_class(au::mod*, std::function<std::unique_ptr<au::player>()> make_player)
    {
        make_player_ = std::move(make_player);
    }

    ark::core& core::ark_core() { return ark_core_; }
    au::gamestate& core::gamestate() { return *gamestate_; }

    void core::init_hooks()
    {
        // init local player
        //au::player::local_player = make_player_();

        ark::hook<&au::AmongUsClient::Awake>::after([this](auto&&){
            ark_trace("Game version : {}", UnityEngine::Application::get_version()->str());
        });


        // make gamestate when joining game
        ark::hook<&au::AmongUsClient::OnGameJoined>::after([this](auto&&...) { make_gamestate(); });
    }

        void core::game_hooks()
    {
        ark::hook<&au::GameManager::StartGame>::after([this](auto* self) {
            ark_assert(gamestate_, "gamestate is null");
            gamestate_->on_begin_play();
            gamestate_->au_game_manager_ = self;
        });

        ark::hook<&au::GameManager::RpcEndGame>::after([this](auto* self, au::GameOverReason endReason, bool showAd) {
            ark_trace("send end");

             //gamestate_->on_die(gamestate_->player(self), endReason, showAd);
        });
    }


} // au
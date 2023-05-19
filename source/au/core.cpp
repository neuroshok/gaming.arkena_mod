#include <au/core.hpp>

#include <ark/hook.hpp>

#include <au/gamestate.hpp>
#include <au/network.hpp>
#include <au/mod.hpp>
#include <au/player.hpp>

#include <gen/au/AbilityButton.hpp>
#include <gen/au/UseButton.hpp>


#include <gen/au/IntroCutscene.hpp>
#include <gen/au/GameManager.hpp>
#include <gen/au/Console.hpp>
#include <gen/au/PlayerControl.hpp>
#include <gen/au/PlayerTask.hpp>
#include <gen/au/ShipStatus.hpp>
#include <gen/au/MeetingHud.hpp>
#include <gen/au/HudManager.hpp>
#include <gen/au/Minigame.hpp>
#include <gen/au/AmongUsClient.hpp>
#include <gen/au/PlayerPhysics.hpp>
#include <gen/au/GameData.hpp>
#include <gen/au/GameData_PlayerInfo.hpp>
#include <gen/au/GameData_PlayerOutfit.hpp>
#include <gen/Hazel/MessageWriter.hpp>

#include <gen/InnerNet/InnerNetClient.hpp>
#include <gen/InnerNet/ClientData.hpp>
#include <gen/TMPro/TextMeshPro.hpp>

#include <gen/UnityEngine/Application.hpp>
#include <gen/UnityEngine/Collider2D.hpp>
#include <gen/UnityEngine/Transform.hpp>
#include <gen/UnityEngine/SpriteRenderer.hpp>
#include <gen/UnityEngine/Color.hpp>

#include <au/GameStartManager.hpp>
#include <au/FollowerCamera.hpp>
#include <au/HudManager.hpp>
#include <au/LightSource.hpp>
#include <au/LogicGameFlowNormal.hpp>

#include "au/IntroCutscene_ShowRoled__35.hpp"
#include "au/WeaponsMinigame.hpp"
#include "imgui.h"
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

static bool ability = false;
std::atomic_bool debug_state = false;

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
        testing_hooks();

        // todo move execution from imgui thread to game thread
        /*ark_core_.add_debug_button([this](int index){
            if (index > 0) return;
            debug_state = true;
        });*/

        //player_hooks();


        ark::hook<&au::PlayerControl::HandleRpc>::before([this](auto&&, auto event, Hazel::MessageReader* rdata){
            ark_trace("RPC {}", (int)event);
            if (event == 99)
            {
                for (auto& mod : ark_core_.mods())
                {
                    ark_trace("custom rpc call");

                    std::vector<std::byte> data;
                    // auto data = network::read_data(rdata);

                    auto fn = mod->rpcs_.begin()->second;
                    if (fn) fn(data);
                }
                // auto rpc_id = readid();
                // network.rpc(rpc_id)(params);
                //rpcs_[rid]();
            }
        });

        ark::hook<&au::PlayerControl::Die>::after([this](auto* self, au::DeathReason reason, bool assignGhostRole) {
            if (gamestate_)
            {
                auto* player = gamestate_->player(self);
                ark_assert(player, "player not found");
                player->on_die(reason, assignGhostRole);
                gamestate_->on_die(*gamestate_->player(self), reason, assignGhostRole);
            }
        });

        /*
        ark::hook<&au::PlayerControl::FixedUpdate>::after([this](auto* self) {

            if (ability)
            {
                auto* p = gamestate_->players()[1]->au_player();
                UnityEngine::Vector3 vec;
                vec.x = p->GetTruePosition().x;
                vec.y = p->GetTruePosition().y;
                au::PlayerControl::LocalPlayer()->lightSource->get_transform()->set_position(vec);
            }
        });*/

        /*ark::hook<&au::IntroCutscene::ShowRole>::overwrite([this](auto&& original, au::IntroCutscene* self) -> System::Collections::IEnumerator* {
            ark_trace("ShowRole");
            ark_trace("self->TeamTitle->m_text {}", self->TeamTitle->m_text->str());
            self->TeamTitle->m_text = cs::make_string("__");
            self->ImpostorText->m_text = cs::make_string("__");
            self->YouAreText->m_text = cs::make_string("__");
            self->RoleText->m_text = cs::make_string("__");
            self->RoleBlurbText->m_text = cs::make_string("__");
             //gamestate_->on_die(gamestate_->player(self), endReason, showAd);
            original(self);
            return nullptr;
        });*/

        ark::hook<&au::IntroCutscene::BeginCrewmate>::overwrite([this](auto&& original, au::IntroCutscene* self, auto&& v) {
            ark_trace("BeginCrewmate");
            original(self, v);
        });


        // update player list, create new players // clientData->Id is unique
        ark::hook<&InnerNet::InnerNetClient::UpdateCachedClients>::after([this](auto* self, InnerNet::ClientData* clientData, au::PlayerControl* character) {
            if (gamestate_)
            {
                auto mod_player = make_player(character);
                if (mod_player) gamestate_->add_player(std::move(mod_player));
            }
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
        if (make_gamestate_ && !gamestate_)
        {
            ark_trace("make gamestate");
            gamestate_ = make_gamestate_();
            ark_assert(gamestate_, "make_gamestate failed");
        }
    }

    std::unique_ptr<au::player> core::make_player(au::PlayerControl* au_player)
    {
        if (make_player_)
        {
            ark_trace("make player {}", (uintptr_t)au_player);
            auto player = make_player_(au_player);
            ark_assert(player, "make_player failed");
            return player;
        }
        ark_assert(false, "make_player not set");
        return nullptr;
    }

    void core::set_gamestate_class(au::mod* mod, std::function<std::unique_ptr<au::gamestate>()> make_gamestate)
    {
        make_gamestate_ = std::move(make_gamestate);
    }

    void core::set_player_class(au::mod*, std::function<std::unique_ptr<au::player>(au::PlayerControl*)> make_player)
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
        ark::hook<&au::AmongUsClient::OnGameJoined>::after([this](auto&&...) { ark_trace("join game"); make_gamestate(); });
    }

    void core::game_hooks()
    {
        ark::hook<&au::AmongUsClient::FixedUpdate>::after([this](auto* self) {
            if (debug_state)
            {
                ark_core_.debug(0);
                debug_state = false;
            }
        });

        ark::hook<&au::GameManager::StartGame>::after([this](auto* self) {
            ark_core_.set_state(ark::core::state_type::playing);

            if (gamestate_)
            {
                ark_trace("init game_manager_");
                gamestate_->on_begin_play();
                au_game_manager_ = self;
            }

            //for (const auto& player : gamestate_->players())
            //{
            //    ark_trace("send rpc to {}", player->au_player()->NetId);
            //    auto* Writer = au::AmongUsClient::Instance()->StartRpc(player->au_player()->NetId, 99, Hazel::SendOption::Reliable);
            //    au::AmongUsClient::Instance()->FinishRpcImmediately(Writer);
            //}
        });



        // called when joining lobby
        ark::hook<&au::HudManager::Start>::after([this](auto* self) {
            ark_core_.set_state(ark::core::state_type::idle);

            if (gamestate_)
            {
                ark_trace("init hud_manager");
                au_hud_manager_ = self;
                ark_trace("UseButton {} {}", au_hud_manager_->UseButton->position.x, au_hud_manager_->UseButton->position.y);
                //auto* object = UnityEngine::Object::Instantiate(au_hud_manager_->AbilityButton, { 0, 0, 0}, {}, au_hud_manager_->get_transform());
                //auto* button = static_cast<au::AbilityButton*>(object);
                //button->graphic = au_hud_manager_->UseButton->graphic;

                auto* button = il2cpp::new_object<au::AbilityButton>();
                //auto* renderer = il2cpp::new_object<UnityEngine::SpriteRenderer>();
                //button->position = {0, 0, 0};
                //button->graphic = renderer;
                //au_hud_manager_->AbilityButton->graphic = au_hud_manager_->UseButton->graphic;
                //au_hud_manager_->AbilityButton->SetEnabled();
                //ark_trace("renderer: {}", (uintptr_t)renderer);
                //ark_trace("button: {}", (uintptr_t)button);


                //static_cast<au::UseButton*>(object)->SetCoolDown(2, 4);
                //static_cast<au::UseButton*>(object)->SetFillUp(2, 4);
                //static_cast<au::UseButton*>(object)->SetEnabled();
                //static_cast<au::UseButton*>(object)->isCoolingDown = true;
                //static_cast<au::UseButton*>(object)->OverrideText(cs::make_string("9"));
            }
        });

        ark::hook<&au::UseButton::DoClick>::after([this](auto&& self) {
            ark_trace("DoClick {}", (uintptr_t)self);
        });


        /*ark::hook<&au::GameManager::RpcEndGame>::overwrite([this](auto&& original, auto* self, au::GameOverReason endReason, bool showAd) {
            //ark_trace("send end");

            // gamestate_->on_die(gamestate_->player(self), endReason, showAd);
        });*/

        // fix
        ark::hook<&au::GameStartManager::Update>::after([this](auto* self) {
            self->MinPlayers = 1;
        });
    }


    void core::testing_hooks()
    {
        ark::hook<&au::WeaponsMinigame::Begin>::overwrite([this](auto&& o, auto* self, au::PlayerTask* task) {
            ark_trace("WeaponsMinigame");
            //return o(self, task);
        });

        ark::hook<&au::PlayerControl::SetTasks>::after([this](auto&& self,auto* list) {
            //ark_trace("SetTasks for {}", self->PlayerId);
        });

        // ok
        ark::hook<static_cast<void(au::Minigame::*)()>(&au::Minigame::Close)>::after([this](auto* self) {ark_trace("Close");});

        /*ark::hook<static_cast<void(au::Minigame::*)(bool)>(&au::Minigame::Close)>::after([this](auto* self, bool) {
            ark_trace("Minigame Close");
        });*/

    }
} // au
#include <ark/mods/testing.hpp>

#include <ark/core.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/GameData.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/UnityEngine/MessageWriter.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/PlayerMovement.hpp>

#include <ark/hook.hpp>

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore, "testing")
    {
        // preload calls
        // require data->get_BytesRemaining()
        // preload hooks
        // require<&PlayerControl::RpcMurderPlayer> // prepatch postpatch patch


/*
        core().template hook<&PlayerMovement::WalkPlayerTo>(
            [this](auto original, PlayerMovement* self, UnityEngine::Vector2 worldPos, float tolerance)
        {
            ark_trace("WalkPlayerTo {} {} {}", worldPos.x, worldPos.y, tolerance);
            //ark_trace("PlayerControl::instance() {}", (uintptr_t)PlayerControl::instance());
            //self->SetTarget(PlayerControl::instance());
            //PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
            worldPos.x = 0;
            worldPos.y = 0;
            original(self, worldPos, tolerance);
        });*/


        /*
        core().template hook<&KillButtonManager::PerformKill>(
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("PerformKill");
            //ark_trace("PlayerControl::instance() {}", (uintptr_t)PlayerControl::instance());
            //self->SetTarget(PlayerControl::instance());
            //PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
            //original(self);

                MessageWriter* writer = AmongUsClient::Instance()->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpc_mod::sniper_kill);
                writer->Write(mod::player_control(1)->PlayerId);
                writer->Write(mod::player_control(2)->PlayerId);
                AmongUsClient::Instance()->FinishRpcImmediately(writer);

                //mod::player_control(1)->MurderPlayer(mod::player_control(2));
        });

        // PlayerControl::MurderPlayer
        core().template hook<&PlayerControl::MurderPlayer>(
            [this](auto original, PlayerControl* source, PlayerControl* target)
        {
            ark_trace("MurderPlayer {} -> {}");

            //auto p = mod::player_control(1);
            source->_cachedData->IsImpostor = true;
            original(source, target);
            source->_cachedData->IsImpostor = false;

            //mod::player(1)->IsImpostor = false;
        });

        core().template hook<&PlayerControl::HandleRpc>(
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::sniper_kill:
                        {
                            auto source_id = data->ReadByte();
                            auto target_id = data->ReadByte();
                            ark_trace("receive sniper_kill {} -> {}", source_id, target_id);
                            mod::player_control(source_id)->MurderPlayer(mod::player_control(target_id));
                        }
                        return;


                    case rpc::MurderPlayer: {
                        ark_trace("OriginalMurderPlayer {}", data->ReadByte());
                        break;
                    }
                }

                data->set_Position(original_position);
                original(self, event, data);
            }
        );

        // ShipStatus::Begin
        core().hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                ark_trace("begin");
                original(self);

                ark_trace("Game start");

                for (auto* player : *GameData::instance()->AllPlayers)
                {
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), player->IsImpostor);
                }
            }
        );
         */
    }

    void testing::on_enable()
    {
         ark::hook<&PlayerControl::SetColor>::after(this, [](auto&& pc, auto&& c){ ark_trace("data {}", c); });

        /*ark::hook<&IntroCutScene::CKACLKCOJFO::MoveNext>::after(this, [&](auto&& self) -> bool
        {
            ark_trace("MoveNext {}", (uintptr_t)IntroCutScene::instance());
        });*/

         /*
        spdlog::error(": {}", (uintptr_t)class_->_1.nestedTypes);
        spdlog::error(": {}", class_->_2.nested_type_count);

        spdlog::error(": {}", (uintptr_t)(*class_->_1.nestedTypes));
        spdlog::error(": {}", (*class_->_1.nestedTypes)->_1.name);
        spdlog::error(": {}", (*(class_->_1.nestedTypes + 1))->_1.name);*/

        /*
        ark::hook<&IntroCutScene::MoveNext>::after(this, [&](auto&& self) -> bool
        {
            ark_trace("data {}", (uintptr_t)IntroCutScene::instance());
        });*/
        /*
        ark::hook<&InnerNet::InnerNetClient::Update>::before(this, [&](auto&& self)
        {
            ark_trace("hook 1");
        });*/
    }
    void testing::on_disable()
    {

    }
} // ark
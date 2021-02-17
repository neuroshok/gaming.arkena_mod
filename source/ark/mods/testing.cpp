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


        ark::hook<&IntroCutScene::CKACLKCOJFO::MoveNext>::before(this, [](auto&& self) -> bool
        {
            self->subtitle.r = 147.f / 255;
            self->subtitle.g = 112.f / 255;
            self->subtitle.b = 219.f / 255;
            self->fade_out_color.g = 0;
            self->fade_out_color.r = 0;
            self->fade_out_color.b = 0;
            self->title.r = 100.f / 255;
            self->title.g = 149.f / 255;
            self->title.b = 237.f / 255;

            self->__this->Title->Text = System::String::make("Sorcerers");
            self->__this->ImpostorText->Text = System::String::make("Whisperer\n[FFFFFFFF]Arkena John Bernard");

            std::string test;

            PlayerControl* tmp = nullptr;
            for (auto* player : *self->yourTeam)
            {
                tmp = const_cast<PlayerControl*>(player);
            }

            auto array_size = 3;

            auto ar = il2cpp::api::il2cpp_array_new<PlayerControl>(tmp->klass, array_size);

            for (int i = 0; i < array_size; ++i)
            {
                PlayerControl** address = &ar->m_Items + i;
                *address = tmp;
            }

            ar->m_Items = tmp;
            ar->max_length = array_size;
            ar->obj.klass = tmp->klass;
            self->yourTeam->_items = ar;
            self->yourTeam->_size = array_size;


            self->isImpostor = false;

          return false;
        });

    }
    void testing::on_disable()
    {

    }
} // ark
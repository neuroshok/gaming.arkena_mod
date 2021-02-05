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

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore)
    {

        core().template hook<&KillButtonManager::PerformKill>(
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("killlll");
            //self->SetTarget(PlayerControl::instance());
            //PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
            original(self);
        });


        // PlayerControl::MurderPlayer
        core().template hook<&PlayerControl::MurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
        {
            ark_trace("MurderPlayer");
            ark_trace("local {}", target->PlayerId);

            //self->MurderPlayer(GameData::instance()->GetPlayerById(0)->_object);
            self->SetKillTimer(2);
            auto p = core().player_control(1);
            original(self, p);
        });

        // GameData::Begin
        core().hook<&GameData::UpdateGameData>(
            [this](auto original, GameData* self)
            {
                ark_trace("begin");
                original(self);

                for (auto* player : *GameData::instance()->AllPlayers)
                {
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), player->IsImpostor);
                }
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

        // GameData::RpcUpdateGameData
        core().hook<&GameData::RpcUpdateGameData>(
            [this](auto original, GameData* self)
            {
                original(self);

                for (auto* player : *GameData::instance()->AllPlayers)
                {
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), player->IsImpostor);
                }
            }
        );


        // PlayerControl::HandleRpc
        core().template hook<&PlayerControl::HandleRpc>(
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                data->set_Position(2);

                ark_trace("event: {}", event);

                switch (static_cast<rpc>(event))
                {
                    case rpc::SendChat: {
                        auto data_size = data->ReadByte();
                        auto message = data->read_string(data_size);
                    }
                    break;

                    case (rpc) rpc_mod::test:
                        ark_trace("exec test");
                        auto sid = data->ReadByte();
                        auto tid = data->ReadByte();
                        ark_trace("SID: {} TID: {}", sid, tid);
                        auto source = GameData::instance()->GetPlayerById(sid)->_object;
                        auto target = GameData::instance()->GetPlayerById(0)->_object;
                        source->MurderPlayer(target);

                        //PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
                        return;

                        break;
                }

                original(self, event, data);
            }
        );

        // PlayerControl::RpcMurderPlayer

        core().template hook<&PlayerControl::RpcMurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
            {
                original(self, target);
            /*
                ark_trace("testing player kill {} {}", self->PlayerId, target->PlayerId);

                ark_trace("start send");
                //original(self, color);
                MessageWriter* writer = AmongUsClient::Instance()->StartRpcImmediately(self->NetId, (std::uint8_t)rpc_mod::test);
                ark_trace("send player_id: {}", self->PlayerId);
                writer->Write((std::uint8_t)self->PlayerId);
                writer->Write((std::uint8_t)0);
                AmongUsClient::Instance()->FinishRpcImmediately(writer);
                ark_trace("end send");

                self->MurderPlayer(GameData::instance()->GetPlayerById(0)->_object);
                self->SetKillTimer(5);*/
            }
        );

        ::hook_method<&InnerNet::InnerNetClient::Update>([&](auto original, InnerNet::InnerNetClient *self) {
            //if (GetAsyncKeyState(VK_F1)) ark_trace("key : {}", "F1");
            //if (GetAsyncKeyState(VK_F2)) ark_trace("key : {}", "F2");

            original(self);
        });
    }
} // ark
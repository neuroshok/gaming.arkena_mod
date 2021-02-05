#include <ark/mods/sniper.hpp>

#include <ark/core.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>
#include <autogen/UnityEngine/MessageWriter.hpp>
#include <autogen/AmongUsClient.hpp>

#include <random>

namespace ark::mods
{
    sniper::sniper(ark::core& c)
        : mod(c)
    {
        // preload calls
        // require data->get_BytesRemaining()
        // preload hooks
        // require<&PlayerControl::RpcMurderPlayer> // prepatch postpatch patch

        core().template hook<&KillButtonManager::PerformKill>(
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("PerformKill");
            //self->SetTarget(PlayerControl::instance());
            //PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
            original(self);
            //do_kill();
        });

        // PlayerControl::RpcMurderPlayer
        core().template hook<&PlayerControl::RpcMurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
            {
                ark_trace("RpcMurderPlayer");
                //original(self, target);
                do_kill(self);
            }
        );


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

        // ShipStatus::HandleRpc
        core().template hook<&PlayerControl::HandleRpc>(
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("call hooked {}", event, data->get_BytesRemaining());
                auto e = data->ReadByte();
                data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::sniper_kill:
                        on_kill(data->ReadByte(), data->ReadByte());
                        break;

                    case (rpc)rpc_mod::sniper_mark:
                        on_mark(data->ReadByte());
                        break;
                }

                ark_trace("call original {}", event, data->get_BytesRemaining());
                original(self, event, data);
            }
        );
    }

    void sniper::on_begin(ShipStatus* ship)
    {
        ark_trace("Game begin");

        std::random_device rd;
        std::mt19937 g(rd());

        for (auto* player : *GameData::instance()->AllPlayers)
        {
            ark_trace("Name : {} - {}", player->PlayerName->to_utf8(), player->IsImpostor);
            ark_trace("Impostor : {}", player->IsImpostor);
            //if (player->IsImpostor) sniper_id_ = player->PlayerId;
            //players_.emplace_back(const_cast<GameData::PlayerInfo*>(player));
        }
    }


    void sniper::do_kill(PlayerControl* self)
    {
        ark_trace("do_kill {}");

        //auto self = PlayerControl::instance();
        ark_trace("do_kill {}", self->PlayerId);

        if (/*core().player(self)->PlayerId == sniper_id_ &&*/ marked_id_ != -1)
        {
            MessageWriter* writer = AmongUsClient::Instance()->StartRpcImmediately(self->NetId, (std::uint8_t)rpc_mod::sniper_kill);
            writer->Write(self->PlayerId);
            writer->Write(marked_id_);
            AmongUsClient::Instance()->FinishRpcImmediately(writer);


            local_kill(self, core().player_control(marked_id_));
            //self->SetKillTimer(10);
        }

        //if (core().player(self)->PlayerId == marker_id_)
        {
            MessageWriter* writer = AmongUsClient::Instance()->StartRpcImmediately(self->NetId, (std::uint8_t)rpc_mod::sniper_mark);
            writer->Write(marked_id_);
            AmongUsClient::Instance()->FinishRpcImmediately(writer);
        }
    }

    void sniper::on_kill(std::uint8_t source_id, std::uint8_t target_id)
    {
        ark_trace("on_kill {} {}", source_id, target_id);
        ark_trace("on_kill {}", core().player_control(source_id)->PlayerId);
        ark_trace("on_kill {}", core().player_control(target_id)->PlayerId);
        local_kill(core().player_control(source_id), core().player_control(target_id));
    }

    void sniper::on_mark(std::uint8_t marked_id)
    {
        ark_trace("on_mark {} {}", marked_id);
        marked_id_ = marked_id;
    }
} // ark::mods

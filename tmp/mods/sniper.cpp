#include <ark/mods/sniper.hpp>

#include <ark/core.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/AmongUsClient.hpp>

#include <random>

namespace ark::mods
{
    sniper::sniper(ark::core& c)
        : mod(c, "sniper")
        , marked_id_{ -1 }
    {
        // ShipStatus::Begin
        core().hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                original(self);
                ark_trace("Game start");

                for (auto* player : *GameData::statics()->instance->AllPlayers)
                {
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->playerInfo->IsImpostor);
                }
            }
        );

        // PlayerControl::RpcMurderPlayer
        core().template hook<&PlayerControl::RpcMurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
            {
                ark_trace("RpcMurderPlayer");
            }
        );

        // PlayerControl::SetHat
        core().template hook<&PlayerControl::SetHat>(
            [this](auto original, PlayerControl* self, unsigned int n, int nn)
            {
                ark_trace("SetHat {} {}", n, nn);
                original(self, n, nn);
            }
        );


        core().template hook<&KillButtonManager::PerformKill>(
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("PerformKill");
            do_kill();
        });


        // PlayerControl::MurderPlayer
        core().template hook<&PlayerControl::MurderPlayer>(
            [this](auto original, PlayerControl* source, PlayerControl* target)
        {
            ark_trace("MurderPlayer {} {}", mod::player(source)->PlayerId, marked_id_);

            if (marked_id_ >= 0)
            {
                ark_trace("Localkill {} {}", mod::player(source)->PlayerId, marked_id_);
                // force local kill
                auto original_value = source->playerInfo->IsImpostor;
                source->playerInfo->IsImpostor = true;
                original(source, mod::player_control(marked_id_));
                source->playerInfo->IsImpostor = original_value;
            }
        });

        // ShipStatus::HandleRpc
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
                            on_kill(source_id, target_id);
                        }
                        return;

                    case (rpc)rpc_mod::sniper_mark: {
                        on_mark(data->ReadByte());
                        return;
                    }

                    case rpc::MurderPlayer: {
                        ark_trace("OriginalMurderPlayer {}", data->ReadByte());
                        break;
                    }
                }


                data->set_Position(original_position);

                original(self, event, data);
            }
        );
    }


    void sniper::do_kill()
    {
        if (/*mod::player(self)->PlayerId == sniper_id_ &&*/ marked_id_ != -1)
        {
            ark_trace("do_kill {} -> {}", mod::player()->PlayerId, marked_id_);

            MessageWriter* writer = AmongUsClient::statics()->instance->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpc_mod::sniper_kill);
            writer->Write(mod::player()->PlayerId);
            writer->Write(marked_id_);
            AmongUsClient::statics()->instance->FinishRpcImmediately(writer);

            local_kill(mod::player_control(marked_id_), mod::player_control(marked_id_));
            mod::player_control()->SetKillTimer(5);
            marked_id_ = -1;
        }
        else
        //if (mod::player(self)->PlayerId == marker_id_)
        {
            auto target = mod::closest_player(mod::player_control());
            marked_id_ = target->PlayerId;
            ark_trace("do_mark {} -> {}", mod::player()->PlayerId, marked_id_);
            MessageWriter* writer = AmongUsClient::statics()->instance->StartRpcImmediately(target->NetId, (std::uint8_t)rpc_mod::sniper_mark);
            writer->Write(marked_id_);
            AmongUsClient::statics()->instance->FinishRpcImmediately(writer);

            target->SetHat(54);
        }
    }

    void sniper::on_kill(std::uint8_t source_id, std::uint8_t target_id)
    {
        ark_trace("on_kill {} {} , {}", source_id, target_id, marked_id_);

        local_kill(mod::player_control(target_id), mod::player_control(target_id));
        marked_id_ = -1;
    }

    void sniper::on_mark(std::uint8_t marked_id)
    {
        ark_trace("on_mark {} ({})", marked_id, mod::player()->PlayerId);
        marked_id_ = marked_id;
    }
} // ark::mods

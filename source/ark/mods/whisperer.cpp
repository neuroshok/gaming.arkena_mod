#include <ark/mods/whisperer.hpp>

#include <ark/core.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>
#include <autogen/UnityEngine/MessageWriter.hpp>
#include <autogen/AmongUsClient.hpp>

#include <random>

// settings
// other players can identify a marked player 5s before the kill ?

using namespace std::chrono_literals;

namespace ark::mods
{
    whisperer::whisperer(ark::core& c)
        : mod(c, "whisperer")
        , whisperer_id_{ 255 }
        , is_marked_{ false }
        , marked_id_{ 0 }
        , kill_delay_{ 5 }
        , whisper_timer_{ 25 }
        , whisper_range_{ 1.2 }
        , whisper_kill_range_{ 1.8 }
    {
        // ShipStatus::Begin
        core().hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                original(self);
                ark_trace("Game start");

                last_kill_time_ = std::chrono::system_clock::now();

                for (auto* player : *GameData::instance()->AllPlayers)
                {
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), mod::player_control(player->PlayerId)->_cachedData->IsImpostor);
                }
            }
        );

        ::hook_method<&InnerNet::InnerNetClient::Update>([&](auto original, InnerNet::InnerNetClient* self)
        {
            if (is_marked_)
            {
                auto now = std::chrono::system_clock::now();
                if (now >= kill_time_) do_kill();
            }

            original(self);
        });

        core().hook<&KillButtonManager::PerformKill>(
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("TryKill");
            do_whisper(self);
            //if (whisperer_id_ == mod::player()->PlayerId) do_whisper(self);
            //else original(self);
        });


        // PlayerControl::MurderPlayer
        core().hook<&PlayerControl::MurderPlayer>(
            [this](auto original, PlayerControl* source, PlayerControl* target)
        {
            // force local kill
            auto original_value = source->_cachedData->IsImpostor;
            source->_cachedData->IsImpostor = true;
            original(source, target);
            source->_cachedData->IsImpostor = original_value;
        });

        // PlayerControl::HandleRpc
        core().template hook<&PlayerControl::HandleRpc>(
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();

                switch (static_cast<rpc>(event))
                {
                    case rpc::SetInfected:
                    {
                        auto killers_count =data->ReadByte();
                        whisperer_id_ = data->ReadByte();
                        break;
                    }

                    case rpc::EnterVent:
                            KillButtonManager::instance()->isActive = false;
                            //invent_time_ = std::chrono::system_clock::now();

                        break;
                    case rpc::ExitVent:
                            KillButtonManager::instance()->isActive = true;


                        break;

                        //

                    case (rpc)rpc_mod::generic_ability:
                            //on_whisper(data->ReadByte());
                        return;
                    case (rpc)rpc_mod::generic_kill:
                    {
                        auto source_id = data->ReadByte();
                        auto target_id = data->ReadByte();
                        on_kill(source_id, target_id);
                        return;
                    }
                }

              data->set_Position(original_position);
              original(self, event, data);
            }
        );
    }


    void whisperer::do_whisper(KillButtonManager* kill_button)
    {
        auto closest_player = mod::closest_player(mod::player_control())->PlayerId;
        auto marked_distance = mod::player_distance(mod::player_control(), mod::player_control(closest_player));

        auto now = std::chrono::system_clock::now();
        ark_trace("time {} {}", std::chrono::duration_cast<std::chrono::seconds>(now - last_kill_time_ ).count(), std::chrono::seconds(whisper_timer_).count());
        if (marked_distance > whisper_kill_range_
            || std::chrono::duration_cast<std::chrono::seconds>(now - last_kill_time_ ) < std::chrono::seconds(whisper_timer_)) return;


        marked_id_ = closest_player;
        is_marked_ = true;
        kill_time_ = now + std::chrono::seconds(kill_delay_);

        last_kill_time_ = now;
        //mod::player_control(marked_id_)->SetColor(mod::player()->ColorId);
        mod::player_control()->SetKillTimer(whisper_timer_);
        kill_button->isActive = false;
    }

    void whisperer::do_kill()
    {
        auto marked_target = mod::closest_player(mod::player_control(marked_id_));
        ark_trace("try mark {} kill {}", marked_id_, marked_target->PlayerId);

        // marked too far from a target, selfkill
        if (mod::player_distance(mod::player_control(marked_id_), marked_target) > whisper_kill_range_) marked_target = mod::player_control(marked_id_);

        MessageWriter* writer = AmongUsClient::Instance()->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpc_mod::generic_kill);
        writer->Write(marked_id_);
        writer->Write(marked_target->PlayerId);
        AmongUsClient::Instance()->FinishRpcImmediately(writer);

        on_kill(marked_id_, marked_target->PlayerId);
        marked_id_ = 0;
        is_marked_ = false;
    }
    void whisperer::on_kill(std::uint8_t source_id, std::uint8_t target_id)
    {
        ark_trace("mark {} kill {}", source_id, target_id);
        local_kill(mod::player_control(source_id), mod::player_control(target_id));
    }
} // ark::mods

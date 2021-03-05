#include <ark/mods/whisperer.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/AmongUsClient.hpp>

#include <random>

// source killing wrong target
//

// settings
// other players can identify a marked player 5s before the kill ?

//using namespace Hazel;

static bool original_value;

using namespace std::chrono_literals;

namespace ark::mods
{
    whisperer::whisperer(ark::core& c)
        : mod(c, "whisperer", {0, 1, 0})
        , whisperer_id_{ 255 }
        , is_marked_{ false }
        , marked_id_{ 255 }
        , kill_delay_{ 5 }
        , whisper_timer_{ 25 }
        , whisper_range_{ 1.2 }
        , whisper_kill_range_{ 1.8 }
    {
        mod::add_setting("whisper.timer", 25);
        mod::add_setting("whisper.death_delay", 8, "The delay before the whispered player kill");
        mod::add_setting("whisper.whisper_range", 1.2f);
        mod::add_setting("whisper.whispered_kill_range", 1.8f);
        //mod::setting<std::string>("whisper.name");
        //mod::setting<int>("whisper.timer");

        set_description("The Whisperer\nWhen the whisperer kill, the target will not die but kill someone, in the X next seconds. If nobody is in range, the target kills itself");
    }


    void whisperer::do_whisper(KillButtonManager* kill_button)
    {
        ark_trace("do whisper");
        auto closest_player = mod::closest_player(mod::player_control())->PlayerId;
        auto marked_distance = mod::player_distance(mod::player_control(), mod::player_control(closest_player));

        auto now = std::chrono::system_clock::now();
        ark_trace("time {} {}", std::chrono::duration_cast<std::chrono::seconds>(now - last_kill_time_).count(), std::chrono::seconds(whisper_timer_).count());
        if (marked_distance > whisper_kill_range_
            || std::chrono::duration_cast<std::chrono::seconds>(now - last_kill_time_) < std::chrono::seconds(whisper_timer_)) return;


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

        MessageWriter* writer = AmongUsClient::statics()->instance->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpc_mod::generic_kill);
        writer->Write(marked_id_);
        writer->Write(marked_target->PlayerId);
        AmongUsClient::statics()->instance->FinishRpcImmediately(writer);

        on_kill(marked_id_, marked_target->PlayerId);
        marked_id_ = 255;
        is_marked_ = false;
    }
    void whisperer::on_kill(std::uint8_t source_id, std::uint8_t target_id)
    {
        ark_trace("mark {} kill {}", source_id, target_id);
        local_kill(mod::player_control(source_id), mod::player_control(target_id));
    }

    void whisperer::on_enable()
    {
        //mod::setting<int>("whisper.timer");

        last_kill_time_ = std::chrono::system_clock::now();

        mod::hook_intro();

        // ShipStatus::Begin
        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
            {
                ark_trace("Game start");

                for (auto* player : *GameData::statics()->instance->AllPlayers)
                {
                    auto is_impo = mod::player_control(player->PlayerId)->playerInfo->IsImpostor;
                    ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->playerInfo->IsImpostor);
                }

                if (whisperer_id_ == mod::player()->PlayerId)
                {
                    mod::set_player_name_color(mod::player_control(whisperer_id_), { 0.5, 0, 0.5 });
                    mod::set_intro( {.title = "Whisperer", .subtitle = "ANNIHILATE THEM", .title_color = {1, 1, 1}, .subtitle_color = {1, 1, 0} });
                }
                else mod::set_intro( {.title = mod::player()->PlayerName->str(), .subtitle = "RUNNNNNNN", .title_color = {1, 1, 1}, .subtitle_color = {1, 1, 0} });

            }
        );

        ark::hook<&InnerNet::InnerNetClient::Update>::before(this, [this](InnerNet::InnerNetClient* self)
        {
            if (is_marked_)
            {
                auto now = std::chrono::system_clock::now();
                if (now >= kill_time_) do_kill();
            }
        });

        ark::hook<&KillButtonManager::PerformKill>::overwrite(this,
            [this](auto original, KillButtonManager* self)
        {
            ark_trace("TryKill");
            ark_trace("config : {}", this->setting<std::string>("whisper.aze"));
            //if (whisperer_id_ == mod::player()->PlayerId) do_whisper(self);
            //else do_kill();
            do_whisper(self);
        });


        // PlayerControl::MurderPlayer
        ark::hook<&PlayerControl::MurderPlayer>::before(this, [this](PlayerControl* source, PlayerControl* target)
        {
            // force local kill
            original_value = source->playerInfo->IsImpostor;
            source->playerInfo->IsImpostor = true;
        });

        ark::hook<&PlayerControl::MurderPlayer>::after(this, [this](PlayerControl* source, PlayerControl* target)
        {
            source->playerInfo->IsImpostor = original_value;
        });


        // PlayerControl::HandleRpc
        ark::hook<&PlayerControl::HandleRpc>::after(this,
            [this](PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();
                //ark_trace("original_position {}", original_position);
                data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case rpc::SetInfected:
                    {
                        auto killers_count = data->ReadByte();
                        for (int i = 0; i < killers_count; ++i)
                        {
                            auto killer_id = data->ReadByte();
                            if (i == 0) whisperer_id_ = killer_id;
                        }


                        if (whisperer_id_ == mod::player()->PlayerId)
                        {
                            mod::set_player_name_color(mod::player_control(whisperer_id_), {0.5, 0, 0.5});
                            mod::set_intro( {.title = "Whisperer", .subtitle = std::to_string(whisperer_id_), .title_color = {1, 1, 1}, .subtitle_color = {1, 1, 0} });
                        }
                        else mod::set_intro( {.title = mod::player()->PlayerName->str(), .subtitle = "Whisper someone", .title_color = {1, 1, 1}, .subtitle_color = {1, 1, 0} });

                            break;
                        }

                    case rpc::EnterVent:
                            //KillButtonManager::instance()->isActive = false;
                            //invent_time_ = std::chrono::system_clock::now();

                        break;
                    case rpc::ExitVent:
                            //KillButtonManager::instance()->isActive = true;


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

              //data->set_Position(original_position);
            }
        );
    }
} // ark::mods

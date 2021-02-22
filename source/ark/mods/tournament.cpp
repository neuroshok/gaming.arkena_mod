#include <ark/mods/tournament.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <autogen/GameStartManager.hpp>
#include <autogen/GameData.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/Unity/Renderer.hpp>
#include <autogen/Hazel/MessageReader.hpp>

namespace ark::mods
{
    tournament::tournament(ark::core& pcore)
        : mod(pcore, "tournament", {0, 0, 1}, false)
    {}

    void tournament::on_enable()
    {
        ark::hook<&PlayerControl::CompleteTask>::before(
        this, [](auto&& self, std::uint32_t v) -> void
        {
            ark_trace("{} completed 1 task {}", self->PlayerId, v);
        });

        /*
        ark::hook<&PlayerControl::HandleRpc>::before(this,
        [this](PlayerControl* self, auto event, MessageReader* data)
        {
            auto original_position = data->get_Position();
            ark_trace("Tournament event {} {} p:{}", event, (uintptr_t)data->Parent, original_position);
            //data->set_Position(2);
            if (data->Parent)
            {
                auto v = data->Parent->ReadByte();
                ark_trace("PARENT {}", v);
            }

            switch (static_cast<rpc>(event))
            {
                case rpc::MurderPlayer: {
                    auto source_id = data->ReadByte();
                    auto target_id = data->ReadByte();
                    ark_trace("MurderPlayer {} {}", source_id, target_id);
                }
                    break;

                case rpc::CompleteTask: {
                    auto id = data->ReadByte();
                    ark_trace("CompleteTask {} {}", id);
                }
                    break;

                case rpc::ReportDeadBody: {
                    // 255 : start meeting
                    auto source_id = data->ReadByte();
                    auto target_id = data->ReadByte();
                    ark_trace("ReportDeadBody {} {}", source_id, target_id);
                }
                    break;

                case rpc::CastVote: {
                    auto source_id = data->ReadByte();
                    auto target_id = data->ReadByte();
                    ark_trace("CastVote {} {}", source_id, target_id);
                }
                    break;
                default:
                    ark_trace("default");
            }


            for (int i = 0; i < 4; ++i)
            {
                std::uint8_t d = data->ReadByte();
                ark_trace("{}: {}", i, d);
            }

            data->set_Position(original_position);
        });
         */

        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
        {
            ark_trace("Game start");

            for (auto* player : *GameData::statics()->instance->AllPlayers)
            {
                auto is_impo = mod::player_control(player->PlayerId)->_cachedData->IsImpostor;
                ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->_cachedData->IsImpostor);
            }

        });
    }
    void tournament::on_disable() { mod::on_disable(); }
} // ark
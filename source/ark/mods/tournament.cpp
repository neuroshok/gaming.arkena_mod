#include <ark/mods/tournament.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <au/GameStartManager.hpp>
#include <au/GameData.hpp>
#include <au/PlayerControl.hpp>
#include <au/ShipStatus.hpp>
#include <au/UnityEngine/Renderer.hpp>
#include <au/Hazel/MessageReader.hpp>

namespace ark::mods
{
    tournament::tournament(ark::core& pcore)
        : mod(pcore, "tournament", {0, 0, 1}, false)
    {}

    // task complete

    void tournament::on_enable()
    {
        //hook_events();
        /*
        ark::hook<&PlayerControl::CompleteTask>::before(
        this, [](auto&& self, std::uint32_t v) -> void
        {
            ark_trace("{} completed 1 task {}", self->PlayerId, v);
        });

        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
        {
            ark_trace("Game start");

            for (auto* player : *GameData::statics()->instance->AllPlayers)
            {
                auto is_impo = mod::player_control(player->PlayerId)->playerInfo->IsImpostor;
                ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->playerInfo->IsImpostor);
            }

        });*/
    }
    void tournament::on_disable() { mod::on_disable(); }
} // ark
#include <ark/mod.hpp>

#include <ark/core.hpp>
#include <ark/utility/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>

#include <cmath>

namespace ark
{
    mod::mod(ark::core& core)
        : core_{ core }
    {
    }

    ark::core& mod::core() { return core_; }

    void mod::local_kill(PlayerControl* source, PlayerControl* target)
    {
        source->MurderPlayer(target);
    }

    float mod::player_distance(PlayerControl* source, PlayerControl* target)
    {
        auto source_pos = source->GetTruePosition();
        auto target_pos = target->GetTruePosition();

        return std::sqrt((source_pos.x - target_pos.x) * (source_pos.x - target_pos.x) + (source_pos.y - target_pos.y) * (source_pos.y - target_pos.y));
    }

    PlayerControl* mod::closest_player(PlayerControl* source)
    {
        ark_trace("closest_player");
        auto min = std::numeric_limits<float>::max();
        PlayerControl* closest = nullptr;

        for (auto* player : *GameData::instance()->AllPlayers)
        {
            if (player->PlayerId != source->PlayerId)
            {
                auto distance = player_distance(mod::player_control(player->PlayerId), source);
                if (distance < min)
                {
                    min = distance;
                    closest = mod::player_control(player->PlayerId);
                }
            }
        }
        ark_assert(closest, "closest exist");

        return closest;
    }

    /*
    void mod::on_begin(ShipStatus*)
    {

        core().template hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                ark_trace("begin");
                original(self);
                on_game_start(self);
            }
        );
    }*/


    GameData::PlayerInfo* mod::player() { return player(player_control()); }
    PlayerControl* mod::player_control() { return PlayerControl::instance(); }

    GameData::PlayerInfo* mod::player(int id) { return GameData::instance()->GetPlayerById(id); }
    GameData::PlayerInfo* mod::player(PlayerControl* pc) { return player(pc->PlayerId); }
    PlayerControl* mod::player_control(int id) { return player(id)->_object; }



} // ark
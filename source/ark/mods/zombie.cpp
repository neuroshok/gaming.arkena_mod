#include <ark/mod.hpp>

#include <ark/core.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/UnityEngine/MessageWriter.hpp>
#include <autogen/InnerNet/InnerNetClient.hpp>

#include <ark/mods/zombie.hpp>


namespace ark::mods
{
    zombie::zombie(ark::core& pcore)
        : mod(pcore, "zombie")
    {
        // PlayerControl::RpcMurderPlayer
        core().template hook<&PlayerControl::RpcMurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
            {
                ark_trace("zombie player kill {} {}", self->PlayerId, target->PlayerId);

                PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
                //original(self, target);
                //on_kill(self, target);
            }
        );

        // ShipStatus::Begin
        core().template hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                ark_trace("begin");
                original(self);
                on_game_start(self);
            }
        );

        // ShipStatus::HandleRpc
        core().template hook<&PlayerControl::HandleRpc>(
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("call hooked {}", event, data->get_BytesRemaining());
                auto e = data->ReadByte();
                data->set_Position(2);

                //ark_trace("1st byte {}", (int)e);

                switch (static_cast<rpc>(event))
                {
                    case rpc::SetColor:
                    {
                        original(self, event, data);

                        return;
                    }
                    break;

                    case rpc::SendChat:
                    {
                        std::string message;

                        while (data->get_BytesRemaining())
                        {
                            message += data->ReadByte();
                        }
                        ark_trace("{}", message);
                        PlayerControl::instance()->MurderPlayer(PlayerControl::instance());
                        data->set_Position(2);

                        if (message == "!test")
                        {

                        }
                    }
                    break;
                }

                ark_trace("call original {}", event, data->get_BytesRemaining());
                original(self, event, data);
            }
        );
    }

    void zombie::on_game_start(ShipStatus* ship)
    {
        ark_trace("Game start");

        for (auto* player : *GameData::instance()->AllPlayers)
        {
            ark_trace("Name : {} - {}", player->PlayerName->to_utf8(), player->IsImpostor);
            ark_trace("Impostor : {}", player->IsImpostor);
            if (player->IsImpostor) zombie_id_ = player->PlayerId;
            //players_.emplace_back(const_cast<GameData::PlayerInfo*>(player));
        }
    }



    void zombie::on_kill(PlayerControl* self, PlayerControl* target)
    {
        auto m = self->get_method<void(*)(PlayerControl*, std::uint8_t)>("RpcSetColor");
        m(self, 0);

        auto m2 = target->get_method<void(*)(PlayerControl*, std::uint8_t)>("RpcSetColor");
        m2(target, 0);

        //auto r = self->get_method<void(*)(PlayerControl*, std::uint8_t)>("HandleRpc");
        //r(8);

        /*
        auto it = std::find_if(players_.begin(), players_.end(), [target](auto* p){ return target->PlayerId == p->_object->PlayerId; });
        if (it != players_.end())
        {
            (*it)->IsImpostor = true;
        }*/

        //auto g = GameData::instance()->get_method<void(*)(GameData*)>("RpcUpdateGameData");
        //g(GameData::instance());

        //zombie_players_.emplace_back(target->PlayerId);

        //ark_trace("Zombies : {}", zombie_players_.size());

    }
} // ark::mods

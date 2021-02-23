#include <ark/mods/spy.hpp>

#include <ark/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/AmongUsClient.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>

#include <random>

namespace ark::mods
{
    spy::spy(ark::core& c)
        : mod(c, "spy", {0, 1, 0})
    {
        set_description("The Spy\nA spy can use vents");
    }

    void spy::role_distribution()
    {

    }

    void spy::on_enable()
    {
        mod::hook_intro();

        ark::hook<&PlayerControl::HandleRpc>::overwrite(this,
            [this](auto original, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();
                //ark_trace("original_position {}", original_position);
                data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::generic_role: {
                        auto spy_id = data->ReadByte();
                        ark_trace("id {} {}", spy_id, mod::player()->PlayerId);
                        is_spy_ = spy_id == mod::player()->PlayerId;
                    }
                    return;

                    case rpc::SetInfected:
                    {
                        role_distribution();

                        for (auto* player : *GameData::statics()->instance->AllPlayers)
                        {
                            auto is_impo = mod::player_control(player->PlayerId)->_cachedData->IsImpostor;
                            ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->_cachedData->IsImpostor);
                            if (!is_impo)
                            {
                                auto spy_id = player->PlayerId;
                                MessageWriter* writer = AmongUsClient::statics()->instance->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpc_mod::generic_role);
                                writer->Write(spy_id);
                                AmongUsClient::statics()->instance->FinishRpcImmediately(writer);
                                break;
                            }
                        }
                        break;
                    }
                }

              data->set_Position(original_position);
              original(self, event, data);
            }
        );


        ark::hook<&HudManager::Start>::before(this, [this](auto&& self) -> void
        {
            hud_ = self;
            vent_sprite_ = hud_->UseButton->VentImage;
            use_sprite_ = hud_->UseButton->UseImage;
        });

        ark::hook<&Vent::CanUse>::overwrite(this,
        [this](auto original, auto&& self, GameData::PlayerInfo* player_info, bool& in_range, bool& in_use_range) -> float
        {
            if (!is_spy_) return original(self, player_info, in_range, in_use_range);

            if ((in_range || in_use_range) && !sprite_vent_)
            {
                self->renderer->set_sprite(vent_sprite_);
                sprite_vent_ = true;
            }
            else
            {
                self->renderer->set_sprite(use_sprite_);
                sprite_vent_ = false;
            }

            player_info->IsImpostor = true;
            auto v = original(self, player_info, in_range, in_use_range);
            player_info->IsImpostor = false;
            return v;
        });

        /*
        ark::hook<&Vent::SetOutline>::overwrite(this, [](auto original, auto&& self, bool EHNJJAPKPMF, bool OPFNEGKJDLB) -> void {
            ark_trace("Vent::SetOutline(void), EHNJJAPKPMF(bool): {}, OPFNEGKJDLB(bool): {}", EHNJJAPKPMF, OPFNEGKJDLB);
            return original(self, EHNJJAPKPMF, OPFNEGKJDLB);
        }); // 0xD71EB0*/
    }
} // ark::mods

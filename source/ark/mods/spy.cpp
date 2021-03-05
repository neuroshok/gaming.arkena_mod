#include <ark/mods/spy.hpp>

#include <ark/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/AmongUsClient.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>

#include <random>

enum class role_type { impostor, crewmate, spy };

namespace ark::mods
{
    spy::spy(ark::core& c)
        : mod(c, "spy", {0, 1, 0})
    {
        set_description("The Spy\nA spy can use vents");

        mod::add_setting("spy_count", 1, "Number of spies");
    }

    void spy::do_role_distribution()
    {
        std::vector<uint8_t> roles;
        for (auto* player : mod::players())
        {
            ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->playerInfo->IsImpostor);
            if (!player->IsImpostor)
            {
                roles.emplace_back(player->PlayerId);
            }
        }

        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(roles.begin(), roles.end(), g);
        roles.resize(mod::setting<int>("spy_count"));
        mod::send_all(rpc_mod::role_distribution, roles);
        on_role_distribution(roles);
    }

    void spy::on_role_distribution(const std::vector<std::uint8_t>& roles)
    {
        is_spy_ = false;

        ark_trace("distribute {} roles", roles.size());
        for (const auto& player : mod::players())
        {
            if (!mod::player()->IsImpostor) mod::set_intro({ .title = "Crewmate", .subtitle = "Save the world", .title_color = { 0, 0.3, 1 }, .subtitle_color = { 0, 0.3, 1 } });
        }

        for (const auto& player_id : roles)
        {
            ark_trace("pid: {} role: {}", mod::player()->PlayerId, roles[mod::player()->PlayerId]);
            if (player_id == mod::player()->PlayerId)
            {
                is_spy_ = true;
                mod::set_player_name_color(mod::player_control(player_id), { 0.5, 0.2, 0.2 });
                mod::set_intro({ .title = "Spy", .subtitle = "Your name is Bond", .title_color = { 0.5, 0.2, 0.2 }, .subtitle_color = { 1, 1, 0 } });
            }
        }
    }

    void spy::on_enable()
    {
        mod::hook_intro();

        ark::hook<&PlayerControl::HandleRpc>::after(this,
            [this](PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();
                ark_trace("original_position {}", original_position);
                data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::generic_role: {
                        auto spy_id = data->ReadByte();
                        ark_trace("id {} {}", spy_id, mod::player()->PlayerId);
                        is_spy_ = spy_id == mod::player()->PlayerId;
                        break;
                    }

                    case rpc::SetInfected:
                    {
                        auto killers_count = data->ReadByte();
                        for (int i = 0; i < killers_count; ++i)
                        {
                            auto killer_id = data->ReadByte();
                            if (mod::player()->PlayerId == killer_id)
                                mod::set_intro({ .title = "Impostor", .subtitle = "ANNIHILATE EVERYONE", .title_color = { 1, 0.1, 0.1 }, .subtitle_color = { 1, 0.1, 0.1 } });
                        }
                        break;
                    }

                    case (rpc)rpc_mod::role_distribution:
                    {
                        on_role_distribution(data->read_vector<std::uint8_t>());
                        break;
                    }
                }

              //data->set_Position(original_position);
              //original(self, event, data);
            }
        );

        ark::hook<&PlayerControl::RpcSetInfected>::overwrite(this, [this](auto original, auto&& self, GameData::PlayerInfo* player) -> void {
            ark_trace("PlayerControl::RpcSetInfected(void), JPGEIBIBJPJ(): {}", player->PlayerId);
            original(self, player);
            do_role_distribution();
        }); // 0x8F0430

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
    }
} // ark::mods

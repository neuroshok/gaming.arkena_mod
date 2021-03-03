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

        mod::add_setting("impostor_count", 1, "Number of impostors");
        mod::add_setting("spy_count", 1, "Number of spies");
    }

    void spy::do_role_distribution()
    {
        std::vector<std::uint8_t> roles { 2, (int)role_type::spy };
        std::vector<std::uint8_t> out;

        int i = 0;
        for (; i < roles.size(); i += 2)
            for (int j = 0; j < roles[i]; ++j) out.emplace_back(roles[i + 1]);
        for (; i < mod::players().size(); ++i) out.emplace_back((std::uint8_t)role_type::crewmate);

         std::cout << "\nar" << i << " " << mod::players().size();
        for (auto item : out) std::cout << "_" << (int)item;

        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(out.begin(), out.end(), g);
        mod::send_all(rpc_mod::role_distribution, out);
        on_role_distribution(out);
    }

    void spy::on_role_distribution(const std::vector<std::uint8_t>& roles)
    {
        if (mod::players().size() != roles.size())
        {
            ark_trace("role dist error");
            return;
        }

        for (auto* player : mod::players())
        {
            //auto is_impo = mod::player_control(player->PlayerId)->playerInfo->IsImpostor;
            //ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->str(), mod::player_control(player->PlayerId)->playerInfo->IsImpostor);
            //ark_trace("pid: {} {}", player->PlayerId , roles.size());


            ark_trace("pid: {} role: {}", player->PlayerId, roles[player->PlayerId]);

            if (player->PlayerId == mod::player()->PlayerId)
            {
                ark_trace("PlayerId: {} PlayerId: {}", player->PlayerId, mod::player()->PlayerId);
                //if (roles[player->PlayerId] == (int)role_type::impostor)
                if (roles[player->PlayerId] == (int)role_type::impostor)
                {
                    player->IsImpostor = true;
                    mod::player_control(player->PlayerId)->playerInfo->IsImpostor = true;
                    mod::set_intro({ .title = "Impostor", .title_color = { 0.5, 0.5, 1, 0.1 } });
                }
                else if (roles[player->PlayerId] == (int)role_type::spy)
                {
                    mod::set_intro({ .title = "Spy", .subtitle = "My name is Bond", .title_color = { 0.5, 0.5, 0.5, 0.1 } });
                    mod::set_player_name_color(mod::player_control(), { 0.5, 0.5, 0.5, 1 });
                    is_spy_ = true;
                }
                else mod::set_intro({ .title = "Crewmate", .title_color = { 0.5, 0.5, 1, 0.1 } });
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
                //ark_trace("original_position {}", original_position);
                //data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::generic_role: {
                        auto spy_id = data->ReadByte();
                        ark_trace("id {} {}", spy_id, mod::player()->PlayerId);
                        is_spy_ = spy_id == mod::player()->PlayerId;
                    }
                    return;

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

        /*
        ark::hook<&Vent::SetOutline>::overwrite(this, [](auto original, auto&& self, bool EHNJJAPKPMF, bool OPFNEGKJDLB) -> void {
            ark_trace("Vent::SetOutline(void), EHNJJAPKPMF(bool): {}, OPFNEGKJDLB(bool): {}", EHNJJAPKPMF, OPFNEGKJDLB);
            return original(self, EHNJJAPKPMF, OPFNEGKJDLB);
        }); // 0xD71EB0*/
    }
} // ark::mods

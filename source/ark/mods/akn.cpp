#include <ark/mods/akn.hpp>

#include <ark/hook.hpp>
#include <ark/mods/akn/player.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/HudManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/Unity/Transform.hpp>

#include <random>


/*
namespace roles
{
    struct killer : basic_role<role_type::killer>
    {
        static inline auto name = "killer";
        //color = {1, 1, 1};
    };

    struct spy : basic_role<role_type::spy>
    {
        static inline auto name = "test";
        //color = {1, 1, 1};

        //ark::setting settings;
    };
} // roles*/

#define init_role(Role) role_makers_.emplace(akn::role_type::Role, [](auto& mod, auto player_id){ return std::make_unique<akn::Role>(mod, player_id); });

namespace akn
{
    mod::mod(ark::core& c)
        : ark::mod(c, "arkrole", {0, 1, 0})
    {
        init_roles();

        set_description("Multiple roles and teams mod");

        mod::add_setting("count", 1);
    }

    void mod::init_roles()
    {
        init_role(peon);
        init_role(pranker);
        init_role(voyager);
    }

    akn::player* mod::add_player(std::uint8_t player_id, role_type role)
    {
        auto role_maker = role_makers_.find(role);
        if (role_maker == role_makers_.end())
        {
            mod::error("role maker not found");
            return nullptr;
        }

        players_.emplace_back(role_maker->second(*this, player_id));
        return players_.back().get();
    }

    void mod::do_role_distribution()
    {
        std::vector<std::uint8_t> roles { 1, (int)role_type::pranker, 1, (int)role_type::voyager };
        std::vector<std::uint8_t> out;

        for (int i = 0; i < roles.size(); i += 2)
            for (int j = 0; j < roles[i]; ++j) out.emplace_back(roles[i + 1]);
        for (int i = out.size(); i < mod::players().size(); ++i) out.emplace_back((std::uint8_t)role_type::peon);

        //for (const auto& item : roles) ark_trace("r: {}", item);

        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(out.begin(), out.end(), g);
        mod::send_all(rpc_mod::role_distribution, out);
        on_role_distribution(out);
    }

    void mod::on_role_distribution(const std::vector<std::uint8_t>& roles)
    {
        return;

        if (mod::players().size() != roles.size())
        {
            ark_trace("role dist error {} {}", mod::players().size(), roles.size());
            return;
        }

        for (auto* player : mod::players())
        {
            ark::mod::player()->IsImpostor = false;

            //ark_trace("pid: {} role: {}", player->PlayerId, roles[player->PlayerId]);

            auto added_player = add_player(player->PlayerId, static_cast<akn::role_type>(roles[player->PlayerId]));
            //ark_trace("plocal id: {} role: {}", ark::mod::player()->PlayerId, (uintptr_t)added_player);
            if (!added_player) return;
            //ark_trace("role {}", p->role_name());


            if (added_player->id() == ark::mod::player()->PlayerId)
            {
                added_player->init_ui();
                mod::set_intro(added_player->intro());
                mod::set_player_name_color(mod::player_control(), added_player->color());
            }
        }
    }

    void mod::on_enable()
    {
        mod::hook_intro();
        mod::hook_end_game();
        mod::hook_hud();

        ark::hook<&HudManager::Update>::after(this, [this](auto&& self) {
            for (const auto& player : players_)
                player->update_ui();
        });

        static akn::player* p = nullptr;

        ark::hook<&UseButton::DoClick>::overwrite(this, [this](auto&& o, auto&& self) {
            ark_trace("test");
            if (p == nullptr) p = add_player(0, role_type::peon);
            p->init_ui();
            });


        ark::hook<&PlayerControl::RpcSetInfected>::overwrite(this, [this](auto original, auto&& self, GameData::PlayerInfo* player) -> void {
            original(self, player);
            do_role_distribution();
        }); // 0x8F0430

        ark::hook<&PlayerControl::HandleRpc>::after(this,
            [this](PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::generic_role: {
                        auto roles_count = data->ReadByte();
                        ark_trace("id {} {}", roles_count, ark::mod::player()->PlayerId);
                    }
                    return;

                    case (rpc)rpc_mod::role_distribution:
                    {
                        on_role_distribution(data->read_vector<std::uint8_t>());
                        break;
                    }
                }
            }
        );
    }

    akn::player* mod::player(std::uint8_t player_id)
    {
        auto player_it = std::find_if(players_.begin(), players_.end(), [&player_id](auto&& p) { return p->id() == player_id; });
        if (player_it == players_.end())
        {
            error("player not found");
            return nullptr;
        }

        return player_it->get();
    }
} // ark::mods

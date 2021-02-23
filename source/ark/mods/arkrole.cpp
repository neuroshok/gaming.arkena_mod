#include <ark/mods/arkrole.hpp>

#include <ark/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/AmongUsClient.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>

#include <random>

enum class team_type { none, crewmate, impostor };
enum class role_type { none, killer, spy };

struct role
{
    static inline std::string name = "default_role";
    role_type type = role_type::none;
    Unity::Color color = {1, 1, 1};
};

template<role_type ID>
struct basic_role : role
{
    static inline std::uint8_t id = static_cast<std::uint8_t>(ID);
};

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
} // roles

namespace ark::mods
{
    arkrole::arkrole(ark::core& c)
        : mod(c, "arkrole", {0, 1, 0})
    {
        set_description("Multiple roles and teams mod");
        roles::spy spy;
        //spy.

        //roles_.emplace_back(std::move(spy));

        mod::add_setting("count", 1);
        mod::add_setting("vent_range", 1.4f);
        mod::add_setting("zeta", "test");
    }

    void arkrole::role_distribution()
    {
        /*
        for (const auto& role : roles_)
        {

        }*/
        //add_role<roles::spy>()

        std::random_device rd;
        std::mt19937 g(rd());

        std::vector<role_type> roles;
        roles.emplace_back(  );

        for (auto player : mod::players())
        {

        }
    }

    void arkrole::on_enable()
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
                        auto roles_count = data->ReadByte();
                        ark_trace("id {} {}", roles_count, mod::player()->PlayerId);
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
    }
} // ark::mods

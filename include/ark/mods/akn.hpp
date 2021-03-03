#pragma once

#include <ark/mod.hpp>

#include <ark/mods/akn/player.hpp>

namespace ark { class core; }

namespace akn
{

    enum class team_type : std::uint8_t { none, evil, light };
    enum class role_type : std::uint8_t { none, killer, peon, pranker, voyager };
    using role_makers_type = std::unordered_map<role_type, std::function<std::unique_ptr<akn::player>(akn::mod&, std::uint8_t)>>;

    class mod : public ark::mod
    {
    public:

        explicit mod(ark::core& core);

        void on_enable() override;

        akn::player* add_player(std::uint8_t player_id, role_type role);
        akn::player* player(std::uint8_t player_id);

        void do_role_distribution();
        void on_role_distribution(const std::vector<std::uint8_t>&);

    private:
        void init_roles();

    private:
        std::vector<std::unique_ptr<akn::player>> players_;
        akn::role_makers_type role_makers_;
    };
}// akn
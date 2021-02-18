#pragma once

#include <ark/mod.hpp>

#include <autogen/GameData.hpp>
#include <autogen/ShipStatus.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class zombie : public mod
    {
    public:
        inline static constexpr auto name = "zombie";

        explicit zombie(ark::core& core);

        void on_kill(PlayerControl* self, PlayerControl* target);
        void on_game_start(ShipStatus*);

    private:
        int zombie_id_ = 0;
        int infected_ = 1;
        std::vector<int> zombie_players_;
        std::vector<GameData::PlayerInfo*> players_;
    };
}// ark::mods
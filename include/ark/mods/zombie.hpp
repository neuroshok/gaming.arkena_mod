#pragma once

#include <ark/mod.hpp>

#include <au/GameData.hpp>
#include <au/ShipStatus.hpp>

namespace ark { class core; }

class HudManager;
class ShipStatus;

namespace ark::mods
{
    class zombie : public mod
    {
    public:
        explicit zombie(ark::core& core);

        void add_zombie(PlayerControl*);

        void on_enable() override;
        void on_kill(std::uint8_t);

    private:
        HudManager* hud_ = nullptr;
        ShipStatus* ship_ = nullptr;
        bool end_game_ = false;

        int infected_ = 0;
    };
}// ark::mods
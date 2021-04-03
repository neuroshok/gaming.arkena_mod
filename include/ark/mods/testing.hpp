#pragma once

#include <ark/mod.hpp>

#include <au/GameData.hpp>
#include <au/ShipStatus.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class testing : public mod
    {
    public:
        explicit testing(ark::core& core);

        void on_enable() override;
        void on_disable() override;

    private:

    };
}// ark::mods
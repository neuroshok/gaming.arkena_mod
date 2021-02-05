#pragma once

#include <ark/mod.hpp>

#include <autogen/GameData.hpp>
#include <autogen/ShipStatus.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class testing : public mod
    {
    public:
        inline static constexpr auto name = "testing";

        explicit testing(ark::core& core);

    private:

    };
}// ark::mods
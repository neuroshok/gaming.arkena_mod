#pragma once

#include <ark/mod.hpp>

#include <autogen/GameData.hpp>
#include <autogen/ShipStatus.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class sniper : public mod
    {
    public:
        inline static constexpr auto name = "sniper";

        explicit sniper(ark::core& core);

        void on_begin(ShipStatus*) override;
        void do_kill(PlayerControl* );

        void on_kill(std::uint8_t source_id, std::uint8_t target_id);
        void on_mark(std::uint8_t marked_id);

    private:
        int marker_id_ = 0;
        int sniper_id_ = 0;
        int marked_id_ = -1;
    };
}// ark::mods
#pragma once

#include <ark/mod.hpp>

namespace ark { class core; }

struct GameStartManager;

namespace ark::mods
{
    class core : public mod
    {
    public:
        explicit core(ark::core&);

        void on_enable() override;

    private:
        GameStartManager* start_manager_;

        int compatible_players_count_;
    };
}// ark::mods
#pragma once

#include <ark/mod.hpp>
#include <ark/mods/core/server.hpp>

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
        bool initialized_ = false;
        ark::mods::core_server server_;

        GameStartManager* start_manager_;

        int compatible_players_count_;
    };
}// ark::mods
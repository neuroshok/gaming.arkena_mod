#pragma once

#include <ark/mod.hpp>

struct GameStartManager;

namespace ark { class core; }

namespace ark::mods
{
    class tools : public mod
    {
    public:
        explicit tools(ark::core& core);

        void on_enable() override;
        void on_disable() override;

    private:
    };
}// ark::mods
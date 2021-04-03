#pragma once

#include <ark/mod.hpp>

#include <au/Vent.hpp>
#include <au/HudManager.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class pranker : public mod
    {
    public:
        explicit pranker(ark::core& core);

        void on_enable() override;


    private:

    };
}// ark::mods
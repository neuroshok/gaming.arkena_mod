#pragma once

#include <ark/mod.hpp>

#include <autogen/Vent.hpp>
#include <autogen/HudManager.hpp>

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
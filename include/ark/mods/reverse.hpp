#pragma once

#include <ark/mod.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class reverse : public mod
    {
    public:
        explicit reverse(ark::core& core);

        void on_enable() override;
        void on_disable() override;

    private:

    };
}// ark::mods
#pragma once

#include <ark/mod.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class tournament : public mod
    {
    public:
        explicit tournament(ark::core& core);

        void on_enable() override;
        void on_disable() override;

    private:

    };
}// ark::mods
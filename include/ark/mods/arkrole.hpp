#pragma once

#include <ark/mod.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class arkrole : public mod
    {
    public:
        explicit arkrole(ark::core& core);

        void on_enable() override;

        void role_distribution();

    private:

    };
}// ark::mods
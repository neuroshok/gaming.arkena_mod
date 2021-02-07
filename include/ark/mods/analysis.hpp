#pragma once

#include <ark/mod.hpp>


namespace ark { class core; }

namespace ark::mods
{
    class analysis : public mod
    {
    public:
        inline static constexpr auto name = "analysis";

        explicit analysis(ark::core& core);

    private:

    };
}// ark::mods
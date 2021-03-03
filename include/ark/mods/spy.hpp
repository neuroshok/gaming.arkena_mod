#pragma once

#include <ark/mod.hpp>

#include <autogen/Vent.hpp>
#include <autogen/HudManager.hpp>

namespace ark { class core; }

namespace ark::mods
{
    class spy : public mod
    {
    public:
        explicit spy(ark::core& core);

        void on_enable() override;


        void do_role_distribution();
        void on_role_distribution(const std::vector<std::uint8_t>&);

    private:
        HudManager* hud_ = nullptr;
        Unity::Sprite* vent_sprite_ = nullptr;
        Unity::Sprite* use_sprite_ = nullptr;
        bool sprite_vent_ = false;

        bool is_spy_ = false;
    };
}// ark::mods
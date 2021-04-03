#pragma once

#include <ark/mod.hpp>

#include <au/HudManager.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/Vent.hpp>

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
        UnityEngine::Sprite* vent_sprite_ = nullptr;
        UnityEngine::Sprite* use_sprite_ = nullptr;
        bool sprite_vent_ = false;

        bool is_spy_ = false;
    };
}// ark::mods
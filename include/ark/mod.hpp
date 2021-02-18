#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <autogen/GameData.hpp>
#include <autogen/UnityEngine/Color.hpp>

class PlayerControl;
class ShipStatus;

namespace ark
{
    namespace ui { class core; }
    class core;

    class mod
    {
        friend class ark::ui::core;

    public:
        explicit mod(ark::core& core, std::string name);

        struct intro
        {
            std::string title;
            std::string subtitle;
            UnityEngine::Color title_color = {};
            UnityEngine::Color subtitle_color = {};
        };

        ark::core& core();

        virtual void on_enable() {}
        virtual void on_disable() {}

        void enable();
        void disable();

        const std::string& name() const;
        bool enabled() const;

        void hook_intro();
        void set_intro(mod::intro intro);

        static void set_player_name_color(PlayerControl*, float r, float g, float b, float a = 1);

        static GameData::PlayerInfo* player();
        static PlayerControl* player_control();
        static PlayerControl* player_name();


        static GameData::PlayerInfo* player(int id);
        static GameData::PlayerInfo* player(PlayerControl* pc);
        static PlayerControl* player_control(int id);

        static void local_kill(std::uint8_t source, std::uint8_t target);
        static void local_kill(PlayerControl* source, PlayerControl* target);
        static float player_distance(PlayerControl* source, PlayerControl* target);
        static PlayerControl* closest_player(PlayerControl* source = mod::player_control());

        std::vector<std::function<void()>> hooks_deleter_;

    private:
        ark::core& core_;
        std::string name_;
        bool enabled_;

        bool ui_enabled_;

        mod::intro intro_;
    };
}// ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
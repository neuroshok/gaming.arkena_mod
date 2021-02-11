#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <autogen/GameData.hpp>

class PlayerControl;
class ShipStatus;

namespace ark
{
    class core;

    class mod
    {
    public:
        bool enabled_state = false;

        explicit mod(ark::core& core, std::string name);

        ark::core& core();

        virtual void on_begin(ShipStatus*) {}
        //virtual void do_kill(PlayerControl* self, PlayerControl* target);

        virtual void enable();
        virtual void disable();

        const std::string& name() const;
        bool enabled() const;

        static GameData::PlayerInfo* player();
        static PlayerControl* player_control();

        static GameData::PlayerInfo* player(int id);
        static GameData::PlayerInfo* player(PlayerControl* pc);
        static PlayerControl* player_control(int id);

        static void local_kill(std::uint8_t source, std::uint8_t target);
        static void local_kill(PlayerControl* source, PlayerControl* target);
        static float player_distance(PlayerControl* source, PlayerControl* target);
        static PlayerControl* closest_player(PlayerControl* source = mod::player_control());

    private:
        ark::core& core_;
        std::string name_;
        bool enabled_;
    };
}// ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

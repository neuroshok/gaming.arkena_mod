#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

class PlayerControl;
class ShipStatus;

namespace ark
{
    class core;

    class mod
    {
    public:
        explicit mod(ark::core& core);

        ark::core& core();

        virtual void on_begin(ShipStatus*);
        //virtual void do_kill(PlayerControl* self, PlayerControl* target);

        void local_kill(PlayerControl* source, PlayerControl* target);

    private:
        ark::core& core_;
    };
}// ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

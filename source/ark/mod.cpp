#include <ark/mod.hpp>

#include <ark/core.hpp>
#include <ark/utility/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>

namespace ark
{
    mod::mod(ark::core& core)
        : core_{ core }
    {
        // PlayerControl::RpcMurderPlayer
        /*
        core_.hook<&PlayerControl::RpcMurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
            {
                ark_trace("RpcMurderPlayer {} {}", self->PlayerId, target->PlayerId);
                original(self, target);
            }
        );*/

        // PlayerControl::MurderPlayer
        /*
        core_.hook<&PlayerControl::MurderPlayer>(
            [this](auto original, PlayerControl* self, PlayerControl* target)
        {
            ark_trace("MurderPlayer {} {}", self->PlayerId, target->PlayerId);
            original(self, target);
            do_kill(self, target);
        });*/

        /*
        core_.hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                ark_trace("ShipStatus::Begin");
                original(self);
                on_begin(self);
            }
        );*/
    }

    ark::core& mod::core() { return core_; }

    void mod::local_kill(PlayerControl* source, PlayerControl* target)
    {
        source->MurderPlayer(target);
    }
    void mod::on_begin(ShipStatus*)
    {
        /*
        core().template hook<&ShipStatus::Begin>(
            [this](auto original, ShipStatus* self)
            {
                ark_trace("begin");
                original(self);
                on_game_start(self);
            }
        );*/
    }


/*    void mod::do_kill(PlayerControl *self, PlayerControl *target)
    {

    }*/

} // ark
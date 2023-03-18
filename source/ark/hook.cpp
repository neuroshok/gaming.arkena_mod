#include <ark/hook.hpp>

#include <ark/core.hpp>
#include "au/PlayerControl.hpp"


#include <il2cpp/api.hpp>

#define hkr(R, H) ark_trace("init hook {}", #H); hook<&H>::init<R>()
#define hk(H) ark_trace("init hook {}", #H); hook<&H>::init<>()

namespace ark
{
    void init_hook()
    {
        #ifdef ARK_NO_UI
            MH_Initialize();
        #endif

#ifdef ARK_TESTING
        #include <analysis/testing.hpp>
#else

        hk(au::PlayerControl::FixedUpdate);
        hk(au::PlayerControl::SetColor);
        //hk(au::PlayerControl::SetVisor);
        hk(au::PlayerControl::Shapeshift);

        // hook overload
        /*ark::hook<static_cast<void(au::PlayerControl::*)(cs::string*)>(&au::PlayerControl::SetPet)>::before([](auto&&, cs::string*){
            au::PlayerControl::LocalPlayer()->RpcSetColor(0);
        });*/

        ark::hook<&au::PlayerControl::Shapeshift>::before([](auto&&, auto , auto){
            ark_trace("Shapeshift");
            //au::PlayerControl::LocalPlayer()->RpcSetColor(0);
        });

        ark::hook<&au::PlayerControl::SetColor>::before([](auto&&, auto color){
            ark_trace("hook ok {}", color);
            au::PlayerControl::LocalPlayer()->SetName(cs::make_string("test"), true);
            //ark_trace("hook pc {}", (uintptr_t)au::PlayerControl::LocalPlayer());
        });

    struct test {
        au::PlayerControl* LocalPlayer;
        System::Collections::Generic::List_1<>* AllPlayerControls;
    };

        ark::hook<&au::PlayerControl::FixedUpdate>::before([](auto&&){

            if (au::PlayerControl::LocalPlayer()) au::PlayerControl::LocalPlayer()->RpcSetName(cs::make_string("test"));
            if (au::PlayerControl::LocalPlayer()) ark_trace(" {} {} "
                          , au::PlayerControl::LocalPlayer()->moveable
                          , au::PlayerControl::LocalPlayer()->inVent
                          );
            //if (au::PlayerControl::LocalPlayer()) ark_trace("moveable  {}", au::PlayerControl::LocalPlayer()->moveable);
        });
#endif
    }
} // ark

#undef hk
#undef hkr
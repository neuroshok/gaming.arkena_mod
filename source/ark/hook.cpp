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

        hk(au::PlayerControl::SetColor);
        hk(au::PlayerControl::FixedUpdate);

        ark::hook<&au::PlayerControl::SetColor>::after([](auto&&, auto color){
            ark_trace("hook ok {}", color);
            au::PlayerControl::LocalPlayer()->RpcSetName(cs::make_string("test"));
            au::PlayerControl::LocalPlayer()->RpcSendChat(cs::make_string("coucou"));
        });

        ark::hook<&au::PlayerControl::FixedUpdate>::after([](auto&&){

            //ark_trace("inVent {}", (uintptr_t)p);
        });
#endif
    }
} // ark

#undef hk
#undef hkr
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

int32_t LastStartCounter; // 0x24
    uint8_t PlayerId; // 0x28
    cs::string* FriendCode; // 0x2c
    cs::string* Puid; // 0x30
    float MaxReportDistance; // 0x34
    bool moveable; // 0x38
    au::CosmeticsLayer* cosmetics; // 0x3c
    bool ForceKillTimerContinue; // 0x40
    au::PlayerOutfitType* CurrentOutfitTypek__BackingField; // 0x44
    bool inVent; // 0x48
    bool walkingToVent; // 0x49
    bool petting; // 0x4a
    bool inMovingPlat; // 0x4b
    bool onLadder; // 0x4c
    bool protectedByGuardianThisRound; // 0x4d
    bool shapeshifting; // 0x4e
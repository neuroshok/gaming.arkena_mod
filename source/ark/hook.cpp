#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <au/AmongUsClient.hpp>
#include <au/EndGameManager.hpp>
#include <au/GameData.hpp>
#include <au/GameStartManager.hpp>
#include <au/HatManager.hpp>
#include <au/HudManager.hpp>
#include <au/InnerNet/InnerNetClient.hpp>
#include <au/IntroCutscene_Status.hpp>
#include <au/KillButtonManager.hpp>
#include <au/MeetingHud.hpp>
#include <au/PlayerControl.hpp>
#include <au/ServerManager.hpp>
#include <au/ShipStatus.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/Vent.hpp>
#include <cs/string.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#define hkr(R, H) ark_trace("init hook {}", #H); hook<&H>::init<R>()
#define hk(H) ark_trace("init hook {}", #H); hook<&H>::init<>()

namespace ark
{
    void init_hook()
    {
        return;
        #ifdef ARK_NO_UI
            MH_Initialize();
        #endif

#ifdef ARK_TESTING
        #include <analysis/testing.hpp>
#else
        hk(AmongUsClient::FinishEndGame);
        hkr(Hazel::MessageWriter*, AmongUsClient::StartEndGame);

        hk(EndGameManager::Start);

        hk(HatManager::ctor);

        hk(HudManager::Start);
        hk(HudManager::Update);

        hkr(bool, IntroCutscene_Status::MoveNext);

        hk(InnerNet::InnerNetClient::FixedUpdate);
        hk(InnerNet::InnerNetClient::SetEndpoint);
        hk(InnerNet::InnerNetClient::Update);

        hk(KillButtonManager::PerformKill);
        hk(KillButtonManager::SetTarget);

        hk(MeetingHud::HandleRpc);

        hk(PlayerControl::SetColor);
        hk(PlayerControl::HandleRpc);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::RpcSetInfected);

        hkr(float, Vent::CanUse);
        hkr(void, Vent::SetOutline);

        hk(ServerManager::ctor);

        hk(ShipStatus::Begin);
        //hk(ShipStatus::EndGame);

        //hk(UseButton::DoClick);

        //hk(GameData::RpcUpdateGameData);
        //hk(GameData::UpdateGameData);

        hk(GameStartManager::Start);
        hk(GameStartManager::BeginGame);
#endif
    }
} // ark

#undef hk
#undef hkr
#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/GameData.hpp>
#include <autogen/GameStartManager.hpp>
#include <autogen/HudManager.hpp>
#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/Unity/Material.hpp>
#include <cs/string.hpp>

#include <analysis/testing_header.hpp>

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
        hk(AmongUsClient::FixedUpdate);
        hk(AmongUsClient::FinishEndGame);
        hkr(MessageWriter*, AmongUsClient::StartEndGame);

        hk(EndGameManager::Start);

        hk(HudManager::Start);
        hk(HudManager::Update);

        hkr(bool, IntroCutScene::CKACLKCOJFO::MoveNext);

        hk(InnerNet::InnerNetClient::SetEndpoint);
        hk(InnerNet::InnerNetClient::Update);

        hk(KillButtonManager::PerformKill);
        hk(KillButtonManager::SetTarget);

        hk(PlayerControl::SetColor);
        hk(PlayerControl::HandleRpc);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::RpcSetInfected);

        hkr(float, Vent::CanUse);
        hkr(void, Vent::SetOutline);

        hk(ServerManager::_ctor);

        hk(ShipStatus::Begin);
        hk(ShipStatus::EndGame);

        hk(UseButton::DoClick);

        hk(GameData::RpcUpdateGameData);
        hk(GameData::UpdateGameData);

        hk(GameStartManager::Start);
        hk(GameStartManager::BeginGame);
#endif
    }
} // ark

#undef hk
#undef hkr
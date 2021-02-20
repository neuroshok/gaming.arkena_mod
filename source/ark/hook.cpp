#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/GameData.hpp>
#include <autogen/GameStartManager.hpp>
#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/System/String.hpp>
#include <autogen/Unity/Material.hpp>
#include <autogen/HudManager.hpp>

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

        #include <analysis/testing.hpp>


        //#include <analysis/PlayerControl.init.hpp>
        //#include <analysis/GameData.init.hpp>
            /*
        hkr(bool, IntroCutScene::CKACLKCOJFO::MoveNext);
        hk(InnerNet::InnerNetClient::Update);
        hk(ShipStatus::Begin);
        hk(KillButtonManager::PerformKill);

        hk(PlayerControl::SetColor);
        hk(PlayerControl::HandleRpc);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::RpcSetInfected);

        hk(GameData::RpcUpdateGameData);
        hk(GameData::UpdateGameData);

        hk(GameStartManager::Start);
        hk(GameStartManager::BeginGame);*/
    }
} // ark

#undef hk
#undef hkr
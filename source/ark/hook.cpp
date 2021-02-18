#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/System/String.hpp>

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

        hkr(bool, IntroCutScene::CKACLKCOJFO::MoveNext);
        hk(InnerNet::InnerNetClient::Update);
        hk(ShipStatus::Begin);
        hk(KillButtonManager::PerformKill);

        hk(PlayerControl::SetColor);
        hk(PlayerControl::HandleRpc);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::RpcSetInfected);
    }
} // ark

#undef hk
#undef hkr
#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/PlayerControl.hpp>

#define hk(H) hook<&H>::load()

namespace ark
{
    void init_hook()
    {
        hk(InnerNet::InnerNetClient::Update);
        hk(ShipStatus::Begin);
        hk(KillButtonManager::PerformKill);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::HandleRpc);
    }
} // ark

#undef hk
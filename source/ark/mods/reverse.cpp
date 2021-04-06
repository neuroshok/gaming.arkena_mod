#include <ark/mods/reverse.hpp>

#include <ark/core.hpp>

#include <ark/hook.hpp>
#include <au/AmongUsClient.hpp>
#include <au/GameData.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/InnerNet/InnerNetClient.hpp>
#include <au/IntroCutscene.hpp>
#include <au/KillButtonManager.hpp>
#include <au/PlayerControl.hpp>
#include <au/Rpc.hpp>
#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <cs/string.hpp>

namespace ark::mods
{
    reverse::reverse(ark::core& pcore)
        : mod(pcore, "reverse")
    {

    }

    void reverse::on_enable()
    {
        return;
        ark::hook<&InnerNet::InnerNetClient::Update>::before(this, [](auto&& self) -> void {
            auto* pc = mod::player_control();
            if (pc)
            {
                auto* p = mod::player(0);
                if (!p) return;
                ark_trace("############ GameData_PlayerInfo");
                /*
                ark_trace("PlayerId {}", p->PlayerId);
                ark_trace("PlayerName {}", p->PlayerName->str());
                ark_trace("HKELEMPLDPK {}", p->HKELEMPLDPK);
                ark_trace("ColorId {}", p->ColorId);
                ark_trace("HatId {}", p->HatId);
                ark_trace("SkinId {}", p->SkinId);
                ark_trace("PetId {}", p->PetId);*/

                if (p->Tasks) ark_trace("Tasks {}", p->Tasks->_size);
                ark_trace("IsImpostor {}", p->IsImpostor);
                ark_trace("IsDead {}", p->IsDead);
                ark_trace("playerControl {}", (uintptr_t)p->playerControl);

                ark_trace("_IsImpostor {}", mod::player(1)->IsImpostor);
                ark_trace("_IsDead {}", mod::player(1)->IsDead);
                ark_trace("_IsImpostor {}", mod::player(2)->IsImpostor);
                ark_trace("_IsDead {}", mod::player(2)->IsDead);
                ark_trace("____________ GameData_PlayerInfo");
            }
        }); // 0xFE3460
    }

    void reverse::on_disable()
    {

    }
} //
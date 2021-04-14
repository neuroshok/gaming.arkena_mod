#include <ark/mods/testing.hpp>

#include <ark/core.hpp>

#include <au/AmongUsClient.hpp>
#include <au/GameData.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/InnerNet/InnerNetClient.hpp>
#include <au/IntroCutscene.hpp>
#include <au/KillButtonManager.hpp>
#include <au/PlayerControl.hpp>
#include <au/HudManager.hpp>

#include <au/Rpc.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Texture2D.hpp>
#include <au/HatManager.hpp>
#include <au/PassiveButton.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#include <ark/hook.hpp>

#include <winSock.h>

#include <au/GameData.hpp>

#include <ark/resource.hpp>
#include <cs/intptr.hpp>

#include <ark/ui/core.hpp>

#include <upp/object.hpp>
#include <upp/game_object.hpp>
#include <upp/vector2.hpp>
#include <upp/vector3.hpp>
#include <upp/rect.hpp>

static HatManager* p = nullptr;

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore, "testing")
    {

    }

    void testing::on_enable()
    {
        return;

        mod::hook_hud();

        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto original, auto&& self) -> void {
            ark_trace("kill");
            //original(self);

            auto button_ = upp::instantiate(hud()->KillButton, hud()->get_transform(), true);

            //buttons_callback.emplace(uintptr_t(button_), [](){ ark_trace("ok"); });

            auto texture = ark::resource::load_texture(ark::resources::ability2);

            button_->get_gameObject()->SetActive(true);
            button_->set_enabled(true);
            button_->isActive = true;
            button_->SetCoolDown(0, 9);

            button_->get_transform()->Translate1(upp::vector3{-2.5, -0.5, 0});
            button_->get_transform()->set_localPosition(upp::vector3{0, -2, 0});
            button_->get_transform()->set_localScale(upp::vector3{0.8, 0.8, 0.8});

            ark_trace("sprite {}", (uintptr_t)button_->renderer->get_sprite());
            auto s = UnityEngine::Sprite::Create7(texture, upp::rect{ 0.f, 0.f, (float)texture->GetDataWidth(), (float)texture->GetDataHeight() }, upp::vector2{0.5, 0.5});
            button_->renderer->set_sprite(s);
            button_->renderer->set_enabled(true);

            ark_trace("sprite {}", (uintptr_t)button_->renderer->get_sprite());

            ark_trace("self sprite {}", (uintptr_t)self->renderer->get_sprite());

        });


        ark::hook<&InnerNet::InnerNetClient::Update>::after(this, [this](auto&& self) -> void {

        });





    }
    void testing::on_disable()
    {

    }
} //
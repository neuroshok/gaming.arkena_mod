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

#include <au/Rpc.hpp>
#include <cs/string.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/Component.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#include <ark/hook.hpp>

#include <winSock.h>

#include <au/GameData.hpp>

#include <ark/resource.hpp>
#include <cs/intptr.hpp>

#include <ark/ui/core.hpp>

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore, "testing")
    {

    }

    void testing::on_enable()
    {
        //#include <analysis/KillOverlay.hooks.hpp>
        //#include <analysis/Material.hooks.hpp>
        //#include <analysis/DDPGLPLGFOI.hooks.hpp>
        //#include <analysis/MNGKAKKOKPN.hooks.hpp>
        //#include <analysis/GameObject.hooks.hpp>
        //#include <analysis/PlayerControl.hooks.hpp>
        //#include <analysis/ShipStatus.hooks.hpp>
        //#include <analysis/KillButtonManager.hooks.hpp>

        ark::hook<&PlayerControl::HandleRpc>::overwrite(this, [](auto original, auto&& self, std::int8_t HKHMBLJFLMC, auto* /* MessageReader* */ ALMCIJKELCP) -> void {ark_trace("PlayerControl::HandleRpc(void), HKHMBLJFLMC(std::int8_t): {}, ALMCIJKELCP(MessageReader*): {}", HKHMBLJFLMC, (uintptr_t)ALMCIJKELCP);return original(self, HKHMBLJFLMC, ALMCIJKELCP);}); // 0x8E7980

        static UnityEngine::GameObject* test = nullptr;
        static float i = 0;
        static float d = 1;

        ark::hook<&KillButtonManager::ctor>::overwrite(this, [](auto original, auto&& self) -> void {
            ark_trace("KillButtonManager::_ctor(void) called");

            return original(self);
        }); // 0xFE3460




        /*
        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto original, auto&& self) -> void {
            ark_trace("PerformKill");

self->get_transform()->set_localPosition({-1, -1, 0});
            //auto texture = self->renderer->get_sprite()->get_texture();
            //auto texture = new UnityEngine::Texture2D;

            auto texture = UnityEngine::instantiate<UnityEngine::Texture2D>(self->renderer->get_sprite()->get_texture());

            auto texture = static_cast<UnityEngine::Texture2D*>(UnityEngine::Object::Instantiate(self->renderer->get_sprite()->get_texture()));

            auto r = UnityEngine::Texture2D::Internal_CreateImpl(texture, ark::resources::icon.width, ark::resources::icon.height, 0, 4,  0, ark::ui::core::my_texture_);
            texture->Apply();
            ark_trace("r {}", r);
            ark_trace("v {}", texture->GetDataWidth());

            auto sprite = UnityEngine::Sprite::Create(texture, UnityEngine::Rect{0, 0, (float)ark::resources::icon.width, (float)ark::resources::icon.height}, {0, 0});


            //self->renderer->set_size({100, 100});
          //self->renderer->set_flipX(true);
          self->renderer->set_sprite(sprite);

        }); */// 0x102DE1



        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto original, auto&& self) -> void {
            ark_trace("PerformKill");

            original(self);

            //self->renderer->set_color({1, 1, 1, });

        }); // 0x102DE1



        static bool alive_ = true;
        /*
        ark::hook<&UseButton::DoClick>::overwrite(this, [this](auto&& o, auto&& self) {
            static auto btn = new ::UseButton();

            if (alive_) {
                ark_trace("click {}");
                alive_ = false;
                //mod::local_kill(PlayerControl::instance(), PlayerControl::instance());
                PlayerControl::instance()->Die(0);

                //auto* test = il2cpp::make<UseButton>();

                //auto test = UnityEngine::Object::Instantiate(btn);
                //ark_trace("obj {}", (uintptr_t)btesttn);
                //btn->AddComponent();
                ark_trace("obj {}", (uintptr_t)btn->renderer);
                ark_trace("obj {}", btn->DoClick());
            }
            else {
                PlayerControl::instance()->Revive();
                PlayerControl::instance()->moveable = true;
                alive_ = true;
                if (body_ptr)
                {
                    body_ptr->Destroy(body_ptr);
                    body_ptr = nullptr;
                }
            }
        });*/


        ark::hook<&PlayerControl::HandleRpc>::after(this,
            [this](PlayerControl* self, auto event, Hazel::MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
/*
                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::role_distribution:
                    {
                        on_role_distribution(data->read_vector<std::uint8_t>());
                        break;
                    }
                }*/

            }
        );


    }
    void testing::on_disable()
    {

    }
} //
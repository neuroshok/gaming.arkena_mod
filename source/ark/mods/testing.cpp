#include <ark/mods/testing.hpp>

#include <ark/core.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/GameData.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/PlayerMovement.hpp>
#include <autogen/RpcCalls.hpp>
#include <cs/string.hpp>
#include <cs/string.hpp>
#include <autogen/Unity/Material.hpp>
#include <autogen/Unity/Sprite.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>
#include <autogen/Unity/Transform.hpp>
#include <autogen/Unity/Component.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#include <ark/hook.hpp>

#include <winSock.h>
#include <autogen/ServerInfo.hpp>
#include <autogen/GameData.hpp>

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
        // RVA: 0x989DC0 Offset: 0x9885C0 VA: 0x10989DC0
        //internal bool <CheckEndCriteria>b__76_0(PILBGHDHJLH t) { }

        //#include <analysis/KillOverlay.hooks.hpp>
        #include <analysis/Material.hooks.hpp>
        //#include <analysis/DDPGLPLGFOI.hooks.hpp>
        //#include <analysis/MNGKAKKOKPN.hooks.hpp>
        //#include <analysis/GameObject.hooks.hpp>
        //#include <analysis/PlayerControl.hooks.hpp>
        //#include <analysis/ShipStatus.hooks.hpp>
        //#include <analysis/KillButtonManager.hooks.hpp>

        static Unity::GameObject* test = nullptr;
        static float i = 0;
        static float d = 1;

        ark::hook<&KillButtonManager::_ctor>::overwrite(this, [](auto original, auto&& self) -> void {
            ark_trace("KillButtonManager::_ctor(void) called");

            return original(self);
        }); // 0xFE3460

        ark::hook<&KillButtonManager::SetCoolDown>::overwrite(this, [](auto original, auto&& self, float, float) -> void {
            if (test)
            {
                ark_trace("ok");
                test->get_transform()->set_position({i, 0, 0});
                if (i > 5) d = -0.1;
                if (i < -5) d = 0.1;
                i += d;
            }
        });



        /*
        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto original, auto&& self) -> void {
            ark_trace("PerformKill");

self->get_transform()->set_localPosition({-1, -1, 0});
            //auto texture = self->renderer->get_sprite()->get_texture();
            //auto texture = new Unity::Texture2D;

            auto texture = unity::instantiate<Unity::Texture2D>(self->renderer->get_sprite()->get_texture());

            auto texture = static_cast<Unity::Texture2D*>(Unity::Object::Instantiate(self->renderer->get_sprite()->get_texture()));

            auto r = Unity::Texture2D::Internal_CreateImpl(texture, ark::resources::icon.width, ark::resources::icon.height, 0, 4,  0, ark::ui::core::my_texture_);
            texture->Apply();
            ark_trace("r {}", r);
            ark_trace("v {}", texture->GetDataWidth());

            auto sprite = Unity::Sprite::Create(texture, Unity::Rect{0, 0, (float)ark::resources::icon.width, (float)ark::resources::icon.height}, {0, 0});


            //self->renderer->set_size({100, 100});
          //self->renderer->set_flipX(true);
          self->renderer->set_sprite(sprite);

        }); */// 0x102DE1



        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto original, auto&& self) -> void {
            ark_trace("PerformKill {} {}", self->get_transform()->get_position().x, self->ToString()->str());

            original(self);

            self->renderer->set_color({1, 1, 1, });

        }); // 0x102DE1


        ark::hook<&HudManager::OpenMeetingRoom>::overwrite(this, [](auto original, auto&& self, struct FFGALNAPKCD* CNJAHAOLBLI) -> void {
            //original(self, CNJAHAOLBLI);
            ark_trace("HudManager::OpenMeetingRoom(void), CNJAHAOLBLI(FFGALNAPKCD*): {}", (uintptr_t)CNJAHAOLBLI);
        }); // 0x441AA0

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

                //auto test = Unity::Object::Instantiate(btn);
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
            [this](PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);

                switch (static_cast<rpc>(event))
                {/*
                    case (rpc)rpc_mod::role_distribution:
                    {
                        on_role_distribution(data->read_vector<std::uint8_t>());
                        break;
                    }*/
                }

            }
        );


    }
    void testing::on_disable()
    {

    }
} //
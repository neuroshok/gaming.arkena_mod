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
#include <autogen/System/String.hpp>
#include <autogen/Unity/Material.hpp>
#include <autogen/Unity/Sprite.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>
#include <autogen/Unity/Transform.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#include <ark/hook.hpp>

#include <winSock.h>

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore, "testing")
    {
    }

    void testing::on_enable()
    {
        static UseButton* ptr = nullptr;
        static int i = 0;

          #include <analysis/ServerData.hooks.hpp>

        ark::hook<&KillButtonManager::_ctor>::overwrite(this, [](auto original, auto&& self) -> void {
            self->renderer->set_size({2, 2});
            original(self);
            ark_trace("KillButtonManager::_ctor(void) called");
        }); // 0xFEF780

        ark::hook<&KillButtonManager::Start>::overwrite(this, [](auto original, auto&& self) -> void {
            self->renderer->set_size({2, 2});
            original(self);
            ark_trace("KillButtonManager::Start(void) called");
        }); // 0xFEF750

        ark::hook<&KillButtonManager::SetTarget>::overwrite(this, [](auto original, auto&& self, PlayerControl* target) -> void {

            original(self, target);
            self->renderer->set_size({2, 2});

        }); // 0xFEF4B0



        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto&& o, KillButtonManager* self) {
            ark_trace("PerformKill");

            auto k = il2cpp::api::object_new<KillButtonManager>(self->klass);
            k->renderer = self->renderer;
            //k->Start();

            //self->get_transform()->set_localScale({2, 2, 2});
            auto player = PlayerControl::statics()->local;
            player->get_transform()->set_localScale({0.2f, 0.2, 0.2});

            auto pos = player->get_transform()->get_position();

            //player->get_transform()->set_position({pos.x, pos.y + 1, -50});

            ark_trace(": {}", player->get_transform()->get_position().x);
            ark_trace(": {}", player->get_transform()->get_position().y);
            ark_trace(": {}", player->get_transform()->get_position().z);
            //ark_trace(": {}", self->get_isActiveAndEnabled());


            //self->renderer->set_flipX(true);
            auto v = Unity::Vector2{0, 0};
            //self->renderer->set_size({0, 0});
            //self->renderer->get_size_Injected(v);

            /*
            ark_trace(": {}", (uintptr_t)self->CurrentTarget);
            ark_trace(": {}", self->TimerText->Text->to_utf8());
            ark_trace(": {}", self->renderer->get_size().x);
            ark_trace(": {}", self->renderer->get_size().y);
            ark_trace(": {}", self->renderer->get_sprite()->get_rect().x);
            ark_trace(": {}", self->renderer->get_sprite()->get_rect().y);
            ark_trace(": {}", self->isCoolingDown);
            ark_trace(": {}", self->isActive);*/
            o(self);
        });

        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
        {
            ark_trace("Game start");

            float i = -5;
            for (auto* player : *GameData::statics()->instance->AllPlayers)
            {
                auto is_impo = mod::player_control(player->PlayerId)->_cachedData->IsImpostor;
                ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), mod::player_control(player->PlayerId)->_cachedData->IsImpostor);


                if (player->PlayerId != 0)
                {
auto pc = mod::player_control(player->PlayerId);
                pc->get_transform()->set_localScale({2, 2, 2});

                auto pos = pc->get_transform()->get_position();

                pc->get_transform()->set_position({(i += 3), 1, 0});
                pc->get_transform()->set_localScale({2, 1, 0});
                }
            }
        });


        ark::hook<&PlayerControl::SetColor>::overwrite(this, [](auto&& original, auto&& pc, auto&& c)
        {


        });



        /*
        ark::hook<&IntroCutScene::CKACLKCOJFO::MoveNext>::before(this, [](auto&& self) -> bool
        {
            self->subtitle.r = 147.f / 255;
            self->subtitle.g = 112.f / 255;
            self->subtitle.b = 219.f / 255;
            self->fade_out_color.g = 0;
            self->fade_out_color.r = 0;
            self->fade_out_color.b = 0;
            self->title.r = 100.f / 255;
            self->title.g = 149.f / 255;
            self->title.b = 237.f / 255;

            self->__this->Title->Text = System::String::make("Sorcerers");
            self->__this->ImpostorText->Text = System::String::make("Whisperer\n[FFFFFFFF]Arkena John Bernard");

            std::string test;

            PlayerControl* tmp = nullptr;
            for (auto* player : *self->yourTeam)
            {
                tmp = const_cast<PlayerControl*>(player);
            }

            auto array_size = 3;

            auto ar = il2cpp::api::array_new<PlayerControl>(tmp->klass, array_size);

            for (int i = 0; i < array_size; ++i)
            {
                PlayerControl** address = &ar->m_Items + i;
                *address = tmp;
            }

            ar->m_Items = tmp;
            ar->max_length = array_size;
            ar->obj.klass = tmp->klass;
            self->yourTeam->_items = ar;
            self->yourTeam->_size = array_size;


            self->isImpostor = false;

          return false;
        });*/

    }
    void testing::on_disable()
    {

    }
} // ark
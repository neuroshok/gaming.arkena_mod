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
#include <autogen/Unity/Material.hpp>
#include <autogen/Unity/Sprite.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>
#include <autogen/System/String.hpp>

#include <analysis/testing_header.hpp>

#include <il2cpp/api.hpp>

#include <ark/hook.hpp>

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

          //#include <analysis/UseButton.hooks.hpp>
/*
        ark::hook<&FollowCamera::FixedUpdate>::overwrite(this, [](auto original, auto&& self) -> void {
            original(self);
            ark_trace("FollowCamera {}", (uintptr_t)self->Target);
            ark_trace("FollowCamera::FixedUpdate(void) {}", self->Offset.x);
            ark_trace("FollowCamera::FixedUpdate(void) {}", self->Offset.y);
            ark_trace("FollowCamera::FixedUpdate(void) {}", self->Locked);
            ark_trace("FollowCamera::FixedUpdate(void) {}", self->shakeAmount);
            ark_trace("FollowCamera::FixedUpdate(void) {}", self->shakePeriod);
        }); // 0x154704
*/


        ark::hook<&KillButtonManager::SetTarget>::overwrite(this, [](auto original, auto&& self, PlayerControl* target) -> void {
            original(self, target);
            ark_trace("KillButtonManager::SetTarget(void), target(PlayerControl*): {}", (uintptr_t)target);

            ark_trace(": {}", (uintptr_t)self->CurrentTarget);
            ark_trace(": {}", (uintptr_t)self->TimerText);
            ark_trace(": {}", (uintptr_t)self->renderer);
            ark_trace(": {}", self->isCoolingDown);
            ark_trace(": {}", self->isActive);
        }); // 0xFEF4B0


        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto&& o, KillButtonManager* self) {
            ark_trace("PerformKill");

            // ark_trace(": {}", (uintptr_t)self->renderer);
            // ark_trace(": {}", (uintptr_t)self->renderer->color.r);
            // self->renderer->color.r = 1;

            // auto k = il2cpp::api::object_new<KillButtonManager>(self->klass);

            // o(self);
            /*

            k->renderer = self->renderer;
            k->renderer->set_color({1, 0, 0});*/

            // self->renderer->set_color({1, 0, 0});
            // ark_trace(": {}", self->renderer->);
            // ark_trace(": {}", self->renderer->get_size().y);

            // ark_trace(": {}", ((uintptr_t)&self->CurrentTarget - (uintptr_t)self));
            // ark_trace(": {}", ((uintptr_t)&self->renderer - (uintptr_t)&self->CurrentTarget));
            ark_trace(": {}", (uintptr_t)self->CurrentTarget);
            ark_trace(": {}", (uintptr_t)self->TimerText);
            ark_trace(": {}", (uintptr_t)self->renderer);
            ark_trace(": {}", self->isCoolingDown);
            ark_trace(": {}", self->isActive);
            // ark_trace(": {}", self->set_useGUILayout(false));
            o(self);
        });

        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
        {
            ark_trace("Game start");
/*
            for (auto* player : *GameData::statics()->instance->AllPlayers)
            {
                auto is_impo = mod::player_control(player->PlayerId)->_cachedData->IsImpostor;
                ark_trace("ID: {} | Name : {} | {}", player->PlayerId, player->PlayerName->to_utf8(), mod::player_control(player->PlayerId)->_cachedData->IsImpostor);
            }*/
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
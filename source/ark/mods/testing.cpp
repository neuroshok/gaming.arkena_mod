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
#include <autogen/System/String.hpp>

#include <analysis/testing_header.hpp>

#include <ark/hook.hpp>

namespace ark::mods
{
    testing::testing(ark::core& pcore)
        : mod(pcore, "testing")
    {
    }

    void testing::on_enable()
    {
        #include <analysis/null.hooks.hpp>

        static std::int32_t i = 0;

        ark::hook<&PlayerControl::SetColor>::overwrite(this, [](auto&& original, auto&& pc, auto&& c)
        {
            ++i;

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
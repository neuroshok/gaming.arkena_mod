#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/System/String.hpp>
#include <autogen/System/String.hpp>


#define hkr(R, H) hook<&H>::init<R>()
#define hk(H) hook<&H>::init<>()


void f(PlayerControl* p, std::int8_t c){
ark_trace("color ok {}", c);
    //auto v = original(p, std::int8_t);
/*
    ark_trace("p {}", (uintptr_t)p);
    ark_trace("crew {}", p->__this->Title->Text->to_utf8());
    p->__this->Title->color.r = 0.5;
    p->__this->Title->color.g = 0.5;
    p->__this->Title->color.b = 0.5;

    std::u16string test{ u"Arkena" };
    ark_trace("length {} {}", p->__this->Title->Text->m_stringLength, reinterpret_cast<::String*>(p->__this->Title->Text)->length);

    ::String* str = il2cpp_string_new_utf16((uint16_t*)test.data(), test.size());
    p->__this->Title->Text = reinterpret_cast<System::String*>(str);
*/

}




namespace ark
{
    void init_hook()
    {
        #ifdef ARK_NO_UI
            MH_Initialize();
        #endif

        hk(PlayerControl::SetColor);
        hk(PlayerControl::HandleRpc);
        /*
        hkr(bool, IntroCutScene::MoveNext);
        hk(InnerNet::InnerNetClient::Update);
        hk(ShipStatus::Begin);
        hk(KillButtonManager::PerformKill);
        hk(PlayerControl::MurderPlayer);
        hk(PlayerControl::HandleRpc);
        hk(PlayerControl::RpcSetInfected);*/
    }
} // ark

#undef hk
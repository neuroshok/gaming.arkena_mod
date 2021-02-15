#include <ark/hook.hpp>

#include <ark/core.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/System/String.hpp>
#include <autogen/System/String.hpp>
#include <minhook/include/MinHook.h>

#define hkr(R, H) hook<&H>::load<R>()
#define hk(H) hook<&H>::load<>()

inline const auto il2cpp_string_new_utf16 = dynamic_proc<::String*(const uint16_t * text, int32_t len)>("GameAssembly.dll", "il2cpp_string_new_utf16");

bool (*original)(IntroCutScene::CKACLKCOJFO*) = nullptr;

bool f(IntroCutScene::CKACLKCOJFO* p){

    auto v = original(p);

    ark_trace("p {}", (uintptr_t)p);
    ark_trace("crew {}", p->__this->Title->Text->to_utf8());
    p->__this->Title->color.r = 0.5;
    p->__this->Title->color.g = 0.5;
    p->__this->Title->color.b = 0.5;

    std::u16string test{ u"Arkena" };
    ark_trace("length {} {}", p->__this->Title->Text->m_stringLength, reinterpret_cast<::String*>(p->__this->Title->Text)->length);

    ::String* str = il2cpp_string_new_utf16((uint16_t*)test.data(), test.size());
    p->__this->Title->Text = reinterpret_cast<System::String*>(str);


    return v;
}

namespace ark
{
    void init_hook()
    {
        #ifdef ARK_NO_UI
            MH_Initialize();
        #endif

        //auto h = [](std::uint8_t v){ ark_trace("color hook {}", v); original(v); };
        auto hooked = (void*)uintptr_t(GetBaseAddress() + 0xFB07B0);
        original = (decltype(original))hooked;

        if (MH_CreateHook(hooked, &f, reinterpret_cast<void**>(&original)) != MH_OK)
        {
            ark_trace("MH_CreateHook failed");
        }

        if (MH_EnableHook(hooked) != MH_OK)
        {
            ark_trace("MH_EnableHook failed");
        }

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
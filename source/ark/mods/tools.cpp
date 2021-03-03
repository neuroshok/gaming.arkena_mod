#include <ark/mods/tools.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <autogen/GameData.hpp>
#include <autogen/GameStartManager.hpp>
#include <autogen/AmongUsClient.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/RpcCalls.hpp>

void set_clipboard(const std::string& data)
{
    const char* output = data.data();
    const size_t len = data.size() + 1;
    HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len);
    memcpy(GlobalLock(hMem), output, len);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();
}

// game started even with wrong version

namespace ark::mods
{
    tools::tools(ark::core& pcore)
        : mod(pcore, "tools", ark::version{0, 0, 1}, false)
    {
        mod::add_setting("hide_code", false);
        mod::add_setting("hide_code_text", "[6666FFff]CODE");
    }

    void tools::on_enable()
    {
        ark::hook<&GameStartManager::Start>::after(this, [this](auto self)
        {
            set_clipboard(self->GameRoomName->Text->str().substr(6));
            self->GameRoomName->Text = cs::make_string("[6666FFff]BETA TEST\nGAME");
        });
    }

    void tools::on_disable()
    {
    }
} // ark
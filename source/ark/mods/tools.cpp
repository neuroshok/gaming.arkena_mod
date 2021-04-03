#include <ark/mods/tools.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <au/AmongUsClient.hpp>
#include <au/GameData.hpp>
#include <au/GameStartManager.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/PlayerControl.hpp>
#include <au/Rpc.hpp>
#include <au/TextRenderer.hpp>

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
        mod::add_setting("hide_code_text", "[FFFFFFFF]CODE");
    }

    void tools::on_enable()
    {
        ark::hook<&GameStartManager::Start>::after(this, [this](auto self)
        {
            if (setting<bool>("hide_code"))
            {
                set_clipboard(self->GameRoomName->Text->str().substr(6));
                auto str = cs::make_string(setting<std::string>("hide_code_text"));
                self->GameRoomName->Text = str;
            }
        });
    }

    void tools::on_disable()
    {
    }
} // ark
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

namespace ark::mods
{
    tools::tools(ark::core& pcore)
        : mod(pcore, "tools", ark::version{5, 2, 1}, false)
        , start_manager_{ nullptr }
        , compatible_players_count_{ 1 }
    {}

    void tools::on_enable()
    {
        ark::hook<&PlayerControl::HandleRpc>::after(this,
        [this](PlayerControl* self, auto event, MessageReader* data)
        {
            ark_trace("Tools HandleRpc {}", event);
            data->set_Position(2);

            switch (static_cast<rpc>(event))
            {
                case (rpc) rpc_mod::mods_status: {
                    if (GameData::statics()->instance->GetHost()->PlayerId == mod::player()->PlayerId)
                    {
                        auto id = data->ReadByte();
                        auto version_ok = data->ReadByte();
                        if (!version_ok)
                        {
                            mod::log("{} has incompatible mods", mod::player(id)->PlayerName->to_utf8());
                        }
                        else ++compatible_players_count_;

                        if (start_manager_)
                        {
                            if (start_manager_->CurrentPlayers == compatible_players_count_)
                            {
                                compatible_players_count_ = 1;
                                start_manager_->ReallyBegin(true);
                            }
                        }
                    }
                }
                break;

                case (rpc) rpc_mod::check_mods: {
                    bool version_ok = true;
                    auto mod_count = data->ReadUInt32();
                    for (int i = 0; i < mod_count; ++i)
                    {
                        auto mod_name = data->read<std::string>();
                        auto host_version = data->read<ark::version>();
                        auto host_mod_enabled = data->ReadByte();

                        auto& player_mod = core().mod(mod_name);
                        auto mod_version = core().mod(mod_name).version();
                        if (host_mod_enabled && !player_mod.enabled()) player_mod.enable();
                        if (!host_mod_enabled && player_mod.enabled()) player_mod.disable();

                        if (!host_version.compatible_with(player_mod.version()))
                        {
                            mod::log("{}-{} is not compatible with the host. Required version: {}", mod_name, player_mod.version().str(), host_version.str());
                            version_ok = false;
                        }
                    }
                    mod::send_all(rpc_mod::mods_status, mod::player()->PlayerId, version_ok);
                }
                break;
            }
        });

        ark::hook<&GameStartManager::Start>::after(this, [this](auto self)
        {
            start_manager_ = self;
            set_clipboard(self->GameRoomName->Text->to_utf8().substr(6));
            self->GameRoomName->Text = System::String::make("[6e3300ff]SUSHINT\nGAME");
        });

        ark::hook<&GameStartManager::BeginGame>::overwrite(this, [this](auto self)
        {
            // check mods
            auto writer = mod::start_rpc(rpc_mod::check_mods);
            writer->Write((std::uint32_t)mod::core().mods().size());
            for (const auto& mod : mod::core().mods())
            {
                writer->Write(mod->name());
                writer->Write(mod->version());
                writer->Write(mod->enabled());
            }
            mod::finish_rpc(writer);
        });
    }

    void tools::on_disable()
    {
    }
} // ark
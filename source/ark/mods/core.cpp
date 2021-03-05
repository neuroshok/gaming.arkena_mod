#include <ark/mods/core.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <autogen/AmongUsClient.hpp>
#include <autogen/GameStartManager.hpp>
#include <autogen/Hazel/MessageReader.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/PlayerControl.hpp>

namespace ark::mods
{
    core::core(ark::core& pcore)
        : mod(pcore, "core", pcore.version(), false)
        , server_{ *this }
    {
        mod::add_setting("mod_sync", true, "Synchronize mods");
    }

    void core::on_settings_update()
    {
        mod_sync_ = mod::setting<bool>("mod_sync");
    }

    void core::on_enable()
    {
        server_.enable();

        ark::hook<&AmongUsClient::FixedUpdate>::after(this,
        [this](AmongUsClient* self)
        {
            if (!initialized_)
            {
                //mod::core().resources().load();
                ark_info("Core initialized");
                initialized_ = true;
            }
        });

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
                            mod::log("{} has incompatible mods", mod::player(id)->PlayerName->str());
                            compatible_players_count_ = 1;
                        }
                        else ++compatible_players_count_;

                        if (start_manager_)
                        {
                            mod::log("Compatible players {}/{}", compatible_players_count_, start_manager_->CurrentPlayers);
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

                        auto& player_mod = mod::core().mod(mod_name);
                        auto mod_version = mod::core().mod(mod_name).version();
                        if (host_mod_enabled && !player_mod.enabled()) player_mod.enable();
                        if (!host_mod_enabled && player_mod.enabled()) player_mod.disable();

                        if (!host_version.compatible_with(player_mod.version()))
                        {
                            mod::log("{}-{} is not compatible with the host. Required version: {}", mod_name, player_mod.version().str(), host_version.str());
                            version_ok = false;
                        }
                        ark_trace("Check mod {}: {}", mod_name, version_ok);
                    }
                    mod::send_all(rpc_mod::mods_status, mod::player()->PlayerId, version_ok);
                }
                break;
            }
        });

        ark::hook<&GameStartManager::Start>::after(this, [this](auto self)
        {
               start_manager_ = self;
        });

        ark::hook<&GameStartManager::BeginGame>::overwrite(this, [this](auto original, auto self)
        {
            if (mod_sync_)
            {
                ark_trace("Check mods");
                compatible_players_count_ = 1;
                // check mods
                auto writer = mod::start_rpc(rpc_mod::check_mods);
                writer->Write((std::uint32_t)mod::mod::core().mods().size());
                for (const auto& mod : mod::mod::core().mods())
                {
                    writer->Write(mod->name());
                    writer->Write(mod->version());
                    writer->Write(mod->enabled());
                }
                mod::finish_rpc(writer);
            }
            else original(self);
        });
    }
} // ark
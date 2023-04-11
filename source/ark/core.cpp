#include <Windows.h>
#include <KnownFolders.h>
#include <shlobj.h>

#include <ark/module.hpp>
#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/mod.hpp>

#include <au/core.hpp>
#include <au/mod.hpp>

#include <il2cpp/api.hpp>

#include "UnityEngine/Application.hpp"
#include <filesystem>
#include <fstream>

#include <nlohmann/json.hpp>
#include <minhook/include/MinHook.h>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ ark::version{ARK_VERSION_MAJOR, ARK_VERSION_MINOR, ARK_VERSION_FIX, ARK_VERSION_META} }
        , ui_{ *this }
        , au_core_{ std::make_unique<au::core>(*this) }
    {
        ark::init_logger((uintptr_t)hmodule_);
        ark_info("Initialize ark::core version {}", version_.str());

        updater_.check();

        char buffer[MAX_PATH];
        GetModuleFileName(hmodule_, buffer, MAX_PATH);
        std::string module_root = buffer;
        mods_root_ = module_root.substr(0, module_root.rfind('\\')) +  "\\mods\\";
        ark_trace("Mods root: {}", mods_root_);

        il2cpp::api::initialize();
        //il2cpp::api::thread_attach(il2cpp::api::domain_get());
        //ark::load_console(console_);

        if (MH_Initialize() != MH_OK)
        {
            ark_error("Hook initialization failed");
        }

        #ifndef ARK_NO_UI
        ui_.load();
        #endif

        // load among us mod framework
        au_core_->load();

        // load resources
        //resources_.load();

        // load all mods
        if (std::filesystem::exists(mods_root_))
        {
            for (const auto& entry : std::filesystem::directory_iterator(mods_root_))
            {
                std::string mod_name = entry.path().stem().generic_string();
                ark_trace("Loading mod {}", mod_name);
                load(mod_name);
            }
        }

        #ifndef ARK_NO_UI
        ui_.run();
        #endif

        //ark_info("Game version : {}", ::UnityEngine::Application::get_version()->str());

        init_settings();
    }

    core::~core()
    {
        MH_Uninitialize();
    }

    void core::run()
    {
        while (true)
        {
            //discord_.run();

            /*if (GetAsyncKeyState(VK_F2) & 1)
            {
                break;
            }*/
        }
    }

    void core::load(const std::string& mod_name)
    {
        std::string module_path = mods_root_ + mod_name + "/" + mod_name + ".dll";

        if (!std::filesystem::exists(module_path))
        {
            error("core", "unable to find mod " + mod_name + " at " + module_path);
            return;
        }
        auto handle = ark_os_module_load(module_path.c_str());
        if (!handle)
        {
            error("core", "unable to load mod " + mod_name + " from " + module_path );
            return;
        }
        else
        {
            // get main pointer
            auto load_ptr = reinterpret_cast<Module_load_ptr>(ark_os_module_function(handle, "mod_load"));
            if (!load_ptr) error("core", "function mod_load missing");
            else
            {
                ark::mod_api mod_api{ *this, mod_name };
                bool error_code = load_ptr(mod_api);
                if (error_code) ark_info("Mod loading error {}", mod_name);
                else
                {
                    auto mod_ptr = mod_api.make(this, mod_name);

                    ark_info("Mod {} version {} loaded", mod_ptr->name(), mod_ptr->version().str());
                    mod_ptr->enable();
                    mods_.emplace_back(std::move(mod_ptr));
                }
            }
        }
    }

    void core::unload(const std::string &name)
    {
        mods_.erase(std::remove_if(mods_.begin(), mods_.end(), [&name](auto&& mod) { return mod->name() == name; }), mods_.end());
        ark_trace("Mod {} unloaded", name);
    }

    void core::init_settings()
    {
        if (!std::filesystem::exists(core::settings_path()))
        {
            std::ofstream ofs(core::settings_path());
            if (!ofs.is_open()) ark_trace("unable to create settings file");
            else
            {
                nlohmann::json j;
                ofs << j;
                ofs.close();
            }
        }
        else
        {
            std::ifstream ifs(core::settings_path());
            nlohmann::json j;
            try { ifs >> j; ifs.close(); }
            catch (const std::exception& e)
            {
                ark_trace("parsing error");
                ifs.close();
                return;
            }

            // load settings
            for (const auto& mod : mods_)
            {
                for (auto& setting : mod->settings())
                {
                    if (j.contains(mod->name()))
                    {
                        if (j[mod->name()].contains(setting.name()))
                        {
                            auto value = j[mod->name()][setting.name()];

                            std::visit([&](auto&& arg)
                           {
                                using T = std::decay_t<decltype(arg)>;
                                setting.set<T>(value.get<T>());
                            },
                            setting.value());
                        }
                    }
                }
            }
        }
    }

    // load texture when rendering api is initialized
    void core::on_ui_initialized()
    {
        for (auto& mod : mods_)
        {
            ark_trace("load texture {}", mod->root() + "icon.png");
            ui_.load_texture(mod->root() + "icon.png", mod->image_);
        }
    }

    void core::debug(int index)
    {
        #ifdef ARK_DEBUG
            if (on_debug_) on_debug_(index);
            for (auto& mod : mods_)
            {
                mod->debug(index);
            }
        #endif
    }

    void core::on_debug(std::function<void(int)> fn)
    {
        #ifdef ARK_DEBUG
            on_debug_ = std::move(fn);
        #endif
    }

    void core::log(const std::string& mod_name, const std::string& message)
    {
        ark_trace("[" + mod_name + "] " + message);
        if (logs_.size() > 10) logs_.pop_back();
        logs_.push_front("[" + mod_name + "] " + message);
    }

    void core::error(const std::string& mod_name, const std::string& message)
    {
        std::string error_message = "[" + mod_name + "] " + message;
        if (logs_.size() > 10) logs_.pop_back();
        logs_.push_front(error_message);
        ark_error(error_message);
    }

    const std::vector<std::unique_ptr<ark::mod>>& core::mods() const
    {
        return mods_;
    }

    ark::mod& core::mod(const std::string& name)
    {
        auto it = std::find_if(mods_.begin(), mods_.end(), [&name](const auto& mod) { return mod->name() == name; });
        assert(it != mods_.end());
        return *(*it);
    }

    const ark::version& core::version() const
    {
        return version_;
    }

    const std::deque<std::string>& core::logs() const
    {
        return logs_;
    }

    ark::resources& core::resources()
    {
        return resources_;
    }

    std::string core::settings_path()
    {
        TCHAR szPath[MAX_PATH];
        if (!SUCCEEDED(SHGetFolderPath(nullptr, CSIDL_APPDATA, nullptr, 0, szPath)))
        {
            ark_trace("appdata not found");
        }
        auto path =  std::string(szPath) + "\\arkmongus.settings.json";
        return path;
    }

    const std::string& core::mods_root() const
    {
        return mods_root_;
    }
} // ark
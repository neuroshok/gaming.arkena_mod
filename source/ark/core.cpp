#include <Windows.h>
#include <KnownFolders.h>
#include <shlobj.h>

#include <ark/module.hpp>
#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/mod.hpp>

#include <au/core.hpp>

#include <il2cpp/api.hpp>

#include <nlohmann/json.hpp>
#include <filesystem>
#include <fstream>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ ark::version{0, 1, 3} }
        , ui_{ *this }
        , au_core_{ std::make_unique<au::core>(*this) }
    {
        il2cpp::api::initialize();
        il2cpp::api::thread_attach(il2cpp::api::domain_get());
        //ark::load_console(console_);
        ark::init_logger((uintptr_t)hmodule_);
        ark_info("Initialize ark::core version {}", version_.str());

        #ifndef ARK_NO_UI
        ui_.load();
        #endif
        ark::init_hook();

        // load among us mod framework
        au_core_->load();

        load("amodus");

        //ark_trace("Game version : {}", ::UnityEngine::Application::get_version());

#ifdef ARK_TESTING
        load<ark::mods::testing>();
#else

#endif
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

            if (GetAsyncKeyState(VK_F2) & 1)
            {
                break;
            }
        }
    }

    void core::load(const std::string& mod_name)
    {
        // auto handle = ark_os_module_load((mod_name + ark_os_sharelibext).c_str());
        auto handle = ark_os_module_load("E:\\project\\arkmongus\\bin\\amodus.dll");
        if (!handle) error("core", "unable to load mod " + mod_name);
        else
        {
            // get main pointer
            auto load_ptr = reinterpret_cast<Module_load_ptr>(ark_os_module_function(handle, "mod_load"));
            if (!load_ptr) error("core", "function mod_load missing");
            else
            {
                mods_.emplace_back(std::make_unique<ark::mod>(*this, mod_name));
                bool error_code = load_ptr(*mods_.back());
                if (error_code) ark_info("Mod loading error {}", mods_.back()->name());
                ark_info("Mod {} version {} loaded", mods_.back()->name(), mods_.back()->version().str());
                mods_.back()->enable();
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
            /*
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
             */
        }
    }

    void core::log(const std::string& mod_name, const std::string& message)
    {
        if (logs_.size() > 10) logs_.pop_back();
        logs_.push_front("[" + mod_name + "] " + message);
    }

    void core::error(const std::string& mod_name, const std::string& message)
    {
        std::string error_message = "[" + mod_name + "] ERROR " + message;
        if (logs_.size() > 10) logs_.pop_back();
        logs_.push_front(error_message);
        ark_trace(error_message);
    }

    const std::vector<std::unique_ptr<ark::mod>>& core::mods()
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

} // ark
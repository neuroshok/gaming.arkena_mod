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
        , version_{ ark::version{0, 2, 0} }
        , ui_{ *this }
        , au_core_{ std::make_unique<au::core>(*this) }
    {
        ark::init_logger((uintptr_t)hmodule_);
        ark_info("Initialize ark::core version {}", version_.str());

        char buffer[MAX_PATH];
        GetModuleFileName(hmodule_, buffer, MAX_PATH) ;
        std::string module_root = buffer;
        mods_root_ = module_root.substr(0, module_root.rfind('\\')) +  "\\mods\\";
        ark_trace("Mods root: {}", mods_root_);

            //        auto xt = LoadLibrary("D:\\tmp\\au_test\\au1\\__GameAssembly.dll");
            //ark_trace("H : {}", (uintptr_t)xt);
            //auto* r = il2cpp::call_absolute<void*(*)()>((uintptr_t)xt + 0x59BB00);
            //ark_trace("r : {}", (uintptr_t)r);

        il2cpp::api::initialize();
        auto* thread = il2cpp::api::thread_attach(il2cpp::api::domain_get());
        ark_trace("thread id {}", (uintptr_t)thread);
        //ark::load_console(console_);

        #ifndef ARK_NO_UI
        ui_.load();
        #endif

        // load among us mod framework
        au_core_->load();

        // load all mods
        if (std::filesystem::exists(mods_root_))
        {
            for (const auto& entry : std::filesystem::directory_iterator(mods_root_))
            {
                if (entry.path().extension() != ".dll") continue;
                std::string mod_name = entry.path().stem().generic_string();
                ark_trace("Loading mod {}", mod_name);
                load<au::mod>(mod_name);
            }
        }

        //load<au::mod>("amodus");

        //ark_info("Game version : {}", ::UnityEngine::Application::get_version()->str());

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

    void core::debug(int index)
    {
        if (on_debug_) on_debug_(index);
        for (auto& mod : mods_)
        {
            mod->debug(index);
        }
    }

    void core::on_debug(std::function<void(int)> fn)
    {
        on_debug_ = std::move(fn);
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

    const std::vector<std::unique_ptr<au::mod>>& core::mods() const
    {
        return mods_;
    }

    au::mod& core::mod(const std::string& name)
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

    const std::string& core::mods_root() const
    {
        return mods_root_;
    }
} // ark
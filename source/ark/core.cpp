#include <Windows.h>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/log.hpp>
#include <ark/mod.hpp>
#include <ark/mods.hpp>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ ark::version{0, 1, 0} }
        , ui_{ *this }
    {
        //ark::load_console(console_);
        ark::init_logger((uintptr_t)hmodule_);
        ark_info("Initialize ark::core version {}", version_.str());

        #ifndef ARK_NO_UI
        ui_.load();
        #endif
        ark::init_hook();

        //ark_trace("Game version : {}", ::Unity::Application::get_version());

        load<ark::mods::core>();
        //load<ark::mods::zombie>();
        //load<ark::mods::sniper>();
        //load<ark::mods::tools>();
        //load<ark::mods::tournament>();
        //load<ark::mods::whisperer>();
        //load<ark::mods::testing>();
        //load<ark::mods::analysis>();
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

    void core::log(const std::string& mod_name, const std::string& message)
    {
        if (logs_.size() > 10) logs_.pop_back();
        logs_.push_front("[" + mod_name + "] " + message);
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
} // ark
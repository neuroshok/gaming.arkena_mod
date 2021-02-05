#include <ark/core.hpp>

#include <ark/mod.hpp>
#include <ark/mods/sniper.hpp>

#include <Windows.h>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ "0.0.19" }
    {
        ark::make_console();
        init_logger();
        ark_trace("Initialize ark::core version {}", version_);

        ark_trace("Game version : {}", ::UnityEngine::Application::get_version());

        //core.load<ark::mods::zombie>();
        load<ark::mods::sniper>();
        //core.load<ark::mods::testing>();
    }

    core::~core()
    {
        FreeConsole();
        FreeLibraryAndExitThread(hmodule_, 0);
    }

    void core::run()
    {
        while (true)
        {
            if (GetAsyncKeyState(VK_F2) & 1)
            {
                break;
            }
        }
    }
} // ark
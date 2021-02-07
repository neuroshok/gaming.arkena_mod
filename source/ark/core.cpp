#include <Windows.h>

#include <ark/core.hpp>
#include <ark/log.hpp>
#include <ark/mod.hpp>
#include <ark/mods/sniper.hpp>
#include <ark/mods/testing.hpp>


#include <filesystem>
#include <iostream>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ "0.0.24" }
    {
        //ark::load_console(console_);
        ark::init_logger((uintptr_t)hmodule_);
        ark_trace("Initialize ark::core version {}", version_);

        ark_trace("Game version : {}", ::UnityEngine::Application::get_version());

        //load<ark::mods::zombie>();
        load<ark::mods::sniper>();
        //load<ark::mods::testing>();
    }

    core::~core()
    {
        //::remove_hook<&PlayerControl::HandleRpc>([](auto o, std::uint8_t, MessageReader*){});
        //ark::unload_console(console_);
    }

    void core::run()
    {
        while (true)
        {
            if (GetAsyncKeyState(VK_F2) & 1)
            {
                break;
            }

            /*
            if (GetAsyncKeyState('Q') & 1)
            {
                INPUT ip;

                // Press the "A" key
                ip.ki.wVk = 'A'; // virtual-key code for the "a" key
                ip.ki.dwFlags = 0; // 0 for key press
                SendInput(1, &ip, sizeof(INPUT));
            }
            else if (GetAsyncKeyState('Q'))
            {
                INPUT ip;
                ip.type = INPUT_KEYBOARD;
                ip.ki.wVk = 'A';
                ip.ki.wScan = 0; // hardware scan code for key
                ip.ki.time = 0;
                ip.ki.dwExtraInfo = 0;
                // Release the "A" key
                ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
                SendInput(1, &ip, sizeof(INPUT));
            }*/
        }
    }
} // ark
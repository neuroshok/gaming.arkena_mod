#include <Windows.h>

#include <ark/core.hpp>
#include <ark/log.hpp>
#include <ark/mod.hpp>
#include <ark/mods/sniper.hpp>
#include <ark/mods/whisperer.hpp>

#include <ark/mods/testing.hpp>

#include <filesystem>
#include <iostream>

#include <ark/utility/d3dhook.hpp>
/*
#include <backends/imgui_impl_opengl2.h>
#include <backends/imgui_impl_win32.h>
#include <imgui.h>*/
#include <kiero.h>
#include <minhook/include/MinHook.h>

namespace ark
{
    core::core(HMODULE hmodule)
        : hmodule_{ hmodule }
        , version_{ "0.0.26" }
        , ui_{ *this }
    {
        //ark::load_console(console_);
        ark::init_logger((uintptr_t)hmodule_);
        ark_trace("Initialize ark::core version {}", version_);

        ark_trace("Game version : {}", ::UnityEngine::Application::get_version());

        ui_.load();

        //load<ark::mods::zombie>();
        load<ark::mods::sniper>();
        load<ark::mods::whisperer>();
        load<ark::mods::testing>();
    }

    core::~core()
    {
        ui_.unload();
        //::remove_hook<&PlayerControl::HandleRpc>([](auto o, std::uint8_t, MessageReader*){});
        //ark::unload_console(console_);
    }

    void core::run()
    {
        while (true)
        {
            //discord_.run();

            /*
            if (GetAsyncKeyState(VK_F2) & 1)
            {
                break;
            }*/
        }
    }

    const std::string &core::version() const
    {
        return version_;
    }

    const std::vector<std::unique_ptr<ark::mod>> &core::mods()
    {
        return mods_;
    }
} // ark
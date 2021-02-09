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
    {
        //ark::load_console(console_);
        ark::init_logger((uintptr_t)hmodule_);
        ark_trace("Initialize ark::core version {}", version_);

        ark_trace("Game version : {}", ::UnityEngine::Application::get_version());

        //load<ark::mods::zombie>();
        //load<ark::mods::sniper>();
        load<ark::mods::whisperer>();
        //oad<ark::mods::testing>();

        init_ui();
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
        }
    }

    void core::init_ui()
    {
        ark_trace("Initialize UI");
        auto init_status = kiero::init(kiero::RenderType::Auto);
        if (init_status != kiero::Status::Success) ark_trace("UI init error {}", init_status);

        original_render_function = GetD3D11PresentFunction();

        auto hook_status = kiero::bind(8, (void**)&original_render_function, &render_function);
        if (hook_status != kiero::Status::Success) ark_trace("UI init hook error {}", hook_status);

        // unload
        /* ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

         void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
        CleanupDeviceD3D();*/
    }
} // ark
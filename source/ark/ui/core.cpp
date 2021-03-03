#include <ark/ui/core.hpp>

#include <ark/core.hpp>
#include <ark/mod.hpp>
#include <ark/resource.hpp>

#include <backends/imgui_impl_dx11.h>
#include <backends/imgui_impl_win32.h>
#include <imgui.h>
#include <iostream>
#include <kiero.h>

#pragma comment (lib, "d3d11.lib")

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace ark::ui
{
    core::core(ark::core& core)
        : core_{ core }
    {
        instance_ = this;
    }

    void core::make_main()
    {
        ImGui::StyleColorsDark();
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowBorderSize = 0;

        ImGuiIO& io = ImGui::GetIO();

        float menu_height = io.DisplaySize.y / 24;
        float width = io.DisplaySize.x / 3;
        float main_height = io.DisplaySize.y - menu_height;

        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {0, 0});
        ImGui::SetNextWindowPos({io.DisplaySize.x - width, 0});
        ImGui::SetNextWindowSize({width, menu_height});

        ImGui::Begin("Arkmongus", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground);
            auto title = "Arkmongus " + core_.version().str();

            ImGui::Image((void*)core_.resources().ntx_icon.handle, ImVec2(menu_height, menu_height));
            ImGui::SameLine();
            if (ImGui::Button(title.c_str(), ImVec2(width - menu_height, menu_height))) main_state_ = !main_state_;
        ImGui::End();

        ImGui::PopStyleVar();

        if (main_state_)
        {
            ImGui::SetNextWindowPos({io.DisplaySize.x - width, menu_height});
            ImGui::SetNextWindowSize({width, main_height});

            ImGui::Begin("main", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            if (ImGui::BeginTabBar("menu"))
            {
                if (ImGui::BeginTabItem("Mods"))
                {
                    for (const auto& mod : core_.mods())
                    {
                        if (mod->name() == "core")
                        {
                            ImGui::TextColored({0.2, 0.8, 0.8, 1}, "%s", mod->fullname().c_str());
                        }
                        else
                        {
                            if (ImGui::Checkbox(mod->fullname().c_str(), &mod->ui_enabled_))
                            {
                                if (mod->enabled()) mod->disable();
                                else mod->enable();
                            }
                        }

                        if (mod->description().size() > 0)
                        {
                            ImGui::SameLine();
                            ImGui::TextUnformatted("?");
                            if (ImGui::IsItemHovered())
                            {
                                if (!mod->description().empty())
                                {
                                    ImGui::BeginTooltip();
                                        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 20.0f);
                                        ImGui::TextUnformatted(mod->description().c_str());
                                        ImGui::PopTextWrapPos();
                                    ImGui::EndTooltip();
                                }
                            }
                        }
                    }
                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("Control"))
                {
                    for (const auto& log : core_.logs())
                    {
                        ImGui::TextColored({0.8, 0.8, 0.8, 1}, "%s", log.c_str());
                    }
                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("Settings"))
                {
                    static const char *current_item = "core";

                    auto& mod = core_.mod(current_item);
                    if (!mod.enabled()) current_item = "core";

                    if (ImGui::BeginCombo("##Mod", current_item))
                    {
                        for (const auto& mod : core_.mods())
                        {
                            if (mod->enabled())
                            {
                                bool is_selected = (current_item == mod->name().c_str());
                                if (ImGui::Selectable(mod->name().c_str(), is_selected)) current_item = mod->name().c_str();
                                if (is_selected) ImGui::SetItemDefaultFocus();
                            }
                        }
                        ImGui::EndCombo();
                    }

                    if (mod.enabled())
                    {
                        for (auto& setting : mod.settings())
                        {
                            ImGui::TextUnformatted(setting.name().c_str());
                            if (ImGui::IsItemHovered())
                            {
                                if (!setting.description().empty())
                                {
                                    ImGui::BeginTooltip();
                                    ImGui::PushTextWrapPos(ImGui::GetFontSize() * 20.0f);
                                    ImGui::TextUnformatted(setting.description().c_str());
                                    ImGui::PopTextWrapPos();
                                    ImGui::EndTooltip();
                                }
                            }


                            std::string id = "##" + setting.name();
                            std::visit([&id, &setting, &mod](auto&& arg) {
                                using T = std::decay_t<decltype(arg)>;
                                if constexpr (std::is_same_v<T, bool>)
                                {
                                    if (ImGui::Checkbox(id.c_str(), &std::get<bool>(setting.value())))
                                    {
                                        mod.save_settings();
                                    }
                                }
                                else if constexpr (std::is_same_v<T, int>)
                                {
                                    if (ImGui::InputInt(id.c_str(), &std::get<int>(setting.value()), 1, 1, ImGuiInputTextFlags_EnterReturnsTrue))
                                    {
                                        mod.save_settings();
                                    }
                                }
                                else if constexpr (std::is_same_v<T, float>)
                                {
                                    if (ImGui::InputFloat(id.c_str(), &std::get<float>(setting.value()), 1, 1, "%.2f", ImGuiInputTextFlags_EnterReturnsTrue))
                                    {
                                        mod.save_settings();
                                    }
                                }
                                else if constexpr (std::is_same_v<T, std::string>)
                                {
                                    auto& str = std::get<std::string>(setting.value());
                                    if (ImGui::InputText(id.c_str(), str.data(), str.capacity(),
                                                         ImGuiInputTextFlags_EnterReturnsTrue))
                                    {
                                        str.resize(1 + std::strlen(str.c_str()));
                                        mod.save_settings();
                                    }
                                }
                                else ImGui::TextUnformatted("Unsupported setting type");
                            }, setting.value());
                        }
                    }
                    ImGui::EndTabItem();
                }
                ImGui::EndTabBar();
            }
        }
        ImGui::End();
    }

    void core::load()
    {
        ark_trace("Initialize UI");
        auto init_status = kiero::init(kiero::RenderType::Auto);
        if (init_status != kiero::Status::Success) ark_trace("UI init error {}", init_status);

        original_render_function = GetD3D11PresentFunction();
        auto hook_status = kiero::bind(8, (void**)&original_render_function, &ui::core::render_function);
        if (hook_status != kiero::Status::Success) ark_trace("UI init hook error {}", hook_status);
    }

    void core::unload()
    {

        kiero::unbind(8);

        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        //CleanupDeviceD3D();
    }

    core::render_function_type core::GetD3D11PresentFunction()
    {
        if (GetD3D11SwapchainDeviceContext(&swapChain, &device, &context))
        {
            void** vmt = *(void***)swapChain;

            CleanupDeviceD3D();

            return (render_function_type)vmt[8];
        }
        return nullptr;
    }

    void core::CleanupDeviceD3D()
    {
        CleanupRenderTarget();
        if (device) { device->Release(); device = nullptr; }
        if (context) { context->Release(); context = nullptr; }
        if (device) { device->Release(); device = nullptr; }
    }

    void core::CleanupRenderTarget()
    {
        if (renderTargetView) { renderTargetView->Release(); renderTargetView = nullptr; }
    }

    bool core::GetD3D11SwapchainDeviceContext(IDXGISwapChain** pSwapchain, ID3D11Device** pDevice, ID3D11DeviceContext** pContextTable)
    {
        WNDCLASSEX wc{0};
        wc.cbSize        = sizeof(wc);
        wc.lpfnWndProc   = DefWindowProc;
        wc.lpszClassName = TEXT("dummy class");

        if (!RegisterClassEx(&wc))
        {
            ark_trace("Failed to register class");
            return false;
        }
        DXGI_SWAP_CHAIN_DESC swapChainDesc{ 0 };

        swapChainDesc.BufferCount = 1;
        swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        swapChainDesc.OutputWindow = GetForegroundWindow();
        swapChainDesc.SampleDesc.Count = 1;
        swapChainDesc.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
        swapChainDesc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
        swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        swapChainDesc.Windowed = TRUE; //((GetWindowLong(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? FALSE : TRUE;

        D3D_FEATURE_LEVEL featureLevel = D3D_FEATURE_LEVEL_11_0;;
        bool success = false;

        for (D3D_DRIVER_TYPE driverType : DRIVER_TYPE_LIST)
        {
            HRESULT hr = D3D11CreateDeviceAndSwapChain(nullptr, driverType, nullptr, 0, nullptr, 0,
                                                       D3D11_SDK_VERSION, &swapChainDesc, pSwapchain, pDevice, &featureLevel, nullptr);

            if (FAILED(hr))
            {
                ark_trace("Failed to create DeviceAndSwapChain"); // on"    << "; Error Code:" << hr << "\n";
            }
            else
            {
                success = true;
                break;
            }
        }

        DestroyWindow(swapChainDesc.OutputWindow);
        UnregisterClass(wc.lpszClassName, GetModuleHandle(nullptr));

        if (!success)
        {
            ark_trace("Failed to create DeviceAndSwapChain for all driver types.");
            return false;
        }

        return true;
    }

    bool core::render_function(IDXGISwapChain *pSwapChain, UINT SyncInterval, UINT Flags)
    {
        static bool init = false;

        if (!init)
        {
            swapChain = pSwapChain;
            pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&device);
            device->GetImmediateContext(&context);

            DXGI_SWAP_CHAIN_DESC desc;
            pSwapChain->GetDesc(&desc);

            window = desc.OutputWindow;
            ImGui::CreateContext();
            ImGui_ImplWin32_Init(window);
            ImGui_ImplDX11_Init(device, context);

            OriginalWndProcFunction = (WNDPROC)SetWindowLong(window, GWLP_WNDPROC, (LONG)WndProcHook);
            ImGui::GetIO().ImeWindowHandle = window;

            // CreateRenderTarget
            ID3D11Texture2D* pBackBuffer;
            pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
            device->CreateRenderTargetView(pBackBuffer, nullptr, &renderTargetView);
            pBackBuffer->Release();

            init = true;
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();

        ImGui::NewFrame();
        ui::core::instance().make_main();
        ImGui::EndFrame();

        ImGui::Render();

        context->OMSetRenderTargets(1, &renderTargetView, nullptr);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        return original_render_function(pSwapChain, SyncInterval, Flags);
    }

    LRESULT CALLBACK core::WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        ImGuiIO& io = ImGui::GetIO();
        POINT mPos;
        GetCursorPos(&mPos);
        ScreenToClient(window, &mPos);

        ImGui::GetIO().MousePos.x = mPos.x;
        ImGui::GetIO().MousePos.y = mPos.y;

        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);

        return CallWindowProcW(OriginalWndProcFunction, hWnd, uMsg, wParam, lParam);
    }
    ui::core& core::instance()
    {
        assert(instance_);
        return *instance_;
    }
} // ark
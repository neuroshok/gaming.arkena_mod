#pragma once

#include <d3d11.h>

const D3D_DRIVER_TYPE DRIVER_TYPE_LIST[4] = { D3D_DRIVER_TYPE_REFERENCE, D3D_DRIVER_TYPE_SOFTWARE, D3D_DRIVER_TYPE_HARDWARE, D3D_DRIVER_TYPE_WARP };

struct ImGuiContext;
namespace ark{ class core; }

namespace ark::ui
{
    class core
    {
        using render_function_type = HRESULT(__stdcall*)(IDXGISwapChain*, UINT, UINT);

    public:
        explicit core(ark::core&);

        void load();
        void unload();

        void draw();
        void draw_debug();
        void draw_main();

        void run();

        render_function_type GetD3D11PresentFunction();
        static bool GetD3D11SwapchainDeviceContext(IDXGISwapChain** pSwapchain, ID3D11Device** pDevice, ID3D11DeviceContext** pContextTable);
        void CleanupDeviceD3D();
        void CleanupRenderTarget();

        static ui::core& instance();

        static LRESULT CALLBACK WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
        static bool __stdcall render_function(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

        inline static ID3D11Device* device = nullptr;

    public:
        ark::core& core_;

        bool main_state_ = false;

        inline static ui::core* instance_ = nullptr;
        inline static ImGuiContext* imgui_context = nullptr;

        inline static render_function_type original_render_function = nullptr;
        inline static WNDPROC OriginalWndProcFunction;

        inline static HWND window = nullptr;

        inline static IDXGISwapChain* swapChain = nullptr;
        inline static ID3D11DeviceContext* context = nullptr;
        inline static ID3D11RenderTargetView* renderTargetView = nullptr;
    };
}// ark
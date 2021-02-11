#pragma once

#include <d3d11.h>

const D3D_DRIVER_TYPE DRIVER_TYPE_LIST[4] = { D3D_DRIVER_TYPE_REFERENCE, D3D_DRIVER_TYPE_SOFTWARE, D3D_DRIVER_TYPE_HARDWARE, D3D_DRIVER_TYPE_WARP };

namespace ark
{
    class core;

    class ui
    {
        using render_function_type = HRESULT(__stdcall*)(IDXGISwapChain*, UINT, UINT);

    public:
        ui(ark::core&);

        void load();
        void unload();

        void make_main();

        render_function_type GetD3D11PresentFunction();
        static bool GetD3D11SwapchainDeviceContext(IDXGISwapChain** pSwapchain, ID3D11Device** pDevice, ID3D11DeviceContext** pContextTable);
        void CleanupDeviceD3D();
        void CleanupRenderTarget();

        static ui& instance();

        static LRESULT CALLBACK WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
        static bool __stdcall render_function(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

    private:
        ark::core& core_;

        bool main_state_ = false;

        bool mod_state1 = true;
        bool mod_state2 = false;
        bool mod_state3 = false;

        inline static ui* instance_ = nullptr;

        inline static render_function_type original_render_function = nullptr;
        inline static WNDPROC OriginalWndProcFunction;

        inline static HWND window = nullptr;

        inline static IDXGISwapChain* swapChain = nullptr;
        inline static ID3D11Device* device = nullptr;
        inline static ID3D11DeviceContext* context = nullptr;
        inline static ID3D11RenderTargetView* renderTargetView = nullptr;
    };
}// ark

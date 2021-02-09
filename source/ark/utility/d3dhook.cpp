#include <ark/utility/d3dhook.hpp>

#include <ark/log.hpp>

#pragma comment (lib, "d3d11.lib")

IDXGISwapChain* swapChain = nullptr;
ID3D11Device* device = nullptr;
ID3D11DeviceContext* context = nullptr;
ID3D11RenderTargetView* renderTargetView = nullptr;
HWND window = nullptr;

render_function_type original_render_function = nullptr;
WNDPROC OriginalWndProcFunction = nullptr;

BOOL __stdcall render_function(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
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

        //ImGuiIO& io = ImGui::GetIO(); (void)io;
        ImGui::StyleColorsLight();

        //ImGui_ImplWin32_Init(window);
        //ImGui_ImplDX11_Init(device, context);

        //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

        //OriginalWndProcFunction = (WNDPROC)SetWindowLongW(window, GWLP_WNDPROC, (LONG)WndProcHook);

        //ImGui::GetIO().ImeWindowHandle = window;


        ID3D11Texture2D* pBackBuffer;
        pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
        device->CreateRenderTargetView(pBackBuffer, nullptr, &renderTargetView);
        pBackBuffer->Release();

        /*
        ImGui::GetStyle().WindowRounding = 0.0F;
        ImGui::GetStyle().ChildRounding = 0.0F;
        ImGui::GetStyle().FrameRounding = 0.0F;
        ImGui::GetStyle().GrabRounding = 0.0F;
        ImGui::GetStyle().PopupRounding = 0.0F;
        ImGui::GetStyle().ScrollbarRounding = 0.0F;*/

		init = true;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();

	ImGui::NewFrame();

    ImGui::SetNextWindowPos({0, 0});
    ImGui::SetNextWindowSize({200, 50});
    ImGui::SetNextWindowBgAlpha(0.8);
    ImGui::Begin("Arkmongus", nullptr, ImGuiWindowFlags_NoTitleBar);

	ImGui::Text("Arkmongus menu test");
	ImGui::Button("Mods");

	ImGui::End();


	ImGui::EndFrame();
	ImGui::Render();

    context->OMSetRenderTargets(1, &renderTargetView, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return original_render_function(pSwapChain, SyncInterval, Flags);
}

bool GetD3D11SwapchainDeviceContext(IDXGISwapChain** pSwapchain, ID3D11Device** pDevice, ID3D11DeviceContext** pContextTable)
{
    WNDCLASSEX wc{0};
    wc.cbSize        = sizeof(wc);
    wc.lpfnWndProc   = DefWindowProc;
    wc.lpszClassName = TEXT("dummy class");

    if (!RegisterClassEx(&wc))
    {
        std::cout << "Failed to register class\n";
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

render_function_type GetD3D11PresentFunction()
{
    if (GetD3D11SwapchainDeviceContext(&swapChain, &device, &context))
    {
        void** vmt = *(void***)swapChain;

        SAFE_RELEASE(device);
        SAFE_RELEASE(context);
        SAFE_RELEASE(swapChain);

        return (render_function_type)vmt[8];
    }

    return nullptr;
}

LRESULT CALLBACK WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    ImGuiIO& io = ImGui::GetIO();
    POINT mPos;
    GetCursorPos(&mPos);
    ScreenToClient(window, &mPos);

    ImGui::GetIO().MousePos.x = mPos.x;
    ImGui::GetIO().MousePos.y = mPos.y;

    /*
    if (uMsg == WM_KEYUP && wParam == VK_DELETE)
        CWState::ShowMenu = !CWState::ShowMenu;*/
/*
    if (CWState::ShowMenu)
        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);*/

    return CallWindowProcW(OriginalWndProcFunction, hWnd, uMsg, wParam, lParam);
}
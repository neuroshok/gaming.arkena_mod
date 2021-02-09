#pragma once

#pragma comment (lib, "OpenGL32.lib")

#include <gl/GL.h>
#include <gl/GLU.h>
/*
#include <imgui.h>
#include <backends/imgui_impl_opengl3.h>
#include <backends/imgui_impl_win32.h>*/

/*
 * wglSwapBuffers = GetProcAddress(GetModuleHandle((LPCSTR)"opengl32.dll"),"wglSwapBuffers");

        ark_trace("adrs {}", (uintptr_t)wglSwapBuffers);
        ark_trace("adrs {}", (uintptr_t)&render_function);
        ark_trace("adrs {}", (uintptr_t)reinterpret_cast<void**>(&original_render_function));


		if (MH_CreateHook(wglSwapBuffers, &render_function, reinterpret_cast<void**>(&original_render_function)) != MH_OK)
            return ark_trace("Rendering hook creation failed");

        if (MH_EnableHook(wglSwapBuffers) != MH_OK)
            return ark_trace("Rendering hook activation failed {}");
 */

void* wglSwapBuffers;
typedef BOOL(__stdcall* render_function_type) (_In_ HDC hDc);

//Create instance of function
render_function_type original_render_function;

BOOL __stdcall render_function(_In_ HDC hDc)
{
    ark_trace("init");
    static bool init = false;
	//draw text here
/*
    if (!init)
    {
		ImGuiContext* context = ImGui::CreateContext();
		ImGui::SetCurrentContext(context);
		ImGuiIO& io = ImGui::GetIO();

		io.DeltaTime = 1.0f / 60.0f;
		io.DisplaySize.x = 1920;
		io.DisplaySize.y = 1080;

		io.Fonts->AddFontDefault();
		unsigned char * pixels;
		int width, height, bytes_per_pixels;
		io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixels);

		ImGui_ImplOpenGL3_Init(nullptr);
		init = true;
		std::cout << "ImGui Initialized..." << std::endl;
	}

	ImGui::NewFrame();
	ImGui::Begin("Test Window");
	ImGui::Text("TEST TEST TEST");
	ImGui::End();
	ImGui::Render();*/

    //return execution to original function
    return original_render_function(hDc);
}

/*
typedef long(__stdcall* Present)(IDXGISwapChain*, UINT, UINT);
static Present oPresent = nullptr;

long __stdcall hkPresent11(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	static bool init = false;

	if (!init)
	{
		DXGI_SWAP_CHAIN_DESC desc;
		pSwapChain->GetDesc(&desc);

		ID3D11Device* device;
		pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&device);

		ID3D11DeviceContext* context;
		device->GetImmediateContext(&context);

		ImGui::CreateContext();
		ImGui_ImplWin32_Init(desc.OutputWindow);
		ImGui_ImplDX11_Init(device, context);

		init = true;
	}

	ImGui_ImplOpenGL3_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	impl::showExampleWindow("D3D11");

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return oPresent(pSwapChain, SyncInterval, Flags);
}*/
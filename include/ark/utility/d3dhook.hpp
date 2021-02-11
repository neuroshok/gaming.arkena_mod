#pragma once

#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>

#include <iostream>

#include <backends/imgui_impl_dx11.h>
#include <backends/imgui_impl_win32.h>
#include <imgui.h>

#define SAFE_RELEASE(p) if (p) { p->Release(); p = nullptr; }

LRESULT CALLBACK WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


extern IDXGISwapChain* swapChain ;
extern ID3D11Device* device;
extern ID3D11DeviceContext* context;
extern ID3D11RenderTargetView* renderTargetView ;

extern HWND window;


typedef HRESULT(__stdcall*render_function_type)(IDXGISwapChain*, UINT, UINT);
extern render_function_type original_render_function;
extern WNDPROC OriginalWndProcFunction;

BOOL __stdcall render_function(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

bool GetD3D11SwapchainDeviceContext(IDXGISwapChain** pSwapchain, ID3D11Device** pDevice, ID3D11DeviceContext** pContextTable);

render_function_type GetD3D11PresentFunction();
#include <Windows.h>

#include <ark/core.hpp>
#include <minhook/include/MinHook.h>

DWORD WINAPI HackThread(HMODULE hmodule)
{
    FILE* console_;
    if (!AllocConsole())
    {
        ark_trace("console allocation failed");
        return 0;
    }
    freopen_s(&console_, "CONOUT$", "w", stdout);

    SetConsoleOutputCP(65001);

    ark::core core{ hmodule };
    core.run();

    MH_Uninitialize();

    ark::unload_console(console_);

    FreeLibraryAndExitThread(hmodule, 0);
    return 0;
}



extern "C" __declspec(dllexport) BOOL WINAPI DllMain(HMODULE hmodule, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hmodule, 0, nullptr));
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;

        case DLL_PROCESS_DETACH:
            break;

        default:
            break;
    }
    return true;
}
#include <ark/library.hpp>

#include <ark/core.hpp>
#include <fstream>

HMODULE dll_module = nullptr;

DWORD WINAPI HackThread(HMODULE hmodule)
{
    load_version();

#ifndef ARK_NO_CONSOLE
    FILE* console_;
    if (!AllocConsole()) ark_trace("console allocation failed");
    freopen_s(&console_, "CONOUT$", "w", stdout);

    SetConsoleOutputCP(65001);
#endif

    {
        ark::core core{ hmodule };
        core.run();
    }

#ifndef ARK_NO_CONSOLE
    fclose(console_);
    FreeConsole();
#endif

    FreeLibraryAndExitThread(hmodule, 0);
    return 0;
}


extern "C" __declspec(dllexport) BOOL WINAPI DllMain(HMODULE hmodule, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            dll_module = hmodule;
            CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hmodule, 0, nullptr);
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;

        case DLL_PROCESS_DETACH:
            FreeLibrary(dll_module);
            break;

        default:
            break;
    }
    return true;
}
#include <ark/core.hpp>
#include <fstream>

DWORD WINAPI HackThread(HMODULE hmodule)
{

#ifdef ARK_DEBUG
    FILE* console_;
    if (!AllocConsole()) ark_trace("console allocation failed");
    freopen_s(&console_, "CONOUT$", "w", stdout);

    SetConsoleOutputCP(65001);
#endif
    Sleep(2000);
    {
        ark::core core{ hmodule };
        core.run();
    }

#ifdef ARK_DEBUG
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
            CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hmodule, 0, nullptr);
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;

        case DLL_PROCESS_DETACH:
            FreeLibrary(hmodule);
            break;

        default:
            break;
    }
    return true;
}
#include "main.hpp"


DWORD WINAPI HackThread(HMODULE hmodule)
{
    load_version();

    LoadLibraryA("arkena_mod.dll");
    while (true) {}

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
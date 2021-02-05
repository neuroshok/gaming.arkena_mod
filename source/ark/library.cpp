#include <Windows.h>

#include <iostream>

#include <ark/core.hpp>

DWORD WINAPI HackThread(HMODULE hmodule)
{
    ark::core core{ hmodule };
    core.run();

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
            std::cout << "DLL_PROCESS_DETACH " << fdwReason;
            break;

        default:
            std::cout << "dll error " << fdwReason;
            break;
    }
    return true;
}

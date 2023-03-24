#include <ark/library.hpp>

#include <ark/core.hpp>
#include <fstream>

HMODULE dll_module;
/*
DWORD WINAPI Load(LPVOID lpParam) {
	load_version();
	if (!dll_module)
		return 0;


	MessageBox(NULL, (LPCSTR)L"It's working!", (LPCSTR)L"version proxy", MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);


	// your payload goes here

	return 0;
}

extern "C" __declspec(dllexport) BOOL WINAPI DllMain(HMODULE hmodule, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hmodule);
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Load, hmodule, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        FreeLibrary(dll_module);
        break;
    }
    return TRUE;
}*/

DWORD WINAPI HackThread(HMODULE hmodule)
{
    static bool init = false;
    if (init) return 0;
    init = true;
    load_version();

#ifndef ARK_NO_CONSOLE
    FILE* console_;
    if (!AllocConsole()) ark_trace("console allocation failed");
    freopen_s(&console_, "CONOUT$", "w", stdout);

    SetConsoleOutputCP(65001);
#endif


    Sleep(3000);
    {
        ark::core core{hmodule};
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
            CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hmodule, 0, nullptr));
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            FreeLibrary(dll_module);
            break;

        case DLL_PROCESS_DETACH:
            break;

        default:
            break;
    }
    return true;
}
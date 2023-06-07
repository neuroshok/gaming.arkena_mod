#pragma once

#ifdef __ANDROID__
    #include <dlfcn.h>

    #define platform_module_name "libil2cpp.so"
    #define platform_fptr_type void*
    #define platform_module_handle(MODULE_NAME) dlopen(MODULE_NAME, RTLD_LAZY)
    #define platform_module_function(MODULE_HANDLE, MODULE_FUNC_NAME) dlsym(MODULE_HANDLE, MODULE_FUNC_NAME)

    #define ARK_IMPORT
    #define ARK_EXPORT __attribute__ ((visibility ("default")))
#else
    #include <Windows.h>
    #include <KnownFolders.h>
    #include <shlobj.h>

    #define platform_module_name "GameAssembly.dll"
    #define platform_fptr_type FARPROC
    #define platform_module_handle(MODULE_NAME) GetModuleHandleA(MODULE_NAME)
    #define platform_module_function(MODULE_HANDLE, MODULE_FUNC_NAME) GetProcAddress((HMODULE)MODULE_HANDLE, MODULE_FUNC_NAME)

    #define platform_module_load(path) LoadLibrary(path)
    #define platform_module_unload FreeLibrary
    #define platform_sharelibext ".dll"

    #define ARK_IMPORT __declspec(dllimport)
    #define ARK_EXPORT __declspec(dllexport)
#endif



/*#ifdef Q_OS_WIN
    #include <windows.h>

    #define nxi_os_module_function GetProcAddress
    #define nxi_os_module_load(path) LoadLibraryA(path)
    #define nxi_os_module_unload FreeLibrary
    namespace nxi { typedef HINSTANCE os_module_handle; }
    #define nxi_os_sharelibext "dll"

    #define NXI_IMPORT __declspec(dllimport)
    #define NXI_EXPORT __declspec(dllexport)

#else
#include <dlfcn.h>

    #define nxi_os_module_function dlsym
    #define nxi_os_module_load(path) dlopen(path, RTLD_LAZY)
    #define nxi_os_module_unload dlclose
    namespace nxi { typedef void* os_module_handle; }
    #define nxi_os_sharelibext "so"

    #define NXI_IMPORT
    #define NXI_EXPORT __attribute__ ((visibility ("default")))
#endif*/
#pragma once

#include <Windows.h>

namespace ark
{
    class mod_api;
} // ark

using Module_load_ptr = int (*)(ark::mod_api&);
using Module_unload_ptr = int (*)(ark::mod_api&);

#define ark_os_module_function GetProcAddress
#define ark_os_module_load(path) LoadLibrary(path)
#define ark_os_module_unload FreeLibrary
#define ark_os_sharelibext ".dll"

#define ARK_IMPORT __declspec(dllimport)
#define ARK_EXPORT __declspec(dllexport)

#ifdef ARK_SHARED_EXPORT
    #define ARK_SHARED ARK_EXPORT
#else
    #define ARK_SHARED ARK_IMPORT
#endif

extern "C" ARK_EXPORT int mod_load(ark::mod_api& mod);
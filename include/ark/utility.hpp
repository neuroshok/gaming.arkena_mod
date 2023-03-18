#ifndef INCLUDE_ARK_UTILITY_HPP_ARKENA_MOD
#define INCLUDE_ARK_UTILITY_HPP_ARKENA_MOD

#include <cstdint>
#include <libloaderapi.h>

namespace ark
{
    static inline uintptr_t base_address()
    {
        static auto h = (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");
        return h;
    }
} // ark

#endif // INCLUDE_ARK_UTILITY_HPP_ARKENA_MOD
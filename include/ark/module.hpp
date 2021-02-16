#pragma once

#include <Windows.h>

#include <cstddef>

namespace ark
{
    static inline uintptr_t base_address()
    {
        static auto h = (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");
        return h;
    }
} // ark

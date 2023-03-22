#include <ark/meta.hpp>

namespace ark
{
    uintptr_t base_address()
    {
        static auto h = (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");
        return h;
    }
} // ark
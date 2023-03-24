#include <ark/log.hpp>
#include <ark/meta.hpp>

namespace ark
{
    uintptr_t base_address()
    {
        static auto h = (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");
        if (!h) ark_error("GameAssembly not found");
        return h;
    }
} // ark
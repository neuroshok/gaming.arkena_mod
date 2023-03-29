#include <ark/hook.hpp>

#include <minhook/include/MinHook.h>

namespace ark
{
    void native_hook(void* address, void* hook_function, void** original)
    {
        if (MH_CreateHook(address, hook_function, original) != MH_OK)
        {
            ark_error("MH_CreateHook failed 0x{0:X}", reinterpret_cast<uintptr_t>(address) - ark::base_address());
        }
        if (MH_EnableHook(address) != MH_OK)
        {
            ark_error("MH_EnableHook failed 0x{0:X}", reinterpret_cast<uintptr_t>(address) - ark::base_address());
        }
    }
} // ark
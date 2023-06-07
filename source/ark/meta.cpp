#include <ark/log.hpp>
#include <ark/meta.hpp>
#include <ark/platform.hpp>

namespace ark
{
    uintptr_t base_address()
    {
        static auto h = (uintptr_t)platform_module_handle(platform_module_name);
        if (!h) ark_error("GameAssembly not found");
        return h;
    }
} // ark
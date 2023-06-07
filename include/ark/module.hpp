#pragma once

#include <ark/platform.hpp>

namespace ark
{
    class mod_api;
} // ark

using Module_load_ptr = int (*)(ark::mod_api&);
using Module_unload_ptr = int (*)(ark::mod_api&);

#ifdef ARK_SHARED_EXPORT
    #define ARK_SHARED ARK_EXPORT
#else
    #define ARK_SHARED ARK_IMPORT
#endif

extern "C" ARK_EXPORT int mod_load(ark::mod_api& mod);
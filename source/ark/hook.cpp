#include <ark/hook.hpp>

#include <ark/core.hpp>
#include "au/PlayerControl.hpp"
#include <au/ShipStatus.hpp>


#include <il2cpp/api.hpp>

#define hkr(R, H) ark_trace("init hook {}", #H); hook<&H>::init<R>()
#define hk(H) ark_trace("init hook {}", #H); hook<&H>::init<>()

namespace ark
{
    void init_hook()
    {
        #ifdef ARK_NO_UI
            MH_Initialize();
        #endif

#ifdef ARK_TESTING
        #include <analysis/testing.hpp>
#else

#endif
    }
} // ark

#undef hk
#undef hkr
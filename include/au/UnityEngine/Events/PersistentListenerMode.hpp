#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Events
{
    struct PersistentListenerMode : ark::meta<PersistentListenerMode>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::PersistentListenerMode> {
        };

}

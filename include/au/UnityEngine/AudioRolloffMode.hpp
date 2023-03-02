#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct AudioRolloffMode : ark::meta<AudioRolloffMode>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AudioRolloffMode> {
        };

}


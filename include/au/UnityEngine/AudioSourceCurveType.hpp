#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct AudioSourceCurveType : ark::meta<AudioSourceCurveType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AudioSourceCurveType> {
        };

}


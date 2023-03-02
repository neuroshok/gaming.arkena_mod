#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct CameraType : ark::meta<CameraType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::CameraType> {
        };

}


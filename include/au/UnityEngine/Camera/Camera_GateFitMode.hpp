#pragma once
#include <ark/class.hpp>


namespace 
{
    struct Camera_GateFitMode : ark::meta<Camera_GateFitMode>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::Camera_GateFitMode> {
        };

}


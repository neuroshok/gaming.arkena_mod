#pragma once
#include <ark/class.hpp>


namespace 
{
    struct Camera_StereoscopicEye : ark::meta<Camera_StereoscopicEye>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::Camera_StereoscopicEye> {
        };

}


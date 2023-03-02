#pragma once
#include <ark/class.hpp>


namespace 
{
    struct CameraProperties_ : ark::meta<CameraProperties_>
    {
        uint8_t FixedElementField; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::CameraProperties_> {
        };

}


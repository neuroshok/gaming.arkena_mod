#pragma once
#include <ark/class.hpp>


namespace 
{
    struct LightSourceRendererType : ark::meta<LightSourceRendererType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::LightSourceRendererType> {
        };

}


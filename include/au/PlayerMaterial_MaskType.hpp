#pragma once
#include <ark/class.hpp>


namespace 
{
    struct PlayerMaterial_MaskType : ark::meta<PlayerMaterial_MaskType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::PlayerMaterial_MaskType> {
        };

}


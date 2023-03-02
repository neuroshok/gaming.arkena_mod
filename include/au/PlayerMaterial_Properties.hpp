#pragma once
#include <ark/class.hpp>

#include <au/PlayerMaterial/MaskType.hpp>

namespace 
{
    struct PlayerMaterial_Properties : ark::meta<PlayerMaterial_Properties>
    {
        PlayerMaterial+MaskType MaskType; // 0x8
        int32_t MaskLayer; // 0xc
        int32_t ColorId; // 0x10


    };

}
namespace ark {

        template<> struct meta_statics<::PlayerMaterial_Properties> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace 
{
    struct PlayerOutfitType : ark::meta<PlayerOutfitType>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::PlayerOutfitType> {
        };

}


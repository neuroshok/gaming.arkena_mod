#pragma once
#include <ark/class.hpp>


namespace AmongUs::GameOptions
{
    struct RoleTypes : ark::meta<RoleTypes>
    {
        uint16_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<AmongUs::GameOptions::RoleTypes> {
        };

}


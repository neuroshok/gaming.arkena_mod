#pragma once
#include <ark/class.hpp>


namespace 
{
    struct RoleTeamTypes : ark::meta<RoleTeamTypes>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::RoleTeamTypes> {
        };

}


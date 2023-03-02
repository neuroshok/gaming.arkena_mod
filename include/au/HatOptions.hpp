#pragma once
#include <ark/class.hpp>


namespace 
{
    struct HatOptions : ark::meta<HatOptions>
    {
        bool Initialized; // 0x8
        bool VisorBlockingHatsAllowed; // 0x9
        bool ShowForClimb; // 0xa
        bool ShowHelmets; // 0xb


    };

}
namespace ark {

        template<> struct meta_statics<::HatOptions> {
        };

}


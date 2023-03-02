#pragma once
#include <ark/class.hpp>


namespace 
{
    struct VisorOptions : ark::meta<VisorOptions>
    {
        bool Enabled; // 0x8
        bool HideDuringClimb; // 0x9


    };

}
namespace ark {

        template<> struct meta_statics<::VisorOptions> {
        };

}


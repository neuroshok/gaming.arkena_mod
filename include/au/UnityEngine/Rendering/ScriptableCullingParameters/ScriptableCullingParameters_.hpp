#pragma once
#include <ark/class.hpp>


namespace 
{
    struct ScriptableCullingParameters_ : ark::meta<ScriptableCullingParameters_>
    {
        uint8_t FixedElementField; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<::ScriptableCullingParameters_> {
        };

}


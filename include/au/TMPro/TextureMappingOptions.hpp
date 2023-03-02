#pragma once
#include <ark/class.hpp>


namespace TMPro
{
    struct TextureMappingOptions : ark::meta<TextureMappingOptions>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<TMPro::TextureMappingOptions> {
        };

}


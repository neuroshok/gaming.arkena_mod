#pragma once
#include <ark/class.hpp>


namespace TMPro
{
    struct TextRenderFlags : ark::meta<TextRenderFlags>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<TMPro::TextRenderFlags> {
        };

}


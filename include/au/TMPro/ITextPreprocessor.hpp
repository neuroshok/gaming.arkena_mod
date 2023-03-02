#pragma once
#include <ark/class.hpp>


namespace TMPro
{
    struct ITextPreprocessor : ark::meta<ITextPreprocessor>
    {


    };

}
namespace ark {

        template<> struct meta_statics<TMPro::ITextPreprocessor> {
        };

}


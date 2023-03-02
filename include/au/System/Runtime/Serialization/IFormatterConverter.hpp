#pragma once
#include <ark/class.hpp>


namespace System::Runtime::Serialization
{
    struct IFormatterConverter : ark::meta<IFormatterConverter>
    {


    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::Serialization::IFormatterConverter> {
        };

}


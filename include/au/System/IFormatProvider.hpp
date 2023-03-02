#pragma once
#include <ark/class.hpp>


namespace System
{
    struct IFormatProvider : ark::meta<IFormatProvider>
    {


    };

}
namespace ark {

        template<> struct meta_statics<System::IFormatProvider> {
        };

}


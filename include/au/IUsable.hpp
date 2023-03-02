#pragma once
#include <ark/class.hpp>


namespace 
{
    struct IUsable : ark::meta<IUsable>
    {


    };

}
namespace ark {

        template<> struct meta_statics<::IUsable> {
        };

}


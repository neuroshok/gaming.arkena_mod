#pragma once
#include <ark/class.hpp>


namespace System::Collections
{
    struct IDictionary : ark::meta<IDictionary>
    {


    };

}
namespace ark {

        template<> struct meta_statics<System::Collections::IDictionary> {
        };

}


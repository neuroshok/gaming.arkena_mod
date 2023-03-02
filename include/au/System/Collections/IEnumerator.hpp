#pragma once
#include <ark/class.hpp>


namespace System::Collections
{
    struct IEnumerator : ark::meta<IEnumerator>
    {


    };

}
namespace ark {

        template<> struct meta_statics<System::Collections::IEnumerator> {
        };

}


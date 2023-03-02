#pragma once
#include <ark/class.hpp>


namespace System::Collections::Generic
{
    template<class... Ts>
struct IDictionary : ark::meta<IDictionary<Ts...>>
    {


    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::IDictionary<Ts...>> {
        };

}


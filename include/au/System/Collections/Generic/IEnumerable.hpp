#pragma once
#include <ark/class.hpp>


namespace System::Collections::Generic
{
    template<class... Ts>
struct IEnumerable : ark::meta<IEnumerable<Ts...>>
    {


    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::IEnumerable<Ts...>> {
        };

}


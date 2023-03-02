#pragma once
#include <ark/class.hpp>


namespace System::Collections::Generic
{
    template<class... Ts>
struct IList : ark::meta<IList<Ts...>>
    {


    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::IList<Ts...>> {
        };

}


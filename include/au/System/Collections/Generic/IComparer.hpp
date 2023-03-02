#pragma once
#include <ark/class.hpp>


namespace System::Collections::Generic
{
    template<class... Ts>
struct IComparer : ark::meta<IComparer<Ts...>>
    {


    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::IComparer<Ts...>> {
        };

}


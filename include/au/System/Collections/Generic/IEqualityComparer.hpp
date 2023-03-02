#pragma once
#include <ark/class.hpp>


namespace System::Collections::Generic
{
    template<class... Ts>
struct IEqualityComparer : ark::meta<IEqualityComparer<Ts...>>
    {


    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::IEqualityComparer<Ts...>> {
        };

}


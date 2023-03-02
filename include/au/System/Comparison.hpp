#pragma once
#include <ark/class.hpp>

#include <au/System/MulticastDelegate.hpp>
#include <il2cpp/core.hpp>

namespace System
{
    template<class... Ts>
struct Comparison : ark::meta<Comparison<Ts...>, System::MulticastDelegate>
    {

        void ctor(il2cpp::Il2CppObject* object, int method) { return il2cpp::call<void(*)(Comparison*, il2cpp::Il2CppObject*, int)>(0xa4ae0000)(this, object, method); } // 0xa4ae0000

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Comparison<Ts...>> {
        };

}


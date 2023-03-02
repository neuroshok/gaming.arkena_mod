#pragma once
#include <ark/class.hpp>

#include <au/System/MulticastDelegate.hpp>
#include <il2cpp/core.hpp>

namespace System
{
    template<class... Ts>
struct EventHandler : ark::meta<EventHandler<Ts...>, System::MulticastDelegate>
    {

        void ctor(il2cpp::Il2CppObject* object, int method) { return il2cpp::call<void(*)(EventHandler*, il2cpp::Il2CppObject*, int)>(0x2b80c0)(this, object, method); } // 0x2b80c0

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::EventHandler<Ts...>> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/System/MulticastDelegate.hpp>
#include <il2cpp/core.hpp>

namespace UnityEngine::Events
{
    struct UnityAction : ark::meta<UnityAction, System::MulticastDelegate>
    {

        void ctor(il2cpp::Il2CppObject* object, int method) { return il2cpp::call<void(*)(UnityAction*, il2cpp::Il2CppObject*, int)>(0x2b80c0)(this, object, method); } // 0x2b80c0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::UnityAction> {
        };

}

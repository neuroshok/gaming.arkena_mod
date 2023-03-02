#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Delegate.hpp>

namespace UnityEngine::Events
{
    struct BaseInvokableCall : ark::meta<BaseInvokableCall, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(BaseInvokableCall*)>(0x2c4c60)(this); } // 0x2c4c60
        void ctor(il2cpp::Il2CppObject* target, System::Reflection::MethodInfo* function) { return il2cpp::call<void(*)(BaseInvokableCall*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*)>(0xf4daa0)(this, target, function); } // 0xf4daa0
        void ThrowOnInvalidArg(il2cpp::Il2CppObject* arg) { return il2cpp::call<void(*)(BaseInvokableCall*, il2cpp::Il2CppObject*)>(0xa4ae0000)(this, arg); } // 0xa4ae0000
        bool AllowInvoke(System::Delegate* delegate) { return il2cpp::call<bool(*)(BaseInvokableCall*, System::Delegate*)>(0xf4da00)(this, delegate); } // 0xf4da00

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::BaseInvokableCall> {
        };

}


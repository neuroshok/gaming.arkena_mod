#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Events/BaseInvokableCall.hpp>
#include <il2cpp/core.hpp>

namespace UnityEngine::Events
{
    struct InvokableCallList : ark::meta<InvokableCallList, il2cpp::Il2CppObject>
    {
        System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>* m_PersistentCalls; // 0x8
        System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>* m_RuntimeCalls; // 0xc
        System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>* m_ExecutingCalls; // 0x10
        bool m_NeedsUpdate; // 0x14

        void AddPersistentInvokableCall(UnityEngine::Events::BaseInvokableCall* call) { return il2cpp::call<void(*)(InvokableCallList*, UnityEngine::Events::BaseInvokableCall*)>(0xf5ac60)(this, call); } // 0xf5ac60
        void AddListener(UnityEngine::Events::BaseInvokableCall* call) { return il2cpp::call<void(*)(InvokableCallList*, UnityEngine::Events::BaseInvokableCall*)>(0xf5ac10)(this, call); } // 0xf5ac10
        void RemoveListener(il2cpp::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) { return il2cpp::call<void(*)(InvokableCallList*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*)>(0xf5ade0)(this, targetObj, method); } // 0xf5ade0
        void Clear() { return il2cpp::call<void(*)(InvokableCallList*)>(0xf5ad00)(this); } // 0xf5ad00
        void ClearPersistent() { return il2cpp::call<void(*)(InvokableCallList*)>(0xf5acb0)(this); } // 0xf5acb0
        System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>* PrepareInvoke() { return il2cpp::call<System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>*(*)(InvokableCallList*)>(0xf5ad50)(this); } // 0xf5ad50
        void ctor() { return il2cpp::call<void(*)(InvokableCallList*)>(0xf5af70)(this); } // 0xf5af70

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::InvokableCallList> {
        };

}


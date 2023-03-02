#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/UnityEngine/Events/InvokableCallList.hpp>
#include <au/UnityEngine/Events/PersistentCallGroup.hpp>
#include <au/UnityEngine/Events/PersistentCall.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Events/BaseInvokableCall.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Type.hpp>

namespace UnityEngine::Events
{
    struct UnityEventBase : ark::meta<UnityEventBase, il2cpp::Il2CppObject>
    {
        UnityEngine::Events::InvokableCallList* m_Calls; // 0x8
        UnityEngine::Events::PersistentCallGroup* m_PersistentCalls; // 0xc
        bool m_CallsDirty; // 0x10

        void ctor() { return il2cpp::call<void(*)(UnityEventBase*)>(0xef6040)(this); } // 0xef6040
        System::Reflection::MethodInfo* FindMethod(UnityEngine::Events::PersistentCall* call) { return il2cpp::call<System::Reflection::MethodInfo*(*)(UnityEventBase*, UnityEngine::Events::PersistentCall*)>(0xef5780)(this, call); } // 0xef5780
        System::Reflection::MethodInfo* FindMethod(cs::string* name, System::Type* listenerType, UnityEngine::Events::PersistentListenerMode mode, System::Type* argumentType) { return il2cpp::call<System::Reflection::MethodInfo*(*)(UnityEventBase*, cs::string*, System::Type*, UnityEngine::Events::PersistentListenerMode, System::Type*)>(0xef5990)(this, name, listenerType, mode, argumentType); } // 0xef5990
        int32_t GetPersistentEventCount() { return il2cpp::call<int32_t(*)(UnityEventBase*)>(0xef5d10)(this); } // 0xef5d10
        cs::string* GetPersistentMethodName(int32_t index) { return il2cpp::call<cs::string*(*)(UnityEventBase*, int32_t)>(0xef5d40)(this, index); } // 0xef5d40
        void DirtyPersistentCalls() { return il2cpp::call<void(*)(UnityEventBase*)>(0xef5750)(this); } // 0xef5750
        void RebuildPersistentCallsIfNeeded() { return il2cpp::call<void(*)(UnityEventBase*)>(0xef5f40)(this); } // 0xef5f40
        void AddCall(UnityEngine::Events::BaseInvokableCall* call) { return il2cpp::call<void(*)(UnityEventBase*, UnityEngine::Events::BaseInvokableCall*)>(0xef5720)(this, call); } // 0xef5720
        void RemoveListener(il2cpp::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) { return il2cpp::call<void(*)(UnityEventBase*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*)>(0xef5fa0)(this, targetObj, method); } // 0xef5fa0
        void RemoveAllListeners() { return il2cpp::call<void(*)(UnityEventBase*)>(0xef5f70)(this); } // 0xef5f70
        System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>* PrepareInvoke() { return il2cpp::call<System::Collections::Generic::List<UnityEngine::Events::BaseInvokableCall>*(*)(UnityEventBase*)>(0xef5ef0)(this); } // 0xef5ef0
        System::Reflection::MethodInfo* GetValidMethodInfo(System::Type* objectType, cs::string* functionName, cs::array<System::Type>* argumentTypes) { return il2cpp::call<System::Reflection::MethodInfo*(*)(UnityEventBase*, System::Type*, cs::string*, cs::array<System::Type>*)>(0xef5da0)(this, objectType, functionName, argumentTypes); } // 0xef5da0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::UnityEventBase> {
        };

}


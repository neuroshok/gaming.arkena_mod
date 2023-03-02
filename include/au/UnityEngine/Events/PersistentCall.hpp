#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Events/PersistentListenerMode.hpp>
#include <au/UnityEngine/Events/ArgumentCache.hpp>
#include <au/UnityEngine/Events/UnityEventCallState.hpp>
#include <au/UnityEngine/Events/UnityEventBase.hpp>

namespace UnityEngine::Events
{
    struct PersistentCall : ark::meta<PersistentCall, il2cpp::Il2CppObject>
    {
        UnityEngine::Object* m_Target; // 0x8
        cs::string* m_TargetAssemblyTypeName; // 0xc
        cs::string* m_MethodName; // 0x10
        UnityEngine::Events::PersistentListenerMode m_Mode; // 0x14
        UnityEngine::Events::ArgumentCache* m_Arguments; // 0x18
        UnityEngine::Events::UnityEventCallState m_CallState; // 0x1c

        UnityEngine::Object* get_target() { return il2cpp::call<UnityEngine::Object*(*)(PersistentCall*)>(0x2c5110)(this); } // 0x2c5110
        cs::string* get_targetAssemblyTypeName() { return il2cpp::call<cs::string*(*)(PersistentCall*)>(0x13a0830)(this); } // 0x13a0830
        cs::string* get_methodName() { return il2cpp::call<cs::string*(*)(PersistentCall*)>(0x2b40b0)(this); } // 0x2b40b0
        UnityEngine::Events::PersistentListenerMode get_mode() { return il2cpp::call<UnityEngine::Events::PersistentListenerMode(*)(PersistentCall*)>(0x2c5100)(this); } // 0x2c5100
        UnityEngine::Events::ArgumentCache* get_arguments() { return il2cpp::call<UnityEngine::Events::ArgumentCache*(*)(PersistentCall*)>(0x2c8c80)(this); } // 0x2c8c80
        bool IsValid() { return il2cpp::call<bool(*)(PersistentCall*)>(0x13a0640)(this); } // 0x13a0640
        UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(UnityEngine::Events::UnityEventBase* theEvent) { return il2cpp::call<UnityEngine::Events::BaseInvokableCall*(*)(PersistentCall*, UnityEngine::Events::UnityEventBase*)>(0x13a02d0)(this, theEvent); } // 0x13a02d0
        UnityEngine::Events::BaseInvokableCall* GetObjectCall(UnityEngine::Object* target, System::Reflection::MethodInfo* method, UnityEngine::Events::ArgumentCache* arguments) { return il2cpp::call<UnityEngine::Events::BaseInvokableCall*(*)(PersistentCall*, UnityEngine::Object*, System::Reflection::MethodInfo*, UnityEngine::Events::ArgumentCache*)>(0x139fd60)(this, target, method, arguments); } // 0x139fd60
        void ctor() { return il2cpp::call<void(*)(PersistentCall*)>(0x13a07d0)(this); } // 0x13a07d0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::PersistentCall> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Runtime/Serialization/StreamingContextStates.hpp>

namespace System::Runtime::Serialization
{
    struct StreamingContext : ark::meta<StreamingContext>
    {
        il2cpp::Il2CppObject* m_additionalContext; // 0x8
        System::Runtime::Serialization::StreamingContextStates m_state; // 0xc

        void ctor(System::Runtime::Serialization::StreamingContextStates state) { return il2cpp::call<void(*)(StreamingContext*, System::Runtime::Serialization::StreamingContextStates)>(0x171a50)(this, state); } // 0x171a50
        void ctor(System::Runtime::Serialization::StreamingContextStates state, il2cpp::Il2CppObject* additional) { return il2cpp::call<void(*)(StreamingContext*, System::Runtime::Serialization::StreamingContextStates, il2cpp::Il2CppObject*)>(0x150de0)(this, state, additional); } // 0x150de0
        il2cpp::Il2CppObject* get_Context() { return il2cpp::call<il2cpp::Il2CppObject*(*)(StreamingContext*)>(0x50e10)(this); } // 0x50e10
        System::Runtime::Serialization::StreamingContextStates get_State() { return il2cpp::call<System::Runtime::Serialization::StreamingContextStates(*)(StreamingContext*)>(0x50de0)(this); } // 0x50de0

    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::Serialization::StreamingContext> {
        };

}


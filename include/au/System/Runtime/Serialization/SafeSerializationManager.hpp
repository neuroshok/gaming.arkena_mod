#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/IList.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <il2cpp/core.hpp>
#include <au/System/RuntimeType.hpp>
#include <au/System/EventHandler.hpp>
#include <cs/string.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <au/System/Runtime/Serialization/StreamingContext.hpp>

namespace System::Runtime::Serialization
{
    struct SafeSerializationManager : ark::meta<SafeSerializationManager, il2cpp::Il2CppObject>
    {
        System::Collections::Generic::IList<il2cpp::Il2CppObject>* m_serializedStates; // 0x8
        System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo; // 0xc
        il2cpp::Il2CppObject* m_realObject; // 0x10
        System::RuntimeType* m_realType; // 0x14
        System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>* SerializeObjectState; // 0x18

        void add_SerializeObjectState(System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>* value) { return il2cpp::call<void(*)(SafeSerializationManager*, System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>*)>(0x1500a40)(this, value); } // 0x1500a40
        void remove_SerializeObjectState(System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>* value) { return il2cpp::call<void(*)(SafeSerializationManager*, System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>*)>(0x1500ac0)(this, value); } // 0x1500ac0
        void ctor() { return il2cpp::call<void(*)(SafeSerializationManager*)>(0x2c4c60)(this); } // 0x2c4c60
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(SafeSerializationManager*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1500880)(this, info, context); } // 0x1500880
        bool get_IsActive() { return il2cpp::call<bool(*)(SafeSerializationManager*)>(0x590730)(this); } // 0x590730
        void CompleteSerialization(il2cpp::Il2CppObject* serializedObject, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(SafeSerializationManager*, il2cpp::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1500210)(this, serializedObject, info, context); } // 0x1500210
        void CompleteDeserialization(il2cpp::Il2CppObject* deserializedObject) { return il2cpp::call<void(*)(SafeSerializationManager*, il2cpp::Il2CppObject*)>(0x1500000)(this, deserializedObject); } // 0x1500000
        void OnDeserialized(System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(SafeSerializationManager*, System::Runtime::Serialization::StreamingContext)>(0x1500430)(this, context); } // 0x1500430

    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::Serialization::SafeSerializationManager> {
        };

}


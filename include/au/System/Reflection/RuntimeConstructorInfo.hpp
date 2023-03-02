#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/ConstructorInfo.hpp>
#include <il2cpp/core.hpp>

namespace System::Reflection
{
    struct RuntimeConstructorInfo : ark::meta<RuntimeConstructorInfo, System::Reflection::ConstructorInfo>
    {

        System::Reflection::RuntimeModule* GetRuntimeModule() { return il2cpp::call<System::Reflection::RuntimeModule*(*)(RuntimeConstructorInfo*)>(0x14b41b0)(this); } // 0x14b41b0
        System::Reflection::BindingFlags get_BindingFlags() { return il2cpp::call<System::Reflection::BindingFlags(*)(RuntimeConstructorInfo*)>(0x387470)(this); } // 0x387470
        System::RuntimeType* get_ReflectedTypeInternal() { return il2cpp::call<System::RuntimeType*(*)(RuntimeConstructorInfo*)>(0x14b43c0)(this); } // 0x14b43c0
        cs::string* SerializationToString() { return il2cpp::call<cs::string*(*)(RuntimeConstructorInfo*)>(0x14b4350)(this); } // 0x14b4350
        void SerializationInvoke(il2cpp::Il2CppObject* target, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(RuntimeConstructorInfo*, il2cpp::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x14b4250)(this, target, info, context); } // 0x14b4250
        void ctor() { return il2cpp::call<void(*)(RuntimeConstructorInfo*)>(0x14b4370)(this); } // 0x14b4370

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::RuntimeConstructorInfo> {
        };

}


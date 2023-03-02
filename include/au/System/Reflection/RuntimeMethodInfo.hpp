#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/MethodInfo.hpp>

namespace System::Reflection
{
    struct RuntimeMethodInfo : ark::meta<RuntimeMethodInfo, System::Reflection::MethodInfo>
    {

        System::Reflection::BindingFlags get_BindingFlags() { return il2cpp::call<System::Reflection::BindingFlags(*)(RuntimeMethodInfo*)>(0x387470)(this); } // 0x387470
        System::RuntimeType* get_ReflectedTypeInternal() { return il2cpp::call<System::RuntimeType*(*)(RuntimeMethodInfo*)>(0x14b6050)(this); } // 0x14b6050
        System::Reflection::RuntimeModule* GetRuntimeModule() { return il2cpp::call<System::Reflection::RuntimeModule*(*)(RuntimeMethodInfo*)>(0x14b5e90)(this); } // 0x14b5e90
        cs::string* SerializationToString() { return il2cpp::call<cs::string*(*)(RuntimeMethodInfo*)>(0x14b5f40)(this); } // 0x14b5f40
        void ctor() { return il2cpp::call<void(*)(RuntimeMethodInfo*)>(0x2cdfc0)(this); } // 0x2cdfc0

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::RuntimeMethodInfo> {
        };

}


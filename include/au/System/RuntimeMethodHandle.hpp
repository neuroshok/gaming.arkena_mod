#pragma once
#include <ark/class.hpp>

#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <au/System/Reflection/RuntimeMethodInfo.hpp>

namespace System
{
    struct RuntimeMethodHandle : ark::meta<RuntimeMethodHandle>
    {
        int value; // 0x8

        void ctor(int v) { return il2cpp::call<void(*)(RuntimeMethodHandle*, int)>(0x54760)(this, v); } // 0x54760
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(RuntimeMethodHandle*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x183250)(this, info, context); } // 0x183250
        int get_Value() { return il2cpp::call<int(*)(RuntimeMethodHandle*)>(0x50e10)(this); } // 0x50e10
        cs::string* ConstructInstantiation(System::Reflection::RuntimeMethodInfo* method, System::TypeNameFormatFlags format) { return il2cpp::call<cs::string*(*)(RuntimeMethodHandle*, System::Reflection::RuntimeMethodInfo*, System::TypeNameFormatFlags)>(0x14b5500)(this, method, format); } // 0x14b5500
        bool IsNullHandle() { return il2cpp::call<bool(*)(RuntimeMethodHandle*)>(0x183210)(this); } // 0x183210

    };

}
namespace ark {

        template<> struct meta_statics<System::RuntimeMethodHandle> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/System/RuntimeType.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <au/System/Type.hpp>

namespace System
{
    struct RuntimeTypeHandle : ark::meta<RuntimeTypeHandle>
    {
        int value; // 0x8

        void ctor(int val) { return il2cpp::call<void(*)(RuntimeTypeHandle*, int)>(0x54760)(this, val); } // 0x54760
        void ctor(System::RuntimeType* type) { return il2cpp::call<void(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x1835c0)(this, type); } // 0x1835c0
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(RuntimeTypeHandle*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1835e0)(this, info, context); } // 0x1835e0
        int get_Value() { return il2cpp::call<int(*)(RuntimeTypeHandle*)>(0x50e10)(this); } // 0x50e10
        System::Reflection::TypeAttributes GetAttributes(System::RuntimeType* type) { return il2cpp::call<System::Reflection::TypeAttributes(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7660)(this, type); } // 0x14b7660
        int32_t GetMetadataToken(System::RuntimeType* type) { return il2cpp::call<int32_t(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b76b0)(this, type); } // 0x14b76b0
        int32_t GetToken(System::RuntimeType* type) { return il2cpp::call<int32_t(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b76b0)(this, type); } // 0x14b76b0
        System::Type* GetGenericTypeDefinition_impl(System::RuntimeType* type) { return il2cpp::call<System::Type*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b76a0)(this, type); } // 0x14b76a0
        System::Type* GetGenericTypeDefinition(System::RuntimeType* type) { return il2cpp::call<System::Type*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b76a0)(this, type); } // 0x14b76a0
        bool HasElementType(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7840)(this, type); } // 0x14b7840
        bool HasInstantiation(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7880)(this, type); } // 0x14b7880
        bool IsArray(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b78a0)(this, type); } // 0x14b78a0
        bool IsByRef(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b78b0)(this, type); } // 0x14b78b0
        bool IsComObject(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x10c8f80)(this, type); } // 0x10c8f80
        bool IsInstanceOfType(System::RuntimeType* type, il2cpp::Il2CppObject* o) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*, il2cpp::Il2CppObject*)>(0x14b7980)(this, type, o); } // 0x14b7980
        bool IsPointer(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b79d0)(this, type); } // 0x14b79d0
        bool IsPrimitive(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b79e0)(this, type); } // 0x14b79e0
        bool HasReferences(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7890)(this, type); } // 0x14b7890
        bool IsComObject(System::RuntimeType* type, bool isGenericCOM) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*, bool)>(0x14b78c0)(this, type, isGenericCOM); } // 0x14b78c0
        bool IsContextful(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b78e0)(this, type); } // 0x14b78e0
        bool IsEquivalentTo(System::RuntimeType* rtType1, System::RuntimeType* rtType2) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*, System::RuntimeType*)>(0x2b53b0)(this, rtType1, rtType2); } // 0x2b53b0
        bool IsSzArray(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b79f0)(this, type); } // 0x14b79f0
        bool IsInterface(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b79a0)(this, type); } // 0x14b79a0
        int32_t GetArrayRank(System::RuntimeType* type) { return il2cpp::call<int32_t(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7640)(this, type); } // 0x14b7640
        System::Reflection::RuntimeAssembly* GetAssembly(System::RuntimeType* type) { return il2cpp::call<System::Reflection::RuntimeAssembly*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7650)(this, type); } // 0x14b7650
        System::RuntimeType* GetElementType(System::RuntimeType* type) { return il2cpp::call<System::RuntimeType*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7680)(this, type); } // 0x14b7680
        System::Reflection::RuntimeModule* GetModule(System::RuntimeType* type) { return il2cpp::call<System::Reflection::RuntimeModule*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b76c0)(this, type); } // 0x14b76c0
        bool IsGenericVariable(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7970)(this, type); } // 0x14b7970
        System::RuntimeType* GetBaseType(System::RuntimeType* type) { return il2cpp::call<System::RuntimeType*(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7670)(this, type); } // 0x14b7670
        bool CanCastTo(System::RuntimeType* type, System::RuntimeType* target) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*, System::RuntimeType*)>(0x14b7530)(this, type, target); } // 0x14b7530
        bool type_is_assignable_from(System::Type* a, System::Type* b) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::Type*, System::Type*)>(0x14b7be0)(this, a, b); } // 0x14b7be0
        bool IsGenericTypeDefinition(System::RuntimeType* type) { return il2cpp::call<bool(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7960)(this, type); } // 0x14b7960
        int GetGenericParameterInfo(System::RuntimeType* type) { return il2cpp::call<int(*)(RuntimeTypeHandle*, System::RuntimeType*)>(0x14b7690)(this, type); } // 0x14b7690

    };

}
namespace ark {

        template<> struct meta_statics<System::RuntimeTypeHandle> {
        };

}


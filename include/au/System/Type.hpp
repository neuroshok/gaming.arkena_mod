#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/MemberInfo.hpp>
#include <au/System/Reflection/MemberFilter.hpp>
#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/System/Reflection/Binder.hpp>
#include <au/System/Reflection/BindingFlags.hpp>
#include <au/System/RuntimeTypeHandle.hpp>
#include <cs/string.hpp>
#include <au/System/Guid.hpp>
#include <au/System/Type.hpp>
#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <au/System/Type.hpp>
#include <cs/string.hpp>

namespace System
{
    struct Type : ark::meta<Type, System::Reflection::MemberInfo>
    {
        static System::Reflection::MemberFilter* FilterAttribute(); // 0x0
        static System::Reflection::MemberFilter* FilterName(); // 0x4
        static System::Reflection::MemberFilter* FilterNameIgnoreCase(); // 0x8
        static il2cpp::Il2CppObject* Missing(); // 0xc
        static char Delimiter(); // 0x10
        static cs::array<System::Type>* EmptyTypes(); // 0x14
        static System::Reflection::Binder* defaultBinder(); // 0x18
        System::RuntimeTypeHandle _impl; // 0x8

        void ctor() { return il2cpp::call<void(*)(Type*)>(0x2cdfc0)(this); } // 0x2cdfc0
        System::Type* GetType(cs::string* typeName, System::Func<System::Reflection::AssemblyName, System::Reflection::Assembly>* assemblyResolver, System::Func<System::Reflection::Assembly, cs::string*, bool, System::Type>* typeResolver, bool throwOnError) { return il2cpp::call<System::Type*(*)(Type*, cs::string*, System::Func<System::Reflection::AssemblyName, System::Reflection::Assembly>*, System::Func<System::Reflection::Assembly, cs::string*, bool, System::Type>*, bool)>(0xf07760)(this, typeName, assemblyResolver, typeResolver, throwOnError); } // 0xf07760
        System::Type* GetTypeFromCLSID(System::Guid clsid) { return il2cpp::call<System::Type*(*)(Type*, System::Guid)>(0xf07340)(this, clsid); } // 0xf07340
        System::TypeCode GetTypeCode(System::Type* type) { return il2cpp::call<System::TypeCode(*)(Type*, System::Type*)>(0xf072e0)(this, type); } // 0xf072e0
        System::Reflection::Binder* get_DefaultBinder() { return il2cpp::call<System::Reflection::Binder*(*)(Type*)>(0xf089a0)(this); } // 0xf089a0
        void CreateBinder() { return il2cpp::call<void(*)(Type*)>(0xf05770)(this); } // 0xf05770
        System::RuntimeTypeHandle GetTypeHandle(il2cpp::Il2CppObject* o) { return il2cpp::call<System::RuntimeTypeHandle(*)(Type*, il2cpp::Il2CppObject*)>(0xf07410)(this, o); } // 0xf07410
        bool get_IsNested() { return il2cpp::call<bool(*)(Type*)>(0xf08e80)(this); } // 0xf08e80
        bool get_IsVisible() { return il2cpp::call<bool(*)(Type*)>(0xf090e0)(this); } // 0xf090e0
        System::Type* GetRootElementType() { return il2cpp::call<System::Type*(*)(Type*)>(0xf07140)(this); } // 0xf07140
        System::Array* GetEnumRawConstantValues() { return il2cpp::call<System::Array*(*)(Type*)>(0xf06590)(this); } // 0xf06590
        void GetEnumData(cs::array<cs::string*>* enumNames, System::Array* enumValues) { return il2cpp::call<void(*)(Type*, cs::array<cs::string*>*, System::Array*)>(0xf05e80)(this, enumNames, enumValues); } // 0xf05e80
        int32_t BinarySearch(System::Array* array, il2cpp::Il2CppObject* value) { return il2cpp::call<int32_t(*)(Type*, System::Array*, il2cpp::Il2CppObject*)>(0xf05670)(this, array, value); } // 0xf05670
        bool IsIntegerType(System::Type* t) { return il2cpp::call<bool(*)(Type*, System::Type*)>(0xf080f0)(this, t); } // 0xf080f0
        bool ImplementInterface(System::Type* ifaceType) { return il2cpp::call<bool(*)(Type*, System::Type*)>(0xf07840)(this, ifaceType); } // 0xf07840
        cs::string* FormatTypeName() { return il2cpp::call<cs::string*(*)(Type*)>(0xf05b20)(this); } // 0xf05b20
        bool op_Equality(System::Type* left, System::Type* right) { return il2cpp::call<bool(*)(Type*, System::Type*, System::Type*)>(0x2d0710)(this, left, right); } // 0x2d0710
        bool op_Inequality(System::Type* left, System::Type* right) { return il2cpp::call<bool(*)(Type*, System::Type*, System::Type*)>(0x2d0730)(this, left, right); } // 0x2d0730
        System::Type* internal_from_name(cs::string* name, bool throwOnError, bool ignoreCase) { return il2cpp::call<System::Type*(*)(Type*, cs::string*, bool, bool)>(0xf092c0)(this, name, throwOnError, ignoreCase); } // 0xf092c0
        System::Type* GetType(cs::string* typeName) { return il2cpp::call<System::Type*(*)(Type*, cs::string*)>(0xf074f0)(this, typeName); } // 0xf074f0
        System::Type* GetType(cs::string* typeName, bool throwOnError) { return il2cpp::call<System::Type*(*)(Type*, cs::string*, bool)>(0xf076f0)(this, typeName, throwOnError); } // 0xf076f0
        System::Type* GetType(cs::string* typeName, bool throwOnError, bool ignoreCase) { return il2cpp::call<System::Type*(*)(Type*, cs::string*, bool, bool)>(0xf07560)(this, typeName, throwOnError, ignoreCase); } // 0xf07560
        System::Type* GetTypeFromHandle(System::RuntimeTypeHandle handle) { return il2cpp::call<System::Type*(*)(Type*, System::RuntimeTypeHandle)>(0xf073a0)(this, handle); } // 0xf073a0
        System::Type* internal_from_handle(int handle) { return il2cpp::call<System::Type*(*)(Type*, int)>(0xf092b0)(this, handle); } // 0xf092b0
        void cctor() { return il2cpp::call<void(*)(Type*)>(0xf08690)(this); } // 0xf08690

    };

}
namespace ark {

        template<> struct meta_statics<System::Type> {
        System::Reflection::MemberFilter* FilterAttribute; // 0x0
        System::Reflection::MemberFilter* FilterName; // 0x4
        System::Reflection::MemberFilter* FilterNameIgnoreCase; // 0x8
        il2cpp::Il2CppObject* Missing; // 0xc
        char Delimiter; // 0x10
        cs::array<System::Type>* EmptyTypes; // 0x14
        System::Reflection::Binder* defaultBinder; // 0x18
        };

}



System::Reflection::MemberFilter* System::Type::FilterAttribute() { return statics()->FilterAttribute; }; // 0x0

System::Reflection::MemberFilter* System::Type::FilterName() { return statics()->FilterName; }; // 0x4

System::Reflection::MemberFilter* System::Type::FilterNameIgnoreCase() { return statics()->FilterNameIgnoreCase; }; // 0x8

il2cpp::Il2CppObject* System::Type::Missing() { return statics()->Missing; }; // 0xc

char System::Type::Delimiter() { return statics()->Delimiter; }; // 0x10

cs::array<System::Type>* System::Type::EmptyTypes() { return statics()->EmptyTypes; }; // 0x14

System::Reflection::Binder* System::Type::defaultBinder() { return statics()->defaultBinder; }; // 0x18
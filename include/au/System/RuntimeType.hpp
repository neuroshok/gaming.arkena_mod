#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/TypeInfo.hpp>
#include <cs/array.hpp>
#include <au/System/Reflection/BindingFlags.hpp>
#include <au/System/MonoTypeInfo.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Reflection/RuntimeConstructorInfo.hpp>
#include <au/System/RuntimeType.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/System/Reflection/BindingFlags.hpp>
#include <au/System/Reflection/MemberInfo.hpp>
#include <au/System/Type.hpp>
#include <au/System/Reflection/RuntimeMethodInfo.hpp>
#include <au/System/Reflection/RuntimeConstructorInfo.hpp>
#include <au/System/Reflection/MethodBase.hpp>
#include <cs/string.hpp>
#include <au/System/RuntimeType.hpp>
#include <au/System/Reflection/BindingFlags.hpp>
#include <il2cpp/core.hpp>
#include <au/System/TypeNameKind.hpp>
#include <au/System/Guid.hpp>

namespace System
{
    struct RuntimeType : ark::meta<RuntimeType, System::Reflection::TypeInfo>
    {
        static System::RuntimeType* ValueType(); // 0x0
        static System::RuntimeType* EnumType(); // 0x4
        static System::RuntimeType* ObjectType(); // 0x8
        static System::RuntimeType* StringType(); // 0xc
        static System::RuntimeType* DelegateType(); // 0x10
        static cs::array<System::Type>* s_SICtorParamTypes(); // 0x14
        static System::RuntimeType* s_typedRef(); // 0x18
        System::MonoTypeInfo* type_info; // 0xc
        il2cpp::Il2CppObject* GenericCache; // 0x10
        System::Reflection::RuntimeConstructorInfo* m_serializationCtor; // 0x14

        void ThrowIfTypeNeverValidGenericArgument(System::RuntimeType* type) { return il2cpp::call<void(*)(RuntimeType*, System::RuntimeType*)>(0x14c0220)(this, type); } // 0x14c0220
        void SanityCheckGenericArguments(cs::array<System::RuntimeType>* genericArguments, cs::array<System::RuntimeType>* genericParamters) { return il2cpp::call<void(*)(RuntimeType*, cs::array<System::RuntimeType>*, cs::array<System::RuntimeType>*)>(0x14bff70)(this, genericArguments, genericParamters); } // 0x14bff70
        void SplitName(cs::string* fullname, cs::string* name, cs::string* ns) { return il2cpp::call<void(*)(RuntimeType*, cs::string*, cs::string*, cs::string*)>(0x14c0160)(this, fullname, name, ns); } // 0x14c0160
        void FilterHelper(System::Reflection::BindingFlags bindingFlags, cs::string* name, bool allowPrefixLookup, bool prefixLookup, bool ignoreCase, System::RuntimeType+MemberListType listType) { return il2cpp::call<void(*)(RuntimeType*, System::Reflection::BindingFlags, cs::string*, bool, bool, bool, System::RuntimeType+MemberListType)>(0x14b92d0)(this, bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType); } // 0x14b92d0
        void FilterHelper(System::Reflection::BindingFlags bindingFlags, cs::string* name, bool ignoreCase, System::RuntimeType+MemberListType listType) { return il2cpp::call<void(*)(RuntimeType*, System::Reflection::BindingFlags, cs::string*, bool, System::RuntimeType+MemberListType)>(0x14b93c0)(this, bindingFlags, name, ignoreCase, listType); } // 0x14b93c0
        bool FilterApplyPrefixLookup(System::Reflection::MemberInfo* memberInfo, cs::string* name, bool ignoreCase) { return il2cpp::call<bool(*)(RuntimeType*, System::Reflection::MemberInfo*, cs::string*, bool)>(0x14b9180)(this, memberInfo, name, ignoreCase); } // 0x14b9180
        bool FilterApplyBase(System::Reflection::MemberInfo* memberInfo, System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, cs::string* name, bool prefixLookup) { return il2cpp::call<bool(*)(RuntimeType*, System::Reflection::MemberInfo*, System::Reflection::BindingFlags, bool, bool, bool, cs::string*, bool)>(0x14b8cc0)(this, memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup); } // 0x14b8cc0
        bool FilterApplyType(System::Type* type, System::Reflection::BindingFlags bindingFlags, cs::string* name, bool prefixLookup, cs::string* ns) { return il2cpp::call<bool(*)(RuntimeType*, System::Type*, System::Reflection::BindingFlags, cs::string*, bool, cs::string*)>(0x14b91f0)(this, type, bindingFlags, name, prefixLookup, ns); } // 0x14b91f0
        bool FilterApplyMethodInfo(System::Reflection::RuntimeMethodInfo* method, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, cs::array<System::Type>* argumentTypes) { return il2cpp::call<bool(*)(RuntimeType*, System::Reflection::RuntimeMethodInfo*, System::Reflection::BindingFlags, System::Reflection::CallingConventions, cs::array<System::Type>*)>(0x14b9110)(this, method, bindingFlags, callConv, argumentTypes); } // 0x14b9110
        bool FilterApplyConstructorInfo(System::Reflection::RuntimeConstructorInfo* constructor, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, cs::array<System::Type>* argumentTypes) { return il2cpp::call<bool(*)(RuntimeType*, System::Reflection::RuntimeConstructorInfo*, System::Reflection::BindingFlags, System::Reflection::CallingConventions, cs::array<System::Type>*)>(0x14b8e70)(this, constructor, bindingFlags, callConv, argumentTypes); } // 0x14b8e70
        bool FilterApplyMethodBase(System::Reflection::MethodBase* methodBase, System::Reflection::BindingFlags methodFlags, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, cs::array<System::Type>* argumentTypes) { return il2cpp::call<bool(*)(RuntimeType*, System::Reflection::MethodBase*, System::Reflection::BindingFlags, System::Reflection::BindingFlags, System::Reflection::CallingConventions, cs::array<System::Type>*)>(0x14b8ee0)(this, methodBase, methodFlags, bindingFlags, callConv, argumentTypes); } // 0x14b8ee0
        void ctor() { return il2cpp::call<void(*)(RuntimeType*)>(0x14c0890)(this); } // 0x14c0890
        bool IsSpecialSerializableType() { return il2cpp::call<bool(*)(RuntimeType*)>(0x14bf6b0)(this); } // 0x14bf6b0
        System::RuntimeType::ListBuilder<System::Reflection::MethodInfo>* GetMethodCandidates(cs::string* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, cs::array<System::Type>* types, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Reflection::MethodInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, System::Reflection::CallingConventions, cs::array<System::Type>*, bool)>(0x14bbf20)(this, name, bindingAttr, callConv, types, allowPrefixLookup); } // 0x14bbf20
        System::RuntimeType::ListBuilder<System::Reflection::ConstructorInfo>* GetConstructorCandidates(cs::string* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, cs::array<System::Type>* types, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Reflection::ConstructorInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, System::Reflection::CallingConventions, cs::array<System::Type>*, bool)>(0x14b9860)(this, name, bindingAttr, callConv, types, allowPrefixLookup); } // 0x14b9860
        System::RuntimeType::ListBuilder<System::Reflection::PropertyInfo>* GetPropertyCandidates(cs::string* name, System::Reflection::BindingFlags bindingAttr, cs::array<System::Type>* types, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Reflection::PropertyInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, cs::array<System::Type>*, bool)>(0x14bd050)(this, name, bindingAttr, types, allowPrefixLookup); } // 0x14bd050
        System::RuntimeType::ListBuilder<System::Reflection::EventInfo>* GetEventCandidates(cs::string* name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Reflection::EventInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, bool)>(0x14ba8c0)(this, name, bindingAttr, allowPrefixLookup); } // 0x14ba8c0
        System::RuntimeType::ListBuilder<System::Reflection::FieldInfo>* GetFieldCandidates(cs::string* name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Reflection::FieldInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, bool)>(0x14baec0)(this, name, bindingAttr, allowPrefixLookup); } // 0x14baec0
        System::RuntimeType::ListBuilder<System::Type>* GetNestedTypeCandidates(cs::string* fullname, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) { return il2cpp::call<System::RuntimeType::ListBuilder<System::Type>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, bool)>(0x14bc600)(this, fullname, bindingAttr, allowPrefixLookup); } // 0x14bc600
        System::Reflection::RuntimeModule* GetRuntimeModule() { return il2cpp::call<System::Reflection::RuntimeModule*(*)(RuntimeType*)>(0x14b76c0)(this); } // 0x14b76c0
        System::Reflection::RuntimeAssembly* GetRuntimeAssembly() { return il2cpp::call<System::Reflection::RuntimeAssembly*(*)(RuntimeType*)>(0x14b7650)(this); } // 0x14b7650
        System::RuntimeType* GetBaseType() { return il2cpp::call<System::RuntimeType*(*)(RuntimeType*)>(0x14b9620)(this); } // 0x14b9620
        cs::array<System::RuntimeType>* GetGenericArgumentsInternal() { return il2cpp::call<cs::array<System::RuntimeType>*(*)(RuntimeType*)>(0x14bb600)(this); } // 0x14bb600
        bool op_Equality(System::RuntimeType* left, System::RuntimeType* right) { return il2cpp::call<bool(*)(RuntimeType*, System::RuntimeType*, System::RuntimeType*)>(0x2d0710)(this, left, right); } // 0x2d0710
        bool op_Inequality(System::RuntimeType* left, System::RuntimeType* right) { return il2cpp::call<bool(*)(RuntimeType*, System::RuntimeType*, System::RuntimeType*)>(0x2d0730)(this, left, right); } // 0x2d0730
        void CreateInstanceCheckThis() { return il2cpp::call<void(*)(RuntimeType*)>(0x14b7d80)(this); } // 0x14b7d80
        il2cpp::Il2CppObject* CreateInstanceImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, cs::array<il2cpp::Il2CppObject>* args, System::Globalization::CultureInfo* culture, cs::array<il2cpp::Il2CppObject>* activationAttributes, System::Threading::StackCrawlMark stackMark) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, System::Reflection::BindingFlags, System::Reflection::Binder*, cs::array<il2cpp::Il2CppObject>*, System::Globalization::CultureInfo*, cs::array<il2cpp::Il2CppObject>*, System::Threading::StackCrawlMark)>(0x14b81d0)(this, bindingAttr, binder, args, culture, activationAttributes, stackMark); } // 0x14b81d0
        il2cpp::Il2CppObject* CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, System::Threading::StackCrawlMark stackMark) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, bool, bool, bool, System::Threading::StackCrawlMark)>(0x14b7fa0)(this, publicOnly, skipCheckThis, fillCache, stackMark); } // 0x14b7fa0
        System::Reflection::MonoCMethod* GetDefaultConstructor() { return il2cpp::call<System::Reflection::MonoCMethod*(*)(RuntimeType*)>(0x14ba170)(this); } // 0x14ba170
        cs::string* GetDefaultMemberName() { return il2cpp::call<cs::string*(*)(RuntimeType*)>(0x14ba2a0)(this); } // 0x14ba2a0
        System::Reflection::RuntimeConstructorInfo* GetSerializationCtor() { return il2cpp::call<System::Reflection::RuntimeConstructorInfo*(*)(RuntimeType*)>(0x14bd3f0)(this); } // 0x14bd3f0
        il2cpp::Il2CppObject* CreateInstanceSlow(bool publicOnly, bool skipCheckThis, bool fillCache, System::Threading::StackCrawlMark stackMark) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, bool, bool, bool, System::Threading::StackCrawlMark)>(0x14b8c90)(this, publicOnly, skipCheckThis, fillCache, stackMark); } // 0x14b8c90
        il2cpp::Il2CppObject* CreateInstanceMono(bool nonPublic) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, bool)>(0x14b89b0)(this, nonPublic); } // 0x14b89b0
        il2cpp::Il2CppObject* CheckValue(il2cpp::Il2CppObject* value, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture, System::Reflection::BindingFlags invokeAttr) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, il2cpp::Il2CppObject*, System::Reflection::Binder*, System::Globalization::CultureInfo*, System::Reflection::BindingFlags)>(0x14b7c00)(this, value, binder, culture, invokeAttr); } // 0x14b7c00
        il2cpp::Il2CppObject* TryConvertToType(il2cpp::Il2CppObject* value, bool failed) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, il2cpp::Il2CppObject*, bool)>(0x14c0370)(this, value, failed); } // 0x14c0370
        il2cpp::Il2CppObject* IsConvertibleToPrimitiveType(il2cpp::Il2CppObject* value, System::Type* targetType) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, il2cpp::Il2CppObject*, System::Type*)>(0x14be5f0)(this, value, targetType); } // 0x14be5f0
        cs::string* GetCachedName(System::TypeNameKind kind) { return il2cpp::call<cs::string*(*)(RuntimeType*, System::TypeNameKind)>(0x14b9800)(this, kind); } // 0x14b9800
        System::Type* make_array_type(int32_t rank) { return il2cpp::call<System::Type*(*)(RuntimeType*, int32_t)>(0x14c0e70)(this, rank); } // 0x14c0e70
        System::Type* make_byref_type() { return il2cpp::call<System::Type*(*)(RuntimeType*)>(0x14c0e90)(this); } // 0x14c0e90
        System::Type* MakePointerType(System::Type* type) { return il2cpp::call<System::Type*(*)(RuntimeType*, System::Type*)>(0x14bff10)(this, type); } // 0x14bff10
        il2cpp::Il2CppObject* CreateInstanceForAnotherGenericParameter(System::Type* genericType, System::RuntimeType* genericArgument) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, System::Type*, System::RuntimeType*)>(0x14b8090)(this, genericType, genericArgument); } // 0x14b8090
        System::Type* MakeGenericType(System::Type* gt, cs::array<System::Type>* types) { return il2cpp::call<System::Type*(*)(RuntimeType*, System::Type*, cs::array<System::Type>*)>(0x14bfef0)(this, gt, types); } // 0x14bfef0
        int GetMethodsByName_native(int namePtr, System::Reflection::BindingFlags bindingAttr, bool ignoreCase) { return il2cpp::call<int(*)(RuntimeType*, int, System::Reflection::BindingFlags, bool)>(0x14bc580)(this, namePtr, bindingAttr, ignoreCase); } // 0x14bc580
        cs::array<System::Reflection::RuntimeMethodInfo>* GetMethodsByName(cs::string* name, System::Reflection::BindingFlags bindingAttr, bool ignoreCase, System::RuntimeType* reflectedType) { return il2cpp::call<cs::array<System::Reflection::RuntimeMethodInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, bool, System::RuntimeType*)>(0x14bc300)(this, name, bindingAttr, ignoreCase, reflectedType); } // 0x14bc300
        int GetPropertiesByName_native(int name, System::Reflection::BindingFlags bindingAttr, bool icase) { return il2cpp::call<int(*)(RuntimeType*, int, System::Reflection::BindingFlags, bool)>(0x14bcfd0)(this, name, bindingAttr, icase); } // 0x14bcfd0
        int GetConstructors_native(System::Reflection::BindingFlags bindingAttr) { return il2cpp::call<int(*)(RuntimeType*, System::Reflection::BindingFlags)>(0x14b9f30)(this, bindingAttr); } // 0x14b9f30
        cs::array<System::Reflection::RuntimeConstructorInfo>* GetConstructors_internal(System::Reflection::BindingFlags bindingAttr, System::RuntimeType* reflectedType) { return il2cpp::call<cs::array<System::Reflection::RuntimeConstructorInfo>*(*)(RuntimeType*, System::Reflection::BindingFlags, System::RuntimeType*)>(0x14b9cc0)(this, bindingAttr, reflectedType); } // 0x14b9cc0
        cs::array<System::Reflection::RuntimePropertyInfo>* GetPropertiesByName(cs::string* name, System::Reflection::BindingFlags bindingAttr, bool icase, System::RuntimeType* reflectedType) { return il2cpp::call<cs::array<System::Reflection::RuntimePropertyInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, bool, System::RuntimeType*)>(0x14bcd50)(this, name, bindingAttr, icase, reflectedType); } // 0x14bcd50
        System::Type* GetTypeFromCLSIDImpl(System::Guid clsid, cs::string* server, bool throwOnError) { return il2cpp::call<System::Type*(*)(RuntimeType*, System::Guid, cs::string*, bool)>(0x14bd630)(this, clsid, server, throwOnError); } // 0x14bd630
        System::TypeCode GetTypeCodeImplInternal(System::Type* type) { return il2cpp::call<System::TypeCode(*)(RuntimeType*, System::Type*)>(0x14bd5d0)(this, type); } // 0x14bd5d0
        bool IsGenericCOMObjectImpl() { return il2cpp::call<bool(*)(RuntimeType*)>(0x2b53b0)(this); } // 0x2b53b0
        il2cpp::Il2CppObject* CreateInstanceInternal(System::Type* type) { return il2cpp::call<il2cpp::Il2CppObject*(*)(RuntimeType*, System::Type*)>(0x14b89a0)(this, type); } // 0x14b89a0
        cs::string* getFullName(bool full_name, bool assembly_qualified) { return il2cpp::call<cs::string*(*)(RuntimeType*, bool, bool)>(0x14c08d0)(this, full_name, assembly_qualified); } // 0x14c08d0
        cs::array<System::Type>* GetGenericArgumentsInternal(bool runtimeArray) { return il2cpp::call<cs::array<System::Type>*(*)(RuntimeType*, bool)>(0x14bb660)(this, runtimeArray); } // 0x14bb660
        System::Reflection::GenericParameterAttributes GetGenericParameterAttributes() { return il2cpp::call<System::Reflection::GenericParameterAttributes(*)(RuntimeType*)>(0x14bb6e0)(this); } // 0x14bb6e0
        int32_t GetGenericParameterPosition() { return il2cpp::call<int32_t(*)(RuntimeType*)>(0x14bb7f0)(this); } // 0x14bb7f0
        int GetEvents_native(int name, System::Reflection::BindingFlags bindingAttr) { return il2cpp::call<int(*)(RuntimeType*, int, System::Reflection::BindingFlags)>(0x14baea0)(this, name, bindingAttr); } // 0x14baea0
        int GetFields_native(int name, System::Reflection::BindingFlags bindingAttr) { return il2cpp::call<int(*)(RuntimeType*, int, System::Reflection::BindingFlags)>(0x14bb5e0)(this, name, bindingAttr); } // 0x14bb5e0
        cs::array<System::Reflection::RuntimeFieldInfo>* GetFields_internal(cs::string* name, System::Reflection::BindingFlags bindingAttr, System::RuntimeType* reflectedType) { return il2cpp::call<cs::array<System::Reflection::RuntimeFieldInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, System::RuntimeType*)>(0x14bb300)(this, name, bindingAttr, reflectedType); } // 0x14bb300
        cs::array<System::Reflection::RuntimeEventInfo>* GetEvents_internal(cs::string* name, System::Reflection::BindingFlags bindingAttr, System::RuntimeType* reflectedType) { return il2cpp::call<cs::array<System::Reflection::RuntimeEventInfo>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags, System::RuntimeType*)>(0x14babc0)(this, name, bindingAttr, reflectedType); } // 0x14babc0
        int GetNestedTypes_native(int name, System::Reflection::BindingFlags bindingAttr) { return il2cpp::call<int(*)(RuntimeType*, int, System::Reflection::BindingFlags)>(0x14bccd0)(this, name, bindingAttr); } // 0x14bccd0
        cs::array<System::RuntimeType>* GetNestedTypes_internal(cs::string* displayName, System::Reflection::BindingFlags bindingAttr) { return il2cpp::call<cs::array<System::RuntimeType>*(*)(RuntimeType*, cs::string*, System::Reflection::BindingFlags)>(0x14bca70)(this, displayName, bindingAttr); } // 0x14bca70
        void cctor() { return il2cpp::call<void(*)(RuntimeType*)>(0x14c05f0)(this); } // 0x14c05f0

    };

}
namespace ark {

        template<> struct meta_statics<System::RuntimeType> {
        System::RuntimeType* ValueType; // 0x0
        System::RuntimeType* EnumType; // 0x4
        System::RuntimeType* ObjectType; // 0x8
        System::RuntimeType* StringType; // 0xc
        System::RuntimeType* DelegateType; // 0x10
        cs::array<System::Type>* s_SICtorParamTypes; // 0x14
        System::RuntimeType* s_typedRef; // 0x18
        };

}



System::RuntimeType* System::RuntimeType::ValueType() { return statics()->ValueType; }; // 0x0

System::RuntimeType* System::RuntimeType::EnumType() { return statics()->EnumType; }; // 0x4

System::RuntimeType* System::RuntimeType::ObjectType() { return statics()->ObjectType; }; // 0x8

System::RuntimeType* System::RuntimeType::StringType() { return statics()->StringType; }; // 0xc

System::RuntimeType* System::RuntimeType::DelegateType() { return statics()->DelegateType; }; // 0x10

cs::array<System::Type>* System::RuntimeType::s_SICtorParamTypes() { return statics()->s_SICtorParamTypes; }; // 0x14

System::RuntimeType* System::RuntimeType::s_typedRef() { return statics()->s_typedRef; }; // 0x18
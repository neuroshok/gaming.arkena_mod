#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/System/Runtime/Serialization/IFormatterConverter.hpp>
#include <cs/string.hpp>
#include <au/System/Type.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>

namespace System::Runtime::Serialization
{
    struct SerializationInfo : ark::meta<SerializationInfo, il2cpp::Il2CppObject>
    {
        cs::array<cs::string*>* m_members; // 0x8
        cs::array<il2cpp::Il2CppObject>* m_data; // 0xc
        cs::array<System::Type>* m_types; // 0x10
        System::Collections::Generic::Dictionary<cs::string*, int32_t>* m_nameToIndex; // 0x14
        int32_t m_currMember; // 0x18
        System::Runtime::Serialization::IFormatterConverter* m_converter; // 0x1c
        cs::string* m_fullTypeName; // 0x20
        cs::string* m_assemName; // 0x24
        System::Type* objectType; // 0x28
        bool isFullTypeNameSetExplicit; // 0x2c
        bool isAssemblyNameSetExplicit; // 0x2d
        bool requireSameTokenInPartialTrust; // 0x2e

        void ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter) { return il2cpp::call<void(*)(SerializationInfo*, System::Type*, System::Runtime::Serialization::IFormatterConverter*)>(0x150acf0)(this, type, converter); } // 0x150acf0
        void ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust) { return il2cpp::call<void(*)(SerializationInfo*, System::Type*, System::Runtime::Serialization::IFormatterConverter*, bool)>(0x150ad10)(this, type, converter, requireSameTokenInPartialTrust); } // 0x150ad10
        cs::string* get_FullTypeName() { return il2cpp::call<cs::string*(*)(SerializationInfo*)>(0x2d8c00)(this); } // 0x2d8c00
        cs::string* get_AssemblyName() { return il2cpp::call<cs::string*(*)(SerializationInfo*)>(0x2e3cb0)(this); } // 0x2e3cb0
        void SetType(System::Type* type) { return il2cpp::call<void(*)(SerializationInfo*, System::Type*)>(0x150aa30)(this, type); } // 0x150aa30
        bool Compare(cs::array<uint8_t>* a, cs::array<uint8_t>* b) { return il2cpp::call<bool(*)(SerializationInfo*, cs::array<uint8_t>*, cs::array<uint8_t>*)>(0x1509a10)(this, a, b); } // 0x1509a10
        void DemandForUnsafeAssemblyNameAssignments(cs::string* originalAssemblyName, cs::string* newAssemblyName) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, cs::string*)>(0x1509a80)(this, originalAssemblyName, newAssemblyName); } // 0x1509a80
        bool IsAssemblyNameAssignmentSafe(cs::string* originalAssemblyName, cs::string* newAssemblyName) { return il2cpp::call<bool(*)(SerializationInfo*, cs::string*, cs::string*)>(0x150a8e0)(this, originalAssemblyName, newAssemblyName); } // 0x150a8e0
        int32_t get_MemberCount() { return il2cpp::call<int32_t(*)(SerializationInfo*)>(0x2c8c80)(this); } // 0x2c8c80
        System::Type* get_ObjectType() { return il2cpp::call<System::Type*(*)(SerializationInfo*)>(0x302440)(this); } // 0x302440
        bool get_IsFullTypeNameSetExplicit() { return il2cpp::call<bool(*)(SerializationInfo*)>(0x313330)(this); } // 0x313330
        bool get_IsAssemblyNameSetExplicit() { return il2cpp::call<bool(*)(SerializationInfo*)>(0xa56090)(this); } // 0xa56090
        System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator() { return il2cpp::call<System::Runtime::Serialization::SerializationInfoEnumerator*(*)(SerializationInfo*)>(0x150a000)(this); } // 0x150a000
        void ExpandArrays() { return il2cpp::call<void(*)(SerializationInfo*)>(0x1509a90)(this); } // 0x1509a90
        void AddValue(cs::string* name, il2cpp::Il2CppObject* value, System::Type* type) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, il2cpp::Il2CppObject*, System::Type*)>(0x1509390)(this, name, value, type); } // 0x1509390
        void AddValue(cs::string* name, il2cpp::Il2CppObject* value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, il2cpp::Il2CppObject*)>(0x1509440)(this, name, value); } // 0x1509440
        void AddValue(cs::string* name, bool value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, bool)>(0x1508f00)(this, name, value); } // 0x1508f00
        void AddValue(cs::string* name, char value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, char)>(0x1509270)(this, name, value); } // 0x1509270
        void AddValue(cs::string* name, uint8_t value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, uint8_t)>(0x1509570)(this, name, value); } // 0x1509570
        void AddValue(cs::string* name, int16_t value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, int16_t)>(0x1509690)(this, name, value); } // 0x1509690
        void AddValue(cs::string* name, int32_t value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, int32_t)>(0x1509020)(this, name, value); } // 0x1509020
        void AddValue(cs::string* name, int64_t value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, int64_t)>(0x15097b0)(this, name, value); } // 0x15097b0
        void AddValue(cs::string* name, uint64_t value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, uint64_t)>(0x1508dd0)(this, name, value); } // 0x1508dd0
        void AddValue(cs::string* name, float value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, float)>(0x15098e0)(this, name, value); } // 0x15098e0
        void AddValue(cs::string* name, System::DateTime value) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, System::DateTime)>(0x1509140)(this, name, value); } // 0x1509140
        void AddValueInternal(cs::string* name, il2cpp::Il2CppObject* value, System::Type* type) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, il2cpp::Il2CppObject*, System::Type*)>(0x1508b40)(this, name, value, type); } // 0x1508b40
        void UpdateValue(cs::string* name, il2cpp::Il2CppObject* value, System::Type* type) { return il2cpp::call<void(*)(SerializationInfo*, cs::string*, il2cpp::Il2CppObject*, System::Type*)>(0x150ab80)(this, name, value, type); } // 0x150ab80
        int32_t FindElement(cs::string* name) { return il2cpp::call<int32_t(*)(SerializationInfo*, cs::string*)>(0x1509b50)(this, name); } // 0x1509b50
        il2cpp::Il2CppObject* GetElement(cs::string* name, System::Type* foundType) { return il2cpp::call<il2cpp::Il2CppObject*(*)(SerializationInfo*, cs::string*, System::Type*)>(0x1509e70)(this, name, foundType); } // 0x1509e70
        il2cpp::Il2CppObject* GetElementNoThrow(cs::string* name, System::Type* foundType) { return il2cpp::call<il2cpp::Il2CppObject*(*)(SerializationInfo*, cs::string*, System::Type*)>(0x1509d60)(this, name, foundType); } // 0x1509d60
        il2cpp::Il2CppObject* GetValue(cs::string* name, System::Type* type) { return il2cpp::call<il2cpp::Il2CppObject*(*)(SerializationInfo*, cs::string*, System::Type*)>(0x150a750)(this, name, type); } // 0x150a750
        il2cpp::Il2CppObject* GetValueNoThrow(cs::string* name, System::Type* type) { return il2cpp::call<il2cpp::Il2CppObject*(*)(SerializationInfo*, cs::string*, System::Type*)>(0x150a5d0)(this, name, type); } // 0x150a5d0
        bool GetBoolean(cs::string* name) { return il2cpp::call<bool(*)(SerializationInfo*, cs::string*)>(0x1509c00)(this, name); } // 0x1509c00
        int32_t GetInt32(cs::string* name) { return il2cpp::call<int32_t(*)(SerializationInfo*, cs::string*)>(0x150a080)(this, name); } // 0x150a080
        int64_t GetInt64(cs::string* name) { return il2cpp::call<int64_t(*)(SerializationInfo*, cs::string*)>(0x150a1e0)(this, name); } // 0x150a1e0
        float GetSingle(cs::string* name) { return il2cpp::call<float(*)(SerializationInfo*, cs::string*)>(0x150a330)(this, name); } // 0x150a330
        cs::string* GetString(cs::string* name) { return il2cpp::call<cs::string*(*)(SerializationInfo*, cs::string*)>(0x150a480)(this, name); } // 0x150a480

    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::Serialization::SerializationInfo> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/IEqualityComparer.hpp>
#include <au/System/Collections/Generic/Dictionary/KeyCollection.hpp>
#include <au/System/Collections/Generic/Dictionary/ValueCollection.hpp>
#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/Generic/IEqualityComparer.hpp>
#include <au/System/Collections/Generic/IDictionary.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>

namespace System::Collections::Generic
{
    template<class... Ts>
struct Dictionary : ark::meta<Dictionary<Ts...>, il2cpp::Il2CppObject>
    {
        cs::array<int32_t>* buckets; // 0x8
        cs::array<System::Collections::Generic::Dictionary::Entry<cs::string*, int32_t>>* entries; // 0xc
        int32_t count; // 0x10
        int32_t version; // 0x14
        int32_t freeList; // 0x18
        int32_t freeCount; // 0x1c
        System::Collections::Generic::IEqualityComparer<cs::string*>* comparer; // 0x20
        System::Collections::Generic::Dictionary::KeyCollection<cs::string*, int32_t>* keys; // 0x24
        System::Collections::Generic::Dictionary::ValueCollection<cs::string*, int32_t>* values; // 0x28
        il2cpp::Il2CppObject* _syncRoot; // 0x2c

        void ctor() { return il2cpp::call<void(*)(Dictionary*)>(0x2b6a90)(this); } // 0x2b6a90
        void ctor(int32_t capacity) { return il2cpp::call<void(*)(Dictionary*, int32_t)>(0x2b6a60)(this, capacity); } // 0x2b6a60
        void ctor(System::Collections::Generic::IEqualityComparer<cs::string*>* comparer) { return il2cpp::call<void(*)(Dictionary*, System::Collections::Generic::IEqualityComparer<cs::string*>*)>(0x2b6ea0)(this, comparer); } // 0x2b6ea0
        void ctor(int32_t capacity, System::Collections::Generic::IEqualityComparer<cs::string*>* comparer) { return il2cpp::call<void(*)(Dictionary*, int32_t, System::Collections::Generic::IEqualityComparer<cs::string*>*)>(0x1930620)(this, capacity, comparer); } // 0x1930620
        void ctor(System::Collections::Generic::IDictionary<cs::string*, int32_t>* dictionary) { return il2cpp::call<void(*)(Dictionary*, System::Collections::Generic::IDictionary<cs::string*, int32_t>*)>(0x2b6ed0)(this, dictionary); } // 0x2b6ed0
        void ctor(System::Collections::Generic::IDictionary<cs::string*, int32_t>* dictionary, System::Collections::Generic::IEqualityComparer<cs::string*>* comparer) { return il2cpp::call<void(*)(Dictionary*, System::Collections::Generic::IDictionary<cs::string*, int32_t>*, System::Collections::Generic::IEqualityComparer<cs::string*>*)>(0x1931970)(this, dictionary, comparer); } // 0x1931970
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(Dictionary*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1930e90)(this, info, context); } // 0x1930e90
        System::Collections::Generic::Dictionary::KeyCollection<cs::string*, int32_t>* get_Keys() { return il2cpp::call<System::Collections::Generic::Dictionary::KeyCollection<cs::string*, int32_t>*(*)(Dictionary*)>(0x2b53c0)(this); } // 0x2b53c0
        System::Collections::Generic::Dictionary::ValueCollection<cs::string*, int32_t>* get_Values() { return il2cpp::call<System::Collections::Generic::Dictionary::ValueCollection<cs::string*, int32_t>*(*)(Dictionary*)>(0x2b5420)(this); } // 0x2b5420
        bool ContainsValue(int32_t value) { return il2cpp::call<bool(*)(Dictionary*, int32_t)>(0x1920c00)(this, value); } // 0x1920c00
        void CopyTo(cs::array<System::Collections::Generic::KeyValuePair<cs::string*, int32_t>>* array, int32_t index) { return il2cpp::call<void(*)(Dictionary*, cs::array<System::Collections::Generic::KeyValuePair<cs::string*, int32_t>>*, int32_t)>(0x1921070)(this, array, index); } // 0x1921070
        System::Collections::Generic::Dictionary::Enumerator<cs::string*, int32_t>* GetEnumerator() { return il2cpp::call<System::Collections::Generic::Dictionary::Enumerator<cs::string*, int32_t>*(*)(Dictionary*)>(0x18cff60)(this); } // 0x18cff60
        int32_t FindEntry(cs::string* key) { return il2cpp::call<int32_t(*)(Dictionary*, cs::string*)>(0x1921bf0)(this, key); } // 0x1921bf0
        void Initialize(int32_t capacity) { return il2cpp::call<void(*)(Dictionary*, int32_t)>(0x1923260)(this, capacity); } // 0x1923260
        bool TryInsert(cs::string* key, int32_t value, System::Collections::Generic::InsertionBehavior behavior) { return il2cpp::call<bool(*)(Dictionary*, cs::string*, int32_t, System::Collections::Generic::InsertionBehavior)>(0x192ed30)(this, key, value, behavior); } // 0x192ed30
        void Resize() { return il2cpp::call<void(*)(Dictionary*)>(0x1926e60)(this); } // 0x1926e60
        void Resize(int32_t newSize, bool forceNewHashCodes) { return il2cpp::call<void(*)(Dictionary*, int32_t, bool)>(0x1926ed0)(this, newSize, forceNewHashCodes); } // 0x1926ed0
        bool TryAdd(cs::string* key, int32_t value) { return il2cpp::call<bool(*)(Dictionary*, cs::string*, int32_t)>(0xa79630)(this, key, value); } // 0xa79630
        bool IsCompatibleKey(il2cpp::Il2CppObject* key) { return il2cpp::call<bool(*)(Dictionary*, il2cpp::Il2CppObject*)>(0x1923860)(this, key); } // 0x1923860

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::Dictionary<Ts...>> {
        };

}


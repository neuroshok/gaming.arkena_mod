#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Concurrent/ConcurrentDictionary/Tables.hpp>
#include <au/System/Collections/Generic/IEqualityComparer.hpp>
#include <au/System/Collections/Generic/IEqualityComparer.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/System/Collections/Concurrent/ConcurrentDictionary/Tables.hpp>

namespace System::Collections::Concurrent
{
    template<class... Ts>
struct ConcurrentDictionary : ark::meta<ConcurrentDictionary<Ts...>, il2cpp::Il2CppObject>
    {
        static bool s_isValueWriteAtomic(); // 0x0
        System::Collections::Concurrent::ConcurrentDictionary::Tables<Hazel::MessageWriter, bool>* _tables; // 0x8
        System::Collections::Generic::IEqualityComparer<Hazel::MessageWriter>* _comparer; // 0xc
        bool _growLockArray; // 0x10
        int32_t _budget; // 0x14

        bool IsValueWriteAtomic() { return il2cpp::call<bool(*)(ConcurrentDictionary*)>(0x16dc1a0)(this); } // 0x16dc1a0
        void ctor() { return il2cpp::call<void(*)(ConcurrentDictionary*)>(0xc0a920)(this); } // 0xc0a920
        void ctor(int32_t concurrencyLevel, int32_t capacity) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t, int32_t)>(0xc0a9d0)(this, concurrencyLevel, capacity); } // 0xc0a9d0
        void ctor(System::Collections::Generic::IEqualityComparer<Hazel::MessageWriter>* comparer) { return il2cpp::call<void(*)(ConcurrentDictionary*, System::Collections::Generic::IEqualityComparer<Hazel::MessageWriter>*)>(0xc0a870)(this, comparer); } // 0xc0a870
        void ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer<Hazel::MessageWriter>* comparer) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t, int32_t, bool, System::Collections::Generic::IEqualityComparer<Hazel::MessageWriter>*)>(0x16e93f0)(this, concurrencyLevel, capacity, growLockArray, comparer); } // 0x16e93f0
        bool TryAdd(Hazel::MessageWriter* key, bool value) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, bool)>(0x16e53b0)(this, key, value); } // 0x16e53b0
        bool TryRemove(Hazel::MessageWriter* key, bool value) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, bool)>(0x16e7470)(this, key, value); } // 0x16e7470
        bool TryRemoveInternal(Hazel::MessageWriter* key, bool value, bool matchValue, bool oldValue) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, bool, bool, bool)>(0x16e67c0)(this, key, value, matchValue, oldValue); } // 0x16e67c0
        bool TryGetValueInternal(Hazel::MessageWriter* key, int32_t hashcode, bool value) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, int32_t, bool)>(0x16e5d20)(this, key, hashcode, value); } // 0x16e5d20
        bool TryUpdateInternal(Hazel::MessageWriter* key, int32_t hashcode, bool newValue, bool comparisonValue) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, int32_t, bool, bool)>(0x16e8620)(this, key, hashcode, newValue, comparisonValue); } // 0x16e8620
        cs::array<System::Collections::Generic::KeyValuePair<Hazel::MessageWriter, bool>>* ToArray() { return il2cpp::call<cs::array<System::Collections::Generic::KeyValuePair<Hazel::MessageWriter, bool>>*(*)(ConcurrentDictionary*)>(0x16e2790)(this); } // 0x16e2790
        void CopyToPairs(cs::array<System::Collections::Generic::KeyValuePair<Hazel::MessageWriter, bool>>* array, int32_t index) { return il2cpp::call<void(*)(ConcurrentDictionary*, cs::array<System::Collections::Generic::KeyValuePair<Hazel::MessageWriter, bool>>*, int32_t)>(0x16d6c50)(this, array, index); } // 0x16d6c50
        void CopyToEntries(cs::array<System::Collections::DictionaryEntry>* array, int32_t index) { return il2cpp::call<void(*)(ConcurrentDictionary*, cs::array<System::Collections::DictionaryEntry>*, int32_t)>(0x16d5d70)(this, array, index); } // 0x16d5d70
        void CopyToObjects(cs::array<il2cpp::Il2CppObject>* array, int32_t index) { return il2cpp::call<void(*)(ConcurrentDictionary*, cs::array<il2cpp::Il2CppObject>*, int32_t)>(0x16d66f0)(this, array, index); } // 0x16d66f0
        bool TryAddInternal(Hazel::MessageWriter* key, int32_t hashcode, bool value, bool updateIfExists, bool acquireLock, bool resultingValue) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, int32_t, bool, bool, bool, bool)>(0x16e3bf0)(this, key, hashcode, value, updateIfExists, acquireLock, resultingValue); } // 0x16e3bf0
        void ThrowKeyNotFoundException() { return il2cpp::call<void(*)(ConcurrentDictionary*)>(0x16e20d0)(this); } // 0x16e20d0
        void ThrowKeyNullException() { return il2cpp::call<void(*)(ConcurrentDictionary*)>(0x16e21e0)(this); } // 0x16e21e0
        int32_t GetCountInternal() { return il2cpp::call<int32_t(*)(ConcurrentDictionary*)>(0xc04120)(this); } // 0xc04120
        bool GetOrAdd(Hazel::MessageWriter* key, System::Func<Hazel::MessageWriter, bool>* valueFactory) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, System::Func<Hazel::MessageWriter, bool>*)>(0x16d7cf0)(this, key, valueFactory); } // 0x16d7cf0
        bool GetOrAdd(Hazel::MessageWriter* key, bool value) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, bool)>(0x16d85b0)(this, key, value); } // 0x16d85b0
        bool AddOrUpdate(Hazel::MessageWriter* key, System::Func<Hazel::MessageWriter, bool>* addValueFactory, System::Func<Hazel::MessageWriter, bool, bool>* updateValueFactory) { return il2cpp::call<bool(*)(ConcurrentDictionary*, Hazel::MessageWriter*, System::Func<Hazel::MessageWriter, bool>*, System::Func<Hazel::MessageWriter, bool, bool>*)>(0x16d4840)(this, key, addValueFactory, updateValueFactory); } // 0x16d4840
        bool get_IsEmpty() { return il2cpp::call<bool(*)(ConcurrentDictionary*)>(0xc0afd0)(this); } // 0xc0afd0
        void GrowTable(System::Collections::Concurrent::ConcurrentDictionary::Tables<Hazel::MessageWriter, bool>* tables) { return il2cpp::call<void(*)(ConcurrentDictionary*, System::Collections::Concurrent::ConcurrentDictionary::Tables<Hazel::MessageWriter, bool>*)>(0x16dab30)(this, tables); } // 0x16dab30
        int32_t GetBucket(int32_t hashcode, int32_t bucketCount) { return il2cpp::call<int32_t(*)(ConcurrentDictionary*, int32_t, int32_t)>(0xc04100)(this, hashcode, bucketCount); } // 0xc04100
        void GetBucketAndLockNo(int32_t hashcode, int32_t bucketNo, int32_t lockNo, int32_t bucketCount, int32_t lockCount) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t, int32_t, int32_t, int32_t, int32_t)>(0xc040d0)(this, hashcode, bucketNo, lockNo, bucketCount, lockCount); } // 0xc040d0
        int32_t get_DefaultConcurrencyLevel() { return il2cpp::call<int32_t(*)(ConcurrentDictionary*)>(0xc0afc0)(this); } // 0xc0afc0
        void AcquireAllLocks(int32_t locksAcquired) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t)>(0x16d4170)(this, locksAcquired); } // 0x16d4170
        void AcquireLocks(int32_t fromInclusive, int32_t toExclusive, int32_t locksAcquired) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t, int32_t, int32_t)>(0xc03110)(this, fromInclusive, toExclusive, locksAcquired); } // 0xc03110
        void ReleaseLocks(int32_t fromInclusive, int32_t toExclusive) { return il2cpp::call<void(*)(ConcurrentDictionary*, int32_t, int32_t)>(0xc05ee0)(this, fromInclusive, toExclusive); } // 0xc05ee0
        System::Collections::ObjectModel::ReadOnlyCollection<Hazel::MessageWriter>* GetKeys() { return il2cpp::call<System::Collections::ObjectModel::ReadOnlyCollection<Hazel::MessageWriter>*(*)(ConcurrentDictionary*)>(0x16d6eb0)(this); } // 0x16d6eb0
        System::Collections::ObjectModel::ReadOnlyCollection<bool>* GetValues() { return il2cpp::call<System::Collections::ObjectModel::ReadOnlyCollection<bool>*(*)(ConcurrentDictionary*)>(0x16d8b50)(this); } // 0x16d8b50
        void cctor() { return il2cpp::call<void(*)(ConcurrentDictionary*)>(0xc0a7e0)(this); } // 0xc0a7e0

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Concurrent::ConcurrentDictionary<Ts...>> {
        bool s_isValueWriteAtomic; // 0x0
        };

}


template<class... Ts>

bool System::Collections::Concurrent::ConcurrentDictionary<Ts...>::s_isValueWriteAtomic() { return statics()->s_isValueWriteAtomic; }; // 0x0
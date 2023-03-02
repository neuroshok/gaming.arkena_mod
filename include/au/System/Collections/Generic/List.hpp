#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/IEnumerable.hpp>
#include <cs/array.hpp>
#include <au/System/Predicate.hpp>
#include <au/System/Action.hpp>
#include <au/System/Predicate.hpp>
#include <au/System/Collections/Generic/IComparer.hpp>
#include <au/System/Comparison.hpp>

namespace System::Collections::Generic
{
    template<class... Ts>
struct List : ark::meta<List<Ts...>, il2cpp::Il2CppObject>
    {
        static cs::array<Typeid_30>* _emptyArray(); // 0x0
        cs::array<Typeid_30>* _items; // 0x8
        int32_t _size; // 0xc
        int32_t _version; // 0x10
        il2cpp::Il2CppObject* _syncRoot; // 0x14

        void ctor() { return il2cpp::call<void(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void ctor(int32_t capacity) { return il2cpp::call<void(*)(List*, int32_t)>(0xa4ae0000)(this, capacity); } // 0xa4ae0000
        void ctor(System::Collections::Generic::IEnumerable<Typeid_30>* collection) { return il2cpp::call<void(*)(List*, System::Collections::Generic::IEnumerable<Typeid_30>*)>(0xa4ae0000)(this, collection); } // 0xa4ae0000
        int32_t get_Capacity() { return il2cpp::call<int32_t(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void set_Capacity(int32_t value) { return il2cpp::call<void(*)(List*, int32_t)>(0xa4ae0000)(this, value); } // 0xa4ae0000
        bool IsCompatibleObject(il2cpp::Il2CppObject* value) { return il2cpp::call<bool(*)(List*, il2cpp::Il2CppObject*)>(0xa4ae0000)(this, value); } // 0xa4ae0000
        void AddRange(System::Collections::Generic::IEnumerable<Typeid_30>* collection) { return il2cpp::call<void(*)(List*, System::Collections::Generic::IEnumerable<Typeid_30>*)>(0xa4ae0000)(this, collection); } // 0xa4ae0000
        void CopyTo(cs::array<Typeid_30>* array) { return il2cpp::call<void(*)(List*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, array); } // 0xa4ae0000
        void CopyTo(int32_t index, cs::array<Typeid_30>* array, int32_t arrayIndex, int32_t count) { return il2cpp::call<void(*)(List*, int32_t, cs::array<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, index, array, arrayIndex, count); } // 0xa4ae0000
        void EnsureCapacity(int32_t min) { return il2cpp::call<void(*)(List*, int32_t)>(0xa4ae0000)(this, min); } // 0xa4ae0000
        Typeid_30 Find(System::Predicate<Typeid_30>* match) { return il2cpp::call<Typeid_30(*)(List*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, match); } // 0xa4ae0000
        System::Collections::Generic::List<Typeid_30>* FindAll(System::Predicate<Typeid_30>* match) { return il2cpp::call<System::Collections::Generic::List<Typeid_30>*(*)(List*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, match); } // 0xa4ae0000
        int32_t FindIndex(System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(List*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, match); } // 0xa4ae0000
        int32_t FindIndex(int32_t startIndex, int32_t count, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(List*, int32_t, int32_t, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, startIndex, count, match); } // 0xa4ae0000
        void ForEach(System::Action<Typeid_30>* action) { return il2cpp::call<void(*)(List*, System::Action<Typeid_30>*)>(0xa4ae0000)(this, action); } // 0xa4ae0000
        System::Collections::Generic::List::Enumerator<Typeid_30>* GetEnumerator() { return il2cpp::call<System::Collections::Generic::List::Enumerator<Typeid_30>*(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void InsertRange(int32_t index, System::Collections::Generic::IEnumerable<Typeid_30>* collection) { return il2cpp::call<void(*)(List*, int32_t, System::Collections::Generic::IEnumerable<Typeid_30>*)>(0xa4ae0000)(this, index, collection); } // 0xa4ae0000
        int32_t RemoveAll(System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(List*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, match); } // 0xa4ae0000
        void RemoveRange(int32_t index, int32_t count) { return il2cpp::call<void(*)(List*, int32_t, int32_t)>(0xa4ae0000)(this, index, count); } // 0xa4ae0000
        void Reverse() { return il2cpp::call<void(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void Reverse(int32_t index, int32_t count) { return il2cpp::call<void(*)(List*, int32_t, int32_t)>(0xa4ae0000)(this, index, count); } // 0xa4ae0000
        void Sort() { return il2cpp::call<void(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void Sort(System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(List*, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, comparer); } // 0xa4ae0000
        void Sort(int32_t index, int32_t count, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(List*, int32_t, int32_t, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, index, count, comparer); } // 0xa4ae0000
        void Sort(System::Comparison<Typeid_30>* comparison) { return il2cpp::call<void(*)(List*, System::Comparison<Typeid_30>*)>(0xa4ae0000)(this, comparison); } // 0xa4ae0000
        cs::array<Typeid_30>* ToArray() { return il2cpp::call<cs::array<Typeid_30>*(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void TrimExcess() { return il2cpp::call<void(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000
        bool TrueForAll(System::Predicate<Typeid_30>* match) { return il2cpp::call<bool(*)(List*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, match); } // 0xa4ae0000
        void cctor() { return il2cpp::call<void(*)(List*)>(0xa4ae0000)(this); } // 0xa4ae0000

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::List<Ts...>> {
        cs::array<Typeid_30>* _emptyArray; // 0x0
        };

}


template<class... Ts>

cs::array<Typeid_30>* System::Collections::Generic::List<Ts...>::_emptyArray() { return statics()->_emptyArray; }; // 0x0
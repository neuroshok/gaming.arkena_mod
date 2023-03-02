#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Type.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Array.hpp>
#include <au/System/Type.hpp>

namespace System
{
    struct Array : ark::meta<Array, il2cpp::Il2CppObject>
    {

        System::Array* CreateInstance(System::Type* elementType, cs::array<int64_t>* lengths) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int64_t>*)>(0x1304280)(this, elementType, lengths); } // 0x1304280
        System::Collections::ObjectModel::ReadOnlyCollection<Typeid_30>* AsReadOnly(cs::array<Typeid_30>* array) { return il2cpp::call<System::Collections::ObjectModel::ReadOnlyCollection<Typeid_30>*(*)(Array*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, array); } // 0xa4ae0000
        void Resize(cs::array<Typeid_30>* array, int32_t newSize) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t)>(0xa4ae0000)(this, array, newSize); } // 0xa4ae0000
        int32_t CombineHashCodes(int32_t h1, int32_t h2) { return il2cpp::call<int32_t(*)(Array*, int32_t, int32_t)>(0xaab360)(this, h1, h2); } // 0xaab360
        int32_t BinarySearch(System::Array* array, il2cpp::Il2CppObject* value) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*)>(0x1302770)(this, array, value); } // 0x1302770
        cs::array<Typeid_30>* ConvertAll(cs::array<Typeid_30>* array, System::Converter<Typeid_30, Typeid_30>* converter) { return il2cpp::call<cs::array<Typeid_30>*(*)(Array*, cs::array<Typeid_30>*, System::Converter<Typeid_30, Typeid_30>*)>(0xa4ae0000)(this, array, converter); } // 0xa4ae0000
        void Copy(System::Array* sourceArray, System::Array* destinationArray, int64_t length) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, int64_t)>(0x13037b0)(this, sourceArray, destinationArray, length); } // 0x13037b0
        void Copy(System::Array* sourceArray, int64_t sourceIndex, System::Array* destinationArray, int64_t destinationIndex, int64_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int64_t, System::Array*, int64_t, int64_t)>(0x1303630)(this, sourceArray, sourceIndex, destinationArray, destinationIndex, length); } // 0x1303630
        void CopyTo(System::Array* array, int64_t index) { return il2cpp::call<void(*)(Array*, System::Array*, int64_t)>(0x1302f30)(this, array, index); } // 0x1302f30
        void ForEach(cs::array<Typeid_30>* array, System::Action<Typeid_30>* action) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, System::Action<Typeid_30>*)>(0xa4ae0000)(this, array, action); } // 0xa4ae0000
        int64_t get_LongLength() { return il2cpp::call<int64_t(*)(Array*)>(0x1306f00)(this); } // 0x1306f00
        int64_t GetLongLength(int32_t dimension) { return il2cpp::call<int64_t(*)(Array*, int32_t)>(0x13044b0)(this, dimension); } // 0x13044b0
        il2cpp::Il2CppObject* GetValue(int64_t index) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int64_t)>(0x1304d10)(this, index); } // 0x1304d10
        il2cpp::Il2CppObject* GetValue(int64_t index1, int64_t index2) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int64_t, int64_t)>(0x13046a0)(this, index1, index2); } // 0x13046a0
        il2cpp::Il2CppObject* GetValue(int64_t index1, int64_t index2, int64_t index3) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int64_t, int64_t, int64_t)>(0x1304980)(this, index1, index2, index3); } // 0x1304980
        il2cpp::Il2CppObject* GetValue(cs::array<int64_t>* indices) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, cs::array<int64_t>*)>(0x1304b70)(this, indices); } // 0x1304b70
        int32_t BinarySearch(System::Array* array, int32_t index, int32_t length, il2cpp::Il2CppObject* value) { return il2cpp::call<int32_t(*)(Array*, System::Array*, int32_t, int32_t, il2cpp::Il2CppObject*)>(0x1302bd0)(this, array, index, length, value); } // 0x1302bd0
        int32_t BinarySearch(System::Array* array, il2cpp::Il2CppObject* value, System::Collections::IComparer* comparer) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*, System::Collections::IComparer*)>(0x1302bf0)(this, array, value, comparer); } // 0x1302bf0
        int32_t BinarySearch(System::Array* array, int32_t index, int32_t length, il2cpp::Il2CppObject* value, System::Collections::IComparer* comparer) { return il2cpp::call<int32_t(*)(Array*, System::Array*, int32_t, int32_t, il2cpp::Il2CppObject*, System::Collections::IComparer*)>(0x13027f0)(this, array, index, length, value, comparer); } // 0x13027f0
        int32_t GetMedian(int32_t low, int32_t hi) { return il2cpp::call<int32_t(*)(Array*, int32_t, int32_t)>(0x13044f0)(this, low, hi); } // 0x13044f0
        int32_t BinarySearch(cs::array<Typeid_30>* array, Typeid_30 value) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30)>(0xa4ae0000)(this, array, value); } // 0xa4ae0000
        int32_t BinarySearch(cs::array<Typeid_30>* array, Typeid_30 value, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, array, value, comparer); } // 0xa4ae0000
        int32_t BinarySearch(cs::array<Typeid_30>* array, int32_t index, int32_t length, Typeid_30 value) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t, Typeid_30)>(0xa4ae0000)(this, array, index, length, value); } // 0xa4ae0000
        int32_t BinarySearch(cs::array<Typeid_30>* array, int32_t index, int32_t length, Typeid_30 value, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t, Typeid_30, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, array, index, length, value, comparer); } // 0xa4ae0000
        int32_t IndexOf(System::Array* array, il2cpp::Il2CppObject* value) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*)>(0x1304da0)(this, array, value); } // 0x1304da0
        int32_t IndexOf(System::Array* array, il2cpp::Il2CppObject* value, int32_t startIndex) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*, int32_t)>(0x13050b0)(this, array, value, startIndex); } // 0x13050b0
        int32_t IndexOf(System::Array* array, il2cpp::Il2CppObject* value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*, int32_t, int32_t)>(0x1304e20)(this, array, value, startIndex, count); } // 0x1304e20
        int32_t IndexOf(cs::array<Typeid_30>* array, Typeid_30 value) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30)>(0xa4ae0000)(this, array, value); } // 0xa4ae0000
        int32_t IndexOf(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t)>(0xa4ae0000)(this, array, value, startIndex); } // 0xa4ae0000
        int32_t IndexOf(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t, int32_t)>(0xa4ae0000)(this, array, value, startIndex, count); } // 0xa4ae0000
        int32_t LastIndexOf(System::Array* array, il2cpp::Il2CppObject* value) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*)>(0x13054f0)(this, array, value); } // 0x13054f0
        int32_t LastIndexOf(System::Array* array, il2cpp::Il2CppObject* value, int32_t startIndex) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*, int32_t)>(0x1305570)(this, array, value, startIndex); } // 0x1305570
        int32_t LastIndexOf(System::Array* array, il2cpp::Il2CppObject* value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, System::Array*, il2cpp::Il2CppObject*, int32_t, int32_t)>(0x1305220)(this, array, value, startIndex, count); } // 0x1305220
        int32_t LastIndexOf(cs::array<Typeid_30>* array, Typeid_30 value) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30)>(0xa4ae0000)(this, array, value); } // 0xa4ae0000
        int32_t LastIndexOf(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t)>(0xa4ae0000)(this, array, value, startIndex); } // 0xa4ae0000
        int32_t LastIndexOf(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t, int32_t)>(0xa4ae0000)(this, array, value, startIndex, count); } // 0xa4ae0000
        void Reverse(System::Array* array) { return il2cpp::call<void(*)(Array*, System::Array*)>(0x1305890)(this, array); } // 0x1305890
        void Reverse(System::Array* array, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, int32_t)>(0x13055e0)(this, array, index, length); } // 0x13055e0
        void Reverse(cs::array<Typeid_30>* array) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, array); } // 0xa4ae0000
        void Reverse(cs::array<Typeid_30>* array, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, array, index, length); } // 0xa4ae0000
        void SetValue(il2cpp::Il2CppObject* value, int64_t index) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int64_t)>(0x1305db0)(this, value, index); } // 0x1305db0
        void SetValue(il2cpp::Il2CppObject* value, int64_t index1, int64_t index2) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int64_t, int64_t)>(0x1305b90)(this, value, index1, index2); } // 0x1305b90
        void SetValue(il2cpp::Il2CppObject* value, int64_t index1, int64_t index2, int64_t index3) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int64_t, int64_t, int64_t)>(0x13059a0)(this, value, index1, index2, index3); } // 0x13059a0
        void SetValue(il2cpp::Il2CppObject* value, cs::array<int64_t>* indices) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, cs::array<int64_t>*)>(0x1305fc0)(this, value, indices); } // 0x1305fc0
        void Sort(System::Array* array) { return il2cpp::call<void(*)(Array*, System::Array*)>(0x1306500)(this, array); } // 0x1306500
        void Sort(System::Array* array, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, int32_t)>(0x13065a0)(this, array, index, length); } // 0x13065a0
        void Sort(System::Array* array, System::Collections::IComparer* comparer) { return il2cpp::call<void(*)(Array*, System::Array*, System::Collections::IComparer*)>(0x1306640)(this, array, comparer); } // 0x1306640
        void Sort(System::Array* array, int32_t index, int32_t length, System::Collections::IComparer* comparer) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, int32_t, System::Collections::IComparer*)>(0x1306740)(this, array, index, length, comparer); } // 0x1306740
        void Sort(System::Array* keys, System::Array* items) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*)>(0x13066c0)(this, keys, items); } // 0x13066c0
        void Sort(System::Array* keys, System::Array* items, System::Collections::IComparer* comparer) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, System::Collections::IComparer*)>(0x13065c0)(this, keys, items, comparer); } // 0x13065c0
        void Sort(System::Array* keys, System::Array* items, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, int32_t, int32_t)>(0x1306580)(this, keys, items, index, length); } // 0x1306580
        void Sort(System::Array* keys, System::Array* items, int32_t index, int32_t length, System::Collections::IComparer* comparer) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, int32_t, int32_t, System::Collections::IComparer*)>(0x1306230)(this, keys, items, index, length, comparer); } // 0x1306230
        void Sort(cs::array<Typeid_30>* array) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, array); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* array, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, array, index, length); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* array, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, array, comparer); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* array, int32_t index, int32_t length, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, array, index, length, comparer); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* array, System::Comparison<Typeid_30>* comparison) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, System::Comparison<Typeid_30>*)>(0xa4ae0000)(this, array, comparison); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* keys, cs::array<Typeid_30>* items) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, cs::array<Typeid_30>*)>(0xa4ae0000)(this, keys, items); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* keys, cs::array<Typeid_30>* items, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, cs::array<Typeid_30>*, int32_t, int32_t)>(0xa4ae0000)(this, keys, items, index, length); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* keys, cs::array<Typeid_30>* items, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, cs::array<Typeid_30>*, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, keys, items, comparer); } // 0xa4ae0000
        void Sort(cs::array<Typeid_30>* keys, cs::array<Typeid_30>* items, int32_t index, int32_t length, System::Collections::Generic::IComparer<Typeid_30>* comparer) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, cs::array<Typeid_30>*, int32_t, int32_t, System::Collections::Generic::IComparer<Typeid_30>*)>(0xa4ae0000)(this, keys, items, index, length, comparer); } // 0xa4ae0000
        bool Exists(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<bool(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        void Fill(cs::array<Typeid_30>* array, Typeid_30 value) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, Typeid_30)>(0xa4ae0000)(this, array, value); } // 0xa4ae0000
        void Fill(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex, int32_t count) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t, int32_t)>(0xa4ae0000)(this, array, value, startIndex, count); } // 0xa4ae0000
        Typeid_30 Find(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<Typeid_30(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        cs::array<Typeid_30>* FindAll(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<cs::array<Typeid_30>*(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        int32_t FindIndex(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        int32_t FindIndex(cs::array<Typeid_30>* array, int32_t startIndex, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, startIndex, match); } // 0xa4ae0000
        int32_t FindIndex(cs::array<Typeid_30>* array, int32_t startIndex, int32_t count, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, startIndex, count, match); } // 0xa4ae0000
        Typeid_30 FindLast(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<Typeid_30(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        int32_t FindLastIndex(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        int32_t FindLastIndex(cs::array<Typeid_30>* array, int32_t startIndex, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, startIndex, match); } // 0xa4ae0000
        int32_t FindLastIndex(cs::array<Typeid_30>* array, int32_t startIndex, int32_t count, System::Predicate<Typeid_30>* match) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, int32_t, int32_t, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, startIndex, count, match); } // 0xa4ae0000
        bool TrueForAll(cs::array<Typeid_30>* array, System::Predicate<Typeid_30>* match) { return il2cpp::call<bool(*)(Array*, cs::array<Typeid_30>*, System::Predicate<Typeid_30>*)>(0xa4ae0000)(this, array, match); } // 0xa4ae0000
        void ctor() { return il2cpp::call<void(*)(Array*)>(0x2c4c60)(this); } // 0x2c4c60
        int32_t InternalArray__ICollection_get_Count() { return il2cpp::call<int32_t(*)(Array*)>(0x1305180)(this); } // 0x1305180
        bool InternalArray__ICollection_get_IsReadOnly() { return il2cpp::call<bool(*)(Array*)>(0x317660)(this); } // 0x317660
        System::Collections::Generic::IEnumerator<Typeid_30>* InternalArray__IEnumerable_GetEnumerator() { return il2cpp::call<System::Collections::Generic::IEnumerator<Typeid_30>*(*)(Array*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void InternalArray__ICollection_Clear() { return il2cpp::call<void(*)(Array*)>(0x1305130)(this); } // 0x1305130
        void InternalArray__ICollection_Add(Typeid_30 item) { return il2cpp::call<void(*)(Array*, Typeid_30)>(0xa4ae0000)(this, item); } // 0xa4ae0000
        bool InternalArray__ICollection_Remove(Typeid_30 item) { return il2cpp::call<bool(*)(Array*, Typeid_30)>(0xa4ae0000)(this, item); } // 0xa4ae0000
        bool InternalArray__ICollection_Contains(Typeid_30 item) { return il2cpp::call<bool(*)(Array*, Typeid_30)>(0xa4ae0000)(this, item); } // 0xa4ae0000
        void InternalArray__ICollection_CopyTo(cs::array<Typeid_30>* array, int32_t arrayIndex) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t)>(0xa4ae0000)(this, array, arrayIndex); } // 0xa4ae0000
        Typeid_30 InternalArray__IReadOnlyList_get_Item(int32_t index) { return il2cpp::call<Typeid_30(*)(Array*, int32_t)>(0xa4ae0000)(this, index); } // 0xa4ae0000
        int32_t InternalArray__IReadOnlyCollection_get_Count() { return il2cpp::call<int32_t(*)(Array*)>(0x1305180)(this); } // 0x1305180
        void InternalArray__Insert(int32_t index, Typeid_30 item) { return il2cpp::call<void(*)(Array*, int32_t, Typeid_30)>(0xa4ae0000)(this, index, item); } // 0xa4ae0000
        void InternalArray__RemoveAt(int32_t index) { return il2cpp::call<void(*)(Array*, int32_t)>(0x13051d0)(this, index); } // 0x13051d0
        int32_t InternalArray__IndexOf(Typeid_30 item) { return il2cpp::call<int32_t(*)(Array*, Typeid_30)>(0xa4ae0000)(this, item); } // 0xa4ae0000
        Typeid_30 InternalArray__get_Item(int32_t index) { return il2cpp::call<Typeid_30(*)(Array*, int32_t)>(0xa4ae0000)(this, index); } // 0xa4ae0000
        void InternalArray__set_Item(int32_t index, Typeid_30 item) { return il2cpp::call<void(*)(Array*, int32_t, Typeid_30)>(0xa4ae0000)(this, index, item); } // 0xa4ae0000
        void GetGenericValueImpl(int32_t pos, Typeid_30 value) { return il2cpp::call<void(*)(Array*, int32_t, Typeid_30)>(0xa4ae0000)(this, pos, value); } // 0xa4ae0000
        void SetGenericValueImpl(int32_t pos, Typeid_30 value) { return il2cpp::call<void(*)(Array*, int32_t, Typeid_30)>(0xa4ae0000)(this, pos, value); } // 0xa4ae0000
        int32_t get_Length() { return il2cpp::call<int32_t(*)(Array*)>(0x1305180)(this); } // 0x1305180
        int32_t get_Rank() { return il2cpp::call<int32_t(*)(Array*)>(0x1304500)(this); } // 0x1304500
        int32_t GetRank() { return il2cpp::call<int32_t(*)(Array*)>(0x1304500)(this); } // 0x1304500
        int32_t GetLength(int32_t dimension) { return il2cpp::call<int32_t(*)(Array*, int32_t)>(0x1304490)(this, dimension); } // 0x1304490
        int32_t GetLowerBound(int32_t dimension) { return il2cpp::call<int32_t(*)(Array*, int32_t)>(0x13044d0)(this, dimension); } // 0x13044d0
        il2cpp::Il2CppObject* GetValue(cs::array<int32_t>* indices) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, cs::array<int32_t>*)>(0x1304560)(this, indices); } // 0x1304560
        void SetValue(il2cpp::Il2CppObject* value, cs::array<int32_t>* indices) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, cs::array<int32_t>*)>(0x1305cf0)(this, value, indices); } // 0x1305cf0
        il2cpp::Il2CppObject* GetValueImpl(int32_t pos) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int32_t)>(0x1304540)(this, pos); } // 0x1304540
        void SetValueImpl(il2cpp::Il2CppObject* value, int32_t pos) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int32_t)>(0x1305900)(this, value, pos); } // 0x1305900
        bool FastCopy(System::Array* source, int32_t source_idx, System::Array* dest, int32_t dest_idx, int32_t length) { return il2cpp::call<bool(*)(Array*, System::Array*, int32_t, System::Array*, int32_t, int32_t)>(0x1304420)(this, source, source_idx, dest, dest_idx, length); } // 0x1304420
        System::Array* CreateInstanceImpl(System::Type* elementType, cs::array<int32_t>* lengths, cs::array<int32_t>* bounds) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int32_t>*, cs::array<int32_t>*)>(0x1303960)(this, elementType, lengths, bounds); } // 0x1303960
        int32_t GetUpperBound(int32_t dimension) { return il2cpp::call<int32_t(*)(Array*, int32_t)>(0x1304510)(this, dimension); } // 0x1304510
        il2cpp::Il2CppObject* GetValue(int32_t index) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int32_t)>(0x1304800)(this, index); } // 0x1304800
        il2cpp::Il2CppObject* GetValue(int32_t index1, int32_t index2) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int32_t, int32_t)>(0x1304580)(this, index1, index2); } // 0x1304580
        il2cpp::Il2CppObject* GetValue(int32_t index1, int32_t index2, int32_t index3) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Array*, int32_t, int32_t, int32_t)>(0x1304600)(this, index1, index2, index3); } // 0x1304600
        void SetValue(il2cpp::Il2CppObject* value, int32_t index) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int32_t)>(0x1305e40)(this, value, index); } // 0x1305e40
        void SetValue(il2cpp::Il2CppObject* value, int32_t index1, int32_t index2) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int32_t, int32_t)>(0x1305920)(this, value, index1, index2); } // 0x1305920
        void SetValue(il2cpp::Il2CppObject* value, int32_t index1, int32_t index2, int32_t index3) { return il2cpp::call<void(*)(Array*, il2cpp::Il2CppObject*, int32_t, int32_t, int32_t)>(0x1305d10)(this, value, index1, index2, index3); } // 0x1305d10
        System::Array* UnsafeCreateInstance(System::Type* elementType, cs::array<int32_t>* lengths, cs::array<int32_t>* lowerBounds) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int32_t>*, cs::array<int32_t>*)>(0x1306ef0)(this, elementType, lengths, lowerBounds); } // 0x1306ef0
        System::Array* UnsafeCreateInstance(System::Type* elementType, int32_t length1, int32_t length2) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, int32_t, int32_t)>(0x1304200)(this, elementType, length1, length2); } // 0x1304200
        System::Array* UnsafeCreateInstance(System::Type* elementType, cs::array<int32_t>* lengths) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int32_t>*)>(0x1306ee0)(this, elementType, lengths); } // 0x1306ee0
        System::Array* CreateInstance(System::Type* elementType, int32_t length) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, int32_t)>(0x1303a10)(this, elementType, length); } // 0x1303a10
        System::Array* CreateInstance(System::Type* elementType, int32_t length1, int32_t length2) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, int32_t, int32_t)>(0x1304200)(this, elementType, length1, length2); } // 0x1304200
        System::Array* CreateInstance(System::Type* elementType, int32_t length1, int32_t length2, int32_t length3) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, int32_t, int32_t, int32_t)>(0x1303980)(this, elementType, length1, length2, length3); } // 0x1303980
        System::Array* CreateInstance(System::Type* elementType, cs::array<int32_t>* lengths) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int32_t>*)>(0x1303f00)(this, elementType, lengths); } // 0x1303f00
        System::Array* CreateInstance(System::Type* elementType, cs::array<int32_t>* lengths, cs::array<int32_t>* lowerBounds) { return il2cpp::call<System::Array*(*)(Array*, System::Type*, cs::array<int32_t>*, cs::array<int32_t>*)>(0x1303a80)(this, elementType, lengths, lowerBounds); } // 0x1303a80
        void Clear(System::Array* array, int32_t index, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, int32_t)>(0x1302d40)(this, array, index, length); } // 0x1302d40
        void ClearInternal(System::Array* a, int32_t index, int32_t count) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, int32_t)>(0x1302d20)(this, a, index, count); } // 0x1302d20
        void Copy(System::Array* sourceArray, System::Array* destinationArray, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, int32_t)>(0x1303570)(this, sourceArray, destinationArray, length); } // 0x1303570
        void Copy(System::Array* sourceArray, int32_t sourceIndex, System::Array* destinationArray, int32_t destinationIndex, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, System::Array*, int32_t, int32_t)>(0x1302fc0)(this, sourceArray, sourceIndex, destinationArray, destinationIndex, length); } // 0x1302fc0
        System::Exception* CreateArrayTypeMismatchException() { return il2cpp::call<System::Exception*(*)(Array*)>(0x13038e0)(this); } // 0x13038e0
        bool CanAssignArrayElement(System::Type* source, System::Type* target) { return il2cpp::call<bool(*)(Array*, System::Type*, System::Type*)>(0x1302c70)(this, source, target); } // 0x1302c70
        void ConstrainedCopy(System::Array* sourceArray, int32_t sourceIndex, System::Array* destinationArray, int32_t destinationIndex, int32_t length) { return il2cpp::call<void(*)(Array*, System::Array*, int32_t, System::Array*, int32_t, int32_t)>(0x1302e90)(this, sourceArray, sourceIndex, destinationArray, destinationIndex, length); } // 0x1302e90
        cs::array<Typeid_30>* Empty() { return il2cpp::call<cs::array<Typeid_30>*(*)(Array*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void Initialize() { return il2cpp::call<void(*)(Array*)>(0x2babf0)(this); } // 0x2babf0
        int32_t IndexOfImpl(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t, int32_t)>(0xa4ae0000)(this, array, value, startIndex, count); } // 0xa4ae0000
        int32_t LastIndexOfImpl(cs::array<Typeid_30>* array, Typeid_30 value, int32_t startIndex, int32_t count) { return il2cpp::call<int32_t(*)(Array*, cs::array<Typeid_30>*, Typeid_30, int32_t, int32_t)>(0xa4ae0000)(this, array, value, startIndex, count); } // 0xa4ae0000
        void SortImpl(System::Array* keys, System::Array* items, int32_t index, int32_t length, System::Collections::IComparer* comparer) { return il2cpp::call<void(*)(Array*, System::Array*, System::Array*, int32_t, int32_t, System::Collections::IComparer*)>(0x1306160)(this, keys, items, index, length, comparer); } // 0x1306160
        Typeid_30 UnsafeLoad(cs::array<Typeid_30>* array, int32_t index) { return il2cpp::call<Typeid_30(*)(Array*, cs::array<Typeid_30>*, int32_t)>(0xa4ae0000)(this, array, index); } // 0xa4ae0000
        void UnsafeStore(cs::array<Typeid_30>* array, int32_t index, Typeid_30 value) { return il2cpp::call<void(*)(Array*, cs::array<Typeid_30>*, int32_t, Typeid_30)>(0xa4ae0000)(this, array, index, value); } // 0xa4ae0000
        Typeid_30 UnsafeMov(Typeid_30 instance) { return il2cpp::call<Typeid_30(*)(Array*, Typeid_30)>(0xa4ae0000)(this, instance); } // 0xa4ae0000

    };

}
namespace ark {

        template<> struct meta_statics<System::Array> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/IEqualityComparer.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <au/System/Collections/Generic/IEnumerable.hpp>
#include <au/System/Collections/Generic/HashSet.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/UI/MaskableGraphic.hpp>
#include <au/System/Collections/Generic/HashSet.hpp>

namespace System::Collections::Generic
{
    template<class... Ts>
struct HashSet : ark::meta<HashSet<Ts...>, il2cpp::Il2CppObject>
    {
        cs::array<int32_t>* _buckets; // 0x8
        cs::array<System::Collections::Generic::HashSet::Slot<UnityEngine::UI::MaskableGraphic>>* _slots; // 0xc
        int32_t _count; // 0x10
        int32_t _lastIndex; // 0x14
        int32_t _freeList; // 0x18
        System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>* _comparer; // 0x1c
        int32_t _version; // 0x20
        System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x24

        void ctor() { return il2cpp::call<void(*)(HashSet*)>(0x1874f30)(this); } // 0x1874f30
        void ctor(System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>* comparer) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>*)>(0x1874f70)(this, comparer); } // 0x1874f70
        void ctor(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* collection) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*)>(0x1874eb0)(this, collection); } // 0x1874eb0
        void ctor(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* collection, System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>* comparer) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*, System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>*)>(0x19d8480)(this, collection, comparer); } // 0x19d8480
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(HashSet*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1874f00)(this, info, context); } // 0x1874f00
        void CopyFrom(System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* source) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*)>(0x19c90f0)(this, source); } // 0x19c90f0
        System::Collections::Generic::HashSet::Enumerator<UnityEngine::UI::MaskableGraphic>* GetEnumerator() { return il2cpp::call<System::Collections::Generic::HashSet::Enumerator<UnityEngine::UI::MaskableGraphic>*(*)(HashSet*)>(0x1869d20)(this); } // 0x1869d20
        void CopyTo(cs::array<UnityEngine::UI::MaskableGraphic>* array) { return il2cpp::call<void(*)(HashSet*, cs::array<UnityEngine::UI::MaskableGraphic>*)>(0x1868de0)(this, array); } // 0x1868de0
        void CopyTo(cs::array<UnityEngine::UI::MaskableGraphic>* array, int32_t arrayIndex, int32_t count) { return il2cpp::call<void(*)(HashSet*, cs::array<UnityEngine::UI::MaskableGraphic>*, int32_t, int32_t)>(0x19ca100)(this, array, arrayIndex, count); } // 0x19ca100
        System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>* get_Comparer() { return il2cpp::call<System::Collections::Generic::IEqualityComparer<UnityEngine::UI::MaskableGraphic>*(*)(HashSet*)>(0x2c8c90)(this); } // 0x2c8c90
        void TrimExcess() { return il2cpp::call<void(*)(HashSet*)>(0x19d66f0)(this); } // 0x19d66f0
        void Initialize(int32_t capacity) { return il2cpp::call<void(*)(HashSet*, int32_t)>(0x19cc560)(this, capacity); } // 0x19cc560
        void IncreaseCapacity() { return il2cpp::call<void(*)(HashSet*)>(0x19cbf30)(this); } // 0x19cbf30
        void SetCapacity(int32_t newSize) { return il2cpp::call<void(*)(HashSet*, int32_t)>(0x19d3270)(this, newSize); } // 0x19d3270
        bool AddIfNotPresent(UnityEngine::UI::MaskableGraphic* value) { return il2cpp::call<bool(*)(HashSet*, UnityEngine::UI::MaskableGraphic*)>(0x1865330)(this, value); } // 0x1865330
        void AddValue(int32_t index, int32_t hashCode, UnityEngine::UI::MaskableGraphic* value) { return il2cpp::call<void(*)(HashSet*, int32_t, int32_t, UnityEngine::UI::MaskableGraphic*)>(0x1866030)(this, index, hashCode, value); } // 0x1866030
        bool ContainsAllElements(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<bool(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*)>(0x19c8cd0)(this, other); } // 0x19c8cd0
        bool IsSubsetOfHashSetWithSameEC(System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<bool(*)(HashSet*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*)>(0x19cf6d0)(this, other); } // 0x19cf6d0
        void IntersectWithHashSetWithSameEC(System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*)>(0x186c070)(this, other); } // 0x186c070
        void IntersectWithEnumerable(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*)>(0x19cc780)(this, other); } // 0x19cc780
        int32_t InternalIndexOf(UnityEngine::UI::MaskableGraphic* item) { return il2cpp::call<int32_t(*)(HashSet*, UnityEngine::UI::MaskableGraphic*)>(0x186af40)(this, item); } // 0x186af40
        void SymmetricExceptWithUniqueHashSet(System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*)>(0x19d57c0)(this, other); } // 0x19d57c0
        void SymmetricExceptWithEnumerable(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* other) { return il2cpp::call<void(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*)>(0x19d4ef0)(this, other); } // 0x19d4ef0
        bool AddOrGetLocation(UnityEngine::UI::MaskableGraphic* value, int32_t location) { return il2cpp::call<bool(*)(HashSet*, UnityEngine::UI::MaskableGraphic*, int32_t)>(0x1865570)(this, value, location); } // 0x1865570
        System::Collections::Generic::HashSet::ElementCount<UnityEngine::UI::MaskableGraphic>* CheckUniqueAndUnfoundElements(System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>* other, bool returnIfUnfound) { return il2cpp::call<System::Collections::Generic::HashSet::ElementCount<UnityEngine::UI::MaskableGraphic>*(*)(HashSet*, System::Collections::Generic::IEnumerable<UnityEngine::UI::MaskableGraphic>*, bool)>(0x19c7c20)(this, other, returnIfUnfound); } // 0x19c7c20
        bool AreEqualityComparersEqual(System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* set1, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>* set2) { return il2cpp::call<bool(*)(HashSet*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*, System::Collections::Generic::HashSet<UnityEngine::UI::MaskableGraphic>*)>(0x1866180)(this, set1, set2); } // 0x1866180
        int32_t InternalGetHashCode(UnityEngine::UI::MaskableGraphic* item) { return il2cpp::call<int32_t(*)(HashSet*, UnityEngine::UI::MaskableGraphic*)>(0x19cc600)(this, item); } // 0x19cc600

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::HashSet<Ts...>> {
        };

}


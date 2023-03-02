#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/IEnumerable.hpp>

namespace System::Collections::Generic
{
    template<class... Ts>
struct Stack : ark::meta<Stack<Ts...>, il2cpp::Il2CppObject>
    {
        cs::array<int32_t>* _array; // 0x8
        int32_t _size; // 0xc
        int32_t _version; // 0x10
        il2cpp::Il2CppObject* _syncRoot; // 0x14

        void ctor() { return il2cpp::call<void(*)(Stack*)>(0xc1ee40)(this); } // 0xc1ee40
        void ctor(int32_t capacity) { return il2cpp::call<void(*)(Stack*, int32_t)>(0xc44a80)(this, capacity); } // 0xc44a80
        void ctor(System::Collections::Generic::IEnumerable<int32_t>* collection) { return il2cpp::call<void(*)(Stack*, System::Collections::Generic::IEnumerable<int32_t>*)>(0xc44c90)(this, collection); } // 0xc44c90
        void Clear() { return il2cpp::call<void(*)(Stack*)>(0xc42900)(this); } // 0xc42900
        bool Contains(int32_t item) { return il2cpp::call<bool(*)(Stack*, int32_t)>(0xc42920)(this, item); } // 0xc42920
        void CopyTo(cs::array<int32_t>* array, int32_t arrayIndex) { return il2cpp::call<void(*)(Stack*, cs::array<int32_t>*, int32_t)>(0xc42e50)(this, array, arrayIndex); } // 0xc42e50
        System::Collections::Generic::Stack::Enumerator<int32_t>* GetEnumerator() { return il2cpp::call<System::Collections::Generic::Stack::Enumerator<int32_t>*(*)(Stack*)>(0xc42fc0)(this); } // 0xc42fc0
        void TrimExcess() { return il2cpp::call<void(*)(Stack*)>(0xc446b0)(this); } // 0xc446b0
        int32_t Peek() { return il2cpp::call<int32_t(*)(Stack*)>(0xc43060)(this); } // 0xc43060
        bool TryPeek(int32_t result) { return il2cpp::call<bool(*)(Stack*, int32_t)>(0xc44700)(this, result); } // 0xc44700
        int32_t Pop() { return il2cpp::call<int32_t(*)(Stack*)>(0xc432c0)(this); } // 0xc432c0
        bool TryPop(int32_t result) { return il2cpp::call<bool(*)(Stack*, int32_t)>(0xc44890)(this, result); } // 0xc44890
        void Push(int32_t item) { return il2cpp::call<void(*)(Stack*, int32_t)>(0xc433a0)(this, item); } // 0xc433a0
        cs::array<int32_t>* ToArray() { return il2cpp::call<cs::array<int32_t>*(*)(Stack*)>(0xc44560)(this); } // 0xc44560
        void ThrowForEmptyStack() { return il2cpp::call<void(*)(Stack*)>(0xc44450)(this); } // 0xc44450

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Collections::Generic::Stack<Ts...>> {
        };

}


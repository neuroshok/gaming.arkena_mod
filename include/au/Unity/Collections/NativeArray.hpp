#pragma once
#include <ark/class.hpp>

#include <au/System/ValueType.hpp>
#include <au/Unity/Collections/Allocator.hpp>

namespace Unity::Collections
{
    template<class... Ts>
struct NativeArray : ark::meta<NativeArray<Ts...>, System::ValueType>
    {
        Typeid_15 m_Buffer; // 0x8
        int32_t m_Length; // 0xc
        Unity::Collections::Allocator m_AllocatorLabel; // 0x10

        int32_t get_Length() { return il2cpp::call<int32_t(*)(NativeArray*)>(0xa4ae0000)(this); } // 0xa4ae0000
        Typeid_30 get_Item(int32_t index) { return il2cpp::call<Typeid_30(*)(NativeArray*, int32_t)>(0xa4ae0000)(this, index); } // 0xa4ae0000
        void set_Item(int32_t index, Typeid_30 value) { return il2cpp::call<void(*)(NativeArray*, int32_t, Typeid_30)>(0xa4ae0000)(this, index, value); } // 0xa4ae0000
        bool get_IsCreated() { return il2cpp::call<bool(*)(NativeArray*)>(0xa4ae0000)(this); } // 0xa4ae0000
        Unity::Collections::NativeArray::Enumerator<Typeid_30>* GetEnumerator() { return il2cpp::call<Unity::Collections::NativeArray::Enumerator<Typeid_30>*(*)(NativeArray*)>(0xa4ae0000)(this); } // 0xa4ae0000

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<Unity::Collections::NativeArray<Ts...>> {
        };

}


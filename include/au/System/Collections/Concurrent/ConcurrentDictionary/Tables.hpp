#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>

namespace 
{
    template<class... Ts>
struct ConcurrentDictionary_Tables : ark::meta<ConcurrentDictionary_Tables<Ts...>, il2cpp::Il2CppObject>
    {
        cs::array<System::Collections::Concurrent::ConcurrentDictionary::Node<Hazel::MessageWriter, bool>>* _buckets; // 0x8
        cs::array<il2cpp::Il2CppObject>* _locks; // 0xc
        cs::array<int32_t>* _countPerLock; // 0x10

        void ctor(cs::array<System::Collections::Concurrent::ConcurrentDictionary::Node<Hazel::MessageWriter, bool>>* buckets, cs::array<il2cpp::Il2CppObject>* locks, cs::array<int32_t>* countPerLock) { return il2cpp::call<void(*)(ConcurrentDictionary_Tables*, cs::array<System::Collections::Concurrent::ConcurrentDictionary::Node<Hazel::MessageWriter, bool>>*, cs::array<il2cpp::Il2CppObject>*, cs::array<int32_t>*)>(0xc47d00)(this, buckets, locks, countPerLock); } // 0xc47d00

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<::ConcurrentDictionary_Tables<Ts...>> {
        };

}


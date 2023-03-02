#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>

namespace 
{
    template<class... Ts>
struct Dictionary_KeyCollection : ark::meta<Dictionary_KeyCollection<Ts...>, il2cpp::Il2CppObject>
    {
        System::Collections::Generic::Dictionary<cs::string*, int32_t>* dictionary; // 0x8

        void ctor(System::Collections::Generic::Dictionary<cs::string*, int32_t>* dictionary) { return il2cpp::call<void(*)(Dictionary_KeyCollection*, System::Collections::Generic::Dictionary<cs::string*, int32_t>*)>(0x90a8c0)(this, dictionary); } // 0x90a8c0
        System::Collections::Generic::Dictionary::KeyCollection::Enumerator<cs::string*, int32_t>* GetEnumerator() { return il2cpp::call<System::Collections::Generic::Dictionary::KeyCollection::Enumerator<cs::string*, int32_t>*(*)(Dictionary_KeyCollection*)>(0x9019c0)(this); } // 0x9019c0

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<::Dictionary_KeyCollection<Ts...>> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/System/Delegate.hpp>
#include <cs/array.hpp>

namespace System
{
    struct MulticastDelegate : ark::meta<MulticastDelegate, System::Delegate>
    {
        cs::array<System::Delegate>* delegates; // 0x34

        int32_t LastIndexOf(cs::array<System::Delegate>* haystack, cs::array<System::Delegate>* needle) { return il2cpp::call<int32_t(*)(MulticastDelegate*, cs::array<System::Delegate>*, cs::array<System::Delegate>*)>(0x10f9ac0)(this, haystack, needle); } // 0x10f9ac0

    };

}
namespace ark {

        template<> struct meta_statics<System::MulticastDelegate> {
        };

}


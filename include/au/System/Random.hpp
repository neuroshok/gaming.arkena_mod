#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>

namespace System
{
    struct Random : ark::meta<Random, il2cpp::Il2CppObject>
    {
        int32_t inext; // 0x8
        int32_t inextp; // 0xc
        cs::array<int32_t>* SeedArray; // 0x10

        void ctor() { return il2cpp::call<void(*)(Random*)>(0x10240b0)(this); } // 0x10240b0
        void ctor(int32_t Seed) { return il2cpp::call<void(*)(Random*, int32_t)>(0x1023f00)(this, Seed); } // 0x1023f00
        int32_t InternalSample() { return il2cpp::call<int32_t(*)(Random*)>(0x1023af0)(this); } // 0x1023af0
        Typeid_13 GetSampleForLargeRange() { return il2cpp::call<Typeid_13(*)(Random*)>(0x1023a90)(this); } // 0x1023a90

    };

}
namespace ark {

        template<> struct meta_statics<System::Random> {
        };

}


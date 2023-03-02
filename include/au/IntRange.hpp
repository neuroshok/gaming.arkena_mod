#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>

namespace 
{
    struct IntRange : ark::meta<IntRange, il2cpp::Il2CppObject>
    {
        int32_t min; // 0x8
        int32_t max; // 0xc

        void ctor() { return il2cpp::call<void(*)(IntRange*)>(0x2c4c60)(this); } // 0x2c4c60
        void ctor(int32_t min, int32_t max) { return il2cpp::call<void(*)(IntRange*, int32_t, int32_t)>(0x370f30)(this, min, max); } // 0x370f30
        int32_t Next() { return il2cpp::call<int32_t(*)(IntRange*)>(0x5f9ad0)(this); } // 0x5f9ad0
        bool Contains(int32_t value) { return il2cpp::call<bool(*)(IntRange*, int32_t)>(0x5f99a0)(this, value); } // 0x5f99a0
        int32_t Next(int32_t max) { return il2cpp::call<int32_t(*)(IntRange*, int32_t)>(0x5f9b00)(this, max); } // 0x5f9b00
        int32_t Next(int32_t min, int32_t max) { return il2cpp::call<int32_t(*)(IntRange*, int32_t, int32_t)>(0x5f9af0)(this, min, max); } // 0x5f9af0
        uint8_t NextByte(uint8_t min, uint8_t max) { return il2cpp::call<uint8_t(*)(IntRange*, uint8_t, uint8_t)>(0x5f9ab0)(this, min, max); } // 0x5f9ab0
        void FillRandom(int8_t min, int8_t max, cs::array<int8_t>* array) { return il2cpp::call<void(*)(IntRange*, int8_t, int8_t, cs::array<int8_t>*)>(0x5f9a50)(this, min, max, array); } // 0x5f9a50
        int32_t RandomSign() { return il2cpp::call<int32_t(*)(IntRange*)>(0x5f9b30)(this); } // 0x5f9b30
        void FillRandomRange(cs::array<int8_t>* array) { return il2cpp::call<void(*)(IntRange*, cs::array<int8_t>*)>(0x5f99c0)(this, array); } // 0x5f99c0

    };

}
namespace ark {

        template<> struct meta_statics<::IntRange> {
        };

}


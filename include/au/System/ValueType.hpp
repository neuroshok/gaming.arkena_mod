#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>

namespace System
{
    struct ValueType : ark::meta<ValueType, il2cpp::Il2CppObject>
    {

        void ctor() { return il2cpp::call<void(*)(ValueType*)>(0x2c4c60)(this); } // 0x2c4c60
        bool InternalEquals(il2cpp::Il2CppObject* o1, il2cpp::Il2CppObject* o2, cs::array<il2cpp::Il2CppObject>* fields) { return il2cpp::call<bool(*)(ValueType*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, cs::array<il2cpp::Il2CppObject>*)>(0x13d7da0)(this, o1, o2, fields); } // 0x13d7da0
        bool DefaultEquals(il2cpp::Il2CppObject* o1, il2cpp::Il2CppObject* o2) { return il2cpp::call<bool(*)(ValueType*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x13d7b50)(this, o1, o2); } // 0x13d7b50
        int32_t InternalGetHashCode(il2cpp::Il2CppObject* o, cs::array<il2cpp::Il2CppObject>* fields) { return il2cpp::call<int32_t(*)(ValueType*, il2cpp::Il2CppObject*, cs::array<il2cpp::Il2CppObject>*)>(0x13d7dc0)(this, o, fields); } // 0x13d7dc0

    };

}
namespace ark {

        template<> struct meta_statics<System::ValueType> {
        };

}


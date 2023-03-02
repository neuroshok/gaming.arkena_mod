#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/MethodBase.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>
#include <au/System/Reflection/ConstructorInfo.hpp>

namespace System::Reflection
{
    struct ConstructorInfo : ark::meta<ConstructorInfo, System::Reflection::MethodBase>
    {
        static cs::string* ConstructorName(); // 0x0
        static cs::string* TypeConstructorName(); // 0x4

        void ctor() { return il2cpp::call<void(*)(ConstructorInfo*)>(0x2cdfc0)(this); } // 0x2cdfc0
        il2cpp::Il2CppObject* Invoke(cs::array<il2cpp::Il2CppObject>* parameters) { return il2cpp::call<il2cpp::Il2CppObject*(*)(ConstructorInfo*, cs::array<il2cpp::Il2CppObject>*)>(0x10834a0)(this, parameters); } // 0x10834a0
        bool op_Equality(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo* right) { return il2cpp::call<bool(*)(ConstructorInfo*, System::Reflection::ConstructorInfo*, System::Reflection::ConstructorInfo*)>(0x1083580)(this, left, right); } // 0x1083580
        bool op_Inequality(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo* right) { return il2cpp::call<bool(*)(ConstructorInfo*, System::Reflection::ConstructorInfo*, System::Reflection::ConstructorInfo*)>(0x10835d0)(this, left, right); } // 0x10835d0
        void cctor() { return il2cpp::call<void(*)(ConstructorInfo*)>(0x1083520)(this); } // 0x1083520

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::ConstructorInfo> {
        cs::string* ConstructorName; // 0x0
        cs::string* TypeConstructorName; // 0x4
        };

}



cs::string* System::Reflection::ConstructorInfo::ConstructorName() { return statics()->ConstructorName; }; // 0x0

cs::string* System::Reflection::ConstructorInfo::TypeConstructorName() { return statics()->TypeConstructorName; }; // 0x4
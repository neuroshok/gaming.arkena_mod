#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/RuntimeConstructorInfo.hpp>
#include <cs/string.hpp>
#include <au/System/Type.hpp>
#include <il2cpp/core.hpp>

namespace System::Reflection
{
    struct MonoCMethod : ark::meta<MonoCMethod, System::Reflection::RuntimeConstructorInfo>
    {
        int mhandle; // 0x8
        cs::string* name; // 0xc
        System::Type* reftype; // 0x10

        il2cpp::Il2CppObject* InternalInvoke(il2cpp::Il2CppObject* obj, cs::array<il2cpp::Il2CppObject>* parameters, System::Exception* exc) { return il2cpp::call<il2cpp::Il2CppObject*(*)(MonoCMethod*, il2cpp::Il2CppObject*, cs::array<il2cpp::Il2CppObject>*, System::Exception*)>(0x10f13f0)(this, obj, parameters, exc); } // 0x10f13f0
        il2cpp::Il2CppObject* DoInvoke(il2cpp::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, cs::array<il2cpp::Il2CppObject>* parameters, System::Globalization::CultureInfo* culture) { return il2cpp::call<il2cpp::Il2CppObject*(*)(MonoCMethod*, il2cpp::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, cs::array<il2cpp::Il2CppObject>*, System::Globalization::CultureInfo*)>(0x10f0f90)(this, obj, invokeAttr, binder, parameters, culture); } // 0x10f0f90
        il2cpp::Il2CppObject* InternalInvoke(il2cpp::Il2CppObject* obj, cs::array<il2cpp::Il2CppObject>* parameters) { return il2cpp::call<il2cpp::Il2CppObject*(*)(MonoCMethod*, il2cpp::Il2CppObject*, cs::array<il2cpp::Il2CppObject>*)>(0x10f1280)(this, obj, parameters); } // 0x10f1280
        int32_t get_core_clr_security_level() { return il2cpp::call<int32_t(*)(MonoCMethod*)>(0x423120)(this); } // 0x423120
        void ctor() { return il2cpp::call<void(*)(MonoCMethod*)>(0x10f1700)(this); } // 0x10f1700

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::MonoCMethod> {
        };

}


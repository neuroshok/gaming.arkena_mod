#pragma once
#include <ark/class.hpp>

#include <au/System/Reflection/MemberInfo.hpp>
#include <au/System/RuntimeMethodHandle.hpp>
#include <au/System/Reflection/MethodBase.hpp>
#include <cs/array.hpp>

namespace System::Reflection
{
    struct MethodBase : ark::meta<MethodBase, System::Reflection::MemberInfo>
    {

        System::Reflection::MethodBase* GetMethodFromHandle(System::RuntimeMethodHandle handle) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, System::RuntimeMethodHandle)>(0x10eb990)(this, handle); } // 0x10eb990
        System::Reflection::MethodBase* GetMethodFromHandle(System::RuntimeMethodHandle handle, System::RuntimeTypeHandle declaringType) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, System::RuntimeMethodHandle, System::RuntimeTypeHandle)>(0x10eb8b0)(this, handle, declaringType); } // 0x10eb8b0
        void ctor() { return il2cpp::call<void(*)(MethodBase*)>(0x2c4c60)(this); } // 0x2c4c60
        bool op_Equality(System::Reflection::MethodBase* left, System::Reflection::MethodBase* right) { return il2cpp::call<bool(*)(MethodBase*, System::Reflection::MethodBase*, System::Reflection::MethodBase*)>(0x10ebee0)(this, left, right); } // 0x10ebee0
        bool op_Inequality(System::Reflection::MethodBase* left, System::Reflection::MethodBase* right) { return il2cpp::call<bool(*)(MethodBase*, System::Reflection::MethodBase*, System::Reflection::MethodBase*)>(0x10ec0c0)(this, left, right); } // 0x10ec0c0
        cs::string* ConstructParameters(cs::array<System::Type>* parameterTypes, System::Reflection::CallingConventions callingConvention, bool serialization) { return il2cpp::call<cs::string*(*)(MethodBase*, cs::array<System::Type>*, System::Reflection::CallingConventions, bool)>(0x10eb4e0)(this, parameterTypes, callingConvention, serialization); } // 0x10eb4e0
        System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, System::RuntimeMethodHandle)>(0x10eb860)(this, handle); } // 0x10eb860
        System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle, System::RuntimeTypeHandle reflectedType) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, System::RuntimeMethodHandle, System::RuntimeTypeHandle)>(0x10eb8a0)(this, handle, reflectedType); } // 0x10eb8a0
        System::Reflection::MethodBody* GetMethodBodyInternal(int handle) { return il2cpp::call<System::Reflection::MethodBody*(*)(MethodBase*, int)>(0x10eb7f0)(this, handle); } // 0x10eb7f0
        System::Reflection::MethodBody* GetMethodBody(int handle) { return il2cpp::call<System::Reflection::MethodBody*(*)(MethodBase*, int)>(0x10eb7f0)(this, handle); } // 0x10eb7f0
        System::Reflection::MethodBase* GetMethodFromHandleInternalType(int method_handle, int type_handle) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, int, int)>(0x10eb830)(this, method_handle, type_handle); } // 0x10eb830
        System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(int method_handle, int type_handle, bool genericCheck) { return il2cpp::call<System::Reflection::MethodBase*(*)(MethodBase*, int, int, bool)>(0x10eb840)(this, method_handle, type_handle, genericCheck); } // 0x10eb840

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::MethodBase> {
        };

}


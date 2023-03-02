#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Reflection/MethodInfo.hpp>
#include <au/System/DelegateData.hpp>
#include <au/System/Type.hpp>
#include <cs/array.hpp>
#include <au/System/Delegate.hpp>
#include <cs/array.hpp>
#include <au/System/RuntimeType.hpp>

namespace System
{
    struct Delegate : ark::meta<Delegate, il2cpp::Il2CppObject>
    {
        int method_ptr; // 0x8
        int invoke_impl; // 0xc
        il2cpp::Il2CppObject* m_target; // 0x10
        int method; // 0x14
        int delegate_trampoline; // 0x18
        int extra_arg; // 0x1c
        int method_code; // 0x20
        System::Reflection::MethodInfo* method_info; // 0x24
        System::Reflection::MethodInfo* original_method_info; // 0x28
        System::DelegateData* data; // 0x2c
        bool method_is_virtual; // 0x30

        System::Reflection::MethodInfo* get_Method() { return il2cpp::call<System::Reflection::MethodInfo*(*)(Delegate*)>(0x869470)(this); } // 0x869470
        System::Reflection::MethodInfo* GetVirtualMethod_internal() { return il2cpp::call<System::Reflection::MethodInfo*(*)(Delegate*)>(0xbbc9d0)(this); } // 0xbbc9d0
        il2cpp::Il2CppObject* get_Target() { return il2cpp::call<il2cpp::Il2CppObject*(*)(Delegate*)>(0x2b40b0)(this); } // 0x2b40b0
        System::Delegate* CreateDelegate_internal(System::Type* type, il2cpp::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(0x1534a40)(this, type, target, info, throwOnBindFailure); } // 0x1534a40
        bool arg_type_match(System::Type* delArgType, System::Type* argType) { return il2cpp::call<bool(*)(Delegate*, System::Type*, System::Type*)>(0x15365b0)(this, delArgType, argType); } // 0x15365b0
        bool arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis) { return il2cpp::call<bool(*)(Delegate*, System::Type*, System::Type*, bool)>(0x1536750)(this, delArgType, argType, boxedThis); } // 0x1536750
        bool return_type_match(System::Type* delReturnType, System::Type* returnType) { return il2cpp::call<bool(*)(Delegate*, System::Type*, System::Type*)>(0x1536910)(this, delReturnType, returnType); } // 0x1536910
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(0x1534b00)(this, type, firstArgument, method, throwOnBindFailure); } // 0x1534b00
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*, bool, bool)>(0x1534c00)(this, type, firstArgument, method, throwOnBindFailure, allowClosed); } // 0x1534c00
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*)>(0x1534b20)(this, type, firstArgument, method); } // 0x1534b20
        System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, System::Reflection::MethodInfo*, bool)>(0x1535500)(this, type, method, throwOnBindFailure); } // 0x1535500
        System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, System::Reflection::MethodInfo*)>(0x1534be0)(this, type, method); } // 0x1534be0
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* target, cs::string* method) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, cs::string*)>(0x1535520)(this, type, target, method); } // 0x1535520
        System::Reflection::MethodInfo* GetCandidateMethod(System::Type* type, System::Type* target, cs::string* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure) { return il2cpp::call<System::Reflection::MethodInfo*(*)(Delegate*, System::Type*, System::Type*, cs::string*, System::Reflection::BindingFlags, bool, bool)>(0x1535cf0)(this, type, target, method, bflags, ignoreCase, throwOnBindFailure); } // 0x1535cf0
        System::Delegate* CreateDelegate(System::Type* type, System::Type* target, cs::string* method, bool ignoreCase, bool throwOnBindFailure) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, System::Type*, cs::string*, bool, bool)>(0x15355c0)(this, type, target, method, ignoreCase, throwOnBindFailure); } // 0x15355c0
        System::Delegate* CreateDelegate(System::Type* type, System::Type* target, cs::string* method) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, System::Type*, cs::string*)>(0x15356a0)(this, type, target, method); } // 0x15356a0
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* target, cs::string* method, bool ignoreCase, bool throwOnBindFailure) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, cs::string*, bool, bool)>(0x1534b40)(this, type, target, method, ignoreCase, throwOnBindFailure); } // 0x1534b40
        System::Delegate* CreateDelegate(System::Type* type, il2cpp::Il2CppObject* target, cs::string* method, bool ignoreCase) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Type*, il2cpp::Il2CppObject*, cs::string*, bool)>(0x1534a60)(this, type, target, method, ignoreCase); } // 0x1534a60
        il2cpp::Il2CppObject* DynamicInvoke(cs::array<il2cpp::Il2CppObject>* args) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Delegate*, cs::array<il2cpp::Il2CppObject>*)>(0x1535b60)(this, args); } // 0x1535b60
        void InitializeDelegateData() { return il2cpp::call<void(*)(Delegate*)>(0x15362e0)(this); } // 0x15362e0
        System::Delegate* Combine(System::Delegate* a, System::Delegate* b) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Delegate*, System::Delegate*)>(0x15346e0)(this, a, b); } // 0x15346e0
        System::Delegate* Combine(cs::array<System::Delegate>* delegates) { return il2cpp::call<System::Delegate*(*)(Delegate*, cs::array<System::Delegate>*)>(0x1534860)(this, delegates); } // 0x1534860
        System::Delegate* Remove(System::Delegate* source, System::Delegate* value) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Delegate*, System::Delegate*)>(0x1536440)(this, source, value); } // 0x1536440
        System::Delegate* RemoveAll(System::Delegate* source, System::Delegate* value) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::Delegate*, System::Delegate*)>(0x15363c0)(this, source, value); } // 0x15363c0
        bool op_Equality(System::Delegate* d1, System::Delegate* d2) { return il2cpp::call<bool(*)(Delegate*, System::Delegate*, System::Delegate*)>(0x1536890)(this, d1, d2); } // 0x1536890
        bool op_Inequality(System::Delegate* d1, System::Delegate* d2) { return il2cpp::call<bool(*)(Delegate*, System::Delegate*, System::Delegate*)>(0x15368d0)(this, d1, d2); } // 0x15368d0
        System::Delegate* CreateDelegateNoSecurityCheck(System::RuntimeType* type, il2cpp::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method) { return il2cpp::call<System::Delegate*(*)(Delegate*, System::RuntimeType*, il2cpp::Il2CppObject*, System::Reflection::MethodInfo*)>(0x1534a30)(this, type, firstArgument, method); } // 0x1534a30
        System::MulticastDelegate* AllocDelegateLike_internal(System::Delegate* d) { return il2cpp::call<System::MulticastDelegate*(*)(Delegate*, System::Delegate*)>(0x1534680)(this, d); } // 0x1534680

    };

}
namespace ark {

        template<> struct meta_statics<System::Delegate> {
        };

}


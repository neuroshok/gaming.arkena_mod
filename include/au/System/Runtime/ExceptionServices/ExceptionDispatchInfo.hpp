#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Exception.hpp>

namespace System::Runtime::ExceptionServices
{
    struct ExceptionDispatchInfo : ark::meta<ExceptionDispatchInfo, il2cpp::Il2CppObject>
    {
        System::Exception* m_Exception; // 0x8
        il2cpp::Il2CppObject* m_stackTrace; // 0xc

        void ctor(System::Exception* exception) { return il2cpp::call<void(*)(ExceptionDispatchInfo*, System::Exception*)>(0x1363f20)(this, exception); } // 0x1363f20
        il2cpp::Il2CppObject* get_BinaryStackTraceArray() { return il2cpp::call<il2cpp::Il2CppObject*(*)(ExceptionDispatchInfo*)>(0x2c50f0)(this); } // 0x2c50f0
        System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(System::Exception* source) { return il2cpp::call<System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(ExceptionDispatchInfo*, System::Exception*)>(0x1363d20)(this, source); } // 0x1363d20
        System::Exception* get_SourceException() { return il2cpp::call<System::Exception*(*)(ExceptionDispatchInfo*)>(0x2c5110)(this); } // 0x2c5110
        void Throw() { return il2cpp::call<void(*)(ExceptionDispatchInfo*)>(0x1363ed0)(this); } // 0x1363ed0
        void Throw(System::Exception* source) { return il2cpp::call<void(*)(ExceptionDispatchInfo*, System::Exception*)>(0x1363ea0)(this, source); } // 0x1363ea0

    };

}
namespace ark {

        template<> struct meta_statics<System::Runtime::ExceptionServices::ExceptionDispatchInfo> {
        };

}


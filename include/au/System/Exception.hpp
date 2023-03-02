#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/IDictionary.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Runtime/Serialization/SafeSerializationManager.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <au/System/Exception.hpp>
#include <au/System/EventHandler.hpp>
#include <au/System/Runtime/Serialization/StreamingContext.hpp>
#include <cs/string.hpp>
#include <au/System/Runtime/ExceptionServices/ExceptionDispatchInfo.hpp>
#include <au/System/Exception/ExceptionMessageKind.hpp>
#include <cs/string.hpp>

namespace System
{
    struct Exception : ark::meta<Exception, il2cpp::Il2CppObject>
    {
        static il2cpp::Il2CppObject* s_EDILock(); // 0x0
        cs::string* _className; // 0x8
        cs::string* _message; // 0xc
        System::Collections::IDictionary* _data; // 0x10
        System::Exception* _innerException; // 0x14
        cs::string* _helpURL; // 0x18
        il2cpp::Il2CppObject* _stackTrace; // 0x1c
        cs::string* _stackTraceString; // 0x20
        cs::string* _remoteStackTraceString; // 0x24
        int32_t _remoteStackIndex; // 0x28
        il2cpp::Il2CppObject* _dynamicMethods; // 0x2c
        int32_t _HResult; // 0x30
        cs::string* _source; // 0x34
        System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager; // 0x38
        cs::array<System::Diagnostics::StackTrace>* captured_traces; // 0x3c
        cs::array<int>* native_trace_ips; // 0x40

        void Init() { return il2cpp::call<void(*)(Exception*)>(0x1364870)(this); } // 0x1364870
        void ctor() { return il2cpp::call<void(*)(Exception*)>(0x1365710)(this); } // 0x1365710
        void ctor(cs::string* message) { return il2cpp::call<void(*)(Exception*, cs::string*)>(0x1365730)(this, message); } // 0x1365730
        void ctor(cs::string* message, System::Exception* innerException) { return il2cpp::call<void(*)(Exception*, cs::string*, System::Exception*)>(0x1365760)(this, message, innerException); } // 0x1365760
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(Exception*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x13653d0)(this, info, context); } // 0x13653d0
        bool IsImmutableAgileException(System::Exception* e) { return il2cpp::call<bool(*)(Exception*, System::Exception*)>(0x2b53b0)(this, e); } // 0x2b53b0
        cs::string* GetClassName() { return il2cpp::call<cs::string*(*)(Exception*)>(0x13643e0)(this); } // 0x13643e0
        System::IRuntimeMethodInfo* GetMethodFromStackTrace(il2cpp::Il2CppObject* stackTrace) { return il2cpp::call<System::IRuntimeMethodInfo*(*)(Exception*, il2cpp::Il2CppObject*)>(0xbbc9d0)(this, stackTrace); } // 0xbbc9d0
        cs::string* GetStackTrace(bool needFileInfo) { return il2cpp::call<cs::string*(*)(Exception*, bool)>(0x1364820)(this, needFileInfo); } // 0x1364820
        void SetErrorCode(int32_t hr) { return il2cpp::call<void(*)(Exception*, int32_t)>(0x2ea8f0)(this, hr); } // 0x2ea8f0
        cs::string* ToString(bool needFileLineInfo, bool needMessage) { return il2cpp::call<cs::string*(*)(Exception*, bool, bool)>(0x1365020)(this, needFileLineInfo, needMessage); } // 0x1365020
        void add_SerializeObjectState(System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>* value) { return il2cpp::call<void(*)(Exception*, System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>*)>(0x1365790)(this, value); } // 0x1365790
        void remove_SerializeObjectState(System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>* value) { return il2cpp::call<void(*)(Exception*, System::EventHandler<System::Runtime::Serialization::SafeSerializationEventArgs>*)>(0x1365b70)(this, value); } // 0x1365b70
        System::Exception* PrepForRemoting() { return il2cpp::call<System::Exception*(*)(Exception*)>(0x13649b0)(this); } // 0x13649b0
        void OnDeserialized(System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(Exception*, System::Runtime::Serialization::StreamingContext)>(0x1364940)(this, context); } // 0x1364940
        void InternalPreserveStackTrace() { return il2cpp::call<void(*)(Exception*)>(0x13648d0)(this); } // 0x13648d0
        cs::string* get_RemoteStackTrace() { return il2cpp::call<cs::string*(*)(Exception*)>(0x2e3cb0)(this); } // 0x2e3cb0
        cs::string* StripFileInfo(cs::string* stackTrace, bool isRemoteStackTrace) { return il2cpp::call<cs::string*(*)(Exception*, cs::string*, bool)>(0x5e8990)(this, stackTrace, isRemoteStackTrace); } // 0x5e8990
        void RestoreExceptionDispatchInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo) { return il2cpp::call<void(*)(Exception*, System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(0x1364fb0)(this, exceptionDispatchInfo); } // 0x1364fb0
        int32_t get_HResult() { return il2cpp::call<int32_t(*)(Exception*)>(0x2ea100)(this); } // 0x2ea100
        void set_HResult(int32_t value) { return il2cpp::call<void(*)(Exception*, int32_t)>(0x2ea8f0)(this, value); } // 0x2ea8f0
        bool get_IsTransient() { return il2cpp::call<bool(*)(Exception*)>(0x1365840)(this); } // 0x1365840
        bool nIsTransient(int32_t hr) { return il2cpp::call<bool(*)(Exception*, int32_t)>(0xbbc9d0)(this, hr); } // 0xbbc9d0
        cs::string* GetMessageFromNativeResources(System::Exception+ExceptionMessageKind kind) { return il2cpp::call<cs::string*(*)(Exception*, System::Exception+ExceptionMessageKind)>(0x1364420)(this, kind); } // 0x1364420
        void SetMessage(cs::string* s) { return il2cpp::call<void(*)(Exception*, cs::string*)>(0x2c5120)(this, s); } // 0x2c5120
        void SetStackTrace(cs::string* s) { return il2cpp::call<void(*)(Exception*, cs::string*)>(0x2d8b20)(this, s); } // 0x2d8b20
        System::Exception* FixRemotingException() { return il2cpp::call<System::Exception*(*)(Exception*)>(0x1364300)(this); } // 0x1364300
        void ReportUnhandledException(System::Exception* exception) { return il2cpp::call<void(*)(Exception*, System::Exception*)>(0x1364fa0)(this, exception); } // 0x1364fa0
        void cctor() { return il2cpp::call<void(*)(Exception*)>(0x1365380)(this); } // 0x1365380

    };

}
namespace ark {

        template<> struct meta_statics<System::Exception> {
        il2cpp::Il2CppObject* s_EDILock; // 0x0
        };

}



il2cpp::Il2CppObject* System::Exception::s_EDILock() { return statics()->s_EDILock; }; // 0x0
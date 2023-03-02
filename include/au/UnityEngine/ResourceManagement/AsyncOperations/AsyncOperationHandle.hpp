#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ResourceManagement/AsyncOperations/IAsyncOperation.hpp>
#include <cs/string.hpp>
#include <au/System/Action.hpp>
#include <au/UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/HashSet.hpp>

namespace UnityEngine::ResourceManagement::AsyncOperations
{
    struct AsyncOperationHandle : ark::meta<AsyncOperationHandle>
    {
        static bool m_IsWaitingForCompletion(); // 0x0
        UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp; // 0x8
        int32_t m_Version; // 0xc
        cs::string* m_LocationName; // 0x10

        bool get_IsWaitingForCompletion() { return il2cpp::call<bool(*)(AsyncOperationHandle*)>(0xc9a010)(this); } // 0xc9a010
        void set_IsWaitingForCompletion(bool value) { return il2cpp::call<void(*)(AsyncOperationHandle*, bool)>(0xc9a380)(this, value); } // 0xc9a380
        cs::string* get_LocationName() { return il2cpp::call<cs::string*(*)(AsyncOperationHandle*)>(0x5a980)(this); } // 0x5a980
        void set_LocationName(cs::string* value) { return il2cpp::call<void(*)(AsyncOperationHandle*, cs::string*)>(0x51680)(this, value); } // 0x51680
        void ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) { return il2cpp::call<void(*)(AsyncOperationHandle*, UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(0x12b8d0)(this, op); } // 0x12b8d0
        void ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version) { return il2cpp::call<void(*)(AsyncOperationHandle*, UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, int32_t)>(0x12b930)(this, op, version); } // 0x12b930
        void ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, cs::string* locationName) { return il2cpp::call<void(*)(AsyncOperationHandle*, UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, cs::string*)>(0x12b950)(this, op, locationName); } // 0x12b950
        void ctor(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version, cs::string* locationName) { return il2cpp::call<void(*)(AsyncOperationHandle*, UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, int32_t, cs::string*)>(0xf6570)(this, op, version, locationName); } // 0xf6570
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Acquire() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle(*)(AsyncOperationHandle*)>(0x12b590)(this); } // 0x12b590
        void add_Completed(System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) { return il2cpp::call<void(*)(AsyncOperationHandle*, System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(0x12b9b0)(this, value); } // 0x12b9b0
        void remove_Completed(System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) { return il2cpp::call<void(*)(AsyncOperationHandle*, System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(0x12bca0)(this, value); } // 0x12bca0
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>* Convert() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>*(*)(AsyncOperationHandle*)>(0xa4ae0000)(this); } // 0xa4ae0000
        bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle other) { return il2cpp::call<bool(*)(AsyncOperationHandle*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(0x12b5d0)(this, other); } // 0x12b5d0
        cs::string* get_DebugName() { return il2cpp::call<cs::string*(*)(AsyncOperationHandle*)>(0x12ba70)(this); } // 0x12ba70
        void add_Destroyed(System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) { return il2cpp::call<void(*)(AsyncOperationHandle*, System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(0x12ba10)(this, value); } // 0x12ba10
        void remove_Destroyed(System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) { return il2cpp::call<void(*)(AsyncOperationHandle*, System::Action<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(0x12bd00)(this, value); } // 0x12bd00
        void GetDependencies(System::Collections::Generic::List<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) { return il2cpp::call<void(*)(AsyncOperationHandle*, System::Collections::Generic::List<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(0x12b5f0)(this, deps); } // 0x12b5f0
        UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* get_InternalOp() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*(*)(AsyncOperationHandle*)>(0x12bb10)(this); } // 0x12bb10
        bool get_IsDone() { return il2cpp::call<bool(*)(AsyncOperationHandle*)>(0x12bb20)(this); } // 0x12bb20
        bool IsValid() { return il2cpp::call<bool(*)(AsyncOperationHandle*)>(0x12b7a0)(this); } // 0x12b7a0
        System::Exception* get_OperationException() { return il2cpp::call<System::Exception*(*)(AsyncOperationHandle*)>(0x12bb30)(this); } // 0x12bb30
        float get_PercentComplete() { return il2cpp::call<float(*)(AsyncOperationHandle*)>(0x12bb40)(this); } // 0x12bb40
        UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus(*)(AsyncOperationHandle*)>(0x12b6a0)(this); } // 0x12b6a0
        UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet<il2cpp::Il2CppObject>* visited) { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus(*)(AsyncOperationHandle*, System::Collections::Generic::HashSet<il2cpp::Il2CppObject>*)>(0x12b760)(this, visited); } // 0x12b760
        int32_t get_ReferenceCount() { return il2cpp::call<int32_t(*)(AsyncOperationHandle*)>(0x12bb50)(this); } // 0x12bb50
        void Release() { return il2cpp::call<void(*)(AsyncOperationHandle*)>(0x12b7f0)(this); } // 0x12b7f0
        il2cpp::Il2CppObject* get_Result() { return il2cpp::call<il2cpp::Il2CppObject*(*)(AsyncOperationHandle*)>(0x12b870)(this); } // 0x12b870
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus(*)(AsyncOperationHandle*)>(0x12bba0)(this); } // 0x12bba0
        System::Threading::Tasks::Task<il2cpp::Il2CppObject>* get_Task() { return il2cpp::call<System::Threading::Tasks::Task<il2cpp::Il2CppObject>*(*)(AsyncOperationHandle*)>(0x12bbf0)(this); } // 0x12bbf0
        il2cpp::Il2CppObject* WaitForCompletion() { return il2cpp::call<il2cpp::Il2CppObject*(*)(AsyncOperationHandle*)>(0x12b8c0)(this); } // 0x12b8c0
        void cctor() { return il2cpp::call<void(*)(AsyncOperationHandle*)>(0x2babf0)(this); } // 0x2babf0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> {
        bool m_IsWaitingForCompletion; // 0x0
        };

}



bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::m_IsWaitingForCompletion() { return statics()->m_IsWaitingForCompletion; }; // 0x0
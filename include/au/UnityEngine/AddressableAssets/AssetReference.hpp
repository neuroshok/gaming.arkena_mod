#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Transform.hpp>

namespace UnityEngine::AddressableAssets
{
    struct AssetReference : ark::meta<AssetReference, il2cpp::Il2CppObject>
    {
        cs::string* m_AssetGUID; // 0x8
        cs::string* m_SubObjectName; // 0xc
        cs::string* m_SubObjectType; // 0x10
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation; // 0x14

        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle(*)(AssetReference*)>(0x80a490)(this); } // 0x80a490
        void set_OperationHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) { return il2cpp::call<void(*)(AssetReference*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(0x80a5c0)(this, value); } // 0x80a5c0
        bool IsValid() { return il2cpp::call<bool(*)(AssetReference*)>(0x809e20)(this); } // 0x809e20
        bool get_IsDone() { return il2cpp::call<bool(*)(AssetReference*)>(0x80a470)(this); } // 0x80a470
        void ctor() { return il2cpp::call<void(*)(AssetReference*)>(0x80a3a0)(this); } // 0x80a3a0
        void ctor(cs::string* guid) { return il2cpp::call<void(*)(AssetReference*, cs::string*)>(0x80a320)(this, guid); } // 0x80a320
        void ctor(cs::string* guid, System::Type* type) { return il2cpp::call<void(*)(AssetReference*, cs::string*, System::Type*)>(0x80a360)(this, guid, type); } // 0x80a360
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>* CreateFailedOperation() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>*(*)(AssetReference*)>(0xa4ae0000)(this); } // 0xa4ae0000
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>* LoadAsset() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<Typeid_30>*(*)(AssetReference*)>(0xa4ae0000)(this); } // 0xa4ae0000
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* LoadScene() { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*(*)(AssetReference*)>(0x809f70)(this); } // 0x809f70
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::GameObject>* Instantiate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::GameObject>*(*)(AssetReference*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform*)>(0x809dd0)(this, position, rotation, parent); } // 0x809dd0
        UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::GameObject>* Instantiate(UnityEngine::Transform* parent, bool instantiateInWorldSpace) { return il2cpp::call<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle<UnityEngine::GameObject>*(*)(AssetReference*, UnityEngine::Transform*, bool)>(0x809d90)(this, parent, instantiateInWorldSpace); } // 0x809d90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AddressableAssets::AssetReference> {
        };

}


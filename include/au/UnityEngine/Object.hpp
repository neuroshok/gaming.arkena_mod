#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/System/Type.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/HideFlags.hpp>
#include <au/System/Type.hpp>
#include <il2cpp/core.hpp>

namespace UnityEngine
{
    struct Object : ark::meta<Object, il2cpp::Il2CppObject>
    {
        static int32_t OffsetOfInstanceIDInCPlusPlusObject(); // 0x0
        int m_CachedPtr; // 0x8

        int32_t GetInstanceID() { return il2cpp::call<int32_t(*)(Object*)>(0x139e650)(this); } // 0x139e650
        bool op_Implicit(UnityEngine::Object* exists) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*)>(0x139f780)(this, exists); } // 0x139f780
        bool CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*, UnityEngine::Object*)>(0x139dc80)(this, lhs, rhs); } // 0x139dc80
        void EnsureRunningOnMainThread() { return il2cpp::call<void(*)(Object*)>(0x139e030)(this); } // 0x139e030
        bool IsNativeObjectAlive(UnityEngine::Object* o) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*)>(0x139f430)(this, o); } // 0x139f430
        int GetCachedPtr() { return il2cpp::call<int(*)(Object*)>(0x2c5110)(this); } // 0x2c5110
        cs::string* get_name() { return il2cpp::call<cs::string*(*)(Object*)>(0x139f5d0)(this); } // 0x139f5d0
        void set_name(cs::string* value) { return il2cpp::call<void(*)(Object*, cs::string*)>(0x139f9b0)(this, value); } // 0x139f9b0
        UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x139efd0)(this, original, position, rotation); } // 0x139efd0
        UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform*)>(0x139e7c0)(this, original, position, rotation, parent); } // 0x139e7c0
        UnityEngine::Object* Instantiate(UnityEngine::Object* original) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*)>(0x139eb60)(this, original); } // 0x139eb60
        UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Transform* parent) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Transform*)>(0x139eb00)(this, original, parent); } // 0x139eb00
        UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Transform*, bool)>(0x139ed10)(this, original, parent, instantiateInWorldSpace); } // 0x139ed10
        Typeid_30 Instantiate(Typeid_30 original) { return il2cpp::call<Typeid_30(*)(Object*, Typeid_30)>(0xa4ae0000)(this, original); } // 0xa4ae0000
        Typeid_30 Instantiate(Typeid_30 original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return il2cpp::call<Typeid_30(*)(Object*, Typeid_30, UnityEngine::Vector3, UnityEngine::Quaternion)>(0xa4ae0000)(this, original, position, rotation); } // 0xa4ae0000
        Typeid_30 Instantiate(Typeid_30 original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) { return il2cpp::call<Typeid_30(*)(Object*, Typeid_30, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform*)>(0xa4ae0000)(this, original, position, rotation, parent); } // 0xa4ae0000
        Typeid_30 Instantiate(Typeid_30 original, UnityEngine::Transform* parent) { return il2cpp::call<Typeid_30(*)(Object*, Typeid_30, UnityEngine::Transform*)>(0xa4ae0000)(this, original, parent); } // 0xa4ae0000
        Typeid_30 Instantiate(Typeid_30 original, UnityEngine::Transform* parent, bool worldPositionStays) { return il2cpp::call<Typeid_30(*)(Object*, Typeid_30, UnityEngine::Transform*, bool)>(0xa4ae0000)(this, original, parent, worldPositionStays); } // 0xa4ae0000
        void Destroy(UnityEngine::Object* obj, float t) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*, float)>(0x139df90)(this, obj, t); } // 0x139df90
        void Destroy(UnityEngine::Object* obj) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*)>(0x139df20)(this, obj); } // 0x139df20
        void DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*, bool)>(0x139dda0)(this, obj, allowDestroyingAssets); } // 0x139dda0
        void DestroyImmediate(UnityEngine::Object* obj) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*)>(0x139ddd0)(this, obj); } // 0x139ddd0
        cs::array<UnityEngine::Object>* FindObjectsOfType(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Object>*(*)(Object*, System::Type*)>(0x139e500)(this, type); } // 0x139e500
        cs::array<UnityEngine::Object>* FindObjectsOfType(System::Type* type, bool includeInactive) { return il2cpp::call<cs::array<UnityEngine::Object>*(*)(Object*, System::Type*, bool)>(0x139e4d0)(this, type, includeInactive); } // 0x139e4d0
        void DontDestroyOnLoad(UnityEngine::Object* target) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*)>(0x139e000)(this, target); } // 0x139e000
        UnityEngine::HideFlags get_hideFlags() { return il2cpp::call<UnityEngine::HideFlags(*)(Object*)>(0x139f5a0)(this); } // 0x139f5a0
        void set_hideFlags(UnityEngine::HideFlags value) { return il2cpp::call<void(*)(Object*, UnityEngine::HideFlags)>(0x139f980)(this, value); } // 0x139f980
        void DestroyObject(UnityEngine::Object* obj, float t) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*, float)>(0x139deb0)(this, obj, t); } // 0x139deb0
        void DestroyObject(UnityEngine::Object* obj) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*)>(0x139de40)(this, obj); } // 0x139de40
        cs::array<UnityEngine::Object>* FindSceneObjectsOfType(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Object>*(*)(Object*, System::Type*)>(0x139e570)(this, type); } // 0x139e570
        cs::array<UnityEngine::Object>* FindObjectsOfTypeIncludingAssets(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Object>*(*)(Object*, System::Type*)>(0x139e4a0)(this, type); } // 0x139e4a0
        cs::array<Typeid_30>* FindObjectsOfType() { return il2cpp::call<cs::array<Typeid_30>*(*)(Object*)>(0xa4ae0000)(this); } // 0xa4ae0000
        cs::array<Typeid_30>* FindObjectsOfType(bool includeInactive) { return il2cpp::call<cs::array<Typeid_30>*(*)(Object*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        Typeid_30 FindObjectOfType() { return il2cpp::call<Typeid_30(*)(Object*)>(0xa4ae0000)(this); } // 0xa4ae0000
        Typeid_30 FindObjectOfType(bool includeInactive) { return il2cpp::call<Typeid_30(*)(Object*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        cs::array<UnityEngine::Object>* FindObjectsOfTypeAll(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Object>*(*)(Object*, System::Type*)>(0x139e490)(this, type); } // 0x139e490
        void CheckNullArgument(il2cpp::Il2CppObject* arg, cs::string* message) { return il2cpp::call<void(*)(Object*, il2cpp::Il2CppObject*, cs::string*)>(0x139dc40)(this, arg, message); } // 0x139dc40
        UnityEngine::Object* FindObjectOfType(System::Type* type) { return il2cpp::call<UnityEngine::Object*(*)(Object*, System::Type*)>(0x139e390)(this, type); } // 0x139e390
        UnityEngine::Object* FindObjectOfType(System::Type* type, bool includeInactive) { return il2cpp::call<UnityEngine::Object*(*)(Object*, System::Type*, bool)>(0x139e410)(this, type, includeInactive); } // 0x139e410
        bool op_Equality(UnityEngine::Object* x, UnityEngine::Object* y) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*, UnityEngine::Object*)>(0x139f640)(this, x, y); } // 0x139f640
        bool op_Inequality(UnityEngine::Object* x, UnityEngine::Object* y) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*, UnityEngine::Object*)>(0x139f840)(this, x, y); } // 0x139f840
        int32_t GetOffsetOfInstanceIDInCPlusPlusObject() { return il2cpp::call<int32_t(*)(Object*)>(0x139e7a0)(this); } // 0x139e7a0
        bool CurrentThreadIsMainThread() { return il2cpp::call<bool(*)(Object*)>(0x139dd80)(this); } // 0x139dd80
        UnityEngine::Object* Internal_CloneSingle(UnityEngine::Object* data) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*)>(0x139f2b0)(this, data); } // 0x139f2b0
        UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Transform*, bool)>(0x139f280)(this, data, parent, worldPositionStays); } // 0x139f280
        UnityEngine::Object* Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x139f3c0)(this, data, pos, rot); } // 0x139f3c0
        UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x139f320)(this, data, parent, pos, rot); } // 0x139f320
        cs::string* ToString(UnityEngine::Object* obj) { return il2cpp::call<cs::string*(*)(Object*, UnityEngine::Object*)>(0x139f540)(this, obj); } // 0x139f540
        cs::string* GetName(UnityEngine::Object* obj) { return il2cpp::call<cs::string*(*)(Object*, UnityEngine::Object*)>(0x139e770)(this, obj); } // 0x139e770
        bool IsPersistent(UnityEngine::Object* obj) { return il2cpp::call<bool(*)(Object*, UnityEngine::Object*)>(0x139f470)(this, obj); } // 0x139f470
        void SetName(UnityEngine::Object* obj, cs::string* name) { return il2cpp::call<void(*)(Object*, UnityEngine::Object*, cs::string*)>(0x139f4a0)(this, obj, name); } // 0x139f4a0
        bool DoesObjectWithInstanceIDExist(int32_t instanceID) { return il2cpp::call<bool(*)(Object*, int32_t)>(0x139dfd0)(this, instanceID); } // 0x139dfd0
        UnityEngine::Object* FindObjectFromInstanceID(int32_t instanceID) { return il2cpp::call<UnityEngine::Object*(*)(Object*, int32_t)>(0x139e360)(this, instanceID); } // 0x139e360
        UnityEngine::Object* ForceLoadFromInstanceID(int32_t instanceID) { return il2cpp::call<UnityEngine::Object*(*)(Object*, int32_t)>(0x139e620)(this, instanceID); } // 0x139e620
        void ctor() { return il2cpp::call<void(*)(Object*)>(0x2c4c60)(this); } // 0x2c4c60
        void cctor() { return il2cpp::call<void(*)(Object*)>(0x139f570)(this); } // 0x139f570
        UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x139f390)(this, data, pos, rot); } // 0x139f390
        UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return il2cpp::call<UnityEngine::Object*(*)(Object*, UnityEngine::Object*, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0x139f2e0)(this, data, parent, pos, rot); } // 0x139f2e0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Object> {
        int32_t OffsetOfInstanceIDInCPlusPlusObject; // 0x0
        };

}



int32_t UnityEngine::Object::OffsetOfInstanceIDInCPlusPlusObject() { return statics()->OffsetOfInstanceIDInCPlusPlusObject; }; // 0x0
#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/PrimitiveType.hpp>
#include <au/System/Type.hpp>
#include <cs/string.hpp>
#include <au/System/Type.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/UnityEngine/SceneManagement/Scene.hpp>

namespace UnityEngine
{
    struct GameObject : ark::meta<GameObject, UnityEngine::Object>
    {

        UnityEngine::GameObject* CreatePrimitive(UnityEngine::PrimitiveType type) { return il2cpp::call<UnityEngine::GameObject*(*)(GameObject*, UnityEngine::PrimitiveType)>(0xf59010)(this, type); } // 0xf59010
        Typeid_30 GetComponent() { return il2cpp::call<Typeid_30(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        UnityEngine::Component* GetComponent(System::Type* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf591f0)(this, type); } // 0xf591f0
        void GetComponentFastPath(System::Type* type, int oneFurtherThanResultValue) { return il2cpp::call<void(*)(GameObject*, System::Type*, int)>(0xf59100)(this, type, oneFurtherThanResultValue); } // 0xf59100
        UnityEngine::Component* GetComponentByName(cs::string* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, cs::string*)>(0xf590d0)(this, type); } // 0xf590d0
        UnityEngine::Component* GetComponent(cs::string* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, cs::string*)>(0xf590d0)(this, type); } // 0xf590d0
        UnityEngine::Component* GetComponentInChildren(System::Type* type, bool includeInactive) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*, bool)>(0xf59130)(this, type, includeInactive); } // 0xf59130
        UnityEngine::Component* GetComponentInChildren(System::Type* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf59160)(this, type); } // 0xf59160
        Typeid_30 GetComponentInChildren() { return il2cpp::call<Typeid_30(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        Typeid_30 GetComponentInChildren(bool includeInactive) { return il2cpp::call<Typeid_30(*)(GameObject*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        UnityEngine::Component* GetComponentInParent(System::Type* type, bool includeInactive) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*, bool)>(0xf59190)(this, type, includeInactive); } // 0xf59190
        UnityEngine::Component* GetComponentInParent(System::Type* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf591c0)(this, type); } // 0xf591c0
        Typeid_30 GetComponentInParent() { return il2cpp::call<Typeid_30(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        Typeid_30 GetComponentInParent(bool includeInactive) { return il2cpp::call<Typeid_30(*)(GameObject*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        System::Array* GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, il2cpp::Il2CppObject* resultList) { return il2cpp::call<System::Array*(*)(GameObject*, System::Type*, bool, bool, bool, bool, il2cpp::Il2CppObject*)>(0xf59420)(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList); } // 0xf59420
        cs::array<UnityEngine::Component>* GetComponents(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Component>*(*)(GameObject*, System::Type*)>(0xf594a0)(this, type); } // 0xf594a0
        cs::array<Typeid_30>* GetComponents() { return il2cpp::call<cs::array<Typeid_30>*(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void GetComponents(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results) { return il2cpp::call<void(*)(GameObject*, System::Type*, System::Collections::Generic::List<UnityEngine::Component>*)>(0xf59460)(this, type, results); } // 0xf59460
        void GetComponents(System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(GameObject*, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, results); } // 0xa4ae0000
        cs::array<UnityEngine::Component>* GetComponentsInChildren(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Component>*(*)(GameObject*, System::Type*)>(0xf59220)(this, type); } // 0xf59220
        cs::array<UnityEngine::Component>* GetComponentsInChildren(System::Type* type, bool includeInactive) { return il2cpp::call<cs::array<UnityEngine::Component>*(*)(GameObject*, System::Type*, bool)>(0xf592a0)(this, type, includeInactive); } // 0xf592a0
        cs::array<Typeid_30>* GetComponentsInChildren(bool includeInactive) { return il2cpp::call<cs::array<Typeid_30>*(*)(GameObject*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(GameObject*, bool, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, includeInactive, results); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInChildren() { return il2cpp::call<cs::array<Typeid_30>*(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void GetComponentsInChildren(System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(GameObject*, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, results); } // 0xa4ae0000
        cs::array<UnityEngine::Component>* GetComponentsInParent(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::Component>*(*)(GameObject*, System::Type*)>(0xf59320)(this, type); } // 0xf59320
        cs::array<UnityEngine::Component>* GetComponentsInParent(System::Type* type, bool includeInactive) { return il2cpp::call<cs::array<UnityEngine::Component>*(*)(GameObject*, System::Type*, bool)>(0xf593a0)(this, type, includeInactive); } // 0xf593a0
        void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(GameObject*, bool, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, includeInactive, results); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInParent(bool includeInactive) { return il2cpp::call<cs::array<Typeid_30>*(*)(GameObject*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInParent() { return il2cpp::call<cs::array<Typeid_30>*(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        bool TryGetComponent(Typeid_30 component) { return il2cpp::call<bool(*)(GameObject*, Typeid_30)>(0xa4ae0000)(this, component); } // 0xa4ae0000
        bool TryGetComponent(System::Type* type, UnityEngine::Component* component) { return il2cpp::call<bool(*)(GameObject*, System::Type*, UnityEngine::Component*)>(0xf597b0)(this, type, component); } // 0xf597b0
        UnityEngine::Component* TryGetComponentInternal(System::Type* type) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf59780)(this, type); } // 0xf59780
        void TryGetComponentFastPath(System::Type* type, int oneFurtherThanResultValue) { return il2cpp::call<void(*)(GameObject*, System::Type*, int)>(0xf59750)(this, type, oneFurtherThanResultValue); } // 0xf59750
        UnityEngine::GameObject* FindWithTag(cs::string* tag) { return il2cpp::call<UnityEngine::GameObject*(*)(GameObject*, cs::string*)>(0xf59040)(this, tag); } // 0xf59040
        void SendMessageUpwards(cs::string* methodName, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, UnityEngine::SendMessageOptions)>(0xf595f0)(this, methodName, options); } // 0xf595f0
        void SendMessage(cs::string* methodName, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, UnityEngine::SendMessageOptions)>(0xf59620)(this, methodName, options); } // 0xf59620
        void BroadcastMessage(cs::string* methodName, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, UnityEngine::SendMessageOptions)>(0xf58fb0)(this, methodName, options); } // 0xf58fb0
        UnityEngine::Component* AddComponentInternal(cs::string* className) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, cs::string*)>(0xf58eb0)(this, className); } // 0xf58eb0
        UnityEngine::Component* Internal_AddComponentWithType(System::Type* componentType) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf58ee0)(this, componentType); } // 0xf58ee0
        UnityEngine::Component* AddComponent(System::Type* componentType) { return il2cpp::call<UnityEngine::Component*(*)(GameObject*, System::Type*)>(0xf58ee0)(this, componentType); } // 0xf58ee0
        Typeid_30 AddComponent() { return il2cpp::call<Typeid_30(*)(GameObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        UnityEngine::Transform* get_transform() { return il2cpp::call<UnityEngine::Transform*(*)(GameObject*)>(0xf59bf0)(this); } // 0xf59bf0
        int32_t get_layer() { return il2cpp::call<int32_t(*)(GameObject*)>(0xf59af0)(this); } // 0xf59af0
        void set_layer(int32_t value) { return il2cpp::call<void(*)(GameObject*, int32_t)>(0xf59c80)(this, value); } // 0xf59c80
        bool get_active() { return il2cpp::call<bool(*)(GameObject*)>(0xf59a60)(this); } // 0xf59a60
        void set_active(bool value) { return il2cpp::call<void(*)(GameObject*, bool)>(0xf59c20)(this, value); } // 0xf59c20
        void SetActive(bool value) { return il2cpp::call<void(*)(GameObject*, bool)>(0xf59720)(this, value); } // 0xf59720
        bool get_activeSelf() { return il2cpp::call<bool(*)(GameObject*)>(0xf59a30)(this); } // 0xf59a30
        bool get_activeInHierarchy() { return il2cpp::call<bool(*)(GameObject*)>(0xf59a00)(this); } // 0xf59a00
        void SetActiveRecursively(bool state) { return il2cpp::call<void(*)(GameObject*, bool)>(0xf596f0)(this, state); } // 0xf596f0
        bool get_isStatic() { return il2cpp::call<bool(*)(GameObject*)>(0xf59ac0)(this); } // 0xf59ac0
        void set_isStatic(bool value) { return il2cpp::call<void(*)(GameObject*, bool)>(0xf59c50)(this, value); } // 0xf59c50
        bool get_isStaticBatchable() { return il2cpp::call<bool(*)(GameObject*)>(0xf59a90)(this); } // 0xf59a90
        cs::string* get_tag() { return il2cpp::call<cs::string*(*)(GameObject*)>(0xf59bc0)(this); } // 0xf59bc0
        void set_tag(cs::string* value) { return il2cpp::call<void(*)(GameObject*, cs::string*)>(0xf59cb0)(this, value); } // 0xf59cb0
        bool CompareTag(cs::string* tag) { return il2cpp::call<bool(*)(GameObject*, cs::string*)>(0xf58fe0)(this, tag); } // 0xf58fe0
        UnityEngine::GameObject* FindGameObjectWithTag(cs::string* tag) { return il2cpp::call<UnityEngine::GameObject*(*)(GameObject*, cs::string*)>(0xf59040)(this, tag); } // 0xf59040
        cs::array<UnityEngine::GameObject>* FindGameObjectsWithTag(cs::string* tag) { return il2cpp::call<cs::array<UnityEngine::GameObject>*(*)(GameObject*, cs::string*)>(0xf59070)(this, tag); } // 0xf59070
        void SendMessageUpwards(cs::string* methodName, il2cpp::Il2CppObject* value, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*, UnityEngine::SendMessageOptions)>(0xf59580)(this, methodName, value, options); } // 0xf59580
        void SendMessageUpwards(cs::string* methodName, il2cpp::Il2CppObject* value) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*)>(0xf595c0)(this, methodName, value); } // 0xf595c0
        void SendMessageUpwards(cs::string* methodName) { return il2cpp::call<void(*)(GameObject*, cs::string*)>(0xf59550)(this, methodName); } // 0xf59550
        void SendMessage(cs::string* methodName, il2cpp::Il2CppObject* value, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*, UnityEngine::SendMessageOptions)>(0xf596b0)(this, methodName, value, options); } // 0xf596b0
        void SendMessage(cs::string* methodName, il2cpp::Il2CppObject* value) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*)>(0xf59680)(this, methodName, value); } // 0xf59680
        void SendMessage(cs::string* methodName) { return il2cpp::call<void(*)(GameObject*, cs::string*)>(0xf59650)(this, methodName); } // 0xf59650
        void BroadcastMessage(cs::string* methodName, il2cpp::Il2CppObject* parameter, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*, UnityEngine::SendMessageOptions)>(0xf58f40)(this, methodName, parameter, options); } // 0xf58f40
        void BroadcastMessage(cs::string* methodName, il2cpp::Il2CppObject* parameter) { return il2cpp::call<void(*)(GameObject*, cs::string*, il2cpp::Il2CppObject*)>(0xf58f10)(this, methodName, parameter); } // 0xf58f10
        void BroadcastMessage(cs::string* methodName) { return il2cpp::call<void(*)(GameObject*, cs::string*)>(0xf58f80)(this, methodName); } // 0xf58f80
        void ctor(cs::string* name) { return il2cpp::call<void(*)(GameObject*, cs::string*)>(0xf59980)(this, name); } // 0xf59980
        void ctor() { return il2cpp::call<void(*)(GameObject*)>(0xf59910)(this); } // 0xf59910
        void ctor(cs::string* name, cs::array<System::Type>* components) { return il2cpp::call<void(*)(GameObject*, cs::string*, cs::array<System::Type>*)>(0xf59830)(this, name, components); } // 0xf59830
        void Internal_CreateGameObject(UnityEngine::GameObject* self, cs::string* name) { return il2cpp::call<void(*)(GameObject*, UnityEngine::GameObject*, cs::string*)>(0xf59520)(this, self, name); } // 0xf59520
        UnityEngine::GameObject* Find(cs::string* name) { return il2cpp::call<UnityEngine::GameObject*(*)(GameObject*, cs::string*)>(0xf590a0)(this, name); } // 0xf590a0
        UnityEngine::SceneManagement::Scene get_scene() { return il2cpp::call<UnityEngine::SceneManagement::Scene(*)(GameObject*)>(0xf59b80)(this); } // 0xf59b80
        uint64_t get_sceneCullingMask() { return il2cpp::call<uint64_t(*)(GameObject*)>(0xf59b20)(this); } // 0xf59b20
        UnityEngine::GameObject* get_gameObject() { return il2cpp::call<UnityEngine::GameObject*(*)(GameObject*)>(0x2d0720)(this); } // 0x2d0720
        void get_scene_Injected(UnityEngine::SceneManagement::Scene ret) { return il2cpp::call<void(*)(GameObject*, UnityEngine::SceneManagement::Scene)>(0xf59b50)(this, ret); } // 0xf59b50

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::GameObject> {
        };

}


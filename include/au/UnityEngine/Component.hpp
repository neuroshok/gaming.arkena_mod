#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/System/Type.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <cs/string.hpp>

namespace UnityEngine
{
    struct Component : ark::meta<Component, UnityEngine::Object>
    {

        UnityEngine::Transform* get_transform() { return il2cpp::call<UnityEngine::Transform*(*)(Component*)>(0xf561d0)(this); } // 0xf561d0
        UnityEngine::GameObject* get_gameObject() { return il2cpp::call<UnityEngine::GameObject*(*)(Component*)>(0xf56140)(this); } // 0xf56140
        UnityEngine::Component* GetComponent(System::Type* type) { return il2cpp::call<UnityEngine::Component*(*)(Component*, System::Type*)>(0xf56040)(this, type); } // 0xf56040
        void GetComponentFastPath(System::Type* type, int oneFurtherThanResultValue) { return il2cpp::call<void(*)(Component*, System::Type*, int)>(0xf55f40)(this, type, oneFurtherThanResultValue); } // 0xf55f40
        Typeid_30 GetComponent() { return il2cpp::call<Typeid_30(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        UnityEngine::Component* GetComponentInChildren(System::Type* t, bool includeInactive) { return il2cpp::call<UnityEngine::Component*(*)(Component*, System::Type*, bool)>(0xf55f70)(this, t, includeInactive); } // 0xf55f70
        Typeid_30 GetComponentInChildren(bool includeInactive) { return il2cpp::call<Typeid_30(*)(Component*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        Typeid_30 GetComponentInChildren() { return il2cpp::call<Typeid_30(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInChildren(bool includeInactive) { return il2cpp::call<cs::array<Typeid_30>*(*)(Component*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List<Typeid_30>* result) { return il2cpp::call<void(*)(Component*, bool, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, includeInactive, result); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInChildren() { return il2cpp::call<cs::array<Typeid_30>*(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void GetComponentsInChildren(System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(Component*, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, results); } // 0xa4ae0000
        UnityEngine::Component* GetComponentInParent(System::Type* t) { return il2cpp::call<UnityEngine::Component*(*)(Component*, System::Type*)>(0xf55fe0)(this, t); } // 0xf55fe0
        Typeid_30 GetComponentInParent() { return il2cpp::call<Typeid_30(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInParent(bool includeInactive) { return il2cpp::call<cs::array<Typeid_30>*(*)(Component*, bool)>(0xa4ae0000)(this, includeInactive); } // 0xa4ae0000
        void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(Component*, bool, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, includeInactive, results); } // 0xa4ae0000
        cs::array<Typeid_30>* GetComponentsInParent() { return il2cpp::call<cs::array<Typeid_30>*(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void GetComponentsForListInternal(System::Type* searchType, il2cpp::Il2CppObject* resultList) { return il2cpp::call<void(*)(Component*, System::Type*, il2cpp::Il2CppObject*)>(0xf560a0)(this, searchType, resultList); } // 0xf560a0
        void GetComponents(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results) { return il2cpp::call<void(*)(Component*, System::Type*, System::Collections::Generic::List<UnityEngine::Component>*)>(0xf560a0)(this, type, results); } // 0xf560a0
        void GetComponents(System::Collections::Generic::List<Typeid_30>* results) { return il2cpp::call<void(*)(Component*, System::Collections::Generic::List<Typeid_30>*)>(0xa4ae0000)(this, results); } // 0xa4ae0000
        cs::string* get_tag() { return il2cpp::call<cs::string*(*)(Component*)>(0xf56170)(this); } // 0xf56170
        cs::array<Typeid_30>* GetComponents() { return il2cpp::call<cs::array<Typeid_30>*(*)(Component*)>(0xa4ae0000)(this); } // 0xa4ae0000
        bool CompareTag(cs::string* tag) { return il2cpp::call<bool(*)(Component*, cs::string*)>(0xf55ee0)(this, tag); } // 0xf55ee0
        void SendMessageUpwards(cs::string* methodName, il2cpp::Il2CppObject* value, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(Component*, cs::string*, il2cpp::Il2CppObject*, UnityEngine::SendMessageOptions)>(0xf560d0)(this, methodName, value, options); } // 0xf560d0
        void SendMessageUpwards(cs::string* methodName, UnityEngine::SendMessageOptions options) { return il2cpp::call<void(*)(Component*, cs::string*, UnityEngine::SendMessageOptions)>(0xf56110)(this, methodName, options); } // 0xf56110
        void ctor() { return il2cpp::call<void(*)(Component*)>(0xf4e060)(this); } // 0xf4e060

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Component> {
        };

}


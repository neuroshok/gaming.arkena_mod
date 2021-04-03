//au/UnityEngine/Component
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Object.hpp>
namespace UnityEngine{ struct Transform; }
namespace UnityEngine{ struct GameObject; }
namespace System{ struct Type; }
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
struct object;
#include <cs/string.hpp>
#include <au/UnityEngine/SendMessageOptions.hpp>


namespace UnityEngine {
struct Component : ark::meta<Component, UnityEngine::Object>
{
ark_meta("UnityEngine", "Component", "");

    // Methods

    UnityEngine::Transform* get_transform(); // 0x73AF20 // public 
    UnityEngine::GameObject* get_gameObject(); // 0x73AE90 // public 
    UnityEngine::Component* GetComponent(System::Type* type); // 0x73AD90 // public 
    void GetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue); // 0x73ACA0 // internal 
    // T GetComponent1(); // 0x0 // public 
    UnityEngine::Component* GetComponentInChildren(System::Type* t, bool includeInactive); // 0x73ACD0 // public 
    // T GetComponentInChildren1(bool includeInactive); // 0x0 // public 
    // T GetComponentInChildren2(); // 0x0 // public 
    // cs::array<T>* GetComponentsInChildren(bool includeInactive); // 0x0 // public 
    // void GetComponentsInChildren1(bool includeInactive, System::Collections::Generic::List<T>* result); // 0x0 // public 
    // cs::array<T>* GetComponentsInChildren2(); // 0x0 // public 
    // void GetComponentsInChildren3(System::Collections::Generic::List<T>* results); // 0x0 // public 
    UnityEngine::Component* GetComponentInParent(System::Type* t); // 0x73AD30 // public 
    // T GetComponentInParent1(); // 0x0 // public 
    // cs::array<T>* GetComponentsInParent(bool includeInactive); // 0x0 // public 
    // void GetComponentsInParent1(bool includeInactive, System::Collections::Generic::List<T>* results); // 0x0 // public 
    // cs::array<T>* GetComponentsInParent2(); // 0x0 // public 
    void GetComponentsForListInternal(System::Type* searchType, Component* resultList); // 0x73ADF0 // private 
    void GetComponents(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results); // 0x73ADF0 // public 
    // void GetComponents1(System::Collections::Generic::List<T>* results); // 0x0 // public 
    cs::string* get_tag(); // 0x73AEC0 // public 
    // cs::array<T>* GetComponents2(); // 0x0 // public 
    void SendMessageUpwards(cs::string* methodName, Component* value, UnityEngine::SendMessageOptions options); // 0x73AE20 // public 
    void SendMessageUpwards1(cs::string* methodName, UnityEngine::SendMessageOptions options); // 0x73AE60 // public 
    void ctor(); // 0x732DD0 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Component>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Component::get_transform> () { return 0x73AF20; }
    template<> inline uintptr_t rva<&UnityEngine::Component::get_gameObject> () { return 0x73AE90; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponent> () { return 0x73AD90; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponentFastPath> () { return 0x73ACA0; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponentInChildren> () { return 0x73ACD0; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponentInParent> () { return 0x73AD30; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponentsForListInternal> () { return 0x73ADF0; }
    template<> inline uintptr_t rva<&UnityEngine::Component::GetComponents> () { return 0x73ADF0; }
    template<> inline uintptr_t rva<&UnityEngine::Component::get_tag> () { return 0x73AEC0; }
    template<> inline uintptr_t rva<&UnityEngine::Component::SendMessageUpwards> () { return 0x73AE20; }
    template<> inline uintptr_t rva<&UnityEngine::Component::SendMessageUpwards1> () { return 0x73AE60; }
    template<> inline uintptr_t rva<&UnityEngine::Component::ctor> () { return 0x732DD0; }
} // ark::method_info
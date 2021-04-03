#include <au/UnityEngine/Component.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Transform* Component::get_transform() { return method_call(get_transform); }  // 0x73AF20 // 
    UnityEngine::GameObject* Component::get_gameObject() { return method_call(get_gameObject); }  // 0x73AE90 // 
    UnityEngine::Component* Component::GetComponent(System::Type* type) { return method_call(GetComponent, type); }  // 0x73AD90 // 
    void Component::GetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue) { return method_call(GetComponentFastPath, type, oneFurtherThanResultValue); }  // 0x73ACA0 // 
    // T Component::GetComponent1() { return method_call(GetComponent1); }  // 0x0 // 
    UnityEngine::Component* Component::GetComponentInChildren(System::Type* t, bool includeInactive) { return method_call(GetComponentInChildren, t, includeInactive); }  // 0x73ACD0 // 
    // T Component::GetComponentInChildren1(bool includeInactive) { return method_call(GetComponentInChildren1, includeInactive); }  // 0x0 // 
    // T Component::GetComponentInChildren2() { return method_call(GetComponentInChildren2); }  // 0x0 // 
    // cs::array<T>* Component::GetComponentsInChildren(bool includeInactive) { return method_call(GetComponentsInChildren, includeInactive); }  // 0x0 // 
    // void Component::GetComponentsInChildren1(bool includeInactive, System::Collections::Generic::List<T>* result) { return method_call(GetComponentsInChildren1, includeInactive, result); }  // 0x0 // 
    // cs::array<T>* Component::GetComponentsInChildren2() { return method_call(GetComponentsInChildren2); }  // 0x0 // 
    // void Component::GetComponentsInChildren3(System::Collections::Generic::List<T>* results) { return method_call(GetComponentsInChildren3, results); }  // 0x0 // 
    UnityEngine::Component* Component::GetComponentInParent(System::Type* t) { return method_call(GetComponentInParent, t); }  // 0x73AD30 // 
    // T Component::GetComponentInParent1() { return method_call(GetComponentInParent1); }  // 0x0 // 
    // cs::array<T>* Component::GetComponentsInParent(bool includeInactive) { return method_call(GetComponentsInParent, includeInactive); }  // 0x0 // 
    // void Component::GetComponentsInParent1(bool includeInactive, System::Collections::Generic::List<T>* results) { return method_call(GetComponentsInParent1, includeInactive, results); }  // 0x0 // 
    // cs::array<T>* Component::GetComponentsInParent2() { return method_call(GetComponentsInParent2); }  // 0x0 // 
    void Component::GetComponentsForListInternal(System::Type* searchType, Component* resultList) { return method_call(GetComponentsForListInternal, searchType, resultList); }  // 0x73ADF0 // 
    void Component::GetComponents(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results) { return method_call(GetComponents, type, results); }  // 0x73ADF0 // 
    // void Component::GetComponents1(System::Collections::Generic::List<T>* results) { return method_call(GetComponents1, results); }  // 0x0 // 
    cs::string* Component::get_tag() { return method_call(get_tag); }  // 0x73AEC0 // 
    // cs::array<T>* Component::GetComponents2() { return method_call(GetComponents2); }  // 0x0 // 
    void Component::SendMessageUpwards(cs::string* methodName, Component* value, UnityEngine::SendMessageOptions options) { return method_call(SendMessageUpwards, methodName, value, options); }  // 0x73AE20 // 
    void Component::SendMessageUpwards1(cs::string* methodName, UnityEngine::SendMessageOptions options) { return method_call(SendMessageUpwards1, methodName, options); }  // 0x73AE60 // 
    void Component::ctor() { return method_call(ctor); }  // 0x732DD0 // 

};


#include <au/UnityEngine/GameObject.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::GameObject* GameObject::CreatePrimitive(UnityEngine::PrimitiveType type) { return method_call(CreatePrimitive, type); }  // 0x73DA10 // 
    // T GameObject::GetComponent() { return method_call(GetComponent); }  // 0x0 // 
    UnityEngine::Component* GameObject::GetComponent1(System::Type* type) { return method_call(GetComponent1, type); }  // 0x73DBF0 // 
    void GameObject::GetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue) { return method_call(GetComponentFastPath, type, oneFurtherThanResultValue); }  // 0x73DB00 // 
    UnityEngine::Component* GameObject::GetComponentByName(cs::string* type) { return method_call(GetComponentByName, type); }  // 0x73DAD0 // 
    UnityEngine::Component* GameObject::GetComponent2(cs::string* type) { return method_call(GetComponent2, type); }  // 0x73DAD0 // 
    UnityEngine::Component* GameObject::GetComponentInChildren(System::Type* type, bool includeInactive) { return method_call(GetComponentInChildren, type, includeInactive); }  // 0x73DB30 // 
    UnityEngine::Component* GameObject::GetComponentInChildren1(System::Type* type) { return method_call(GetComponentInChildren1, type); }  // 0x73DB60 // 
    // T GameObject::GetComponentInChildren2() { return method_call(GetComponentInChildren2); }  // 0x0 // 
    // T GameObject::GetComponentInChildren3(bool includeInactive) { return method_call(GetComponentInChildren3, includeInactive); }  // 0x0 // 
    UnityEngine::Component* GameObject::GetComponentInParent(System::Type* type, bool includeInactive) { return method_call(GetComponentInParent, type, includeInactive); }  // 0x73DB90 // 
    UnityEngine::Component* GameObject::GetComponentInParent1(System::Type* type) { return method_call(GetComponentInParent1, type); }  // 0x73DBC0 // 
    // T GameObject::GetComponentInParent2() { return method_call(GetComponentInParent2); }  // 0x0 // 
    // T GameObject::GetComponentInParent3(bool includeInactive) { return method_call(GetComponentInParent3, includeInactive); }  // 0x0 // 
    System::Array* GameObject::GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, GameObject* resultList) { return method_call(GetComponentsInternal, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList); }  // 0x73DE20 // 
    cs::array<UnityEngine::Component*>* GameObject::GetComponents(System::Type* type) { return method_call(GetComponents, type); }  // 0x73DEA0 // 
    // cs::array<T>* GameObject::GetComponents1() { return method_call(GetComponents1); }  // 0x0 // 
    void GameObject::GetComponents2(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results) { return method_call(GetComponents2, type, results); }  // 0x73DE60 // 
    // void GameObject::GetComponents3(System::Collections::Generic::List<T>* results) { return method_call(GetComponents3, results); }  // 0x0 // 
    cs::array<UnityEngine::Component*>* GameObject::GetComponentsInChildren(System::Type* type) { return method_call(GetComponentsInChildren, type); }  // 0x73DC20 // 
    cs::array<UnityEngine::Component*>* GameObject::GetComponentsInChildren1(System::Type* type, bool includeInactive) { return method_call(GetComponentsInChildren1, type, includeInactive); }  // 0x73DCA0 // 
    // cs::array<T>* GameObject::GetComponentsInChildren2(bool includeInactive) { return method_call(GetComponentsInChildren2, includeInactive); }  // 0x0 // 
    // void GameObject::GetComponentsInChildren3(bool includeInactive, System::Collections::Generic::List<T>* results) { return method_call(GetComponentsInChildren3, includeInactive, results); }  // 0x0 // 
    // cs::array<T>* GameObject::GetComponentsInChildren4() { return method_call(GetComponentsInChildren4); }  // 0x0 // 
    // void GameObject::GetComponentsInChildren5(System::Collections::Generic::List<T>* results) { return method_call(GetComponentsInChildren5, results); }  // 0x0 // 
    cs::array<UnityEngine::Component*>* GameObject::GetComponentsInParent(System::Type* type) { return method_call(GetComponentsInParent, type); }  // 0x73DD20 // 
    cs::array<UnityEngine::Component*>* GameObject::GetComponentsInParent1(System::Type* type, bool includeInactive) { return method_call(GetComponentsInParent1, type, includeInactive); }  // 0x73DDA0 // 
    // void GameObject::GetComponentsInParent2(bool includeInactive, System::Collections::Generic::List<T>* results) { return method_call(GetComponentsInParent2, includeInactive, results); }  // 0x0 // 
    // cs::array<T>* GameObject::GetComponentsInParent3(bool includeInactive) { return method_call(GetComponentsInParent3, includeInactive); }  // 0x0 // 
    // cs::array<T>* GameObject::GetComponentsInParent4() { return method_call(GetComponentsInParent4); }  // 0x0 // 
    // bool GameObject::TryGetComponent(/*out*/ T component) { return method_call(TryGetComponent, component); }  // 0x0 // 
    bool GameObject::TryGetComponent1(System::Type* type, /*out*/ UnityEngine::Component* component) { return method_call(TryGetComponent1, type, component); }  // 0x73E1C0 // 
    UnityEngine::Component* GameObject::TryGetComponentInternal(System::Type* type) { return method_call(TryGetComponentInternal, type); }  // 0x73E190 // 
    void GameObject::TryGetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue) { return method_call(TryGetComponentFastPath, type, oneFurtherThanResultValue); }  // 0x73E160 // 
    UnityEngine::GameObject* GameObject::FindWithTag(cs::string* tag) { return method_call(FindWithTag, tag); }  // 0x73DA40 // 
    void GameObject::SendMessageUpwards(cs::string* methodName, UnityEngine::SendMessageOptions options) { return method_call(SendMessageUpwards, methodName, options); }  // 0x73E000 // 
    void GameObject::SendMessage(cs::string* methodName, UnityEngine::SendMessageOptions options) { return method_call(SendMessage, methodName, options); }  // 0x73E030 // 
    void GameObject::BroadcastMessage(cs::string* methodName, UnityEngine::SendMessageOptions options) { return method_call(BroadcastMessage, methodName, options); }  // 0x73D9B0 // 
    UnityEngine::Component* GameObject::AddComponentInternal(cs::string* className) { return method_call(AddComponentInternal, className); }  // 0x73D8B0 // 
    UnityEngine::Component* GameObject::Internal_AddComponentWithType(System::Type* componentType) { return method_call(Internal_AddComponentWithType, componentType); }  // 0x73D8E0 // 
    UnityEngine::Component* GameObject::AddComponent(System::Type* componentType) { return method_call(AddComponent, componentType); }  // 0x73D8E0 // 
    // T GameObject::AddComponent1() { return method_call(AddComponent1); }  // 0x0 // 
    UnityEngine::Transform* GameObject::get_transform() { return method_call(get_transform); }  // 0x73E600 // 
    int GameObject::get_layer() { return method_call(get_layer); }  // 0x73E500 // 
    void GameObject::set_layer(int value) { return method_call(set_layer, value); }  // 0x73E690 // 
    bool GameObject::get_active() { return method_call(get_active); }  // 0x73E470 // 
    void GameObject::set_active(bool value) { return method_call(set_active, value); }  // 0x73E630 // 
    void GameObject::SetActive(bool value) { return method_call(SetActive, value); }  // 0x73E130 // 
    bool GameObject::get_activeSelf() { return method_call(get_activeSelf); }  // 0x73E440 // 
    bool GameObject::get_activeInHierarchy() { return method_call(get_activeInHierarchy); }  // 0x73E410 // 
    void GameObject::SetActiveRecursively(bool state) { return method_call(SetActiveRecursively, state); }  // 0x73E100 // 
    bool GameObject::get_isStatic() { return method_call(get_isStatic); }  // 0x73E4D0 // 
    void GameObject::set_isStatic(bool value) { return method_call(set_isStatic, value); }  // 0x73E660 // 
    bool GameObject::get_isStaticBatchable() { return method_call(get_isStaticBatchable); }  // 0x73E4A0 // 
    cs::string* GameObject::get_tag() { return method_call(get_tag); }  // 0x73E5D0 // 
    void GameObject::set_tag(cs::string* value) { return method_call(set_tag, value); }  // 0x73E6C0 // 
    bool GameObject::CompareTag(cs::string* tag) { return method_call(CompareTag, tag); }  // 0x73D9E0 // 
    UnityEngine::GameObject* GameObject::FindGameObjectWithTag(cs::string* tag) { return method_call(FindGameObjectWithTag, tag); }  // 0x73DA40 // 
    cs::array<UnityEngine::GameObject*>* GameObject::FindGameObjectsWithTag(cs::string* tag) { return method_call(FindGameObjectsWithTag, tag); }  // 0x73DA70 // 
    void GameObject::SendMessageUpwards1(cs::string* methodName, GameObject* value, UnityEngine::SendMessageOptions options) { return method_call(SendMessageUpwards1, methodName, value, options); }  // 0x73DF80 // 
    void GameObject::SendMessageUpwards2(cs::string* methodName, GameObject* value) { return method_call(SendMessageUpwards2, methodName, value); }  // 0x73DFC0 // 
    void GameObject::SendMessageUpwards3(cs::string* methodName) { return method_call(SendMessageUpwards3, methodName); }  // 0x73DF50 // 
    void GameObject::SendMessage1(cs::string* methodName, GameObject* value, UnityEngine::SendMessageOptions options) { return method_call(SendMessage1, methodName, value, options); }  // 0x73E0C0 // 
    void GameObject::SendMessage2(cs::string* methodName, GameObject* value) { return method_call(SendMessage2, methodName, value); }  // 0x73E090 // 
    void GameObject::SendMessage3(cs::string* methodName) { return method_call(SendMessage3, methodName); }  // 0x73E060 // 
    void GameObject::BroadcastMessage1(cs::string* methodName, GameObject* parameter, UnityEngine::SendMessageOptions options) { return method_call(BroadcastMessage1, methodName, parameter, options); }  // 0x73D940 // 
    void GameObject::BroadcastMessage2(cs::string* methodName, GameObject* parameter) { return method_call(BroadcastMessage2, methodName, parameter); }  // 0x73D910 // 
    void GameObject::BroadcastMessage3(cs::string* methodName) { return method_call(BroadcastMessage3, methodName); }  // 0x73D980 // 
    void GameObject::ctor(cs::string* name) { return method_call(ctor, name); }  // 0x73E390 // 
    void GameObject::ctor1() { return method_call(ctor1); }  // 0x73E320 // 
    void GameObject::ctor2(cs::string* name, cs::array<System::Type*>* components) { return method_call(ctor2, name, components); }  // 0x73E240 // 
    void GameObject::Internal_CreateGameObject(UnityEngine::GameObject* self, cs::string* name) { return method_call(Internal_CreateGameObject, self, name); }  // 0x73DF20 // 
    UnityEngine::GameObject* GameObject::Find(cs::string* name) { return method_call(Find, name); }  // 0x73DAA0 // 
    UnityEngine::SceneManagement::Scene GameObject::get_scene() { return method_call(get_scene); }  // 0x73E590 // 
    unsigned long GameObject::get_sceneCullingMask() { return method_call(get_sceneCullingMask); }  // 0x73E530 // 
    UnityEngine::GameObject* GameObject::get_gameObject() { return method_call(get_gameObject); }  // 0x2E5C20 // 
    void GameObject::get_scene_Injected(/*out*/ UnityEngine::SceneManagement::Scene ret) { return method_call(get_scene_Injected, ret); }  // 0x73E560 // 

};


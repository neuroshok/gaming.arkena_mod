//au/UnityEngine/GameObject
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/PrimitiveType.hpp>
namespace UnityEngine{ struct Component; }
namespace System{ struct Type; }
#include <cs/string.hpp>
namespace System{ struct Array; }
struct object;
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
#include <au/UnityEngine/SendMessageOptions.hpp>
namespace UnityEngine{ struct Transform; }
#include <au/UnityEngine/SceneManagement/Scene.hpp>


namespace UnityEngine {
struct GameObject : ark::meta<GameObject, UnityEngine::Object>
{
ark_meta("UnityEngine", "GameObject", "");

    // Methods

    UnityEngine::GameObject* CreatePrimitive(UnityEngine::PrimitiveType type); // 0x73DA10 // public static 
    // T GetComponent(); // 0x0 // public 
    UnityEngine::Component* GetComponent1(System::Type* type); // 0x73DBF0 // public 
    void GetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue); // 0x73DB00 // internal 
    UnityEngine::Component* GetComponentByName(cs::string* type); // 0x73DAD0 // internal 
    UnityEngine::Component* GetComponent2(cs::string* type); // 0x73DAD0 // public 
    UnityEngine::Component* GetComponentInChildren(System::Type* type, bool includeInactive); // 0x73DB30 // public 
    UnityEngine::Component* GetComponentInChildren1(System::Type* type); // 0x73DB60 // public 
    // T GetComponentInChildren2(); // 0x0 // public 
    // T GetComponentInChildren3(bool includeInactive); // 0x0 // public 
    UnityEngine::Component* GetComponentInParent(System::Type* type, bool includeInactive); // 0x73DB90 // public 
    UnityEngine::Component* GetComponentInParent1(System::Type* type); // 0x73DBC0 // public 
    // T GetComponentInParent2(); // 0x0 // public 
    // T GetComponentInParent3(bool includeInactive); // 0x0 // public 
    System::Array* GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, GameObject* resultList); // 0x73DE20 // private 
    cs::array<UnityEngine::Component*>* GetComponents(System::Type* type); // 0x73DEA0 // public 
    // cs::array<T>* GetComponents1(); // 0x0 // public 
    void GetComponents2(System::Type* type, System::Collections::Generic::List<UnityEngine::Component>* results); // 0x73DE60 // public 
    // void GetComponents3(System::Collections::Generic::List<T>* results); // 0x0 // public 
    cs::array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* type); // 0x73DC20 // public 
    cs::array<UnityEngine::Component*>* GetComponentsInChildren1(System::Type* type, bool includeInactive); // 0x73DCA0 // public 
    // cs::array<T>* GetComponentsInChildren2(bool includeInactive); // 0x0 // public 
    // void GetComponentsInChildren3(bool includeInactive, System::Collections::Generic::List<T>* results); // 0x0 // public 
    // cs::array<T>* GetComponentsInChildren4(); // 0x0 // public 
    // void GetComponentsInChildren5(System::Collections::Generic::List<T>* results); // 0x0 // public 
    cs::array<UnityEngine::Component*>* GetComponentsInParent(System::Type* type); // 0x73DD20 // public 
    cs::array<UnityEngine::Component*>* GetComponentsInParent1(System::Type* type, bool includeInactive); // 0x73DDA0 // public 
    // void GetComponentsInParent2(bool includeInactive, System::Collections::Generic::List<T>* results); // 0x0 // public 
    // cs::array<T>* GetComponentsInParent3(bool includeInactive); // 0x0 // public 
    // cs::array<T>* GetComponentsInParent4(); // 0x0 // public 
    // bool TryGetComponent(/*out*/ T component); // 0x0 // public 
    bool TryGetComponent1(System::Type* type, /*out*/ UnityEngine::Component* component); // 0x73E1C0 // public 
    UnityEngine::Component* TryGetComponentInternal(System::Type* type); // 0x73E190 // internal 
    void TryGetComponentFastPath(System::Type* type, intptr_t oneFurtherThanResultValue); // 0x73E160 // internal 
    UnityEngine::GameObject* FindWithTag(cs::string* tag); // 0x73DA40 // public static 
    void SendMessageUpwards(cs::string* methodName, UnityEngine::SendMessageOptions options); // 0x73E000 // public 
    void SendMessage(cs::string* methodName, UnityEngine::SendMessageOptions options); // 0x73E030 // public 
    void BroadcastMessage(cs::string* methodName, UnityEngine::SendMessageOptions options); // 0x73D9B0 // public 
    UnityEngine::Component* AddComponentInternal(cs::string* className); // 0x73D8B0 // internal 
    UnityEngine::Component* Internal_AddComponentWithType(System::Type* componentType); // 0x73D8E0 // private 
    UnityEngine::Component* AddComponent(System::Type* componentType); // 0x73D8E0 // public 
    // T AddComponent1(); // 0x0 // public 
    UnityEngine::Transform* get_transform(); // 0x73E600 // public 
    int get_layer(); // 0x73E500 // public 
    void set_layer(int value); // 0x73E690 // public 
    bool get_active(); // 0x73E470 // public 
    void set_active(bool value); // 0x73E630 // public 
    void SetActive(bool value); // 0x73E130 // public 
    bool get_activeSelf(); // 0x73E440 // public 
    bool get_activeInHierarchy(); // 0x73E410 // public 
    void SetActiveRecursively(bool state); // 0x73E100 // public 
    bool get_isStatic(); // 0x73E4D0 // public 
    void set_isStatic(bool value); // 0x73E660 // public 
    bool get_isStaticBatchable(); // 0x73E4A0 // internal 
    cs::string* get_tag(); // 0x73E5D0 // public 
    void set_tag(cs::string* value); // 0x73E6C0 // public 
    bool CompareTag(cs::string* tag); // 0x73D9E0 // public 
    UnityEngine::GameObject* FindGameObjectWithTag(cs::string* tag); // 0x73DA40 // public static 
    cs::array<UnityEngine::GameObject*>* FindGameObjectsWithTag(cs::string* tag); // 0x73DA70 // public static 
    void SendMessageUpwards1(cs::string* methodName, GameObject* value, UnityEngine::SendMessageOptions options); // 0x73DF80 // public 
    void SendMessageUpwards2(cs::string* methodName, GameObject* value); // 0x73DFC0 // public 
    void SendMessageUpwards3(cs::string* methodName); // 0x73DF50 // public 
    void SendMessage1(cs::string* methodName, GameObject* value, UnityEngine::SendMessageOptions options); // 0x73E0C0 // public 
    void SendMessage2(cs::string* methodName, GameObject* value); // 0x73E090 // public 
    void SendMessage3(cs::string* methodName); // 0x73E060 // public 
    void BroadcastMessage1(cs::string* methodName, GameObject* parameter, UnityEngine::SendMessageOptions options); // 0x73D940 // public 
    void BroadcastMessage2(cs::string* methodName, GameObject* parameter); // 0x73D910 // public 
    void BroadcastMessage3(cs::string* methodName); // 0x73D980 // public 
    void ctor(cs::string* name); // 0x73E390 // public 
    void ctor1(); // 0x73E320 // public 
    void ctor2(cs::string* name, cs::array<System::Type*>* components); // 0x73E240 // public 
    void Internal_CreateGameObject(UnityEngine::GameObject* self, cs::string* name); // 0x73DF20 // private static 
    UnityEngine::GameObject* Find(cs::string* name); // 0x73DAA0 // public static 
    UnityEngine::SceneManagement::Scene get_scene(); // 0x73E590 // public 
    unsigned long get_sceneCullingMask(); // 0x73E530 // public 
    UnityEngine::GameObject* get_gameObject(); // 0x2E5C20 // public 
    void get_scene_Injected(/*out*/ UnityEngine::SceneManagement::Scene ret); // 0x73E560 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::GameObject>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::GameObject::CreatePrimitive> () { return 0x73DA10; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponent1> () { return 0x73DBF0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentFastPath> () { return 0x73DB00; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentByName> () { return 0x73DAD0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponent2> () { return 0x73DAD0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentInChildren> () { return 0x73DB30; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentInChildren1> () { return 0x73DB60; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentInParent> () { return 0x73DB90; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentInParent1> () { return 0x73DBC0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentsInternal> () { return 0x73DE20; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponents> () { return 0x73DEA0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponents2> () { return 0x73DE60; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentsInChildren> () { return 0x73DC20; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentsInChildren1> () { return 0x73DCA0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentsInParent> () { return 0x73DD20; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::GetComponentsInParent1> () { return 0x73DDA0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::TryGetComponent1> () { return 0x73E1C0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::TryGetComponentInternal> () { return 0x73E190; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::TryGetComponentFastPath> () { return 0x73E160; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::FindWithTag> () { return 0x73DA40; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessageUpwards> () { return 0x73E000; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessage> () { return 0x73E030; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::BroadcastMessage> () { return 0x73D9B0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::AddComponentInternal> () { return 0x73D8B0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::Internal_AddComponentWithType> () { return 0x73D8E0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::AddComponent> () { return 0x73D8E0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_transform> () { return 0x73E600; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_layer> () { return 0x73E500; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::set_layer> () { return 0x73E690; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_active> () { return 0x73E470; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::set_active> () { return 0x73E630; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SetActive> () { return 0x73E130; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_activeSelf> () { return 0x73E440; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_activeInHierarchy> () { return 0x73E410; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SetActiveRecursively> () { return 0x73E100; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_isStatic> () { return 0x73E4D0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::set_isStatic> () { return 0x73E660; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_isStaticBatchable> () { return 0x73E4A0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_tag> () { return 0x73E5D0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::set_tag> () { return 0x73E6C0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::CompareTag> () { return 0x73D9E0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::FindGameObjectWithTag> () { return 0x73DA40; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::FindGameObjectsWithTag> () { return 0x73DA70; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessageUpwards1> () { return 0x73DF80; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessageUpwards2> () { return 0x73DFC0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessageUpwards3> () { return 0x73DF50; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessage1> () { return 0x73E0C0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessage2> () { return 0x73E090; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::SendMessage3> () { return 0x73E060; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::BroadcastMessage1> () { return 0x73D940; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::BroadcastMessage2> () { return 0x73D910; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::BroadcastMessage3> () { return 0x73D980; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::ctor> () { return 0x73E390; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::ctor1> () { return 0x73E320; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::ctor2> () { return 0x73E240; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::Internal_CreateGameObject> () { return 0x73DF20; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::Find> () { return 0x73DAA0; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_scene> () { return 0x73E590; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_sceneCullingMask> () { return 0x73E530; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_gameObject> () { return 0x2E5C20; }
    template<> inline uintptr_t rva<&UnityEngine::GameObject::get_scene_Injected> () { return 0x73E560; }
} // ark::method_info
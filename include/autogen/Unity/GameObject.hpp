#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/GameObject.hpp>

namespace Unity
{
    struct Component;

    struct GameObject : ark::meta<GameObject, Object> // TypeDefIndex: 5421
    {
        ark_meta("UnityEngine", "GameObject");

        Component* GetComponent(struct Type* type) { return method_call(GetComponent, type); } // 0xC04670
        void GetComponentFastPath(struct Type* type, struct IntPtr* oneFurtherThanResultValue)
        {
            return method_call(GetComponentFastPath, type, oneFurtherThanResultValue);
        } // 0xC045E0
        Component* GetComponentInChildren(struct Type* type, bool includeInactive)
        {
            return method_call(GetComponentInChildren, type, includeInactive);
        } // 0xC04610

        Component* GetComponentInParent(struct Type* type) { return method_call(GetComponentInParent, type); } // 0xC04640
        struct Array* GetComponentsInternal(struct Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive,
                                            bool reverse, struct object* resultList)
        {
            return method_call(GetComponentsInternal, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
        } // 0xC046A0

        Component* Internal_AddComponentWithType(struct Type* componentType)
        {
            return method_call(Internal_AddComponentWithType, componentType);
        }                                                                                                        // 0xC04580
        Component* AddComponent(struct Type* componentType) { return method_call(AddComponent, componentType); } // 0xC04580

        struct Transform* get_transform() { return method_call(get_transform, ); }    // 0xC04A10
        std::int32_t get_layer() { return method_call(get_layer, ); }                 // 0xC049B0
        void set_layer(std::int32_t value) { return method_call(set_layer, value); }  // 0xC04A40
        void SetActive(bool value) { return method_call(SetActive, value); }          // 0xC04750
        bool get_activeSelf() { return method_call(get_activeSelf, ); }               // 0xC04980
        bool get_activeInHierarchy() { return method_call(get_activeInHierarchy, ); } // 0xC04950
        struct string* get_tag() { return method_call(get_tag, ); }                   // 0xC049E0
        void SendMessage(struct string* methodName, struct object* value, struct SendMessageOptions* options)
        {
            return method_call(SendMessage, methodName, value, options);
        }                                                                                                            // 0xC04710
        //void _ctor(struct string* name) { return method_call(_ctor, name); }                                         // 0xC048D0
        //void _ctor() { return method_call(_ctor, ); }                                                                // 0xC04860
        //void _ctor(struct string* name, struct Type* /* array */ components) { return method_call(_ctor, name, components); } // 0xC04780
        void Internal_CreateGameObject(struct GameObject* self, struct string* name)
        {
            return method_call(Internal_CreateGameObject, self, name);
        }                                                                                // 0xC046E0
        struct GameObject* Find(struct string* name) { return method_call(Find, name); } // 0xC045B0
        struct GameObject* get_gameObject() { return method_call(get_gameObject, ); }    // 0x1C7F90
    };
}

namespace ark::method_info
{
    method_rva(Unity::GameObject::GetComponent, 0xC04670)
    method_rva(Unity::GameObject::GetComponentFastPath, 0xC045E0)
    method_rva(Unity::GameObject::GetComponentInChildren, 0xC04610)

    method_rva(Unity::GameObject::GetComponentInParent, 0xC04640)
    method_rva(Unity::GameObject::GetComponentsInternal, 0xC046A0)

    method_rva(Unity::GameObject::Internal_AddComponentWithType, 0xC04580)
    method_rva(Unity::GameObject::AddComponent, 0xC04580)

    method_rva(Unity::GameObject::get_transform, 0xC04A10)
    method_rva(Unity::GameObject::get_layer, 0xC049B0)
    method_rva(Unity::GameObject::set_layer, 0xC04A40)
    method_rva(Unity::GameObject::SetActive, 0xC04750)
    method_rva(Unity::GameObject::get_activeSelf, 0xC04980)
    method_rva(Unity::GameObject::get_activeInHierarchy, 0xC04950)
    method_rva(Unity::GameObject::get_tag, 0xC049E0)
    method_rva(Unity::GameObject::SendMessage, 0xC04710)
    //method_rva(Unity::GameObject::_ctor, 0xC048D0)
    //method_rva(Unity::GameObject::_ctor, 0xC04860)
    //method_rva(Unity::GameObject::_ctor, 0xC04780)
    method_rva(Unity::GameObject::Internal_CreateGameObject, 0xC046E0)
    method_rva(Unity::GameObject::Find, 0xC045B0)
    method_rva(Unity::GameObject::get_gameObject, 0x1C7F90)
    }
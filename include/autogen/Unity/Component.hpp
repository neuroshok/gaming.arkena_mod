#pragma once

#include <autogen/Unity/Object.hpp>
#include <autogen/Unity/GameObject.hpp>

#include <cs/string.hpp>
#include <cs/type.hpp>
#include <autogen/System/Collections/Generic/List.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

namespace Unity
{
    struct Transform;

    struct Component : ark::meta<Component, Object>
    {
        ark_meta("UnityEngine", "Component", "");

        template<class T> T* get_component() { return static_cast<T*>(GetComponent(cs::get_type<T>())); }

        Transform* get_transform() { return method_call(get_transform); }                   // 0xC025A0
        GameObject* get_gameObject() { return method_call(get_gameObject); }                // 0xC02510
        Component* GetComponent(cs::type* type) { return method_call(GetComponent, type); } // 0xC02410
        void GetComponentFastPath(cs::type* type, struct IntPtr* oneFurtherThanResultValue)
        {
            return method_call(GetComponentFastPath, type, oneFurtherThanResultValue);
        } // 0xC02320

        Component* GetComponentInChildren(cs::type* t, bool includeInactive)
        {
            return method_call(GetComponentInChildren, t, includeInactive);
        } // 0xC02350

        Component* GetComponentInParent(cs::type* t) { return method_call(GetComponentInParent, t); } // 0xC023B0

        void GetComponentsForListInternal(cs::type* searchType, struct object* resultList)
        {
            return method_call(GetComponentsForListInternal, searchType, resultList);
        }                                                                                                                  // 0xC02470
        void GetComponents(cs::type* type, List<Component>* results) { return method_call(GetComponents, type, results); } // 0xC02470

        cs::string* get_tag() { return method_call(get_tag); } // 0xC02540

        void SendMessageUpwards(cs::string* methodName, struct object* value, struct SendMessageOptions* options)
        {
            return method_call(SendMessageUpwards, methodName, value, options);
        } // 0xC024D0
        // void SendMessageUpwards(cs::string* methodName, struct SendMessageOptions* options) { return method_call(SendMessageUpwards, methodName,
        // options); } // 0xC024A0
        void _ctor() { return method_call(_ctor); } // 0xC00080
    };

} // namespace Unity

namespace ark::method_info
{

    method_rva(Unity::Component::get_transform, 0xC025A0) method_rva(Unity::Component::get_gameObject, 0xC02510)
    method_rva(Unity::Component::GetComponent, 0xC02410) method_rva(Unity::Component::GetComponentFastPath, 0xC02320)
    method_rva(Unity::Component::GetComponentInChildren, 0xC02350) method_rva(Unity::Component::GetComponentInParent, 0xC023B0)
    method_rva(Unity::Component::GetComponentsForListInternal, 0xC02470) method_rva(Unity::Component::GetComponents, 0xC02470)
    method_rva(Unity::Component::get_tag, 0xC02540) method_rva(Unity::Component::SendMessageUpwards, 0xC024D0)
    // method_rva(Unity::Component::SendMessageUpwards, 0xC024A0)
    method_rva(Unity::Component::_ctor, 0xC00080)
}
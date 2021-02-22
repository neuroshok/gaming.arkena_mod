#pragma once

#include <ark/class.hpp>
#include <il2cpp/core.hpp>

namespace Unity
{

    struct Object : ark::meta<Object, il2cpp::Il2CppObject> // TypeDefIndex: 5440
    {
        ark_meta("UnityEngine", "Object");

        struct IntPtr* m_CachedPtr;                              // 0x8
        static std::int32_t OffsetOfInstanceIDInCPlusPlusObject; // 0x0

        std::int32_t GetInstanceID() { return method_call(GetInstanceID, ); } // 0xB81F30
        // virtual // std::int32_t GetHashCode() { return method_call(GetHashCode, ); } // 0x4DF720 // Slot: 2
        // virtual // bool Equals(Object* other) { return method_call(Equals, other); } // 0xB81BD0 // Slot: 0
        //bool op_Implicit(Object* exists) { return method_call(op_Implicit, exists); }                           // 0xB82CF0
        bool CompareBaseObjects(Object* lhs, Object* rhs) { return method_call(CompareBaseObjects, lhs, rhs); } // 0xB81940
        bool IsNativeObjectAlive(Object* o) { return method_call(IsNativeObjectAlive, o); }                     // 0xB82A00
        struct IntPtr* GetCachedPtr() { return method_call(GetCachedPtr, ); }                                   // 0x1D3AD0
        struct string* get_name() { return method_call(get_name, ); }                                           // 0xB82B40
        void set_name(struct string* value) { return method_call(set_name, value); }                            // 0xB82F20
        // Object* Instantiate(Object* original, struct Vector3* position, struct Quaternion* rotation) { return method_call(Instantiate, original, position, rotation); } // 0xB82680
        Object* Instantiate(Object* original) { return method_call(Instantiate, original); } // 0xB820A0
        // Object* Instantiate(Object* original, struct Transform* parent, bool instantiateInWorldSpace) { return method_call(Instantiate, original, parent, instantiateInWorldSpace); } // 0xB82240 void Destroy(Object* obj, float t) { return method_call(Destroy, obj, t); } // 0xB81AF0
        void Destroy(Object* obj) { return method_call(Destroy, obj); } // 0xB81B30
        // void DestroyImmediate(Object* obj, bool allowDestroyingAssets) { return method_call(DestroyImmediate, obj, allowDestroyingAssets); } // 0xB81AC0
        void DestroyImmediate(Object* obj) { return method_call(DestroyImmediate, obj); }             // 0xB81A50
        Object* FindObjectsOfType(struct Type* type) { return method_call(FindObjectsOfType, type); } // 0xB81F00
        void DontDestroyOnLoad(Object* target) { return method_call(DontDestroyOnLoad, target); }     // 0xB81BA0
        void set_hideFlags(struct HideFlags* value) { return method_call(set_hideFlags, value); }     // 0xB82EF0
        // RVA: -1 Offset: -1	struct T* FindObjectsOfType<T>() { return method_call(FindObjectsOfType<T>, ); } // 0xB82EF0
        /* GenericInstMethod :
        |
        |-RVA: 0x163A310 Offset: 0x1638B10 VA: 0x1163A310
        */
        // RVA: -1 Offset: -1	struct T* FindObjectOfType<T>() { return method_call(FindObjectOfType<T>, ); } // 0xB82EF0
        /* GenericInstMethod :
        |
        |-RVA: 0x3290E0 Offset: 0x3278E0 VA: 0x103290E0
        */
        void CheckNullArgument(Object* arg, struct string* message) { return method_call(CheckNullArgument, arg, message); } // 0xB818E0
        Object* FindObjectOfType(struct Type* type) { return method_call(FindObjectOfType, type); }                          // 0xB81E80
        // virtual // struct string* ToString() { return method_call(ToString, ); } // 0xB82A70 // Slot: 3
        bool op_Equality(Object* x, Object* y) { return method_call(op_Equality, x, y); }                                       // 0xB82BB0
        bool op_Inequality(Object* x, Object* y) { return method_call(op_Inequality, x, y); }                                   // 0xB82DB0
        std::int32_t GetOffsetOfInstanceIDInCPlusPlusObject() { return method_call(GetOffsetOfInstanceIDInCPlusPlusObject, ); } // 0xB82080
        Object* Internal_CloneSingle(Object* data) { return method_call(Internal_CloneSingle, data); }                          // 0xB82930
        Object* Internal_CloneSingleWithParent(Object* data, struct Transform* parent, bool worldPositionStays)
        {
            return method_call(Internal_CloneSingleWithParent, data, parent, worldPositionStays);
        } // 0xB82900
        Object* Internal_InstantiateSingle(Object* data, struct Vector3* pos, struct Quaternion* rot)
        {
            return method_call(Internal_InstantiateSingle, data, pos, rot);
        }                                                                                                                       // 0xB82990
        struct string* ToString(Object* obj) { return method_call(ToString, obj); }                                             // 0xB82AE0
        struct string* GetName(Object* obj) { return method_call(GetName, obj); }                                               // 0xB82050
        void SetName(Object* obj, struct string* name) { return method_call(SetName, obj, name); }                              // 0xB82A40
        Object* FindObjectFromInstanceID(std::int32_t instanceID) { return method_call(FindObjectFromInstanceID, instanceID); } // 0xB81E50
        void _ctor() { return method_call(_ctor, ); }                                                                           // 0x1D5CB0
        void _cctor() { return method_call(_cctor, ); }                                                                         // 0xB82B10
        Object* Internal_InstantiateSingle_Injected(Object* data, struct Vector3* pos, struct Quaternion* rot)
        {
            return method_call(Internal_InstantiateSingle_Injected, data, pos, rot);
        } // 0xB82960
    };
}

namespace ark::method_info
{

	//method_rva(Unity::Object::GetInstanceID, 0xB81F30)
        //method_rva(Unity::Object::GetHashCode, 0x4DF720)
	//method_rva(Unity::Object::Equals, 0xB81BD0)
	//method_rva(Unity::Object::op_Implicit, 0xB82CF0)
	method_rva(Unity::Object::CompareBaseObjects, 0xB81940)
	method_rva(Unity::Object::IsNativeObjectAlive, 0xB82A00)
	method_rva(Unity::Object::GetCachedPtr, 0x1D3AD0)
	method_rva(Unity::Object::get_name, 0xB82B40)
	method_rva(Unity::Object::set_name, 0xB82F20)
	method_rva(Unity::Object::Instantiate, 0xB82680)
	//method_rva(Unity::Object::Instantiate, 0xB820A0)
	//method_rva(Unity::Object::Instantiate, 0xB82240)
	method_rva(Unity::Object::Destroy, 0xB81AF0)
	//method_rva(Unity::Object::Destroy, 0xB81B30)
	method_rva(Unity::Object::DestroyImmediate, 0xB81AC0)
	//method_rva(Unity::Object::DestroyImmediate, 0xB81A50)
	method_rva(Unity::Object::FindObjectsOfType, 0xB81F00)
	method_rva(Unity::Object::DontDestroyOnLoad, 0xB81BA0)
	method_rva(Unity::Object::set_hideFlags, 0xB82EF0)
	//method_rva(Unity::Object::FindObjectsOfType<T>, 0xB82EF0)
	//method_rva(Unity::Object::FindObjectOfType<T>, 0xB82EF0)
	method_rva(Unity::Object::CheckNullArgument, 0xB818E0)
	method_rva(Unity::Object::FindObjectOfType, 0xB81E80)
	// method_rva(Unity::Object::ToString, 0xB82A70)
	method_rva(Unity::Object::op_Equality, 0xB82BB0)
	method_rva(Unity::Object::op_Inequality, 0xB82DB0)
	method_rva(Unity::Object::GetOffsetOfInstanceIDInCPlusPlusObject, 0xB82080)
	method_rva(Unity::Object::Internal_CloneSingle, 0xB82930)
	method_rva(Unity::Object::Internal_CloneSingleWithParent, 0xB82900)
	method_rva(Unity::Object::Internal_InstantiateSingle, 0xB82990)
	method_rva(Unity::Object::ToString, 0xB82AE0)
	method_rva(Unity::Object::GetName, 0xB82050)
	method_rva(Unity::Object::SetName, 0xB82A40)
	method_rva(Unity::Object::FindObjectFromInstanceID, 0xB81E50)
	method_rva(Unity::Object::_ctor, 0x1D5CB0)
	method_rva(Unity::Object::_cctor, 0xB82B10)
	method_rva(Unity::Object::Internal_InstantiateSingle_Injected, 0xB82960)
}

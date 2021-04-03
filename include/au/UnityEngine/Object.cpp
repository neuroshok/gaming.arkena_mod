#include <au/UnityEngine/Object.hpp>

namespace UnityEngine {

    // Methods

    int Object::GetInstanceID() { return method_call(GetInstanceID); }  // 0x6802F0 // 
    int Object::GetHashCode() { return method_call(GetHashCode); }  // 0x64F6E0 // 
    bool Object::Equals(Object* other) { return method_call(Equals, other); }  // 0x67FE90 // 
    bool Object::op_Implicit(UnityEngine::Object* exists) { return method_call(op_Implicit, exists); }  // 0x681390 // 
    bool Object::CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs) { return method_call(CompareBaseObjects, lhs, rhs); }  // 0x67FC10 // 
    bool Object::IsNativeObjectAlive(UnityEngine::Object* o) { return method_call(IsNativeObjectAlive, o); }  // 0x681070 // 
    intptr_t Object::GetCachedPtr() { return method_call(GetCachedPtr); }  // 0x266480 // 
    cs::string* Object::get_name() { return method_call(get_name); }  // 0x6811E0 // 
    void Object::set_name(cs::string* value) { return method_call(set_name, value); }  // 0x6815C0 // 
    UnityEngine::Object* Object::Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return method_call(Instantiate, original, position, rotation); }  // 0x680C10 // 
    UnityEngine::Object* Object::Instantiate1(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) { return method_call(Instantiate1, original, position, rotation, parent); }  // 0x680460 // 
    UnityEngine::Object* Object::Instantiate2(UnityEngine::Object* original) { return method_call(Instantiate2, original); }  // 0x6807A0 // 
    UnityEngine::Object* Object::Instantiate3(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace) { return method_call(Instantiate3, original, parent, instantiateInWorldSpace); }  // 0x680950 // 
    // T Object::Instantiate4(T original) { return method_call(Instantiate4, original); }  // 0x0 // 
    // T Object::Instantiate5(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return method_call(Instantiate5, original, position, rotation); }  // 0x0 // 
    // T Object::Instantiate6(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) { return method_call(Instantiate6, original, position, rotation, parent); }  // 0x0 // 
    // T Object::Instantiate7(T original, UnityEngine::Transform* parent) { return method_call(Instantiate7, original, parent); }  // 0x0 // 
    // T Object::Instantiate8(T original, UnityEngine::Transform* parent, bool worldPositionStays) { return method_call(Instantiate8, original, parent, worldPositionStays); }  // 0x0 // 
    void Object::Destroy(UnityEngine::Object* obj, float t) { return method_call(Destroy, obj, t); }  // 0x67FE20 // 
    void Object::Destroy1(UnityEngine::Object* obj) { return method_call(Destroy1, obj); }  // 0x67FDB0 // 
    void Object::DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets) { return method_call(DestroyImmediate, obj, allowDestroyingAssets); }  // 0x67FD10 // 
    void Object::DestroyImmediate1(UnityEngine::Object* obj) { return method_call(DestroyImmediate1, obj); }  // 0x67FD40 // 
    cs::array<UnityEngine::Object*>* Object::FindObjectsOfType(System::Type* type) { return method_call(FindObjectsOfType, type); }  // 0x680280 // 
    cs::array<UnityEngine::Object*>* Object::FindObjectsOfType1(System::Type* type, bool includeInactive) { return method_call(FindObjectsOfType1, type, includeInactive); }  // 0x680250 // 
    void Object::DontDestroyOnLoad(UnityEngine::Object* target) { return method_call(DontDestroyOnLoad, target); }  // 0x67FE60 // 
    UnityEngine::HideFlags Object::get_hideFlags() { return method_call(get_hideFlags); }  // 0x6811B0 // 
    void Object::set_hideFlags(UnityEngine::HideFlags value) { return method_call(set_hideFlags, value); }  // 0x681590 // 
    // cs::array<T>* Object::FindObjectsOfType2() { return method_call(FindObjectsOfType2); }  // 0x0 // 
    // T Object::FindObjectOfType() { return method_call(FindObjectOfType); }  // 0x0 // 
    void Object::CheckNullArgument(Object* arg, cs::string* message) { return method_call(CheckNullArgument, arg, message); }  // 0x67FBD0 // 
    UnityEngine::Object* Object::FindObjectOfType1(System::Type* type) { return method_call(FindObjectOfType1, type); }  // 0x680150 // 
    UnityEngine::Object* Object::FindObjectOfType2(System::Type* type, bool includeInactive) { return method_call(FindObjectOfType2, type, includeInactive); }  // 0x6801D0 // 
    cs::string* Object::ToString() { return method_call(ToString); }  // 0x6810E0 // 
    bool Object::op_Equality(UnityEngine::Object* x, UnityEngine::Object* y) { return method_call(op_Equality, x, y); }  // 0x681250 // 
    bool Object::op_Inequality(UnityEngine::Object* x, UnityEngine::Object* y) { return method_call(op_Inequality, x, y); }  // 0x681450 // 
    int Object::GetOffsetOfInstanceIDInCPlusPlusObject() { return method_call(GetOffsetOfInstanceIDInCPlusPlusObject); }  // 0x680440 // 
    UnityEngine::Object* Object::Internal_CloneSingle(UnityEngine::Object* data) { return method_call(Internal_CloneSingle, data); }  // 0x680EF0 // 
    UnityEngine::Object* Object::Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays) { return method_call(Internal_CloneSingleWithParent, data, parent, worldPositionStays); }  // 0x680EC0 // 
    UnityEngine::Object* Object::Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return method_call(Internal_InstantiateSingle, data, pos, rot); }  // 0x681000 // 
    UnityEngine::Object* Object::Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) { return method_call(Internal_InstantiateSingleWithParent, data, parent, pos, rot); }  // 0x680F60 // 
    cs::string* Object::ToString1(UnityEngine::Object* obj) { return method_call(ToString1, obj); }  // 0x681150 // 
    cs::string* Object::GetName(UnityEngine::Object* obj) { return method_call(GetName, obj); }  // 0x680410 // 
    void Object::SetName(UnityEngine::Object* obj, cs::string* name) { return method_call(SetName, obj, name); }  // 0x6810B0 // 
    UnityEngine::Object* Object::FindObjectFromInstanceID(int instanceID) { return method_call(FindObjectFromInstanceID, instanceID); }  // 0x680120 // 
    void Object::ctor() { return method_call(ctor); }  // 0x266470 // 
    void Object::cctor() { return method_call(cctor); }  // 0x681180 // 
    UnityEngine::Object* Object::Internal_InstantiateSingle_Injected(UnityEngine::Object* data, /*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion rot) { return method_call(Internal_InstantiateSingle_Injected, data, pos, rot); }  // 0x680FD0 // 
    UnityEngine::Object* Object::Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, /*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion rot) { return method_call(Internal_InstantiateSingleWithParent_Injected, data, parent, pos, rot); }  // 0x680F20 // 

};


int UnityEngine::Object::OffsetOfInstanceIDInCPlusPlusObject() { return statics()->OffsetOfInstanceIDInCPlusPlusObject; }
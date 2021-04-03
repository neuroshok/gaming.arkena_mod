//au/UnityEngine/Object
#pragma once
#include <ark/class.hpp>
#include <cs/string.hpp>
struct object;
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>
namespace UnityEngine{ struct Transform; }
#include <cs/array.hpp>
namespace System{ struct Type; }
#include <au/UnityEngine/HideFlags.hpp>


namespace UnityEngine {
struct Object : ark::meta<Object, il2cpp::Il2CppObject>
{
ark_meta("UnityEngine", "Object", "");

    // Fields

    intptr_t m_CachedPtr; // 0x8
    static int OffsetOfInstanceIDInCPlusPlusObject(); // 0x0
    inline static constexpr const char* objectIsNullMessage = "The Object you want to instantiate is null.";

    inline static constexpr const char* cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";


    // Methods

    int GetInstanceID(); // 0x6802F0 // public 
    int GetHashCode(); // 0x64F6E0 // public override 
    bool Equals(Object* other); // 0x67FE90 // public override 
    bool op_Implicit(UnityEngine::Object* exists); // 0x681390 // public static 
    bool CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs); // 0x67FC10 // private static 
    bool IsNativeObjectAlive(UnityEngine::Object* o); // 0x681070 // private static 
    intptr_t GetCachedPtr(); // 0x266480 // private 
    cs::string* get_name(); // 0x6811E0 // public 
    void set_name(cs::string* value); // 0x6815C0 // public 
    UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation); // 0x680C10 // public static 
    UnityEngine::Object* Instantiate1(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent); // 0x680460 // public static 
    UnityEngine::Object* Instantiate2(UnityEngine::Object* original); // 0x6807A0 // public static 
    UnityEngine::Object* Instantiate3(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace); // 0x680950 // public static 
    // T Instantiate4(T original); // 0x0 // public static 
    // T Instantiate5(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation); // 0x0 // public static 
    // T Instantiate6(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent); // 0x0 // public static 
    // T Instantiate7(T original, UnityEngine::Transform* parent); // 0x0 // public static 
    // T Instantiate8(T original, UnityEngine::Transform* parent, bool worldPositionStays); // 0x0 // public static 
    void Destroy(UnityEngine::Object* obj, float t); // 0x67FE20 // public static 
    void Destroy1(UnityEngine::Object* obj); // 0x67FDB0 // public static 
    void DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets); // 0x67FD10 // public static 
    void DestroyImmediate1(UnityEngine::Object* obj); // 0x67FD40 // public static 
    cs::array<UnityEngine::Object*>* FindObjectsOfType(System::Type* type); // 0x680280 // public static 
    cs::array<UnityEngine::Object*>* FindObjectsOfType1(System::Type* type, bool includeInactive); // 0x680250 // public static 
    void DontDestroyOnLoad(UnityEngine::Object* target); // 0x67FE60 // public static 
    UnityEngine::HideFlags get_hideFlags(); // 0x6811B0 // public 
    void set_hideFlags(UnityEngine::HideFlags value); // 0x681590 // public 
    // cs::array<T>* FindObjectsOfType2(); // 0x0 // public static 
    // T FindObjectOfType(); // 0x0 // public static 
    void CheckNullArgument(Object* arg, cs::string* message); // 0x67FBD0 // private static 
    UnityEngine::Object* FindObjectOfType1(System::Type* type); // 0x680150 // public static 
    UnityEngine::Object* FindObjectOfType2(System::Type* type, bool includeInactive); // 0x6801D0 // public static 
    cs::string* ToString(); // 0x6810E0 // public override 
    bool op_Equality(UnityEngine::Object* x, UnityEngine::Object* y); // 0x681250 // public static 
    bool op_Inequality(UnityEngine::Object* x, UnityEngine::Object* y); // 0x681450 // public static 
    int GetOffsetOfInstanceIDInCPlusPlusObject(); // 0x680440 // private static 
    UnityEngine::Object* Internal_CloneSingle(UnityEngine::Object* data); // 0x680EF0 // private static 
    UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays); // 0x680EC0 // private static 
    UnityEngine::Object* Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot); // 0x681000 // private static 
    UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot); // 0x680F60 // private static 
    cs::string* ToString1(UnityEngine::Object* obj); // 0x681150 // private static 
    cs::string* GetName(UnityEngine::Object* obj); // 0x680410 // private static 
    void SetName(UnityEngine::Object* obj, cs::string* name); // 0x6810B0 // private static 
    UnityEngine::Object* FindObjectFromInstanceID(int instanceID); // 0x680120 // internal static 
    void ctor(); // 0x266470 // public 
    void cctor(); // 0x681180 // private static 
    UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine::Object* data, /*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion rot); // 0x680FD0 // private static 
    UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, /*ref*/ UnityEngine::Vector3 pos, /*ref*/ UnityEngine::Quaternion rot); // 0x680F20 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Object>
{
    int OffsetOfInstanceIDInCPlusPlusObject;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Object::GetInstanceID> () { return 0x6802F0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::GetHashCode> () { return 0x64F6E0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Equals> () { return 0x67FE90; }
    template<> inline uintptr_t rva<&UnityEngine::Object::op_Implicit> () { return 0x681390; }
    template<> inline uintptr_t rva<&UnityEngine::Object::CompareBaseObjects> () { return 0x67FC10; }
    template<> inline uintptr_t rva<&UnityEngine::Object::IsNativeObjectAlive> () { return 0x681070; }
    template<> inline uintptr_t rva<&UnityEngine::Object::GetCachedPtr> () { return 0x266480; }
    template<> inline uintptr_t rva<&UnityEngine::Object::get_name> () { return 0x6811E0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::set_name> () { return 0x6815C0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Instantiate> () { return 0x680C10; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Instantiate1> () { return 0x680460; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Instantiate2> () { return 0x6807A0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Instantiate3> () { return 0x680950; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Destroy> () { return 0x67FE20; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Destroy1> () { return 0x67FDB0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::DestroyImmediate> () { return 0x67FD10; }
    template<> inline uintptr_t rva<&UnityEngine::Object::DestroyImmediate1> () { return 0x67FD40; }
    template<> inline uintptr_t rva<&UnityEngine::Object::FindObjectsOfType> () { return 0x680280; }
    template<> inline uintptr_t rva<&UnityEngine::Object::FindObjectsOfType1> () { return 0x680250; }
    template<> inline uintptr_t rva<&UnityEngine::Object::DontDestroyOnLoad> () { return 0x67FE60; }
    template<> inline uintptr_t rva<&UnityEngine::Object::get_hideFlags> () { return 0x6811B0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::set_hideFlags> () { return 0x681590; }
    template<> inline uintptr_t rva<&UnityEngine::Object::CheckNullArgument> () { return 0x67FBD0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::FindObjectOfType1> () { return 0x680150; }
    template<> inline uintptr_t rva<&UnityEngine::Object::FindObjectOfType2> () { return 0x6801D0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::ToString> () { return 0x6810E0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::op_Equality> () { return 0x681250; }
    template<> inline uintptr_t rva<&UnityEngine::Object::op_Inequality> () { return 0x681450; }
    template<> inline uintptr_t rva<&UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject> () { return 0x680440; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_CloneSingle> () { return 0x680EF0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_CloneSingleWithParent> () { return 0x680EC0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_InstantiateSingle> () { return 0x681000; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_InstantiateSingleWithParent> () { return 0x680F60; }
    template<> inline uintptr_t rva<&UnityEngine::Object::ToString1> () { return 0x681150; }
    template<> inline uintptr_t rva<&UnityEngine::Object::GetName> () { return 0x680410; }
    template<> inline uintptr_t rva<&UnityEngine::Object::SetName> () { return 0x6810B0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::FindObjectFromInstanceID> () { return 0x680120; }
    template<> inline uintptr_t rva<&UnityEngine::Object::ctor> () { return 0x266470; }
    template<> inline uintptr_t rva<&UnityEngine::Object::cctor> () { return 0x681180; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_InstantiateSingle_Injected> () { return 0x680FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Object::Internal_InstantiateSingleWithParent_Injected> () { return 0x680F20; }
} // ark::method_info
//au/System/Object
#pragma once
#include <ark/class.hpp>
struct object;
namespace System{ struct Type; }
#include <cs/string.hpp>


namespace System {
struct Object : ark::meta<Object>
{
ark_meta("System", "Object", "");

    // Methods

    bool Equals(Object* obj); // 0x2E5C10 // public virtual 
    bool Equals1(Object* objA, Object* objB); // 0xAE9690 // public static 
    void ctor(); // 0x267200 // public 
    void Finalize(); // 0x267200 // protected virtual 
    int GetHashCode(); // 0xAE96D0 // public virtual 
    System::Type* GetType(); // 0xAE96E0 // public 
    object* MemberwiseClone(); // 0xAE96F0 // protected
    cs::string* ToString(); // 0xAE9700 // public virtual 
    bool ReferenceEquals(Object* objA, Object* objB); // 0x2E5C10 // public static 
    int InternalGetHashCode(Object* o); // 0xAE96D0 // internal static 
    void FieldGetter(cs::string* typeName, cs::string* fieldName, /*ref*/ Object* val); // 0x267200 // private 
    void FieldSetter(cs::string* typeName, cs::string* fieldName, Object* val); // 0x267200 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<System::Object>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&System::Object::Equals> () { return 0x2E5C10; }
    template<> inline uintptr_t rva<&System::Object::Equals1> () { return 0xAE9690; }
    template<> inline uintptr_t rva<&System::Object::ctor> () { return 0x267200; }
    template<> inline uintptr_t rva<&System::Object::Finalize> () { return 0x267200; }
    template<> inline uintptr_t rva<&System::Object::GetHashCode> () { return 0xAE96D0; }
    template<> inline uintptr_t rva<&System::Object::GetType> () { return 0xAE96E0; }
    template<> inline uintptr_t rva<&System::Object::MemberwiseClone> () { return 0xAE96F0; }
    template<> inline uintptr_t rva<&System::Object::ToString> () { return 0xAE9700; }
    template<> inline uintptr_t rva<&System::Object::ReferenceEquals> () { return 0x2E5C10; }
    template<> inline uintptr_t rva<&System::Object::InternalGetHashCode> () { return 0xAE96D0; }
    template<> inline uintptr_t rva<&System::Object::FieldGetter> () { return 0x267200; }
    template<> inline uintptr_t rva<&System::Object::FieldSetter> () { return 0x267200; }
} // ark::method_info
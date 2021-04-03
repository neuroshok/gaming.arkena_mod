#include <au/System/Object.hpp>

namespace System {

    // Methods

    bool Object::Equals(Object* obj) { return method_call(Equals, obj); }  // 0x2E5C10 // 
    bool Object::Equals1(Object* objA, Object* objB) { return method_call(Equals1, objA, objB); }  // 0xAE9690 // 
    void Object::ctor() { return method_call(ctor); }  // 0x267200 // 
    void Object::Finalize() { return method_call(Finalize); }  // 0x267200 // 
    int Object::GetHashCode() { return method_call(GetHashCode); }  // 0xAE96D0 // 
    System::Type* Object::GetType() { return method_call(GetType); }  // 0xAE96E0 // 
    object* Object::MemberwiseClone() { return method_call(MemberwiseClone); }  // 0xAE96F0 //
    cs::string* Object::ToString() { return method_call(ToString); }  // 0xAE9700 // 
    bool Object::ReferenceEquals(Object* objA, Object* objB) { return method_call(ReferenceEquals, objA, objB); }  // 0x2E5C10 // 
    int Object::InternalGetHashCode(Object* o) { return method_call(InternalGetHashCode, o); }  // 0xAE96D0 // 
    void Object::FieldGetter(cs::string* typeName, cs::string* fieldName, /*ref*/ Object* val) { return method_call(FieldGetter, typeName, fieldName, val); }  // 0x267200 // 
    void Object::FieldSetter(cs::string* typeName, cs::string* fieldName, Object* val) { return method_call(FieldSetter, typeName, fieldName, val); }  // 0x267200 // 

};


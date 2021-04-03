#include <au/System/ComponentModel/Component.hpp>

namespace System::ComponentModel {

    // Methods

    void Component::Finalize() { return method_call(Finalize); }  // 0x49B920 // 
    bool Component::get_CanRaiseEvents() { return method_call(get_CanRaiseEvents); }  // 0x2FD990 // 
    bool Component::get_CanRaiseEventsInternal() { return method_call(get_CanRaiseEventsInternal); }  // 0x49BC10 // 
    void Component::add_Disposed(System::EventHandler* value) { return method_call(add_Disposed, value); }  // 0x49BB60 // 
    void Component::remove_Disposed(System::EventHandler* value) { return method_call(remove_Disposed, value); }  // 0x49BD10 // 
    System::ComponentModel::EventHandlerList* Component::get_Events() { return method_call(get_Events); }  // 0x49BCC0 // 
    System::ComponentModel::ISite* Component::get_Site() { return method_call(get_Site); }  // 0x266110 // 
    void Component::set_Site(System::ComponentModel::ISite* value) { return method_call(set_Site, value); }  // 0x2664D0 // 
    void Component::Dispose() { return method_call(Dispose); }  // 0x49B8B0 // 
    void Component::Dispose1(bool disposing) { return method_call(Dispose1, disposing); }  // 0x49B6F0 // 
    System::ComponentModel::IContainer* Component::get_Container() { return method_call(get_Container); }  // 0x49BC30 // 
    object* Component::GetService(System::Type* service) { return method_call(GetService, service); }  // 0x49B9B0 //
    bool Component::get_DesignMode() { return method_call(get_DesignMode); }  // 0x49BC70 // 
    cs::string* Component::ToString() { return method_call(ToString); }  // 0x49BA50 // 
    void Component::ctor() { return method_call(ctor); }  // 0x267F10 // 
    void Component::cctor() { return method_call(cctor); }  // 0x49BB10 // 

};


System::ComponentModel::Component* System::ComponentModel::Component::EventDisposed() { return statics()->EventDisposed; }
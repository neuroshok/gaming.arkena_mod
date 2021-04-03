//au/System/ComponentModel/Component
#pragma once
#include <ark/class.hpp>

struct object;
namespace System::ComponentModel{ struct ISite; }
namespace System::ComponentModel{ struct EventHandlerList; }
namespace System{ struct EventHandler; }
namespace System::ComponentModel{ struct IContainer; }
namespace System{ struct Type; }
#include <cs/string.hpp>


namespace System::ComponentModel {
struct Component : ark::meta<Component>
{
ark_meta("System::ComponentModel", "Component", "");

    // Fields

    static Component* EventDisposed(); // 0x0
    System::ComponentModel::ISite* site; // 0xC
    System::ComponentModel::EventHandlerList* events; // 0x10

    // Methods

    void Finalize(); // 0x49B920 // protected override 
    bool get_CanRaiseEvents(); // 0x2FD990 // protected virtual 
    bool get_CanRaiseEventsInternal(); // 0x49BC10 // internal 
    void add_Disposed(System::EventHandler* value); // 0x49BB60 // public 
    void remove_Disposed(System::EventHandler* value); // 0x49BD10 // public 
    System::ComponentModel::EventHandlerList* get_Events(); // 0x49BCC0 // protected 
    System::ComponentModel::ISite* get_Site(); // 0x266110 // public virtual 
    void set_Site(System::ComponentModel::ISite* value); // 0x2664D0 // public virtual 
    void Dispose(); // 0x49B8B0 // public 
    void Dispose1(bool disposing); // 0x49B6F0 // protected virtual 
    System::ComponentModel::IContainer* get_Container(); // 0x49BC30 // public 
    object* GetService(System::Type* service); // 0x49B9B0 // protected virtual
    bool get_DesignMode(); // 0x49BC70 // protected 
    cs::string* ToString(); // 0x49BA50 // public override 
    void ctor(); // 0x267F10 // public 
    void cctor(); // 0x49BB10 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<System::ComponentModel::Component>
{
    System::ComponentModel::Component* EventDisposed;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&System::ComponentModel::Component::Finalize> () { return 0x49B920; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_CanRaiseEvents> () { return 0x2FD990; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_CanRaiseEventsInternal> () { return 0x49BC10; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::add_Disposed> () { return 0x49BB60; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::remove_Disposed> () { return 0x49BD10; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_Events> () { return 0x49BCC0; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_Site> () { return 0x266110; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::set_Site> () { return 0x2664D0; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::Dispose> () { return 0x49B8B0; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::Dispose1> () { return 0x49B6F0; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_Container> () { return 0x49BC30; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::GetService> () { return 0x49B9B0; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::get_DesignMode> () { return 0x49BC70; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::ToString> () { return 0x49BA50; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::ctor> () { return 0x267F10; }
    template<> inline uintptr_t rva<&System::ComponentModel::Component::cctor> () { return 0x49BB10; }
} // ark::method_info
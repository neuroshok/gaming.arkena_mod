//au/System/EventArgs
#pragma once
#include <ark/class.hpp>


namespace System {
struct EventArgs : ark::meta<EventArgs>
{
ark_meta("System", "EventArgs", "");

    // Fields

    static System::EventArgs* Empty(); // 0x35683561

    // Methods

    void ctor(); // 0x266470 // public 
    void cctor(); // 0xCA96C0 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<System::EventArgs>
{
    System::EventArgs* Empty;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&System::EventArgs::ctor> () { return 0x266470; }
    template<> inline uintptr_t rva<&System::EventArgs::cctor> () { return 0xCA96C0; }
} // ark::method_info
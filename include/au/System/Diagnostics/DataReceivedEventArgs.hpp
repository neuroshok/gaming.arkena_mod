//au/System/Diagnostics/DataReceivedEventArgs
#pragma once
#include <ark/class.hpp>
#include <au/System/EventArgs.hpp>
#include <cs/string.hpp>


namespace System::Diagnostics {
struct DataReceivedEventArgs : ark::meta<DataReceivedEventArgs, System::EventArgs>
{
ark_meta("System::Diagnostics", "DataReceivedEventArgs", "");

    // Fields

    cs::string* data; // 0x8

    // Methods

    void ctor(cs::string* data); // 0x8A68D0 // internal 
    cs::string* get_Data(); // 0x266480 // public 
    void ctor1(); // 0x8A6930 // internal 

};

} // ns

namespace ark
{
template<>
struct meta_statics<System::Diagnostics::DataReceivedEventArgs>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&System::Diagnostics::DataReceivedEventArgs::ctor> () { return 0x8A68D0; }
    template<> inline uintptr_t rva<&System::Diagnostics::DataReceivedEventArgs::get_Data> () { return 0x266480; }
    template<> inline uintptr_t rva<&System::Diagnostics::DataReceivedEventArgs::ctor1> () { return 0x8A6930; }
} // ark::method_info
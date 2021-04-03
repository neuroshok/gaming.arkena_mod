//au/Hazel/DataReceivedEventArgs
#pragma once
#include <ark/class.hpp>
namespace Hazel{ struct Connection; }
namespace Hazel{ struct MessageReader; }
#include <au/Hazel/SendOption.hpp>


namespace Hazel {
struct DataReceivedEventArgs : ark::meta<DataReceivedEventArgs>
{
ark_meta("Hazel", "DataReceivedEventArgs", "");

    // Fields

    Hazel::Connection* Sender; // 0x0
    Hazel::MessageReader* Message; // 0x4
    Hazel::SendOption SendOption; // 0x8

    // Methods

    void ctor(Hazel::Connection* sender, Hazel::MessageReader* msg, Hazel::SendOption sendOption); // 0xEE1680 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<Hazel::DataReceivedEventArgs>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&Hazel::DataReceivedEventArgs::ctor> () { return 0xEE1680; }
} // ark::method_info
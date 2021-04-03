#include <au/System/EventArgs.hpp>

namespace System {

    // Methods

    void EventArgs::ctor() { return method_call(ctor); }  // 0x266470 // 
    void EventArgs::cctor() { return method_call(cctor); }  // 0xCA96C0 // 

};


System::EventArgs* System::EventArgs::Empty() { return statics()->Empty; }
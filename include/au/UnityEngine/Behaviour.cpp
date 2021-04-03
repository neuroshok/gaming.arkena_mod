#include <au/UnityEngine/Behaviour.hpp>

namespace UnityEngine {

    // Methods

    bool Behaviour::get_enabled() { return method_call(get_enabled); }  // 0x732E20 // 
    void Behaviour::set_enabled(bool value) { return method_call(set_enabled, value); }  // 0x732E80 // 
    bool Behaviour::get_isActiveAndEnabled() { return method_call(get_isActiveAndEnabled); }  // 0x732E50 // 
    void Behaviour::ctor() { return method_call(ctor); }  // 0x732DD0 // 

};


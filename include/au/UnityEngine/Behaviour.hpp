//au/UnityEngine/Behaviour
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Component.hpp>


namespace UnityEngine {
struct Behaviour : ark::meta<Behaviour, UnityEngine::Component>
{
ark_meta("UnityEngine", "Behaviour", "");

    // Methods

    bool get_enabled(); // 0x732E20 // public 
    void set_enabled(bool value); // 0x732E80 // public 
    bool get_isActiveAndEnabled(); // 0x732E50 // public 
    void ctor(); // 0x732DD0 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Behaviour>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Behaviour::get_enabled> () { return 0x732E20; }
    template<> inline uintptr_t rva<&UnityEngine::Behaviour::set_enabled> () { return 0x732E80; }
    template<> inline uintptr_t rva<&UnityEngine::Behaviour::get_isActiveAndEnabled> () { return 0x732E50; }
    template<> inline uintptr_t rva<&UnityEngine::Behaviour::ctor> () { return 0x732DD0; }
} // ark::method_info
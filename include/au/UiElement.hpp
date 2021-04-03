//au//UiElement
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
namespace UnityEngine::Events{ struct UnityEvent; }

struct UiElement : ark::meta<UiElement, UnityEngine::MonoBehaviour>
{
ark_meta("", "UiElement", "");

    // Fields

    UnityEngine::Events::UnityEvent* OnMouseOver; // 0xC
    UnityEngine::Events::UnityEvent* OnMouseOut; // 0x10

    // Methods

    void ReceiveMouseOut(); // 0x163D950 // public virtual 
    void ReceiveMouseOver(); // 0x163D980 // public virtual 
    void ctor(); // 0x2931C0 // protected 

};


namespace ark
{
template<>
struct meta_statics<UiElement>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UiElement::ReceiveMouseOut> () { return 0x163D950; }
    template<> inline uintptr_t rva<&UiElement::ReceiveMouseOver> () { return 0x163D980; }
    template<> inline uintptr_t rva<&UiElement::ctor> () { return 0x2931C0; }
} // ark::method_info
//au/InnerNet/InnerNetObject
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/ClientType.hpp>
#include <au/Hazel/SendOption.hpp>
namespace Hazel{ struct MessageReader; }
namespace Hazel{ struct MessageWriter; }


namespace InnerNet {
struct InnerNetObject : ark::meta<InnerNetObject, UnityEngine::MonoBehaviour>
{
ark_meta("InnerNet", "InnerNetObject", "");

    // Fields

    unsigned int SpawnId; // 0xC
    unsigned int NetId; // 0x10
    unsigned int NKBOFPLPLFA; // 0x14
    ClientType SpawnFlags; // 0x18
    Hazel::SendOption sendMode; // 0x19
    int OwnerId; // 0x1C
    bool ADOEONALEEJ; // 0x20

    // Methods

    bool get_IsDirty(); // 0x37DD20 // public virtual 
    bool get_AmOwner(); // 0x16BAB00 // public 
    void Despawn(); // 0x16BA950 // public 
    void OnDestroy(); // 0x16BAA20 // public virtual
    int CompareTo(InnerNet::InnerNetObject* HHDDOBDECHF); // 0x16BA920 // public 
    bool EDGBCOLKELD(int EGFIPPDPIHF); // 0x16BA9E0 // protected 
    void LJNAKPPBPOA(); // 0x16BAA00 // protected 
    void NIKOAPNLHPJ(unsigned int DKJEPFHNNBC); // 0x16BAA10 // protected 
    void ctor(); // 0x16BAAE0 // protected 

};

} // ns

namespace ark
{
template<>
struct meta_statics<InnerNet::InnerNetObject>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::get_IsDirty> () { return 0x37DD20; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::get_AmOwner> () { return 0x16BAB00; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::Despawn> () { return 0x16BA950; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::OnDestroy> () { return 0x16BAA20; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::CompareTo> () { return 0x16BA920; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::EDGBCOLKELD> () { return 0x16BA9E0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::LJNAKPPBPOA> () { return 0x16BAA00; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::NIKOAPNLHPJ> () { return 0x16BAA10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetObject::ctor> () { return 0x16BAAE0; }
} // ark::method_info
#include <au/InnerNet/InnerNetObject.hpp>

namespace InnerNet {

    // Methods

    bool InnerNetObject::get_IsDirty() { return method_call(get_IsDirty); }  // 0x37DD20 // 
    bool InnerNetObject::get_AmOwner() { return method_call(get_AmOwner); }  // 0x16BAB00 // 
    void InnerNetObject::Despawn() { return method_call(Despawn); }  // 0x16BA950 // 
    void InnerNetObject::OnDestroy() { return method_call(OnDestroy); }  // 0x16BAA20 //
    int InnerNetObject::CompareTo(InnerNet::InnerNetObject* HHDDOBDECHF) { return method_call(CompareTo, HHDDOBDECHF); }  // 0x16BA920 // 
    bool InnerNetObject::EDGBCOLKELD(int EGFIPPDPIHF) { return method_call(EDGBCOLKELD, EGFIPPDPIHF); }  // 0x16BA9E0 // 
    void InnerNetObject::LJNAKPPBPOA() { return method_call(LJNAKPPBPOA); }  // 0x16BAA00 // 
    void InnerNetObject::NIKOAPNLHPJ(unsigned int DKJEPFHNNBC) { return method_call(NIKOAPNLHPJ, DKJEPFHNNBC); }  // 0x16BAA10 // 
    void InnerNetObject::ctor() { return method_call(ctor); }  // 0x16BAAE0 // 

};


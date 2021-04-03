//au//ServerManager
#pragma once
#include <ark/class.hpp>
#include <au/DestroyableSingleton.hpp>
#include <cs/array.hpp>
struct IRegionInfo;
struct BHEGGGJBBNF;
#include <cs/string.hpp>
#include <au/ServerManager_Status.hpp>
namespace System::Collections{ struct IEnumerator; }

struct ServerManager : ark::meta<ServerManager, DestroyableSingleton<ServerManager>>
{
ark_meta("", "ServerManager", "");

    // Fields

    static cs::array<IRegionInfo*>* DefaultRegions(); // 0x0
    IRegionInfo* _INNKDLODHEG_k__BackingField; // 0x10
    BHEGGGJBBNF* _MHGAKMMIGJO_k__BackingField; // 0x14
    cs::array<IRegionInfo*>* _IJMEBEIMFCL_k__BackingField; // 0x18
    cs::string* MBECFHMAJMH; // 0x1C
    cs::string* ONKHNGAOFEK; // 0x20
    ServerManager_Status MJMOOPLLNPO; // 0x24

    // Methods

    bool IDDKCKLKFPE(IRegionInfo* MDGPAGPBDPN); // 0x1BA87E0 // private 
    void DOHBGMLNLGP(); // 0x1BA6C50 // public 
    IRegionInfo* KOKLGLBKOFD(); // 0x2664A0 // public 
    System::Collections::IEnumerator* EDNANFHLOFF(); // 0x1BA72B0 // public 
    void CJPECBPKJIK(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    void EDLJPAOHDNO(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    void OFKMFIIBLGK(IRegionInfo* HFIKBIFLFDE); // 0x1BAB5A0 // internal 
    void LMIDHENMLFE(); // 0x1BAA620 // private 
    void Awake(); // 0x1BA6310 // public override 
    IRegionInfo* get_CurrentRegion(); // 0x2664A0 // public 
    bool DJHMPCLNPON(cs::string* HEHPPIDHBFE); // 0x1BA6980 // internal 
    cs::array<BHEGGGJBBNF*>* FDMPFCGACOB(); // 0x1BA7330 // private 
    cs::array<IRegionInfo*>* EIACBPPEHMO(); // 0x26D6B0 // public 
    void FLCNHHKFFKA(cs::array<IRegionInfo*>* IKGGJMHPDGH); // 0x26D780 // private 
    void FBOMJEKMNPK(IRegionInfo* HFIKBIFLFDE); // 0x1BA7300 // internal 
    void cctor(); // 0x1BAB840 // private static 
    cs::string* ELCNAJLFEPL(); // 0x9A0BE0 // public 
    IRegionInfo* POGDJDLOKNE(); // 0x2664A0 // public 
    void JJEPDPPCPBF(); // 0x1BA90E0 // internal 
    void LLLBEBDJEAI(); // 0x1BAA450 // public 
    void HBGOOKECJLN(); // 0x1BA7BE0 // public 
    void IEJFMEAKGPD(); // 0x1BA8850 // public 
    void DKIMCEJILAB(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    uint16_t get_OnlineNetPort(); // 0x1BA62F0 // public 
    void HJLGKBCBOHJ(); // 0x1BA83A0 // internal 
    void LoadServers(); // 0x1BAABB0 // public 
    void KKHDJBDGEHG(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    void KHNKHDLDMME(); // 0x1BA9960 // public 
    void KEHGMFCAOIF(); // 0x1BA9520 // internal 
    bool DHLNJDEPEKH(IRegionInfo* MDGPAGPBDPN); // 0x1BA6910 // private 
    void MKAELGHLPCI(); // 0x1BAAF10 // public override 
    void ctor(); // 0x1BABA60 // public 
    void LMILBKBNBMM(BHEGGGJBBNF* IKGGJMHPDGH); // 0x2664C0 // private 
    void BAAFFMMGOPG(); // 0x1BA6480 // public override 
    void JIIFDHFEFAH(); // 0x1BA8F10 // public 
    bool GMNHLBPAFDE(cs::string* HEHPPIDHBFE); // 0x1BA7610 // internal 
    void IGDIPEICEDC(cs::array<IRegionInfo*>* IKGGJMHPDGH); // 0x26D780 // private 
    System::Collections::IEnumerator* MGKGDLOAIGC(); // 0x1BAAEC0 // public 
    IRegionInfo* PNNIGGGHFNL(); // 0x2664A0 // public 
    void PMEGGMOPDJG(BHEGGGJBBNF* IKGGJMHPDGH); // 0x2664C0 // private 
    void LoadServersOld(); // 0x1BAA830 // public 
    void HBANAKLLMKI(); // 0x1BA78D0 // public 
    void GJHACFFNAAB(); // 0x1BA7440 // public 
    BHEGGGJBBNF* KICPBFDJOBJ(); // 0x266490 // public 
    void BHFHLIKCAPC(cs::array<IRegionInfo*>* IKGGJMHPDGH); // 0x26D780 // private 
    void KJEEJPKAOEP(); // 0x1BA9CE0 // public 
    void NEAEIIAJEKK(); // 0x1BAB080 // public 
    bool HJDOAINELJC(cs::string* HEHPPIDHBFE); // 0x1BA80D0 // internal 
    void SaveServers(); // 0x1BAB620 // public 
    void MGCBJAIMGNF(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    cs::string* HPPIJEDNHBG(); // 0x9A0BE0 // public 
    cs::string* FOLGGHAEPBP(); // 0x9A0BE0 // public 
    cs::array<IRegionInfo*>* get_AvailableRegions(); // 0x26D6B0 // public 
    void KCHPMNMHEPJ(BHEGGGJBBNF* IKGGJMHPDGH); // 0x2664C0 // private 
    BHEGGGJBBNF* CHFIJMKLCMH(); // 0x266490 // public 
    System::Collections::IEnumerator* WaitForServers(); // 0x1BAB7F0 // public 
    void IKHBFLCDPOE(); // 0x1BA8A20 // public override 
    cs::array<IRegionInfo*>* KHACJNEJFKP(); // 0x26D6B0 // public 
    void GNPAPMILHGF(cs::array<IRegionInfo*>* IKGGJMHPDGH); // 0x26D780 // private 
    void JCNPFMNIOBH(); // 0x1BA8B90 // public 
    void NOFKKHOFJBP(); // 0x1BAB390 // private 
    bool HGMEAGBMEFC(IRegionInfo* MDGPAGPBDPN); // 0x1BA8060 // private 
    uint16_t AAMOMGDEBFF(); // 0x1BA62F0 // public 
    System::Collections::IEnumerator* CFOHHDEKLHJ(); // 0x1BA68C0 // public 
    void ADLAPJOIFCA(BHEGGGJBBNF* IKGGJMHPDGH); // 0x2664C0 // private 
    bool FIBLGANONIG(IRegionInfo* MDGPAGPBDPN); // 0x1BA7380 // private 
    uint16_t HLEPJIKGFKC(); // 0x1BA62F0 // public 
    System::Collections::IEnumerator* ReselectRegionFromDefaults(); // 0x1BAB5D0 // public 
    cs::string* get_OnlineNetAddress(); // 0x9A0BE0 // public 
    System::Collections::IEnumerator* ECKDEHGHBON(); // 0x1BA7260 // public 
    System::Collections::IEnumerator* GEJCKANHIKH(); // 0x1BA73F0 // public 
    void COHNCGGCGEM(IRegionInfo* IKGGJMHPDGH); // 0x2664E0 // private 
    cs::string* PBBLCBMJACJ(); // 0x9A0BE0 // public 
    cs::array<IRegionInfo*>* JFNGKLKDBFP(); // 0x26D6B0 // public 
    BHEGGGJBBNF* ABIBFFHKPCI(); // 0x266490 // public 
    bool BLFPPIIEFIM(cs::string* HEHPPIDHBFE); // 0x1BA65F0 // internal 
    void HCLKKNGOOBK(); // 0x1BA7EF0 // public override 
    bool KKMADPPPDJB(IRegionInfo* MDGPAGPBDPN); // 0x1BAA060 // private 
    BHEGGGJBBNF* get_CurrentServer(); // 0x266490 // public 
    void LKHIEJHKKGI(); // 0x1BAA0D0 // public 
    void ECAJAFDNCHD(); // 0x1BA6E20 // internal 

};


namespace ark
{
template<>
struct meta_statics<ServerManager>
{
    cs::array<IRegionInfo*>* DefaultRegions;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&ServerManager::IDDKCKLKFPE> () { return 0x1BA87E0; }
    template<> inline uintptr_t rva<&ServerManager::DOHBGMLNLGP> () { return 0x1BA6C50; }
    template<> inline uintptr_t rva<&ServerManager::KOKLGLBKOFD> () { return 0x2664A0; }
    template<> inline uintptr_t rva<&ServerManager::EDNANFHLOFF> () { return 0x1BA72B0; }
    template<> inline uintptr_t rva<&ServerManager::CJPECBPKJIK> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::EDLJPAOHDNO> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::OFKMFIIBLGK> () { return 0x1BAB5A0; }
    template<> inline uintptr_t rva<&ServerManager::LMIDHENMLFE> () { return 0x1BAA620; }
    template<> inline uintptr_t rva<&ServerManager::Awake> () { return 0x1BA6310; }
    template<> inline uintptr_t rva<&ServerManager::get_CurrentRegion> () { return 0x2664A0; }
    template<> inline uintptr_t rva<&ServerManager::DJHMPCLNPON> () { return 0x1BA6980; }
    template<> inline uintptr_t rva<&ServerManager::FDMPFCGACOB> () { return 0x1BA7330; }
    template<> inline uintptr_t rva<&ServerManager::EIACBPPEHMO> () { return 0x26D6B0; }
    template<> inline uintptr_t rva<&ServerManager::FLCNHHKFFKA> () { return 0x26D780; }
    template<> inline uintptr_t rva<&ServerManager::FBOMJEKMNPK> () { return 0x1BA7300; }
    template<> inline uintptr_t rva<&ServerManager::cctor> () { return 0x1BAB840; }
    template<> inline uintptr_t rva<&ServerManager::ELCNAJLFEPL> () { return 0x9A0BE0; }
    template<> inline uintptr_t rva<&ServerManager::POGDJDLOKNE> () { return 0x2664A0; }
    template<> inline uintptr_t rva<&ServerManager::JJEPDPPCPBF> () { return 0x1BA90E0; }
    template<> inline uintptr_t rva<&ServerManager::LLLBEBDJEAI> () { return 0x1BAA450; }
    template<> inline uintptr_t rva<&ServerManager::HBGOOKECJLN> () { return 0x1BA7BE0; }
    template<> inline uintptr_t rva<&ServerManager::IEJFMEAKGPD> () { return 0x1BA8850; }
    template<> inline uintptr_t rva<&ServerManager::DKIMCEJILAB> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::get_OnlineNetPort> () { return 0x1BA62F0; }
    template<> inline uintptr_t rva<&ServerManager::HJLGKBCBOHJ> () { return 0x1BA83A0; }
    template<> inline uintptr_t rva<&ServerManager::LoadServers> () { return 0x1BAABB0; }
    template<> inline uintptr_t rva<&ServerManager::KKHDJBDGEHG> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::KHNKHDLDMME> () { return 0x1BA9960; }
    template<> inline uintptr_t rva<&ServerManager::KEHGMFCAOIF> () { return 0x1BA9520; }
    template<> inline uintptr_t rva<&ServerManager::DHLNJDEPEKH> () { return 0x1BA6910; }
    template<> inline uintptr_t rva<&ServerManager::MKAELGHLPCI> () { return 0x1BAAF10; }
    template<> inline uintptr_t rva<&ServerManager::ctor> () { return 0x1BABA60; }
    template<> inline uintptr_t rva<&ServerManager::LMILBKBNBMM> () { return 0x2664C0; }
    template<> inline uintptr_t rva<&ServerManager::BAAFFMMGOPG> () { return 0x1BA6480; }
    template<> inline uintptr_t rva<&ServerManager::JIIFDHFEFAH> () { return 0x1BA8F10; }
    template<> inline uintptr_t rva<&ServerManager::GMNHLBPAFDE> () { return 0x1BA7610; }
    template<> inline uintptr_t rva<&ServerManager::IGDIPEICEDC> () { return 0x26D780; }
    template<> inline uintptr_t rva<&ServerManager::MGKGDLOAIGC> () { return 0x1BAAEC0; }
    template<> inline uintptr_t rva<&ServerManager::PNNIGGGHFNL> () { return 0x2664A0; }
    template<> inline uintptr_t rva<&ServerManager::PMEGGMOPDJG> () { return 0x2664C0; }
    template<> inline uintptr_t rva<&ServerManager::LoadServersOld> () { return 0x1BAA830; }
    template<> inline uintptr_t rva<&ServerManager::HBANAKLLMKI> () { return 0x1BA78D0; }
    template<> inline uintptr_t rva<&ServerManager::GJHACFFNAAB> () { return 0x1BA7440; }
    template<> inline uintptr_t rva<&ServerManager::KICPBFDJOBJ> () { return 0x266490; }
    template<> inline uintptr_t rva<&ServerManager::BHFHLIKCAPC> () { return 0x26D780; }
    template<> inline uintptr_t rva<&ServerManager::KJEEJPKAOEP> () { return 0x1BA9CE0; }
    template<> inline uintptr_t rva<&ServerManager::NEAEIIAJEKK> () { return 0x1BAB080; }
    template<> inline uintptr_t rva<&ServerManager::HJDOAINELJC> () { return 0x1BA80D0; }
    template<> inline uintptr_t rva<&ServerManager::SaveServers> () { return 0x1BAB620; }
    template<> inline uintptr_t rva<&ServerManager::MGCBJAIMGNF> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::HPPIJEDNHBG> () { return 0x9A0BE0; }
    template<> inline uintptr_t rva<&ServerManager::FOLGGHAEPBP> () { return 0x9A0BE0; }
    template<> inline uintptr_t rva<&ServerManager::get_AvailableRegions> () { return 0x26D6B0; }
    template<> inline uintptr_t rva<&ServerManager::KCHPMNMHEPJ> () { return 0x2664C0; }
    template<> inline uintptr_t rva<&ServerManager::CHFIJMKLCMH> () { return 0x266490; }
    template<> inline uintptr_t rva<&ServerManager::WaitForServers> () { return 0x1BAB7F0; }
    template<> inline uintptr_t rva<&ServerManager::IKHBFLCDPOE> () { return 0x1BA8A20; }
    template<> inline uintptr_t rva<&ServerManager::KHACJNEJFKP> () { return 0x26D6B0; }
    template<> inline uintptr_t rva<&ServerManager::GNPAPMILHGF> () { return 0x26D780; }
    template<> inline uintptr_t rva<&ServerManager::JCNPFMNIOBH> () { return 0x1BA8B90; }
    template<> inline uintptr_t rva<&ServerManager::NOFKKHOFJBP> () { return 0x1BAB390; }
    template<> inline uintptr_t rva<&ServerManager::HGMEAGBMEFC> () { return 0x1BA8060; }
    template<> inline uintptr_t rva<&ServerManager::AAMOMGDEBFF> () { return 0x1BA62F0; }
    template<> inline uintptr_t rva<&ServerManager::CFOHHDEKLHJ> () { return 0x1BA68C0; }
    template<> inline uintptr_t rva<&ServerManager::ADLAPJOIFCA> () { return 0x2664C0; }
    template<> inline uintptr_t rva<&ServerManager::FIBLGANONIG> () { return 0x1BA7380; }
    template<> inline uintptr_t rva<&ServerManager::HLEPJIKGFKC> () { return 0x1BA62F0; }
    template<> inline uintptr_t rva<&ServerManager::ReselectRegionFromDefaults> () { return 0x1BAB5D0; }
    template<> inline uintptr_t rva<&ServerManager::get_OnlineNetAddress> () { return 0x9A0BE0; }
    template<> inline uintptr_t rva<&ServerManager::ECKDEHGHBON> () { return 0x1BA7260; }
    template<> inline uintptr_t rva<&ServerManager::GEJCKANHIKH> () { return 0x1BA73F0; }
    template<> inline uintptr_t rva<&ServerManager::COHNCGGCGEM> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&ServerManager::PBBLCBMJACJ> () { return 0x9A0BE0; }
    template<> inline uintptr_t rva<&ServerManager::JFNGKLKDBFP> () { return 0x26D6B0; }
    template<> inline uintptr_t rva<&ServerManager::ABIBFFHKPCI> () { return 0x266490; }
    template<> inline uintptr_t rva<&ServerManager::BLFPPIIEFIM> () { return 0x1BA65F0; }
    template<> inline uintptr_t rva<&ServerManager::HCLKKNGOOBK> () { return 0x1BA7EF0; }
    template<> inline uintptr_t rva<&ServerManager::KKMADPPPDJB> () { return 0x1BAA060; }
    template<> inline uintptr_t rva<&ServerManager::get_CurrentServer> () { return 0x266490; }
    template<> inline uintptr_t rva<&ServerManager::LKHIEJHKKGI> () { return 0x1BAA0D0; }
    template<> inline uintptr_t rva<&ServerManager::ECAJAFDNCHD> () { return 0x1BA6E20; }
} // ark::method_info
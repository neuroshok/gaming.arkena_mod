//au//MapBehaviour
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
struct AlphaPulse;
namespace UnityEngine{ struct SpriteRenderer; }
struct MapCountOverlay;
struct InfectedOverlay;
struct MapTaskOverlay;
struct SpecialInputHandler;

struct MapBehaviour : ark::meta<MapBehaviour, UnityEngine::MonoBehaviour>
{
ark_meta("", "MapBehaviour", "");

    // Fields

    static MapBehaviour* Instance(); // 0x0
    AlphaPulse* ColorControl; // 0xC
    UnityEngine::SpriteRenderer* HerePoint; // 0x10
    MapCountOverlay* countOverlay; // 0x14
    InfectedOverlay* infectedOverlay; // 0x18
    MapTaskOverlay* taskOverlay; // 0x1C
    SpecialInputHandler* FIKEBKPAMMI; // 0x20

    // Methods

    void OIJOJACLFGD(); // 0x1D505B0 // public 
    void HDJGKOCHNLI(); // 0x1D4FD50 // private 
    void PGFPKDAPLFN(); // 0x1D50E30 // private 
    bool IHDJEICADGL(); // 0x1D4EA80 // public 
    bool COLCJNDCPBF(); // 0x1D4EA80 // public 
    void EJIAEEGDKIA(); // 0x1D4F390 // public 
    void MLCEMBCPDJP(); // 0x1D50180 // public 
    void IPHFFGPLEAN(); // 0x1D50050 // private 
    void Awake(); // 0x1D4E9E0 // private 
    void DKMICPPFKOI(); // 0x1D4EF80 // private 
    void NPKOBOPHIML(); // 0x1D503A0 // public 
    void HDBABALDPHJ(); // 0x1D4FB90 // public 
    bool MJHJLJLCOEE(); // 0x1D4EA80 // public 
    void IBHFDGJCEJC(); // 0x1D4FDA0 // private 
    void AFCFENPBJLO(); // 0x1D4E730 // public 
    bool FAPHELJCOEA(); // 0x10337E0 // public 
    void MIMDHJJNHGK(); // 0x1D500A0 // public 
    void FMBGNFHOGBP(); // 0x1D4F710 // public 
    void OJLJPGPHLCE(); // 0x1D50690 // public 
    void ShowInfectedMap(); // 0x1D510E0 // public 
    void ENDGMKJLKAO(); // 0x1D4F430 // public 
    bool DMFBDFBGLJD(); // 0x10337E0 // public 
    void BIGNPNECBNH(); // 0x1D4EA30 // private 
    bool FALJCMPJGIK(); // 0x1D4E950 // public 
    void PAMKHPDENDJ(); // 0x1D50AA0 // public 
    void OPEONIOLOGM(); // 0x1D509C0 // public 
    void PNIJCMBPAFI(); // 0x1D50E80 // public 
    bool get_IsOpenStopped(); // 0x1D4E950 // public 
    bool HIBPFNEEAHH(); // 0x1D4EA80 // public 
    void AKEHOMGFOLD(); // 0x1D4E990 // private 
    void ctor(); // 0x2931C0 // public 
    void OABMHLLDPPI(); // 0x1D50440 // public 
    void Close(); // 0x1D4EE00 // public 
    bool get_IsOpen(); // 0x10337E0 // public 
    void ABEJBMCLJHI(); // 0x1D4E510 // public 
    bool CCIIHJAILJD(); // 0x1D4EA80 // public 
    bool JHDDIMDKDNN(); // 0x10337E0 // public 
    void OLDFOAMKDIF(); // 0x1D50800 // public 
    void IKCGDLFMDNA(); // 0x1D4FF70 // public 
    void ShowCountOverlay(); // 0x1D51040 // public 
    bool BLNHGOBMGDL(); // 0x1D4E950 // public 
    void GBBELKMFCMH(); // 0x1D4FAF0 // public 
    bool CNKGLAPFFHD(); // 0x10337E0 // public 
    void CJPFCBECFDG(); // 0x1D4EAC0 // private 
    void PDPJBNINLPF(); // 0x1D50C60 // private 
    void DNAGONHPFJE(); // 0x1D4F150 // public 
    bool ILNCKAMNANI(); // 0x10337E0 // public 
    void DCGMDLANANL(); // 0x1D4EEE0 // public 
    bool ANIHAMFPKAP(); // 0x10337E0 // public 
    void COKDFIPDCMO(); // 0x1D4EC90 // public 
    void FixedUpdate(); // 0x1D4F930 // public 
    bool AHNKCLFLOGO(); // 0x1D4E950 // public 
    void ShowNormalMap(); // 0x1D51300 // public 

};


namespace ark
{
template<>
struct meta_statics<MapBehaviour>
{
    MapBehaviour* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&MapBehaviour::OIJOJACLFGD> () { return 0x1D505B0; }
    template<> inline uintptr_t rva<&MapBehaviour::HDJGKOCHNLI> () { return 0x1D4FD50; }
    template<> inline uintptr_t rva<&MapBehaviour::PGFPKDAPLFN> () { return 0x1D50E30; }
    template<> inline uintptr_t rva<&MapBehaviour::IHDJEICADGL> () { return 0x1D4EA80; }
    template<> inline uintptr_t rva<&MapBehaviour::COLCJNDCPBF> () { return 0x1D4EA80; }
    template<> inline uintptr_t rva<&MapBehaviour::EJIAEEGDKIA> () { return 0x1D4F390; }
    template<> inline uintptr_t rva<&MapBehaviour::MLCEMBCPDJP> () { return 0x1D50180; }
    template<> inline uintptr_t rva<&MapBehaviour::IPHFFGPLEAN> () { return 0x1D50050; }
    template<> inline uintptr_t rva<&MapBehaviour::Awake> () { return 0x1D4E9E0; }
    template<> inline uintptr_t rva<&MapBehaviour::DKMICPPFKOI> () { return 0x1D4EF80; }
    template<> inline uintptr_t rva<&MapBehaviour::NPKOBOPHIML> () { return 0x1D503A0; }
    template<> inline uintptr_t rva<&MapBehaviour::HDBABALDPHJ> () { return 0x1D4FB90; }
    template<> inline uintptr_t rva<&MapBehaviour::MJHJLJLCOEE> () { return 0x1D4EA80; }
    template<> inline uintptr_t rva<&MapBehaviour::IBHFDGJCEJC> () { return 0x1D4FDA0; }
    template<> inline uintptr_t rva<&MapBehaviour::AFCFENPBJLO> () { return 0x1D4E730; }
    template<> inline uintptr_t rva<&MapBehaviour::FAPHELJCOEA> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::MIMDHJJNHGK> () { return 0x1D500A0; }
    template<> inline uintptr_t rva<&MapBehaviour::FMBGNFHOGBP> () { return 0x1D4F710; }
    template<> inline uintptr_t rva<&MapBehaviour::OJLJPGPHLCE> () { return 0x1D50690; }
    template<> inline uintptr_t rva<&MapBehaviour::ShowInfectedMap> () { return 0x1D510E0; }
    template<> inline uintptr_t rva<&MapBehaviour::ENDGMKJLKAO> () { return 0x1D4F430; }
    template<> inline uintptr_t rva<&MapBehaviour::DMFBDFBGLJD> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::BIGNPNECBNH> () { return 0x1D4EA30; }
    template<> inline uintptr_t rva<&MapBehaviour::FALJCMPJGIK> () { return 0x1D4E950; }
    template<> inline uintptr_t rva<&MapBehaviour::PAMKHPDENDJ> () { return 0x1D50AA0; }
    template<> inline uintptr_t rva<&MapBehaviour::OPEONIOLOGM> () { return 0x1D509C0; }
    template<> inline uintptr_t rva<&MapBehaviour::PNIJCMBPAFI> () { return 0x1D50E80; }
    template<> inline uintptr_t rva<&MapBehaviour::get_IsOpenStopped> () { return 0x1D4E950; }
    template<> inline uintptr_t rva<&MapBehaviour::HIBPFNEEAHH> () { return 0x1D4EA80; }
    template<> inline uintptr_t rva<&MapBehaviour::AKEHOMGFOLD> () { return 0x1D4E990; }
    template<> inline uintptr_t rva<&MapBehaviour::ctor> () { return 0x2931C0; }
    template<> inline uintptr_t rva<&MapBehaviour::OABMHLLDPPI> () { return 0x1D50440; }
    template<> inline uintptr_t rva<&MapBehaviour::Close> () { return 0x1D4EE00; }
    template<> inline uintptr_t rva<&MapBehaviour::get_IsOpen> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::ABEJBMCLJHI> () { return 0x1D4E510; }
    template<> inline uintptr_t rva<&MapBehaviour::CCIIHJAILJD> () { return 0x1D4EA80; }
    template<> inline uintptr_t rva<&MapBehaviour::JHDDIMDKDNN> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::OLDFOAMKDIF> () { return 0x1D50800; }
    template<> inline uintptr_t rva<&MapBehaviour::IKCGDLFMDNA> () { return 0x1D4FF70; }
    template<> inline uintptr_t rva<&MapBehaviour::ShowCountOverlay> () { return 0x1D51040; }
    template<> inline uintptr_t rva<&MapBehaviour::BLNHGOBMGDL> () { return 0x1D4E950; }
    template<> inline uintptr_t rva<&MapBehaviour::GBBELKMFCMH> () { return 0x1D4FAF0; }
    template<> inline uintptr_t rva<&MapBehaviour::CNKGLAPFFHD> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::CJPFCBECFDG> () { return 0x1D4EAC0; }
    template<> inline uintptr_t rva<&MapBehaviour::PDPJBNINLPF> () { return 0x1D50C60; }
    template<> inline uintptr_t rva<&MapBehaviour::DNAGONHPFJE> () { return 0x1D4F150; }
    template<> inline uintptr_t rva<&MapBehaviour::ILNCKAMNANI> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::DCGMDLANANL> () { return 0x1D4EEE0; }
    template<> inline uintptr_t rva<&MapBehaviour::ANIHAMFPKAP> () { return 0x10337E0; }
    template<> inline uintptr_t rva<&MapBehaviour::COKDFIPDCMO> () { return 0x1D4EC90; }
    template<> inline uintptr_t rva<&MapBehaviour::FixedUpdate> () { return 0x1D4F930; }
    template<> inline uintptr_t rva<&MapBehaviour::AHNKCLFLOGO> () { return 0x1D4E950; }
    template<> inline uintptr_t rva<&MapBehaviour::ShowNormalMap> () { return 0x1D51300; }
} // ark::method_info
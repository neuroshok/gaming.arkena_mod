//au//GameData_PlayerInfo
#pragma once
#include <ark/class.hpp>
#include <cs/string.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
struct PlayerControl;
namespace Hazel{ struct MessageWriter; }
namespace Hazel{ struct MessageReader; }
struct GameData_HKFJOIBBOBD;

struct GameData_PlayerInfo : ark::meta<GameData_PlayerInfo>
{
ark_meta("", "GameData_PlayerInfo", "");

    // Fields

    uint8_t PlayerId;//FMAAJCIEMEH; // 0x8
    cs::string* PlayerName; // 0xC
    bool HKELEMPLDPK; // 0x10
    uint8_t ACBLKMFEPKC; // 0x11
    unsigned int KCILOGLJODF; // 0x14
    unsigned int HIJJGKGBKOJ; // 0x18
    unsigned int FHNDEEGICJP; // 0x1C
    bool HGCENMAGBJO; // 0x20
    System::Collections::Generic::List<GameData_HKFJOIBBOBD>* DEPNCDAJFGJ; // 0x24
    bool IsDead;//LGEGJEHCFOG; // 0x28
    bool IsImpostor;//AKOHOAJIHBE; // 0x29
    PlayerControl* playerControl; // 0x2C

    // Methods

    void OHHCDBBOAOH(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B146A0 // public 
    void POPJJFBIFLO(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B14F40 // public 
    GameData_HKFJOIBBOBD* GLNGAIOFMNK(unsigned int JJENMKAGBDH); // 0x1B12570 // public 
    bool DICFNDOACFG(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    void ADLNJJEGKBC(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B10F00 // public 
    bool AOLAKMOOBAG(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    void OBBPKOCNPDG(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B14480 // public 
    PlayerControl* ILDOHGKHPBD(); // 0x1B130D0 // public 
    cs::string* MFJGOMIJGAP(); // 0x46F3A0 // public 
    bool LOEHAALHIFG(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    PlayerControl* DCFDFLNGMKL(); // 0x1B118A0 // public 
    void ALNGMGMIILJ(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B11040 // public 
    void OPDOLDDMPEM(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B14A40 // public 
    void JNDJBIAAHPI(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B137D0 // public 
    void LMGCLHEEBFF(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B13CE0 // public 
    GameData_HKFJOIBBOBD* IFBGIIJFGME(unsigned int JJENMKAGBDH); // 0x1B12EF0 // public 
    void HCHOJPIBDFG(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B12760 // public 
    GameData_HKFJOIBBOBD* BNFMMHNAHGD(unsigned int JJENMKAGBDH); // 0x1B11420 // public 
    void LLAEKNJMLBP(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B13A70 // public 
    GameData_HKFJOIBBOBD* DNCGLFJNGEO(unsigned int JJENMKAGBDH); // 0x1B11B70 // public 
    cs::string* EFGDAFBMLKL(); // 0x46F3A0 // public 
    void ctor(PlayerControl* pc); // 0x1B150F0 // public 
    PlayerControl* OGFEPEDEDGC(); // 0x1B145E0 // public 
    cs::string* ACBBIAEEJPL(); // 0x46F3A0 // public 
    GameData_HKFJOIBBOBD* FFKJKGDHPFN(unsigned int JJENMKAGBDH); // 0x1B11E00 // public 
    void LMFGMIEOMAK(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B13BB0 // public 
    void NCGAMNMDJGD(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B14130 // public 
    cs::string* ICELCJBEBOI(); // 0x46F3A0 // public 
    void BKPDEFKINGJ(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void IOLGDFOJLHD(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B13190 // public 
    cs::string* FEPPKJLJFLN(); // 0x46F3A0 // public 
    GameData_HKFJOIBBOBD* MLCMKODNAIF(unsigned int JJENMKAGBDH); // 0x1B140A0 // public 
    PlayerControl* CBKEOGFNIND(); // 0x1B114B0 // public 
    void HJPOMEMAMMP(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B12A00 // public 
    bool HPMFNABFADH(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    PlayerControl* MCMHPOMPFKB(); // 0x1B13FE0 // public 
    bool GIPCHHLLAPL(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    void HNPHIJKGCBI(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void JAFDDFIOPJM(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void PEAIJNENNAJ(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B14B60 // public 
    GameData_HKFJOIBBOBD* GLLFJBMPGDE(unsigned int JJENMKAGBDH); // 0x1B124C0 // public 
    void JIPNIDNDJLL(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B13550 // public 
    cs::string* OMAJFNNHFHC(); // 0x46F3A0 // public 
    void ONABLDBNOEB(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B147C0 // public 
    bool GGOKHGJMBMF(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    bool ACDMDPIFHLB(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    GameData_HKFJOIBBOBD* EGGJEMGODLF(unsigned int JJENMKAGBDH); // 0x1B11C00 // public 
    cs::string* DJGJOBCPIMO(); // 0x46F3A0 // public 
    void DDBOGBJIONG(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B11A20 // public 
    cs::string* DGPFGPHKENK(); // 0x46F3A0 // public 
    GameData_HKFJOIBBOBD* LPIGHGCDPEJ(unsigned int JJENMKAGBDH); // 0x1B13E30 // public 
    void HKANCDNGEBL(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B12B40 // public 
    void KBLJFAAEIDD(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void GBLEDPNFMLB(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B120D0 // public 
    cs::string* AIICMMAADPD(); // 0x46F3A0 // public 
    cs::string* FBMIAMCNLJL(); // 0x46F3A0 // public 
    cs::string* ALDLODCPDKM(); // 0x46F3A0 // public 
    cs::string* DBIKODFOGEG(); // 0x46F3A0 // public 
    bool IHNLFKOFKLK(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    cs::string* CHJFOFHGMBH(); // 0x46F3A0 // public 
    void GMKKDCNMOJL(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B12600 // public 
    void GLEBLBOKNNO(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B12380 // public 
    PlayerControl* CLKICGGDBGJ(); // 0x1B11720 // public 
    GameData_HKFJOIBBOBD* CJKDIKELKLL(unsigned int JJENMKAGBDH); // 0x1B11690 // public 
    void CIBAANFKAJC(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void PHEHIHGADGA(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B14DF0 // public 
    bool DOEBGDDGONM(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    void JMGGGIOIMOL(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void IBPAIICLJKB(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B12C60 // public 
    void BGKJIONEMFO(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B11190 // public 
    void GOFKLMECFDA(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void ABOHMNAFAIH(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    PlayerControl* LCJNFNCGFPG(); // 0x1B139B0 // public 
    cs::string* FPLIEAGLDBK(); // 0x46F3A0 // public 
    void FNOKEADIAFN(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B11EB0 // public 
    void JJONFOCKDEB(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B13690 // public 
    PlayerControl* IDLKPGBFLDM(); // 0x1B12E30 // public 
    bool LMBGFHLEPEN(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    bool LELPGDDGOAK(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    cs::string* AHACAEILLBI(); // 0x46F3A0 // public 
    void JNNMNDAFOLB(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    bool AFINEELDDNN(PlayerControl* EOMJDPGHNOK); // 0x1B10EE0 // private 
    void GGDANHDANAJ(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B12230 // public 
    void GCHLMPKPAMK(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void LPLAPJIDGEH(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B13EC0 // public 
    void HHLHKNGBJJN(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B128C0 // public 
    GameData_HKFJOIBBOBD* EPNKFILFNMA(unsigned int JJENMKAGBDH); // 0x1B11D60 // public 
    cs::string* GFGPKDNMOCG(); // 0x46F3A0 // public 
    PlayerControl* FOEFBDJLHPN(); // 0x1B12010 // public 
    void NHLKPLODBFJ(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B14280 // public 
    void LHEPHFHLLFN(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void BMHKCLEPACC(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B112E0 // public 
    cs::string* MFFMOHLLDGE(); // 0x46F3A0 // public 
    void ABIGDNNINIK(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    void KIMJFBEICOK(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    GameData_HKFJOIBBOBD* IDBIIJPJAHO(unsigned int JJENMKAGBDH); // 0x1B12D80 // public 
    GameData_HKFJOIBBOBD* KKCIDCFOAFL(unsigned int JJENMKAGBDH); // 0x1B13910 // public 
    PlayerControl* NMNFJAECHJH(); // 0x1B143C0 // public 
    PlayerControl* CMHKIHIOFEI(); // 0x1B117E0 // public 
    void CHECLDFAKEK(cs::string* NJFHEFBMBOD); // 0x472000 // public 
    cs::string* BGMJGBCFNKC(); // 0x46F3A0 // public 
    void ILBDAIAPACO(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B12F80 // public 
    void PEFFLABLMBO(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B14C90 // public 
    void CHGAPJJNJDI(Hazel::MessageWriter* CDKLDMFODLF); // 0x1B11570 // public 
    PlayerControl* EJOHDPBFOOJ(); // 0x1B11CA0 // public 
    void JDJNJKLFFLF(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B132B0 // public 
    void JEMGFKMPBNO(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B13410 // public 
    void ctor1(uint8_t playerId); // 0x1B150A0 // public 
    cs::string* EGOFFCBFNLH(); // 0x46F3A0 // public 
    PlayerControl* DCLCJDKNKNO(); // 0x1B11960 // public 
    void ONBPHENJEAJ(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B148F0 // public 
    void AAKJMNHPNEJ(Hazel::MessageReader* HFPCBBHJIPJ); // 0x1B10D90 // public 
    void CKEDDCGIMMP(cs::string* NJFHEFBMBOD); // 0x472000 // public 

};


namespace ark
{
template<>
struct meta_statics<GameData_PlayerInfo>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&GameData_PlayerInfo::OHHCDBBOAOH> () { return 0x1B146A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::POPJJFBIFLO> () { return 0x1B14F40; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GLNGAIOFMNK> () { return 0x1B12570; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DICFNDOACFG> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ADLNJJEGKBC> () { return 0x1B10F00; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::AOLAKMOOBAG> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::OBBPKOCNPDG> () { return 0x1B14480; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ILDOHGKHPBD> () { return 0x1B130D0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::MFJGOMIJGAP> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LOEHAALHIFG> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DCFDFLNGMKL> () { return 0x1B118A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ALNGMGMIILJ> () { return 0x1B11040; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::OPDOLDDMPEM> () { return 0x1B14A40; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JNDJBIAAHPI> () { return 0x1B137D0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LMGCLHEEBFF> () { return 0x1B13CE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IFBGIIJFGME> () { return 0x1B12EF0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HCHOJPIBDFG> () { return 0x1B12760; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::BNFMMHNAHGD> () { return 0x1B11420; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LLAEKNJMLBP> () { return 0x1B13A70; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DNCGLFJNGEO> () { return 0x1B11B70; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::EFGDAFBMLKL> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ctor> () { return 0x1B150F0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::OGFEPEDEDGC> () { return 0x1B145E0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ACBBIAEEJPL> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FFKJKGDHPFN> () { return 0x1B11E00; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LMFGMIEOMAK> () { return 0x1B13BB0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::NCGAMNMDJGD> () { return 0x1B14130; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ICELCJBEBOI> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::BKPDEFKINGJ> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IOLGDFOJLHD> () { return 0x1B13190; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FEPPKJLJFLN> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::MLCMKODNAIF> () { return 0x1B140A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CBKEOGFNIND> () { return 0x1B114B0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HJPOMEMAMMP> () { return 0x1B12A00; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HPMFNABFADH> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::MCMHPOMPFKB> () { return 0x1B13FE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GIPCHHLLAPL> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HNPHIJKGCBI> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JAFDDFIOPJM> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::PEAIJNENNAJ> () { return 0x1B14B60; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GLLFJBMPGDE> () { return 0x1B124C0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JIPNIDNDJLL> () { return 0x1B13550; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::OMAJFNNHFHC> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ONABLDBNOEB> () { return 0x1B147C0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GGOKHGJMBMF> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ACDMDPIFHLB> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::EGGJEMGODLF> () { return 0x1B11C00; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DJGJOBCPIMO> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DDBOGBJIONG> () { return 0x1B11A20; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DGPFGPHKENK> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LPIGHGCDPEJ> () { return 0x1B13E30; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HKANCDNGEBL> () { return 0x1B12B40; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::KBLJFAAEIDD> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GBLEDPNFMLB> () { return 0x1B120D0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::AIICMMAADPD> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FBMIAMCNLJL> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ALDLODCPDKM> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DBIKODFOGEG> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IHNLFKOFKLK> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CHJFOFHGMBH> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GMKKDCNMOJL> () { return 0x1B12600; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GLEBLBOKNNO> () { return 0x1B12380; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CLKICGGDBGJ> () { return 0x1B11720; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CJKDIKELKLL> () { return 0x1B11690; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CIBAANFKAJC> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::PHEHIHGADGA> () { return 0x1B14DF0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DOEBGDDGONM> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JMGGGIOIMOL> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IBPAIICLJKB> () { return 0x1B12C60; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::BGKJIONEMFO> () { return 0x1B11190; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GOFKLMECFDA> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ABOHMNAFAIH> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LCJNFNCGFPG> () { return 0x1B139B0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FPLIEAGLDBK> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FNOKEADIAFN> () { return 0x1B11EB0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JJONFOCKDEB> () { return 0x1B13690; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IDLKPGBFLDM> () { return 0x1B12E30; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LMBGFHLEPEN> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LELPGDDGOAK> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::AHACAEILLBI> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JNNMNDAFOLB> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::AFINEELDDNN> () { return 0x1B10EE0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GGDANHDANAJ> () { return 0x1B12230; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GCHLMPKPAMK> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LPLAPJIDGEH> () { return 0x1B13EC0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::HHLHKNGBJJN> () { return 0x1B128C0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::EPNKFILFNMA> () { return 0x1B11D60; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::GFGPKDNMOCG> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::FOEFBDJLHPN> () { return 0x1B12010; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::NHLKPLODBFJ> () { return 0x1B14280; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::LHEPHFHLLFN> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::BMHKCLEPACC> () { return 0x1B112E0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::MFFMOHLLDGE> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ABIGDNNINIK> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::KIMJFBEICOK> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::IDBIIJPJAHO> () { return 0x1B12D80; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::KKCIDCFOAFL> () { return 0x1B13910; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::NMNFJAECHJH> () { return 0x1B143C0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CMHKIHIOFEI> () { return 0x1B117E0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CHECLDFAKEK> () { return 0x472000; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::BGMJGBCFNKC> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ILBDAIAPACO> () { return 0x1B12F80; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::PEFFLABLMBO> () { return 0x1B14C90; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CHGAPJJNJDI> () { return 0x1B11570; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::EJOHDPBFOOJ> () { return 0x1B11CA0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JDJNJKLFFLF> () { return 0x1B132B0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::JEMGFKMPBNO> () { return 0x1B13410; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ctor1> () { return 0x1B150A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::EGOFFCBFNLH> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::DCLCJDKNKNO> () { return 0x1B11960; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::ONBPHENJEAJ> () { return 0x1B148F0; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::AAKJMNHPNEJ> () { return 0x1B10D90; }
    template<> inline uintptr_t rva<&GameData_PlayerInfo::CKEDDCGIMMP> () { return 0x472000; }
} // ark::method_info
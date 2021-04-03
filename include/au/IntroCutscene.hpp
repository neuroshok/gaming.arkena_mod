//au//IntroCutscene
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
struct TextRenderer;
struct PoolablePlayer;
namespace UnityEngine{ struct MeshRenderer; }
struct FloatRange;
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct AudioClip; }
struct DualshockLightManager_DBFBCOPOCHH;
namespace System::Collections{ struct IEnumerator; }
namespace System::Collections::Generic{ template <class> struct List; }
struct PlayerControl;
struct IntroCutscene : ark::meta<IntroCutscene, UnityEngine::MonoBehaviour>
{
ark_meta("", "IntroCutscene", "");

    // Fields

    static IntroCutscene* Instance(); // 0x0
    TextRenderer* Title; // 0xC
    TextRenderer* ImpostorText; // 0x10
    PoolablePlayer* PlayerPrefab; // 0x14
    UnityEngine::MeshRenderer* BackgroundBar; // 0x18
    UnityEngine::MeshRenderer* Foreground; // 0x1C
    FloatRange* ForegroundRadius; // 0x20
    UnityEngine::SpriteRenderer* FrontMost; // 0x24
    UnityEngine::AudioClip* IntroStinger; // 0x28
    float BaseY; // 0x2C
    DualshockLightManager_DBFBCOPOCHH* MJIPKDMJIHF; // 0x30

    // Methods

    System::Collections::IEnumerator* NCLNOJJCOIO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBE650 // public 
    System::Collections::IEnumerator* MIAJIFLFGHO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBCB60 // public 
    void KDAJBICCOLB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB7A70 // private 
    void AOBBNNIPLOG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAD000 // private 
    System::Collections::IEnumerator* OIDBIMODCPH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CC0270 // public 
    System::Collections::IEnumerator* KFIPNKPGJIM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB80F0 // public 
    System::Collections::IEnumerator* MJMLHHMDJOL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBD040 // public 
    void DLJCLIGDKEL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB1AC0 // private 
    void FKFFHANIHBI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB4010 // private 
    System::Collections::IEnumerator* EJMFCPACKFA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB25D0 // public 
    void BCOJAKMAAOD(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAD680 // private 
    void PNGCEPFNPPO(); // 0x1CC2420 // private 
    System::Collections::IEnumerator* IDJMIINLCDE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB65C0 // public 
    void JOKFFOHBOFO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB6D30 // private 
    void LOHPAMGKKIJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBB810 // private 
    void OGECPMMHOGE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBFC10 // private 
    void MNKCAPGNKIE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBD720 // private 
    System::Collections::IEnumerator* PLIBMKKBAIL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CC23C0 // public 
    void CCGGCNFICEK(); // 0x1CAF0D0 // private 
    System::Collections::IEnumerator* MEFOPEJEAKK(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBBE00 // public 
    System::Collections::IEnumerator* PBKAKBAFIHI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CC1240 // public 
    System::Collections::IEnumerator* JPACLDABIHK(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB7580 // public 
    System::Collections::IEnumerator* HFLPMDPOBBC(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB5660 // public 
    void JACLEDOBMFN(); // 0x1CB6BB0 // private 
    void MJNLCDCCBPL(); // 0x1CB6B50 // private 
    void OEGMGMBKCIJ(); // 0x1CBFBE0 // private 
    void FALBIAFEJNG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB3570 // private 
    void ICOCCICDHAB(); // 0x1CB6590 // private 
    void MOHBOMEIKMJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBDBC0 // private 
    System::Collections::IEnumerator* CoBegin(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB0FD0 // public 
    void KNJHIGLKNCO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB9120 // private 
    void AFLJAHIFLAJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CACC50 // private 
    void KIKGCLDDGNF(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB8660 // private 
    void LFNGMODEMPB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB9E10 // private 
    System::Collections::IEnumerator* KJEOLCHEEBH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB8BF0 // public 
    void CFJPAIEFJDL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAF570 // private 
    void LBCMEMNNMAJ(); // 0x1CB3BD0 // private 
    void HMLCOCAJBGM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB6110 // private 
    System::Collections::IEnumerator* DPOIPFBAMPL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB2190 // public 
    void OPPJIHHPHLJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC08F0 // private 
    void GNOIDNMKHNP(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB51F0 // private 
    void EOBMDOOPGOJ(); // 0x1CB3540 // private 
    System::Collections::IEnumerator* KIAHBGEEFEM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB8600 // public 
    void PIILCJCKPEC(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC1790 // private 
    void CPKOPHMEMEI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB0B30 // private 
    void ELPMGGMCGBL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB2A10 // private 
    void LLDOPDBJGEO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBAE00 // private 
    void OHLDPNMEBOM(); // 0x1CB0540 // private 
    void PJMOKJICCGM(); // 0x1CB60E0 // private 
    System::Collections::IEnumerator* FLCDCFOIOMO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB4660 // public 
    void FFLAAHKFKAF(); // 0x1CB3BD0 // private 
    void EMANDGBLBDF(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB2EC0 // private 
    void BOIDAIBLMPJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAE8E0 // private 
    void BPCEBGNIGPM(); // 0x1CAEC90 // private 
    void OMPDMHDHCBO(); // 0x1CC02D0 // private 
    System::Collections::IEnumerator* GGGPHHJHAEP(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB4CE0 // public 
    void MHFOLCDAIAL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBC310 // private 
    void DLGJDGFGAEA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB1450 // private 
    void CMGGLDNDDAF(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB0570 // private 
    System::Collections::IEnumerator* FMGKMMCNFLL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB46C0 // public 
    void KAENPBJGNJC(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB75E0 // private 
    void OnDestroy(); // 0x1CC0D80 // private 
    void MOOBHKMEFFA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBDF80 // private 
    System::Collections::IEnumerator* NGDCLKLGCOK(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBEA90 // public 
    void IKDCELIBAOJ(); // 0x1CB6B50 // private 
    void NOPHPIAFIEH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBF210 // private 
    void EJKJCEBKPBP(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB2220 // private 
    void FMPNIMIOEBD(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB4720 // private 
    System::Collections::IEnumerator* NADIJBFDMMG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBE5F0 // public 
    void MGILAJEAFHE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBBE60 // private 
    void HLJPPKCENIE(); // 0x1CB0B00 // private 
    void BJHJNOPAGPJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CADB10 // private 
    void GLMHNBIBKMN(); // 0x1CB3BD0 // private 
    void JOMEMPBNJBI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB71D0 // private 
    System::Collections::IEnumerator* NPKGJAPIAJI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBF6A0 // public 
    void IHBODCAELIF(); // 0x1CB6B20 // private 
    System::Collections::IEnumerator* MDGLOHCHBPL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBBDA0 // public 
    System::Collections::IEnumerator* IENLDNHIMIE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB6620 // public 
    System::Collections::IEnumerator* FKICLOBFPJE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB45A0 // public 
    void CKFKGOFPOEO(); // 0x1CB0540 // private 
    void ELNMHKJLLFD(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB2660 // private 
    System::Collections::IEnumerator* HFAKOHINNKM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB5600 // public 
    void LKCAHFGNACN(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBA870 // private 
    void LGHKDDIGOIM(); // 0x1CBA1C0 // private 
    void LHHOOLEEBND(); // 0x1CBA2B0 // private 
    void KLPBABJEHBG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB8C50 // private 
    System::Collections::IEnumerator* PHBIGKAJHMF(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CC1730 // public 
    void PJMCJGOFIDB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC1D20 // private 
    void BMKAHJNGKHM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAE0A0 // private 
    void JLKGGCODICG(); // 0x1CB6C70 // private 
    void FOEDODDFMDE(); // 0x1CB4CB0 // private 
    void BNDNFHBPBNE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAE530 // private 
    void AFJNNNCBKAC(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAC6C0 // private 
    void PEMPLFFDOEA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC12A0 // private 
    void MIIIBPBGLFL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBCBC0 // private 
    void PJOIBKLENAL(); // 0x1CC2390 // private 
    void JNEKPNLOJOM(); // 0x1CB6D00 // private 
    void AEBABGNPNMJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAC060 // private 
    System::Collections::IEnumerator* FKOIFEBMMCJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB4600 // public 
    void CHEAPCKFEFG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAFB00 // private 
    void ctor(); // 0x1CC2450 // public 
    void LMOFNPFMDNJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBB390 // private 
    System::Collections::IEnumerator* DONHKHINNDA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB2130 // public 
    void IFIKJCKDBNK(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB6680 // private 
    void MNHPNKHKFLI(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBD0A0 // private 
    void IOJPMCNGHOA(); // 0x1CB6590 // private 
    System::Collections::IEnumerator* JKGLNPMJAAB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB6C10 // public 
    void EKMMGEMGOJA(); // 0x1CB2630 // private 
    System::Collections::IEnumerator* NJNEBALEAAB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBF150 // public 
    void KNDAFANDKCE(); // 0x1CB90F0 // private 
    void BPPIJKBFOHP(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAECC0 // private 
    void IPPAKKGCPGD(); // 0x1CB6B80 // private 
    System::Collections::IEnumerator* OBNOGADDAMM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBFB80 // public 
    void GIICCPHAGAB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB4D50 // private 
    void FIBBNAMIGGL(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB3C00 // private 
    void LJEMBKKHMDG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBA2E0 // private 
    void LDMMLCDKBIK(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB9880 // private 
    void ECAJLKPONPL(); // 0x1CB21F0 // private 
    void PKECNEPEHKI(); // 0x1CB2630 // private 
    System::Collections::IEnumerator* ONFDPABMHCH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CC0300 // public 
    System::Collections::IEnumerator* CBMKODMDLCH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CAF070 // public 
    void HKCANMNKKCM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB5A70 // private 
    void OAPFIDIDLJJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBF700 // private 
    void DKPGENNAAIF(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB1030 // private 
    void MHPIBGGFEHD(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBC7B0 // private 
    System::Collections::IEnumerator* FIKJOFGJNBG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB3FB0 // public 
    void OPINKDELAFM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC0360 // private 
    void PBEIECDLMOM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CC0DB0 // private 
    void HHBDPLJCABA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB56C0 // private 
    System::Collections::IEnumerator* NKGLKENABMA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBF1B0 // public 
    void NNMJPAEMFLG(); // 0x1CB3540 // private 
    void NEFFNFPLLGE(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBE6B0 // private 
    void LCCDAIIBHCB(); // 0x1CB21F0 // private 
    void CPAGAIIFOJD(); // 0x1CB0B00 // private 
    void NFLMJADJPOI(); // 0x1CBEA60 // private 
    System::Collections::IEnumerator* LGPBEIKPAHG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBA1F0 // public 
    System::Collections::IEnumerator* JMDOLKEHJCA(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB6CA0 // public 
    void CKEEKOLMNOM(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB0090 // private 
    void OHMHHHEGJIL(); // 0x1CBA1C0 // private 
    void KGPJMGNJMCG(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB8150 // private 
    void EMDIMDOOHIB(); // 0x1CB21F0 // private 
    void CEJIJNAMGGO(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CAF100 // private 
    System::Collections::IEnumerator* HCIGKAAFODH(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CB55A0 // public 
    void KPJPKHKCGIB(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CB94D0 // private 
    System::Collections::IEnumerator* LHHLEFOMOIN(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB, bool LHCDGDFPCBN); // 0x1CBA250 // public 
    void JIPPKNKIHKN(); // 0x1CB6BE0 // private 
    void NGOJFKMKOFC(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1CBEAF0 // private 
    void HLCEFNINJOG(); // 0x1CB60E0 // private 

};


namespace ark
{
template<>
struct meta_statics<IntroCutscene>
{
    IntroCutscene* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&IntroCutscene::NCLNOJJCOIO> () { return 0x1CBE650; }
    template<> inline uintptr_t rva<&IntroCutscene::MIAJIFLFGHO> () { return 0x1CBCB60; }
    template<> inline uintptr_t rva<&IntroCutscene::KDAJBICCOLB> () { return 0x1CB7A70; }
    template<> inline uintptr_t rva<&IntroCutscene::AOBBNNIPLOG> () { return 0x1CAD000; }
    template<> inline uintptr_t rva<&IntroCutscene::OIDBIMODCPH> () { return 0x1CC0270; }
    template<> inline uintptr_t rva<&IntroCutscene::KFIPNKPGJIM> () { return 0x1CB80F0; }
    template<> inline uintptr_t rva<&IntroCutscene::MJMLHHMDJOL> () { return 0x1CBD040; }
    template<> inline uintptr_t rva<&IntroCutscene::DLJCLIGDKEL> () { return 0x1CB1AC0; }
    template<> inline uintptr_t rva<&IntroCutscene::FKFFHANIHBI> () { return 0x1CB4010; }
    template<> inline uintptr_t rva<&IntroCutscene::EJMFCPACKFA> () { return 0x1CB25D0; }
    template<> inline uintptr_t rva<&IntroCutscene::BCOJAKMAAOD> () { return 0x1CAD680; }
    template<> inline uintptr_t rva<&IntroCutscene::PNGCEPFNPPO> () { return 0x1CC2420; }
    template<> inline uintptr_t rva<&IntroCutscene::IDJMIINLCDE> () { return 0x1CB65C0; }
    template<> inline uintptr_t rva<&IntroCutscene::JOKFFOHBOFO> () { return 0x1CB6D30; }
    template<> inline uintptr_t rva<&IntroCutscene::LOHPAMGKKIJ> () { return 0x1CBB810; }
    template<> inline uintptr_t rva<&IntroCutscene::OGECPMMHOGE> () { return 0x1CBFC10; }
    template<> inline uintptr_t rva<&IntroCutscene::MNKCAPGNKIE> () { return 0x1CBD720; }
    template<> inline uintptr_t rva<&IntroCutscene::PLIBMKKBAIL> () { return 0x1CC23C0; }
    template<> inline uintptr_t rva<&IntroCutscene::CCGGCNFICEK> () { return 0x1CAF0D0; }
    template<> inline uintptr_t rva<&IntroCutscene::MEFOPEJEAKK> () { return 0x1CBBE00; }
    template<> inline uintptr_t rva<&IntroCutscene::PBKAKBAFIHI> () { return 0x1CC1240; }
    template<> inline uintptr_t rva<&IntroCutscene::JPACLDABIHK> () { return 0x1CB7580; }
    template<> inline uintptr_t rva<&IntroCutscene::HFLPMDPOBBC> () { return 0x1CB5660; }
    template<> inline uintptr_t rva<&IntroCutscene::JACLEDOBMFN> () { return 0x1CB6BB0; }
    template<> inline uintptr_t rva<&IntroCutscene::MJNLCDCCBPL> () { return 0x1CB6B50; }
    template<> inline uintptr_t rva<&IntroCutscene::OEGMGMBKCIJ> () { return 0x1CBFBE0; }
    template<> inline uintptr_t rva<&IntroCutscene::FALBIAFEJNG> () { return 0x1CB3570; }
    template<> inline uintptr_t rva<&IntroCutscene::ICOCCICDHAB> () { return 0x1CB6590; }
    template<> inline uintptr_t rva<&IntroCutscene::MOHBOMEIKMJ> () { return 0x1CBDBC0; }
    template<> inline uintptr_t rva<&IntroCutscene::CoBegin> () { return 0x1CB0FD0; }
    template<> inline uintptr_t rva<&IntroCutscene::KNJHIGLKNCO> () { return 0x1CB9120; }
    template<> inline uintptr_t rva<&IntroCutscene::AFLJAHIFLAJ> () { return 0x1CACC50; }
    template<> inline uintptr_t rva<&IntroCutscene::KIKGCLDDGNF> () { return 0x1CB8660; }
    template<> inline uintptr_t rva<&IntroCutscene::LFNGMODEMPB> () { return 0x1CB9E10; }
    template<> inline uintptr_t rva<&IntroCutscene::KJEOLCHEEBH> () { return 0x1CB8BF0; }
    template<> inline uintptr_t rva<&IntroCutscene::CFJPAIEFJDL> () { return 0x1CAF570; }
    template<> inline uintptr_t rva<&IntroCutscene::LBCMEMNNMAJ> () { return 0x1CB3BD0; }
    template<> inline uintptr_t rva<&IntroCutscene::HMLCOCAJBGM> () { return 0x1CB6110; }
    template<> inline uintptr_t rva<&IntroCutscene::DPOIPFBAMPL> () { return 0x1CB2190; }
    template<> inline uintptr_t rva<&IntroCutscene::OPPJIHHPHLJ> () { return 0x1CC08F0; }
    template<> inline uintptr_t rva<&IntroCutscene::GNOIDNMKHNP> () { return 0x1CB51F0; }
    template<> inline uintptr_t rva<&IntroCutscene::EOBMDOOPGOJ> () { return 0x1CB3540; }
    template<> inline uintptr_t rva<&IntroCutscene::KIAHBGEEFEM> () { return 0x1CB8600; }
    template<> inline uintptr_t rva<&IntroCutscene::PIILCJCKPEC> () { return 0x1CC1790; }
    template<> inline uintptr_t rva<&IntroCutscene::CPKOPHMEMEI> () { return 0x1CB0B30; }
    template<> inline uintptr_t rva<&IntroCutscene::ELPMGGMCGBL> () { return 0x1CB2A10; }
    template<> inline uintptr_t rva<&IntroCutscene::LLDOPDBJGEO> () { return 0x1CBAE00; }
    template<> inline uintptr_t rva<&IntroCutscene::OHLDPNMEBOM> () { return 0x1CB0540; }
    template<> inline uintptr_t rva<&IntroCutscene::PJMOKJICCGM> () { return 0x1CB60E0; }
    template<> inline uintptr_t rva<&IntroCutscene::FLCDCFOIOMO> () { return 0x1CB4660; }
    template<> inline uintptr_t rva<&IntroCutscene::FFLAAHKFKAF> () { return 0x1CB3BD0; }
    template<> inline uintptr_t rva<&IntroCutscene::EMANDGBLBDF> () { return 0x1CB2EC0; }
    template<> inline uintptr_t rva<&IntroCutscene::BOIDAIBLMPJ> () { return 0x1CAE8E0; }
    template<> inline uintptr_t rva<&IntroCutscene::BPCEBGNIGPM> () { return 0x1CAEC90; }
    template<> inline uintptr_t rva<&IntroCutscene::OMPDMHDHCBO> () { return 0x1CC02D0; }
    template<> inline uintptr_t rva<&IntroCutscene::GGGPHHJHAEP> () { return 0x1CB4CE0; }
    template<> inline uintptr_t rva<&IntroCutscene::MHFOLCDAIAL> () { return 0x1CBC310; }
    template<> inline uintptr_t rva<&IntroCutscene::DLGJDGFGAEA> () { return 0x1CB1450; }
    template<> inline uintptr_t rva<&IntroCutscene::CMGGLDNDDAF> () { return 0x1CB0570; }
    template<> inline uintptr_t rva<&IntroCutscene::FMGKMMCNFLL> () { return 0x1CB46C0; }
    template<> inline uintptr_t rva<&IntroCutscene::KAENPBJGNJC> () { return 0x1CB75E0; }
    template<> inline uintptr_t rva<&IntroCutscene::OnDestroy> () { return 0x1CC0D80; }
    template<> inline uintptr_t rva<&IntroCutscene::MOOBHKMEFFA> () { return 0x1CBDF80; }
    template<> inline uintptr_t rva<&IntroCutscene::NGDCLKLGCOK> () { return 0x1CBEA90; }
    template<> inline uintptr_t rva<&IntroCutscene::IKDCELIBAOJ> () { return 0x1CB6B50; }
    template<> inline uintptr_t rva<&IntroCutscene::NOPHPIAFIEH> () { return 0x1CBF210; }
    template<> inline uintptr_t rva<&IntroCutscene::EJKJCEBKPBP> () { return 0x1CB2220; }
    template<> inline uintptr_t rva<&IntroCutscene::FMPNIMIOEBD> () { return 0x1CB4720; }
    template<> inline uintptr_t rva<&IntroCutscene::NADIJBFDMMG> () { return 0x1CBE5F0; }
    template<> inline uintptr_t rva<&IntroCutscene::MGILAJEAFHE> () { return 0x1CBBE60; }
    template<> inline uintptr_t rva<&IntroCutscene::HLJPPKCENIE> () { return 0x1CB0B00; }
    template<> inline uintptr_t rva<&IntroCutscene::BJHJNOPAGPJ> () { return 0x1CADB10; }
    template<> inline uintptr_t rva<&IntroCutscene::GLMHNBIBKMN> () { return 0x1CB3BD0; }
    template<> inline uintptr_t rva<&IntroCutscene::JOMEMPBNJBI> () { return 0x1CB71D0; }
    template<> inline uintptr_t rva<&IntroCutscene::NPKGJAPIAJI> () { return 0x1CBF6A0; }
    template<> inline uintptr_t rva<&IntroCutscene::IHBODCAELIF> () { return 0x1CB6B20; }
    template<> inline uintptr_t rva<&IntroCutscene::MDGLOHCHBPL> () { return 0x1CBBDA0; }
    template<> inline uintptr_t rva<&IntroCutscene::IENLDNHIMIE> () { return 0x1CB6620; }
    template<> inline uintptr_t rva<&IntroCutscene::FKICLOBFPJE> () { return 0x1CB45A0; }
    template<> inline uintptr_t rva<&IntroCutscene::CKFKGOFPOEO> () { return 0x1CB0540; }
    template<> inline uintptr_t rva<&IntroCutscene::ELNMHKJLLFD> () { return 0x1CB2660; }
    template<> inline uintptr_t rva<&IntroCutscene::HFAKOHINNKM> () { return 0x1CB5600; }
    template<> inline uintptr_t rva<&IntroCutscene::LKCAHFGNACN> () { return 0x1CBA870; }
    template<> inline uintptr_t rva<&IntroCutscene::LGHKDDIGOIM> () { return 0x1CBA1C0; }
    template<> inline uintptr_t rva<&IntroCutscene::LHHOOLEEBND> () { return 0x1CBA2B0; }
    template<> inline uintptr_t rva<&IntroCutscene::KLPBABJEHBG> () { return 0x1CB8C50; }
    template<> inline uintptr_t rva<&IntroCutscene::PHBIGKAJHMF> () { return 0x1CC1730; }
    template<> inline uintptr_t rva<&IntroCutscene::PJMCJGOFIDB> () { return 0x1CC1D20; }
    template<> inline uintptr_t rva<&IntroCutscene::BMKAHJNGKHM> () { return 0x1CAE0A0; }
    template<> inline uintptr_t rva<&IntroCutscene::JLKGGCODICG> () { return 0x1CB6C70; }
    template<> inline uintptr_t rva<&IntroCutscene::FOEDODDFMDE> () { return 0x1CB4CB0; }
    template<> inline uintptr_t rva<&IntroCutscene::BNDNFHBPBNE> () { return 0x1CAE530; }
    template<> inline uintptr_t rva<&IntroCutscene::AFJNNNCBKAC> () { return 0x1CAC6C0; }
    template<> inline uintptr_t rva<&IntroCutscene::PEMPLFFDOEA> () { return 0x1CC12A0; }
    template<> inline uintptr_t rva<&IntroCutscene::MIIIBPBGLFL> () { return 0x1CBCBC0; }
    template<> inline uintptr_t rva<&IntroCutscene::PJOIBKLENAL> () { return 0x1CC2390; }
    template<> inline uintptr_t rva<&IntroCutscene::JNEKPNLOJOM> () { return 0x1CB6D00; }
    template<> inline uintptr_t rva<&IntroCutscene::AEBABGNPNMJ> () { return 0x1CAC060; }
    template<> inline uintptr_t rva<&IntroCutscene::FKOIFEBMMCJ> () { return 0x1CB4600; }
    template<> inline uintptr_t rva<&IntroCutscene::CHEAPCKFEFG> () { return 0x1CAFB00; }
    template<> inline uintptr_t rva<&IntroCutscene::ctor> () { return 0x1CC2450; }
    template<> inline uintptr_t rva<&IntroCutscene::LMOFNPFMDNJ> () { return 0x1CBB390; }
    template<> inline uintptr_t rva<&IntroCutscene::DONHKHINNDA> () { return 0x1CB2130; }
    template<> inline uintptr_t rva<&IntroCutscene::IFIKJCKDBNK> () { return 0x1CB6680; }
    template<> inline uintptr_t rva<&IntroCutscene::MNHPNKHKFLI> () { return 0x1CBD0A0; }
    template<> inline uintptr_t rva<&IntroCutscene::IOJPMCNGHOA> () { return 0x1CB6590; }
    template<> inline uintptr_t rva<&IntroCutscene::JKGLNPMJAAB> () { return 0x1CB6C10; }
    template<> inline uintptr_t rva<&IntroCutscene::EKMMGEMGOJA> () { return 0x1CB2630; }
    template<> inline uintptr_t rva<&IntroCutscene::NJNEBALEAAB> () { return 0x1CBF150; }
    template<> inline uintptr_t rva<&IntroCutscene::KNDAFANDKCE> () { return 0x1CB90F0; }
    template<> inline uintptr_t rva<&IntroCutscene::BPPIJKBFOHP> () { return 0x1CAECC0; }
    template<> inline uintptr_t rva<&IntroCutscene::IPPAKKGCPGD> () { return 0x1CB6B80; }
    template<> inline uintptr_t rva<&IntroCutscene::OBNOGADDAMM> () { return 0x1CBFB80; }
    template<> inline uintptr_t rva<&IntroCutscene::GIICCPHAGAB> () { return 0x1CB4D50; }
    template<> inline uintptr_t rva<&IntroCutscene::FIBBNAMIGGL> () { return 0x1CB3C00; }
    template<> inline uintptr_t rva<&IntroCutscene::LJEMBKKHMDG> () { return 0x1CBA2E0; }
    template<> inline uintptr_t rva<&IntroCutscene::LDMMLCDKBIK> () { return 0x1CB9880; }
    template<> inline uintptr_t rva<&IntroCutscene::ECAJLKPONPL> () { return 0x1CB21F0; }
    template<> inline uintptr_t rva<&IntroCutscene::PKECNEPEHKI> () { return 0x1CB2630; }
    template<> inline uintptr_t rva<&IntroCutscene::ONFDPABMHCH> () { return 0x1CC0300; }
    template<> inline uintptr_t rva<&IntroCutscene::CBMKODMDLCH> () { return 0x1CAF070; }
    template<> inline uintptr_t rva<&IntroCutscene::HKCANMNKKCM> () { return 0x1CB5A70; }
    template<> inline uintptr_t rva<&IntroCutscene::OAPFIDIDLJJ> () { return 0x1CBF700; }
    template<> inline uintptr_t rva<&IntroCutscene::DKPGENNAAIF> () { return 0x1CB1030; }
    template<> inline uintptr_t rva<&IntroCutscene::MHPIBGGFEHD> () { return 0x1CBC7B0; }
    template<> inline uintptr_t rva<&IntroCutscene::FIKJOFGJNBG> () { return 0x1CB3FB0; }
    template<> inline uintptr_t rva<&IntroCutscene::OPINKDELAFM> () { return 0x1CC0360; }
    template<> inline uintptr_t rva<&IntroCutscene::PBEIECDLMOM> () { return 0x1CC0DB0; }
    template<> inline uintptr_t rva<&IntroCutscene::HHBDPLJCABA> () { return 0x1CB56C0; }
    template<> inline uintptr_t rva<&IntroCutscene::NKGLKENABMA> () { return 0x1CBF1B0; }
    template<> inline uintptr_t rva<&IntroCutscene::NNMJPAEMFLG> () { return 0x1CB3540; }
    template<> inline uintptr_t rva<&IntroCutscene::NEFFNFPLLGE> () { return 0x1CBE6B0; }
    template<> inline uintptr_t rva<&IntroCutscene::LCCDAIIBHCB> () { return 0x1CB21F0; }
    template<> inline uintptr_t rva<&IntroCutscene::CPAGAIIFOJD> () { return 0x1CB0B00; }
    template<> inline uintptr_t rva<&IntroCutscene::NFLMJADJPOI> () { return 0x1CBEA60; }
    template<> inline uintptr_t rva<&IntroCutscene::LGPBEIKPAHG> () { return 0x1CBA1F0; }
    template<> inline uintptr_t rva<&IntroCutscene::JMDOLKEHJCA> () { return 0x1CB6CA0; }
    template<> inline uintptr_t rva<&IntroCutscene::CKEEKOLMNOM> () { return 0x1CB0090; }
    template<> inline uintptr_t rva<&IntroCutscene::OHMHHHEGJIL> () { return 0x1CBA1C0; }
    template<> inline uintptr_t rva<&IntroCutscene::KGPJMGNJMCG> () { return 0x1CB8150; }
    template<> inline uintptr_t rva<&IntroCutscene::EMDIMDOOHIB> () { return 0x1CB21F0; }
    template<> inline uintptr_t rva<&IntroCutscene::CEJIJNAMGGO> () { return 0x1CAF100; }
    template<> inline uintptr_t rva<&IntroCutscene::HCIGKAAFODH> () { return 0x1CB55A0; }
    template<> inline uintptr_t rva<&IntroCutscene::KPJPKHKCGIB> () { return 0x1CB94D0; }
    template<> inline uintptr_t rva<&IntroCutscene::LHHLEFOMOIN> () { return 0x1CBA250; }
    template<> inline uintptr_t rva<&IntroCutscene::JIPPKNKIHKN> () { return 0x1CB6BE0; }
    template<> inline uintptr_t rva<&IntroCutscene::NGOJFKMKOFC> () { return 0x1CBEAF0; }
    template<> inline uintptr_t rva<&IntroCutscene::HLCEFNINJOG> () { return 0x1CB60E0; }
} // ark::method_info
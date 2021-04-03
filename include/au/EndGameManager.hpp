//au//EndGameManager
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
struct TextRenderer;
namespace UnityEngine{ struct MeshRenderer; }
struct FloatRange;
namespace UnityEngine{ struct SpriteRenderer; }
struct PoolablePlayer;
namespace UnityEngine{ struct Sprite; }
namespace UnityEngine{ struct AudioClip; }
namespace UnityEngine{ struct AudioSource; }
namespace System::Collections{ struct IEnumerator; }
namespace System{ template <class...> struct Func; }

struct EndGameManager : ark::meta<EndGameManager, UnityEngine::MonoBehaviour>
{
ark_meta("", "EndGameManager", "");

    // Fields

    TextRenderer* WinText; // 0xC
    UnityEngine::MeshRenderer* BackgroundBar; // 0x10
    UnityEngine::MeshRenderer* Foreground; // 0x14
    FloatRange* ForegroundRadius; // 0x18
    UnityEngine::SpriteRenderer* FrontMost; // 0x1C
    PoolablePlayer* PlayerPrefab; // 0x20
    UnityEngine::Sprite* GhostSprite; // 0x24
    UnityEngine::SpriteRenderer* PlayAgainButton; // 0x28
    UnityEngine::SpriteRenderer* ExitButton; // 0x2C
    UnityEngine::AudioClip* DisconnectStinger; // 0x30
    UnityEngine::AudioClip* CrewStinger; // 0x34
    UnityEngine::AudioClip* ImpostorStinger; // 0x38
    float BaseY; // 0x3C
    float IPOFLEDONCG; // 0x40

    // Methods

    void NextGame(); // 0x1EE8A20 // public 
    void ACKKIABPJFM(); // 0x1EDD3C0 // public 
    void IBNEBPANMKP(); // 0x1EE3380 // public 
    void OBDGBFGKEOE(); // 0x1EDD450 // private 
    void NNLKNGBKICG(); // 0x1EE7B80 // private 
    void DGLHCEFJJDK(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EDF970 // private 
    void HLALGPGIMOE(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE3100 // private 
    System::Collections::IEnumerator* CoJoinGame(); // 0x1EDF860 // public 
    System::Collections::IEnumerator* OOGBAJOHKGF(System::Func<bool>* ODKFKDMCGOK); // 0x1EE8CB0 // public static 
    System::Collections::IEnumerator* IFOOOAKFCGB(); // 0x1EE3450 // public 
    System::Collections::IEnumerator* JGOBIDKNMEC(); // 0x1EE53D0 // public 
    void CBBJABANHMO(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EDE6E0 // private 
    void IHFFENHDKEA(); // 0x1EE36F0 // public 
    System::Collections::IEnumerator* HJCCCNNCBNK(); // 0x1EE30B0 // public 
    void OKFNOALNJIG(); // 0x1EDD450 // private 
    void GPFHGJNMANG(); // 0x1EE2F10 // public 
    void NOHCFLDJECK(); // 0x1EE88D0 // public 
    void DFMNOPPOMKB(); // 0x1EDF8E0 // public 
    void NCMFGOJIKLM(); // 0x1EDD450 // private 
    void BANDFOEDNBD(); // 0x1EDD550 // private 
    void EOALOBPFAOC(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE1700 // private 
    void HEHHDGMFMOG(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE2FE0 // private 
    void ILINLDOKJML(); // 0x1EE3960 // private 
    System::Collections::IEnumerator* NECABMDNPKF(); // 0x1EE77F0 // public 
    System::Collections::IEnumerator* IHLEDJBIDFN(System::Func<bool>* ODKFKDMCGOK); // 0x1EE3840 // public static 
    void HOGKAHAHMJN(); // 0x1EE31D0 // public 
    void IJFNAPCJKLB(); // 0x1EE3890 // public 
    void BIGANIAENKO(); // 0x1EDD940 // private 
    void FLILDAHBADI(); // 0x1EE28F0 // public 
    void CEJNBEBAGIF(); // 0x1EDE7F0 // public 
    void BCJIKJMJOKP(); // 0x1EDD5D0 // public 
    void JDCIPAALEHI(); // 0x1EE4620 // private 
    void NJKJDAIFIBH(); // 0x1EE7A60 // public 
    void Exit(); // 0x1EE1840 // public 
    void NCEMNLOBICE(); // 0x1EE7720 // public 
    void FBJJIABFAPD(); // 0x1EE18D0 // public 
    System::Collections::IEnumerator* HDMFNGCPOKE(); // 0x1EE2FA0 // public 
    void ctor(); // 0x1EE8FB0 // public 
    System::Collections::IEnumerator* CCKNGLONHLG(); // 0x1EDE7B0 // public 
    void GAMBAGGHOJO(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE2980 // private 
    void GMOKPDPLAJH(); // 0x1EE2DC0 // public 
    System::Collections::IEnumerator* CoBegin(); // 0x1EDF810 // public 
    void ALJHDOJBDNH(); // 0x1EDD4D0 // private 
    void EOGIAHAIIIM(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE1780 // private 
    System::Collections::IEnumerator* EMPMMCJOOKA(); // 0x1EE16C0 // public 
    void EGHBJBLFOFE(); // 0x1EE0880 // public 
    void GKCFKEPLKCH(); // 0x1EE2CE0 // public 
    void JFCOJJJJINC(); // 0x1EE5340 // public 
    System::Collections::IEnumerator* MGBJDBMCPKO(System::Func<bool>* ODKFKDMCGOK); // 0x1EE7600 // public static 
    void HAMDKLCHLBH(); // 0x1EDE660 // private 
    System::Collections::IEnumerator* FGOCEEPOJHI(System::Func<bool>* ODKFKDMCGOK); // 0x1EE1960 // public static 
    void JLLGBGICOHL(); // 0x1EE5630 // public 
    void FIAKJADKBDM(); // 0x1EE19C0 // private 
    void BFIHGGBGGCH(); // 0x1EDD6A0 // public 
    void IGDFLJCHHBL(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE35F0 // private 
    void JDOEPNNMLPN(); // 0x1EE5270 // public 
    System::Collections::IEnumerator* DONHKHINNDA(); // 0x1EDFB60 // public 
    System::Collections::IEnumerator* NJNEBALEAAB(); // 0x1EE7B30 // public 
    void FJBIBBHHHLJ(); // 0x1EE2760 // public 
    void KOPEOMKLPHP(); // 0x1EE6730 // private 
    void IGHLLEOKKJF(); // 0x1EE3670 // private 
    System::Collections::IEnumerator* HFAKOHINNKM(); // 0x1EE3060 // public 
    System::Collections::IEnumerator* JPACLDABIHK(); // 0x1EE57D0 // public 
    void MMJJFAKHHIL(); // 0x1EE7650 // public 
    void NFIIGKGJAPN(); // 0x1EE74A0 // private 
    void JLBNHJFCLBB(); // 0x1EE5560 // public 
    System::Collections::IEnumerator* POAKFHIIBIG(); // 0x1EE8E50 // public 
    void EDHPEEGGGFG(); // 0x1EDFBB0 // private 
    void EIOKEKBNEAA(); // 0x1EE0950 // public 
    System::Collections::IEnumerator* OCOLMICBEOE(); // 0x1EE8B70 // public 
    void OJNHEJINOFH(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE8C30 // private 
    void IGCNACFFPMG(); // 0x1EE34A0 // public 
    void PNJCJFLBLED(); // 0x1EDD550 // private 
    void BOOFMGAIBCN(); // 0x1EDE660 // private 
    void GKBKOMDHEHN(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE2C60 // private 
    void HPNKDGJOFHK(); // 0x1EE32B0 // public 
    void PJDLPEBEJIC(); // 0x1EDD550 // private 
    void DOLJFFLMNPP(); // 0x1EDFAD0 // public 
    void JHNFMLBLCGG(); // 0x1EE5410 // public 
    System::Collections::IEnumerator* CLJIGMPIKFG(); // 0x1EDF660 // public 
    System::Collections::IEnumerator* KDDGLHPMMOG(System::Func<bool>* ODKFKDMCGOK); // 0x1EE58F0 // public static 
    void PGAJOPBPIJM(); // 0x1EE8D00 // public 
    void NFBPFLOJKJD(); // 0x1EDD450 // private 
    void KHPGLONGHCM(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE6660 // private 
    System::Collections::IEnumerator* CJIMOBHCOML(System::Func<bool>* ODKFKDMCGOK); // 0x1EDE940 // public static 
    void GGNMBMOHFNA(); // 0x1EE2A40 // public 
    System::Collections::IEnumerator* KMGAHNJBANE(); // 0x1EE66E0 // public 
    void NIMNLAIFPEK(); // 0x1EE79D0 // public 
    void BFPLNFCPLMK(); // 0x1EDD7F0 // public 
    void GHPJPOKJCEM(); // 0x1EE2B90 // public 
    void JAGBNJGJFAF(); // 0x1EDD4D0 // private 
    System::Collections::IEnumerator* DBDFMEIKLCD(); // 0x1EDF8A0 // public 
    void COIOBEBEFLC(); // 0x1EDF6B0 // public 
    void BJEEACKNODH(); // 0x1EDE5D0 // public 
    System::Collections::IEnumerator* EPNNFAJPBCH(); // 0x1EE1800 // public 
    System::Collections::IEnumerator* HPEEFPECCJM(); // 0x1EE3260 // public 
    void OFEGCOPDBML(); // 0x1EE3670 // private 
    void NFKKPOJDKID(); // 0x1EE7830 // public 
    void JPFMHAOMBGP(); // 0x1EE5820 // public 
    System::Collections::IEnumerator* GMICPPCOBLJ(System::Func<bool>* ODKFKDMCGOK); // 0x1EE2D70 // public static 
    void AEKLDMBHAFP(); // 0x1EDD450 // private 
    void CKKKCJGBBLG(); // 0x1EDE990 // private 
    System::Collections::IEnumerator* FJLDGFGOPDB(); // 0x1EE28B0 // public 
    void ELENGBAPIEE(); // 0x1EE0A70 // private 
    System::Collections::IEnumerator* LKKIOEJJBGI(); // 0x1EE75B0 // public 
    void Start(); // 0x1EE8E90 // public 
    System::Collections::IEnumerator* NGDCLKLGCOK(); // 0x1EE7980 // public 
    System::Collections::IEnumerator* EKCBMMMIAIB(System::Func<bool>* ODKFKDMCGOK); // 0x1EE0A20 // public static 
    void DJOLFKMBNAK(); // 0x1EDF9F0 // public 
    void PMADHJMEJEP(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE8DD0 // private 
    System::Collections::IEnumerator* GFCEMINGMNN(); // 0x1EE2A00 // public 
    System::Collections::IEnumerator* WaitWithTimeout(System::Func<bool>* ODKFKDMCGOK); // 0x1EE8F60 // public static 
    void ILKCBLCGHCB(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE45A0 // private 
    System::Collections::IEnumerator* DKPHIICFHHP(System::Func<bool>* ODKFKDMCGOK); // 0x1EDFA80 // public static 
    void KGAKJBMKLBO(); // 0x1EE5990 // private 
    void OJNDDNJFCBN(UnityEngine::AudioSource* KMMMAPHIMLH, float LHFJNKPDAAK); // 0x1EE8BB0 // private 
    System::Collections::IEnumerator* CCILFBFHHOE(); // 0x1EDE760 // public 
    void LIHNHBJFIEK(); // 0x1EE74A0 // private 
    void JMPGENDADPI(); // 0x1EE5700 // public 
    void CPHBGPHPODM(); // 0x1EDF740 // public 
    System::Collections::IEnumerator* HLAPLHPEBOG(); // 0x1EE3180 // public 
    void LJDNBHALILA(); // 0x1EE7520 // public 
    System::Collections::IEnumerator* KDEHDGGDJKO(System::Func<bool>* ODKFKDMCGOK); // 0x1EE5940 // public static 

};


namespace ark
{
template<>
struct meta_statics<EndGameManager>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&EndGameManager::NextGame> () { return 0x1EE8A20; }
    template<> inline uintptr_t rva<&EndGameManager::ACKKIABPJFM> () { return 0x1EDD3C0; }
    template<> inline uintptr_t rva<&EndGameManager::IBNEBPANMKP> () { return 0x1EE3380; }
    template<> inline uintptr_t rva<&EndGameManager::OBDGBFGKEOE> () { return 0x1EDD450; }
    template<> inline uintptr_t rva<&EndGameManager::NNLKNGBKICG> () { return 0x1EE7B80; }
    template<> inline uintptr_t rva<&EndGameManager::DGLHCEFJJDK> () { return 0x1EDF970; }
    template<> inline uintptr_t rva<&EndGameManager::HLALGPGIMOE> () { return 0x1EE3100; }
    template<> inline uintptr_t rva<&EndGameManager::CoJoinGame> () { return 0x1EDF860; }
    template<> inline uintptr_t rva<&EndGameManager::OOGBAJOHKGF> () { return 0x1EE8CB0; }
    template<> inline uintptr_t rva<&EndGameManager::IFOOOAKFCGB> () { return 0x1EE3450; }
    template<> inline uintptr_t rva<&EndGameManager::JGOBIDKNMEC> () { return 0x1EE53D0; }
    template<> inline uintptr_t rva<&EndGameManager::CBBJABANHMO> () { return 0x1EDE6E0; }
    template<> inline uintptr_t rva<&EndGameManager::IHFFENHDKEA> () { return 0x1EE36F0; }
    template<> inline uintptr_t rva<&EndGameManager::HJCCCNNCBNK> () { return 0x1EE30B0; }
    template<> inline uintptr_t rva<&EndGameManager::OKFNOALNJIG> () { return 0x1EDD450; }
    template<> inline uintptr_t rva<&EndGameManager::GPFHGJNMANG> () { return 0x1EE2F10; }
    template<> inline uintptr_t rva<&EndGameManager::NOHCFLDJECK> () { return 0x1EE88D0; }
    template<> inline uintptr_t rva<&EndGameManager::DFMNOPPOMKB> () { return 0x1EDF8E0; }
    template<> inline uintptr_t rva<&EndGameManager::NCMFGOJIKLM> () { return 0x1EDD450; }
    template<> inline uintptr_t rva<&EndGameManager::BANDFOEDNBD> () { return 0x1EDD550; }
    template<> inline uintptr_t rva<&EndGameManager::EOALOBPFAOC> () { return 0x1EE1700; }
    template<> inline uintptr_t rva<&EndGameManager::HEHHDGMFMOG> () { return 0x1EE2FE0; }
    template<> inline uintptr_t rva<&EndGameManager::ILINLDOKJML> () { return 0x1EE3960; }
    template<> inline uintptr_t rva<&EndGameManager::NECABMDNPKF> () { return 0x1EE77F0; }
    template<> inline uintptr_t rva<&EndGameManager::IHLEDJBIDFN> () { return 0x1EE3840; }
    template<> inline uintptr_t rva<&EndGameManager::HOGKAHAHMJN> () { return 0x1EE31D0; }
    template<> inline uintptr_t rva<&EndGameManager::IJFNAPCJKLB> () { return 0x1EE3890; }
    template<> inline uintptr_t rva<&EndGameManager::BIGANIAENKO> () { return 0x1EDD940; }
    template<> inline uintptr_t rva<&EndGameManager::FLILDAHBADI> () { return 0x1EE28F0; }
    template<> inline uintptr_t rva<&EndGameManager::CEJNBEBAGIF> () { return 0x1EDE7F0; }
    template<> inline uintptr_t rva<&EndGameManager::BCJIKJMJOKP> () { return 0x1EDD5D0; }
    template<> inline uintptr_t rva<&EndGameManager::JDCIPAALEHI> () { return 0x1EE4620; }
    template<> inline uintptr_t rva<&EndGameManager::NJKJDAIFIBH> () { return 0x1EE7A60; }
    template<> inline uintptr_t rva<&EndGameManager::Exit> () { return 0x1EE1840; }
    template<> inline uintptr_t rva<&EndGameManager::NCEMNLOBICE> () { return 0x1EE7720; }
    template<> inline uintptr_t rva<&EndGameManager::FBJJIABFAPD> () { return 0x1EE18D0; }
    template<> inline uintptr_t rva<&EndGameManager::HDMFNGCPOKE> () { return 0x1EE2FA0; }
    template<> inline uintptr_t rva<&EndGameManager::ctor> () { return 0x1EE8FB0; }
    template<> inline uintptr_t rva<&EndGameManager::CCKNGLONHLG> () { return 0x1EDE7B0; }
    template<> inline uintptr_t rva<&EndGameManager::GAMBAGGHOJO> () { return 0x1EE2980; }
    template<> inline uintptr_t rva<&EndGameManager::GMOKPDPLAJH> () { return 0x1EE2DC0; }
    template<> inline uintptr_t rva<&EndGameManager::CoBegin> () { return 0x1EDF810; }
    template<> inline uintptr_t rva<&EndGameManager::ALJHDOJBDNH> () { return 0x1EDD4D0; }
    template<> inline uintptr_t rva<&EndGameManager::EOGIAHAIIIM> () { return 0x1EE1780; }
    template<> inline uintptr_t rva<&EndGameManager::EMPMMCJOOKA> () { return 0x1EE16C0; }
    template<> inline uintptr_t rva<&EndGameManager::EGHBJBLFOFE> () { return 0x1EE0880; }
    template<> inline uintptr_t rva<&EndGameManager::GKCFKEPLKCH> () { return 0x1EE2CE0; }
    template<> inline uintptr_t rva<&EndGameManager::JFCOJJJJINC> () { return 0x1EE5340; }
    template<> inline uintptr_t rva<&EndGameManager::MGBJDBMCPKO> () { return 0x1EE7600; }
    template<> inline uintptr_t rva<&EndGameManager::HAMDKLCHLBH> () { return 0x1EDE660; }
    template<> inline uintptr_t rva<&EndGameManager::FGOCEEPOJHI> () { return 0x1EE1960; }
    template<> inline uintptr_t rva<&EndGameManager::JLLGBGICOHL> () { return 0x1EE5630; }
    template<> inline uintptr_t rva<&EndGameManager::FIAKJADKBDM> () { return 0x1EE19C0; }
    template<> inline uintptr_t rva<&EndGameManager::BFIHGGBGGCH> () { return 0x1EDD6A0; }
    template<> inline uintptr_t rva<&EndGameManager::IGDFLJCHHBL> () { return 0x1EE35F0; }
    template<> inline uintptr_t rva<&EndGameManager::JDOEPNNMLPN> () { return 0x1EE5270; }
    template<> inline uintptr_t rva<&EndGameManager::DONHKHINNDA> () { return 0x1EDFB60; }
    template<> inline uintptr_t rva<&EndGameManager::NJNEBALEAAB> () { return 0x1EE7B30; }
    template<> inline uintptr_t rva<&EndGameManager::FJBIBBHHHLJ> () { return 0x1EE2760; }
    template<> inline uintptr_t rva<&EndGameManager::KOPEOMKLPHP> () { return 0x1EE6730; }
    template<> inline uintptr_t rva<&EndGameManager::IGHLLEOKKJF> () { return 0x1EE3670; }
    template<> inline uintptr_t rva<&EndGameManager::HFAKOHINNKM> () { return 0x1EE3060; }
    template<> inline uintptr_t rva<&EndGameManager::JPACLDABIHK> () { return 0x1EE57D0; }
    template<> inline uintptr_t rva<&EndGameManager::MMJJFAKHHIL> () { return 0x1EE7650; }
    template<> inline uintptr_t rva<&EndGameManager::NFIIGKGJAPN> () { return 0x1EE74A0; }
    template<> inline uintptr_t rva<&EndGameManager::JLBNHJFCLBB> () { return 0x1EE5560; }
    template<> inline uintptr_t rva<&EndGameManager::POAKFHIIBIG> () { return 0x1EE8E50; }
    template<> inline uintptr_t rva<&EndGameManager::EDHPEEGGGFG> () { return 0x1EDFBB0; }
    template<> inline uintptr_t rva<&EndGameManager::EIOKEKBNEAA> () { return 0x1EE0950; }
    template<> inline uintptr_t rva<&EndGameManager::OCOLMICBEOE> () { return 0x1EE8B70; }
    template<> inline uintptr_t rva<&EndGameManager::OJNHEJINOFH> () { return 0x1EE8C30; }
    template<> inline uintptr_t rva<&EndGameManager::IGCNACFFPMG> () { return 0x1EE34A0; }
    template<> inline uintptr_t rva<&EndGameManager::PNJCJFLBLED> () { return 0x1EDD550; }
    template<> inline uintptr_t rva<&EndGameManager::BOOFMGAIBCN> () { return 0x1EDE660; }
    template<> inline uintptr_t rva<&EndGameManager::GKBKOMDHEHN> () { return 0x1EE2C60; }
    template<> inline uintptr_t rva<&EndGameManager::HPNKDGJOFHK> () { return 0x1EE32B0; }
    template<> inline uintptr_t rva<&EndGameManager::PJDLPEBEJIC> () { return 0x1EDD550; }
    template<> inline uintptr_t rva<&EndGameManager::DOLJFFLMNPP> () { return 0x1EDFAD0; }
    template<> inline uintptr_t rva<&EndGameManager::JHNFMLBLCGG> () { return 0x1EE5410; }
    template<> inline uintptr_t rva<&EndGameManager::CLJIGMPIKFG> () { return 0x1EDF660; }
    template<> inline uintptr_t rva<&EndGameManager::KDDGLHPMMOG> () { return 0x1EE58F0; }
    template<> inline uintptr_t rva<&EndGameManager::PGAJOPBPIJM> () { return 0x1EE8D00; }
    template<> inline uintptr_t rva<&EndGameManager::NFBPFLOJKJD> () { return 0x1EDD450; }
    template<> inline uintptr_t rva<&EndGameManager::KHPGLONGHCM> () { return 0x1EE6660; }
    template<> inline uintptr_t rva<&EndGameManager::CJIMOBHCOML> () { return 0x1EDE940; }
    template<> inline uintptr_t rva<&EndGameManager::GGNMBMOHFNA> () { return 0x1EE2A40; }
    template<> inline uintptr_t rva<&EndGameManager::KMGAHNJBANE> () { return 0x1EE66E0; }
    template<> inline uintptr_t rva<&EndGameManager::NIMNLAIFPEK> () { return 0x1EE79D0; }
    template<> inline uintptr_t rva<&EndGameManager::BFPLNFCPLMK> () { return 0x1EDD7F0; }
    template<> inline uintptr_t rva<&EndGameManager::GHPJPOKJCEM> () { return 0x1EE2B90; }
    template<> inline uintptr_t rva<&EndGameManager::JAGBNJGJFAF> () { return 0x1EDD4D0; }
    template<> inline uintptr_t rva<&EndGameManager::DBDFMEIKLCD> () { return 0x1EDF8A0; }
    template<> inline uintptr_t rva<&EndGameManager::COIOBEBEFLC> () { return 0x1EDF6B0; }
    template<> inline uintptr_t rva<&EndGameManager::BJEEACKNODH> () { return 0x1EDE5D0; }
    template<> inline uintptr_t rva<&EndGameManager::EPNNFAJPBCH> () { return 0x1EE1800; }
    template<> inline uintptr_t rva<&EndGameManager::HPEEFPECCJM> () { return 0x1EE3260; }
    template<> inline uintptr_t rva<&EndGameManager::OFEGCOPDBML> () { return 0x1EE3670; }
    template<> inline uintptr_t rva<&EndGameManager::NFKKPOJDKID> () { return 0x1EE7830; }
    template<> inline uintptr_t rva<&EndGameManager::JPFMHAOMBGP> () { return 0x1EE5820; }
    template<> inline uintptr_t rva<&EndGameManager::GMICPPCOBLJ> () { return 0x1EE2D70; }
    template<> inline uintptr_t rva<&EndGameManager::AEKLDMBHAFP> () { return 0x1EDD450; }
    template<> inline uintptr_t rva<&EndGameManager::CKKKCJGBBLG> () { return 0x1EDE990; }
    template<> inline uintptr_t rva<&EndGameManager::FJLDGFGOPDB> () { return 0x1EE28B0; }
    template<> inline uintptr_t rva<&EndGameManager::ELENGBAPIEE> () { return 0x1EE0A70; }
    template<> inline uintptr_t rva<&EndGameManager::LKKIOEJJBGI> () { return 0x1EE75B0; }
    template<> inline uintptr_t rva<&EndGameManager::Start> () { return 0x1EE8E90; }
    template<> inline uintptr_t rva<&EndGameManager::NGDCLKLGCOK> () { return 0x1EE7980; }
    template<> inline uintptr_t rva<&EndGameManager::EKCBMMMIAIB> () { return 0x1EE0A20; }
    template<> inline uintptr_t rva<&EndGameManager::DJOLFKMBNAK> () { return 0x1EDF9F0; }
    template<> inline uintptr_t rva<&EndGameManager::PMADHJMEJEP> () { return 0x1EE8DD0; }
    template<> inline uintptr_t rva<&EndGameManager::GFCEMINGMNN> () { return 0x1EE2A00; }
    template<> inline uintptr_t rva<&EndGameManager::WaitWithTimeout> () { return 0x1EE8F60; }
    template<> inline uintptr_t rva<&EndGameManager::ILKCBLCGHCB> () { return 0x1EE45A0; }
    template<> inline uintptr_t rva<&EndGameManager::DKPHIICFHHP> () { return 0x1EDFA80; }
    template<> inline uintptr_t rva<&EndGameManager::KGAKJBMKLBO> () { return 0x1EE5990; }
    template<> inline uintptr_t rva<&EndGameManager::OJNDDNJFCBN> () { return 0x1EE8BB0; }
    template<> inline uintptr_t rva<&EndGameManager::CCILFBFHHOE> () { return 0x1EDE760; }
    template<> inline uintptr_t rva<&EndGameManager::LIHNHBJFIEK> () { return 0x1EE74A0; }
    template<> inline uintptr_t rva<&EndGameManager::JMPGENDADPI> () { return 0x1EE5700; }
    template<> inline uintptr_t rva<&EndGameManager::CPHBGPHPODM> () { return 0x1EDF740; }
    template<> inline uintptr_t rva<&EndGameManager::HLAPLHPEBOG> () { return 0x1EE3180; }
    template<> inline uintptr_t rva<&EndGameManager::LJDNBHALILA> () { return 0x1EE7520; }
    template<> inline uintptr_t rva<&EndGameManager::KDEHDGGDJKO> () { return 0x1EE5940; }
} // ark::method_info
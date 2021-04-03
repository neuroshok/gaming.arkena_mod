//au//Vent
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
#include <cs/array.hpp>
namespace UnityEngine{ struct AnimationClip; }
namespace UnityEngine{ struct SpriteRenderer; }
#include <au/UnityEngine/Vector3.hpp>
struct PlayerControl;
#include <au/Sprites.hpp>
struct GameData_PlayerInfo;
struct ButtonBehavior;

struct Vent : ark::meta<Vent, UnityEngine::MonoBehaviour>
{
ark_meta("", "Vent", "");

    // Fields

    int Id; // 0xC
    Vent* Left; // 0x10
    Vent* Right; // 0x14
    Vent* Center; // 0x18
    cs::array<ButtonBehavior>* Buttons; // 0x1C
    UnityEngine::AnimationClip* EnterVentAnim; // 0x20
    UnityEngine::AnimationClip* ExitVentAnim; // 0x24
    UnityEngine::SpriteRenderer* LNMJKMLHMIM; // 0x28
    UnityEngine::Vector3 Offset; // 0x2C
    float spreadAmount; // 0x38
    float spreadShift; // 0x3C
    static Vent* currentVent(); // 0x0

    // Methods

    void EOLJBNMNMIN(); // 0x2220E30 // private 
    void FCIDEIADIDJ(bool GMPKOIDPFLI); // 0x22211E0 // public 
    void FIIAMNBHLAH(PlayerControl* FEJHFNNMDHA); // 0x2221A60 // internal 
    void PJCNCBBLPPO(UnityEngine::Vector3 CFAHABMAACM); // 0x2225AC0 // private static 
    float get_PercentCool(); // 0x82E6C0 // public 
    void LCGFJOCAGJI(); // 0x22235E0 // private 
    void AACDGCHLOHG(); // 0x221EFB0 // public 
    void HLODAMFBHDL(PlayerControl* FEJHFNNMDHA); // 0x2222550 // internal 
    float get_UsableDistance(); // 0x22266E0 // public 
    void PAACEDMOOBF(bool GMPKOIDPFLI); // 0x2225070 // public 
    Sprites CCKJBKCDIKE(); // 0x221F960 // public
    void Start(); // 0x2226560 // private 
    float CanUse(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2220620 // public
    float BJJDNEEBAML(); // 0x221F470 // public 
    Sprites JEMIMGALOJG(); // 0x20EE9D0 // public
    Sprites get_UseIcon(); // 0x4389E0 // public
    void OIBJJHHECMO(bool GMPKOIDPFLI); // 0x2224720 // public 
    void CACKHNHMCPM(PlayerControl* FEJHFNNMDHA); // 0x221F670 // internal 
    void LNLNBNLNDLM(PlayerControl* FEJHFNNMDHA); // 0x2223960 // internal 
    void MGFMILKCEIN(PlayerControl* FEJHFNNMDHA); // 0x2223E20 // internal 
    void NMDAPDONMEO(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x2224220 // public 
    void BDLBKCLMAGC(); // 0x221F410 // private 
    void PBDKHEHABCA(); // 0x22259A0 // public 
    void COMCBOMJICK(bool GMPKOIDPFLI); // 0x221FE50 // public 
    void ClickCenter(); // 0x22207F0 // public 
    void CPMALNGIJAF(); // 0x22205D0 // private 
    float IOLEAJNMOBD(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2222B70 // public
    void JACFIFFIKPC(UnityEngine::Vector3 CFAHABMAACM); // 0x2222D30 // private static 
    void SetButtons(bool GMPKOIDPFLI); // 0x2225CC0 // public 
    void CJOFMIEFLBB(); // 0x221FB60 // public 
    void HFHOHEBHKOI(PlayerControl* FEJHFNNMDHA); // 0x2222330 // internal 
    void CDJBJGHANLL(UnityEngine::Vector3 CFAHABMAACM); // 0x221F970 // private static 
    void MAPFHHFNHEH(); // 0x2223CF0 // public 
    void CCEPGKAIAOH(); // 0x221F860 // public 
    void LDHIAKDGICA(); // 0x2223630 // public 
    float BFNCMIIODIC(); // 0x221F460 // public 
    float HPOFPGBKKDH(); // 0x2222940 // public 
    void JIDIFBCIBCJ(); // 0x2223160 // public 
    void Use(); // 0x22265B0 // public 
    float HEDLMPJAHEL(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2222160 // public
    Sprites LFEJKKLKDOD(); // 0x2223760 // public
    void FFPOKHNLKAF(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x2221940 // public 
    void HAOGIFBEGFC(PlayerControl* FEJHFNNMDHA); // 0x2221F70 // internal 
    void ABAIAMBDPJI(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x221F0D0 // public 
    void LOJHMOBJBJK(); // 0x2223B80 // public 
    void ctor(); // 0x22266B0 // public 
    void ClickLeft(); // 0x2220910 // public 
    float OMHLAEEFPCM(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2224EA0 // public
    Sprites LGHBOOMACBL(); // 0x1892310 // public
    void KOCCDALBDJC(UnityEngine::Vector3 CFAHABMAACM); // 0x22232D0 // private static 
    float FKNCKKJAKJP(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2221DA0 // public
    void HPLHEHDJMDO(UnityEngine::Vector3 CFAHABMAACM); // 0x2222750 // private static 
    void LBMGLGCIOJF(); // 0x22234C0 // public 
    void ClickRight(); // 0x2220A30 // public 
    float GLHILFJJGAB(); // 0x2221F60 // public 
    void NPECHBPMOGF(); // 0x2224340 // public 
    void FILNCCAFOON(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x2221C80 // public 
    void IFJEGIJHHGM(); // 0x2222950 // public 
    void EOLOIBNMGID(); // 0x2220E80 // public 
    float HNEKMPCMMDO(); // 0x2222740 // public 
    void NFFLCEOEGNF(PlayerControl* FEJHFNNMDHA); // 0x2224030 // internal 
    Sprites NBNMKKLBEDH(); // 0x2224020 // public
    void BJJILCPNOGG(UnityEngine::Vector3 CFAHABMAACM); // 0x221F480 // private static 
    void LIJOJPGOECO(PlayerControl* FEJHFNNMDHA); // 0x2223770 // internal 
    void EPLNOBAGIMM(UnityEngine::Vector3 CFAHABMAACM); // 0x2220FA0 // private static 
    void JLLGBGICOHL(); // 0x2223280 // private 
    void FBOEHDKMLND(); // 0x2221190 // private 
    float MGJNKHKOAIE(); // 0x2224010 // public 
    float CNPGBJBIOFN(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x221FC80 // public
    float PALAANDLNPE(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x22257D0 // public
    void AFIBGDGMNEA(PlayerControl* FEJHFNNMDHA); // 0x221F1F0 // internal 
    Sprites LFBAFPBBNLP(); // 0x2223750 // public
    void LOKNFHLAEJG(); // 0x2223CA0 // private 
    void OFEKJAKALOB(); // 0x2224620 // public 
    float PPDHLGACAFK(); // 0x2225CB0 // public 
    void JEHCBMKNHIK(); // 0x2223040 // public 
    void EKNDDOMCCLO(); // 0x2220D10 // public 
    void SetOutline(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x2226440 // public 
    float OBKBAOFMBHI(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2224460 // public
    float MDLHOHOMPAD(); // 0x2223E10 // public 
    void IMGJHLPBOMA(bool ICFFMGFHJJI, bool OKBNMPBFGPL); // 0x2222A50 // public 
    Sprites BFFILLEPDGF(); // 0x660D20 // public
    float EBMIAKOOEGG(GameData_PlayerInfo* FEJHFNNMDHA, /*out*/ bool NNGGFHBMBOC, /*out*/ bool FGCMEDCBNCO); // 0x2220B50 // public
    void JCPAOBPFFKN(); // 0x2222F20 // public 

};


namespace ark
{
template<>
struct meta_statics<Vent>
{
    Vent* currentVent;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&Vent::EOLJBNMNMIN> () { return 0x2220E30; }
    template<> inline uintptr_t rva<&Vent::FCIDEIADIDJ> () { return 0x22211E0; }
    template<> inline uintptr_t rva<&Vent::FIIAMNBHLAH> () { return 0x2221A60; }
    template<> inline uintptr_t rva<&Vent::PJCNCBBLPPO> () { return 0x2225AC0; }
    template<> inline uintptr_t rva<&Vent::get_PercentCool> () { return 0x82E6C0; }
    template<> inline uintptr_t rva<&Vent::LCGFJOCAGJI> () { return 0x22235E0; }
    template<> inline uintptr_t rva<&Vent::AACDGCHLOHG> () { return 0x221EFB0; }
    template<> inline uintptr_t rva<&Vent::HLODAMFBHDL> () { return 0x2222550; }
    template<> inline uintptr_t rva<&Vent::get_UsableDistance> () { return 0x22266E0; }
    template<> inline uintptr_t rva<&Vent::PAACEDMOOBF> () { return 0x2225070; }
    template<> inline uintptr_t rva<&Vent::CCKJBKCDIKE> () { return 0x221F960; }
    template<> inline uintptr_t rva<&Vent::Start> () { return 0x2226560; }
    template<> inline uintptr_t rva<&Vent::CanUse> () { return 0x2220620; }
    template<> inline uintptr_t rva<&Vent::BJJDNEEBAML> () { return 0x221F470; }
    template<> inline uintptr_t rva<&Vent::JEMIMGALOJG> () { return 0x20EE9D0; }
    template<> inline uintptr_t rva<&Vent::get_UseIcon> () { return 0x4389E0; }
    template<> inline uintptr_t rva<&Vent::OIBJJHHECMO> () { return 0x2224720; }
    template<> inline uintptr_t rva<&Vent::CACKHNHMCPM> () { return 0x221F670; }
    template<> inline uintptr_t rva<&Vent::LNLNBNLNDLM> () { return 0x2223960; }
    template<> inline uintptr_t rva<&Vent::MGFMILKCEIN> () { return 0x2223E20; }
    template<> inline uintptr_t rva<&Vent::NMDAPDONMEO> () { return 0x2224220; }
    template<> inline uintptr_t rva<&Vent::BDLBKCLMAGC> () { return 0x221F410; }
    template<> inline uintptr_t rva<&Vent::PBDKHEHABCA> () { return 0x22259A0; }
    template<> inline uintptr_t rva<&Vent::COMCBOMJICK> () { return 0x221FE50; }
    template<> inline uintptr_t rva<&Vent::ClickCenter> () { return 0x22207F0; }
    template<> inline uintptr_t rva<&Vent::CPMALNGIJAF> () { return 0x22205D0; }
    template<> inline uintptr_t rva<&Vent::IOLEAJNMOBD> () { return 0x2222B70; }
    template<> inline uintptr_t rva<&Vent::JACFIFFIKPC> () { return 0x2222D30; }
    template<> inline uintptr_t rva<&Vent::SetButtons> () { return 0x2225CC0; }
    template<> inline uintptr_t rva<&Vent::CJOFMIEFLBB> () { return 0x221FB60; }
    template<> inline uintptr_t rva<&Vent::HFHOHEBHKOI> () { return 0x2222330; }
    template<> inline uintptr_t rva<&Vent::CDJBJGHANLL> () { return 0x221F970; }
    template<> inline uintptr_t rva<&Vent::MAPFHHFNHEH> () { return 0x2223CF0; }
    template<> inline uintptr_t rva<&Vent::CCEPGKAIAOH> () { return 0x221F860; }
    template<> inline uintptr_t rva<&Vent::LDHIAKDGICA> () { return 0x2223630; }
    template<> inline uintptr_t rva<&Vent::BFNCMIIODIC> () { return 0x221F460; }
    template<> inline uintptr_t rva<&Vent::HPOFPGBKKDH> () { return 0x2222940; }
    template<> inline uintptr_t rva<&Vent::JIDIFBCIBCJ> () { return 0x2223160; }
    template<> inline uintptr_t rva<&Vent::Use> () { return 0x22265B0; }
    template<> inline uintptr_t rva<&Vent::HEDLMPJAHEL> () { return 0x2222160; }
    template<> inline uintptr_t rva<&Vent::LFEJKKLKDOD> () { return 0x2223760; }
    template<> inline uintptr_t rva<&Vent::FFPOKHNLKAF> () { return 0x2221940; }
    template<> inline uintptr_t rva<&Vent::HAOGIFBEGFC> () { return 0x2221F70; }
    template<> inline uintptr_t rva<&Vent::ABAIAMBDPJI> () { return 0x221F0D0; }
    template<> inline uintptr_t rva<&Vent::LOJHMOBJBJK> () { return 0x2223B80; }
    template<> inline uintptr_t rva<&Vent::ctor> () { return 0x22266B0; }
    template<> inline uintptr_t rva<&Vent::ClickLeft> () { return 0x2220910; }
    template<> inline uintptr_t rva<&Vent::OMHLAEEFPCM> () { return 0x2224EA0; }
    template<> inline uintptr_t rva<&Vent::LGHBOOMACBL> () { return 0x1892310; }
    template<> inline uintptr_t rva<&Vent::KOCCDALBDJC> () { return 0x22232D0; }
    template<> inline uintptr_t rva<&Vent::FKNCKKJAKJP> () { return 0x2221DA0; }
    template<> inline uintptr_t rva<&Vent::HPLHEHDJMDO> () { return 0x2222750; }
    template<> inline uintptr_t rva<&Vent::LBMGLGCIOJF> () { return 0x22234C0; }
    template<> inline uintptr_t rva<&Vent::ClickRight> () { return 0x2220A30; }
    template<> inline uintptr_t rva<&Vent::GLHILFJJGAB> () { return 0x2221F60; }
    template<> inline uintptr_t rva<&Vent::NPECHBPMOGF> () { return 0x2224340; }
    template<> inline uintptr_t rva<&Vent::FILNCCAFOON> () { return 0x2221C80; }
    template<> inline uintptr_t rva<&Vent::IFJEGIJHHGM> () { return 0x2222950; }
    template<> inline uintptr_t rva<&Vent::EOLOIBNMGID> () { return 0x2220E80; }
    template<> inline uintptr_t rva<&Vent::HNEKMPCMMDO> () { return 0x2222740; }
    template<> inline uintptr_t rva<&Vent::NFFLCEOEGNF> () { return 0x2224030; }
    template<> inline uintptr_t rva<&Vent::NBNMKKLBEDH> () { return 0x2224020; }
    template<> inline uintptr_t rva<&Vent::BJJILCPNOGG> () { return 0x221F480; }
    template<> inline uintptr_t rva<&Vent::LIJOJPGOECO> () { return 0x2223770; }
    template<> inline uintptr_t rva<&Vent::EPLNOBAGIMM> () { return 0x2220FA0; }
    template<> inline uintptr_t rva<&Vent::JLLGBGICOHL> () { return 0x2223280; }
    template<> inline uintptr_t rva<&Vent::FBOEHDKMLND> () { return 0x2221190; }
    template<> inline uintptr_t rva<&Vent::MGJNKHKOAIE> () { return 0x2224010; }
    template<> inline uintptr_t rva<&Vent::CNPGBJBIOFN> () { return 0x221FC80; }
    template<> inline uintptr_t rva<&Vent::PALAANDLNPE> () { return 0x22257D0; }
    template<> inline uintptr_t rva<&Vent::AFIBGDGMNEA> () { return 0x221F1F0; }
    template<> inline uintptr_t rva<&Vent::LFBAFPBBNLP> () { return 0x2223750; }
    template<> inline uintptr_t rva<&Vent::LOKNFHLAEJG> () { return 0x2223CA0; }
    template<> inline uintptr_t rva<&Vent::OFEKJAKALOB> () { return 0x2224620; }
    template<> inline uintptr_t rva<&Vent::PPDHLGACAFK> () { return 0x2225CB0; }
    template<> inline uintptr_t rva<&Vent::JEHCBMKNHIK> () { return 0x2223040; }
    template<> inline uintptr_t rva<&Vent::EKNDDOMCCLO> () { return 0x2220D10; }
    template<> inline uintptr_t rva<&Vent::SetOutline> () { return 0x2226440; }
    template<> inline uintptr_t rva<&Vent::OBKBAOFMBHI> () { return 0x2224460; }
    template<> inline uintptr_t rva<&Vent::MDLHOHOMPAD> () { return 0x2223E10; }
    template<> inline uintptr_t rva<&Vent::IMGJHLPBOMA> () { return 0x2222A50; }
    template<> inline uintptr_t rva<&Vent::BFFILLEPDGF> () { return 0x660D20; }
    template<> inline uintptr_t rva<&Vent::EBMIAKOOEGG> () { return 0x2220B50; }
    template<> inline uintptr_t rva<&Vent::JCPAOBPFFKN> () { return 0x2222F20; }
} // ark::method_info
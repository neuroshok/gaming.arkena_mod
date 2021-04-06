//au//MeetingHud
#pragma once
#include <ark/class.hpp>
#include <au/InnerNet/InnerNetObject.hpp>
namespace UnityEngine{ struct Transform; }
struct TextRenderer;
#include <au/UnityEngine/Vector3.hpp>
struct PlayerVoteArea;
#include <cs/array.hpp>
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct Sprite; }
struct PassiveButton;
namespace UnityEngine{ struct AudioClip; }

struct GameData_PlayerInfo;
struct UiElement;
namespace System::Collections::Generic{ template <class> struct List; }
namespace Hazel{ struct MessageReader; }
namespace Hazel{ struct MessageWriter; }
struct PlayerControl;
#include <au/MessageStatus.hpp>
namespace System::Collections{ struct IEnumerator; }

struct MeetingHud : ark::meta<MeetingHud, InnerNet::InnerNetObject>
{
ark_meta("", "MeetingHud", "");

    // Fields

    inline static constexpr float LHIKNLHLDEH = 5;

    inline static constexpr float EHCEADJDJIF = 5;

    static MeetingHud* Instance(); // 0x0
    UnityEngine::Transform* ButtonParent; // 0x24
    TextRenderer* TitleText; // 0x28
    UnityEngine::Vector3 VoteOrigin; // 0x2C
    UnityEngine::Vector3 VoteButtonOffsets; // 0x38
    UnityEngine::Vector3 ALGONDAMLHA; // 0x44
    UnityEngine::Vector3 LKIOFMMBOBJ; // 0x50
    PlayerVoteArea* SkipVoteButton; // 0x5C
    cs::array<PlayerVoteArea>* DHCOPOOJCLN; // 0x60
    PlayerVoteArea* PlayerButtonPrefab; // 0x64
    UnityEngine::SpriteRenderer* PlayerVotePrefab; // 0x68
    UnityEngine::Sprite* CrackedGlass; // 0x6C
    UnityEngine::SpriteRenderer* Glass; // 0x70
    PassiveButton* ProceedButton; // 0x74
    UnityEngine::AudioClip* VoteSound; // 0x78
    UnityEngine::AudioClip* VoteLockinSound; // 0x7C
    UnityEngine::AudioClip* VoteEndingSound; // 0x80
    struct MeetingHud_DDMMMDGMFIK* MJMOOPLLNPO; // 0x84
    UnityEngine::SpriteRenderer* SkippedVoting; // 0x88
    UnityEngine::SpriteRenderer* HostIcon; // 0x8C
    UnityEngine::Sprite* KillBackground; // 0x90
    GameData_PlayerInfo* KGCHJGFFMEP; // 0x94
    bool JCEJMNJACGH; // 0x98
    TextRenderer* TimerText; // 0x9C
    float discussionTimer; // 0xA0
    uint8_t MFJEPAOBAGG; // 0xA4
    UiElement* DefaultButtonSelected; // 0xA8
    UiElement* ProceedButtonUi; // 0xAC
    System::Collections::Generic::List<UiElement>* ControllerSelectable; // 0xB0
    bool CICOBONECBI; // 0xB4
    float EAEDAHBHPCI; // 0xB8
    int LAOEDFLLHID; // 0xBC

    // Methods

    void HHPIJNNGDNF(uint8_t CGCPOBCEOPN); // 0x1EB3FF0 // public 
    void KNHCBINCPAM(int FCGFEOGMCBJ); // 0x1EB7EF0 // private 
    void GMLNDABHBPG(); // 0x1EB3510 // private 
    void OPFMDENKAPC(); // 0x1EB29C0 // private 
    bool KOGIJIPDLFG(uint8_t ABBBAKKPJED); // 0x1EB7F80 // public 
    void KAMAGLIKPBB(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1EB66E0 // public override 
    void KBGHNNAHKHE(); // 0x1EB6810 // public 
    void CastVote(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EAFE00 // public 
    void CDLGIAMFHBH(); // 0x1EAF230 // private 
    void ELEKFKDCNGG(); // 0x1EB29C0 // private 
    void JNDAMFLFKBH(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1EB65D0 // public override 
    void CHGBANDAECD(); // 0x1EAF930 // private 
    void Close(); // 0x1EB00F0 // public 
    bool JGFKOFCONEN(uint8_t ABBBAKKPJED); // 0x1EB60F0 // public 
    void GPLENACPIHD(int FCGFEOGMCBJ); // 0x1EB3880 // private 
    void PBKOCGADCPH(); // 0x1EBCAA0 // private 
    void Confirm(int8_t JFJAGHIELCK); // 0x1EB0330 // public 
    int GLOOEMMDNPA(); // 0x1EB33A0 // public 
    bool PDAFBBCNEHJ(uint8_t ABBBAKKPJED); // 0x1EBD2E0 // public 
    void OILPNAOEJKP(); // 0x1EBB550 // private 
    void BEEDNFOPNOL(); // 0x1EAE8D0 // private 
    void HandleProceed(); // 0x1EB4720 // public 
    void OnDisable(); // 0x1EBCA30 // private 
    void Start(); // 0x1EBD910 // private 
    void RpcClose(); // 0x1EBD5E0 // public 
    bool KIBKLODCOHL(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1EB7B70 // public override 
    bool KKJEMJBIPFC(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1EB7D90 // public override 
    void IAACEEOMMCK(); // 0x1EB4970 // private 
    void Deserialize(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1EB1CC0 // public override 
    int BBINPDBDHAK(); // 0x1EAE140 // public 
    cs::array<uint8_t>* HBHNOGPDMMJ(); // 0x1EB3B00 // private 
    void KKDOHANFCOL(); // 0x1EB7C70 // public 
    void DHHDLJIGDIP(); // 0x1EB09C0 // public 
    void DHMNGCAGCNA(); // 0x1EB1390 // private 
    void DHLIKCGJKFN(uint8_t ABBBAKKPJED, int8_t DGPHHBBKKNM); // 0x1EB12D0 // public 
    void NJCLEFCPHHC(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EBA220 // private 
    void NEGBKEDOOJJ(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EB9D40 // public 
    void CBOFLFCJFLK(uint8_t CGCPOBCEOPN); // 0x1EAED30 // private 
    void Update(); // 0x1EBDBD0 // public 
    void ELIGMBJMBPP(); // 0x1EB2A40 // private 
    void PNPHNNEOAPL(); // 0x267200 // public 
    void FHLILJMBHEN(); // 0x1EB2EE0 // private 
    void NLLPKCNANAK(int8_t JFJAGHIELCK); // 0x1EBA960 // public 
    void DLLINKGJLKK(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EB1590 // private 
    void JODPJFAACPD(); // 0x267200 // public 
    void FOFDIEPFKDL(); // 0x1EB31C0 // public 
    void LCGFJOCAGJI(); // 0x1EB82C0 // private 
    void AIKJOHIFCDI(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x1EADA20 // public 
    void OMFOBKIENPI(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EBBE20 // private 
    void FLIBNBNDJAM(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EB2F70 // public 
    void CDPMGLEMECB(); // 0x1EAF610 // private 
    System::Collections::IEnumerator* FBIOOLJNINI(); // 0x1EB2CD0 // private 
    cs::array<uint8_t>* ILDIAAOGIBM(); // 0x1EB4E90 // private 
    void JGCGLBIKKGO(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EB5EA0 // private 
    void HandleDisconnect(); // 0x267200 // public 
    void BANMFLGLGHA(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EADF10 // public 
    int OAEEJNOODIG(); // 0x1EBB000 // public 
    void BDKMEIGLBMB(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EAE6A0 // public 
    void MDOHMJAAFMK(); // 0x1EB8F30 // public 
    void HEEJCFCACMF(); // 0x1EAE970 // public 
    int GetVotesRemaining(); // 0x1EB3990 // public 
    System::Collections::IEnumerator* AGBEDIJLGBG(); // 0x1EAD9D0 // private 
    void AIKOJLJJGNP(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EADD50 // private 
    void PCLLJNPINGE(); // 0x1EBCF40 // private 
    bool OIODMPKGFGK(int JFJAGHIELCK); // 0x1EBB810 // public 
    void CmdCastVote(uint8_t ABBBAKKPJED, int8_t DGPHHBBKKNM); // 0x1EB0210 // public 
    void EJOIIECKFPD(); // 0x1EB26F0 // public 
    void PPBHAKMNKCI(); // 0x1EBD430 // private 
    void KPHIPIEPAKF(); // 0x1EB8040 // private 
    void PCMOGFKAOEB(uint8_t ABBBAKKPJED, int8_t DGPHHBBKKNM); // 0x1EBD220 // public 
    void JKHAABGEFFK(); // 0x1EB64B0 // public 
    void HOBCHJNFOHF(); // 0x1EB4120 // private 
    bool IAILNNNIIPC(int JFJAGHIELCK); // 0x1EB4AC0 // public 
    bool DidVote(uint8_t ABBBAKKPJED); // 0x1EB1E00 // public 
    void HLIDFPBAMMM(); // 0x1EB4080 // private 
    void JDGECBFJHNC(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EB5610 // private 
    void BBPOPDDBCMD(); // 0x1EAE500 // public 
    bool IEHLENLOOJI(uint8_t ABBBAKKPJED); // 0x1EB4C70 // public 
    void KDGCBPKLOJO(); // 0x1EB73D0 // private 
    void LNBOHJOIGFH(uint8_t CGCPOBCEOPN); // 0x1EB8BE0 // private 
    void GGKBPFPOOFA(); // 0x1EB3240 // private 
    void MEEHADOLFOP(); // 0x1EB9070 // private 
    void ServerStart(uint8_t CGCPOBCEOPN); // 0x1EB74C0 // public 
    void BNBBMAFDACC(int8_t JFJAGHIELCK); // 0x1EAEB00 // public 
    void GMOBBEOBHKI(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1EB3580 // public override 
    void NPBIECFNDHH(int FCGFEOGMCBJ); // 0x1EBAC60 // private 
    void KCAPICJJNGJ(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EB7180 // private 
    void JHDJFEPCICK(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x1EB61B0 // public 
    void IPGPFPHJPLB(); // 0x1EB5480 // public 
    void Awake(); // 0x1EADE20 // private 
    PlayerVoteArea* ADFDAKNEKKN(GameData_PlayerInfo* EMHMICONMFC); // 0x1EAD670 // private 
    void HFLFOHIGPNG(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EB3BB0 // private 
    void LLLJMIBFGNK(); // 0x1EB8920 // private 
    void CBPODLMCDGE(); // 0x1EAEF90 // private 
    void FAOLNCCHJOO(int FCGFEOGMCBJ); // 0x1EB2C50 // private 
    void IJCKDMIIFJO(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1EB4D30 // public override 
    int JEBDDGKKCJH(); // 0x1EB5D20 // public 
    void OLJNLMHPIPD(); // 0x1EBBB60 // private 
    cs::array<uint8_t>* ONGJLDEFFCK(); // 0x1EBC540 // private 
    void MLDIBIJIIOA(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EB9A00 // public 
    void OOADPNKFPNE(uint8_t MCIOFPNBBIO, int8_t CNGKMLDPMEJ); // 0x1EBC600 // public 
    bool Serialize(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1EBD820 // public override 
    void NPBJCCDFELE(); // 0x1EBAD70 // private 
    void CKMKLHHLGJH(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EAFC00 // private 
    cs::array<uint8_t>* BDDOFOCOBKA(); // 0x1EAE5F0 // private 
    void KBPLBKIOGPD(); // 0x1EB7110 // private 
    void BJCMLPGMFBL(uint8_t CGCPOBCEOPN); // 0x1EAEAD0 // public 
    PlayerVoteArea* EEAMIFENJPM(GameData_PlayerInfo* EMHMICONMFC); // 0x1EB21F0 // private 
    void EKGLFEDAEMI(uint8_t CGCPOBCEOPN); // 0x1EB2770 // private 
    void EBLDLPBKCIH(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x1EB1ED0 // public 
    void DBPHKEICGNH(); // 0x1EB04C0 // private 
    void NGICMHPNJAH(); // 0x1EB9F70 // private 
    void BLPNHECDDCE(); // 0x267200 // public 
    void OLFNPLJNPAP(int8_t JFJAGHIELCK); // 0x1EBB9D0 // public 
    void ADGDJJDAPMF(); // 0x1EAD8B0 // public 
    void MPJDHOEEKBL(int FCGFEOGMCBJ); // 0x1EB9C30 // private 
    void GNHLIPLEIML(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1EB3660 // public override 
    void CFAIAFAGFGJ(); // 0x1EAF7F0 // public 
    void IMEKBFJBICN(); // 0x1EB4F30 // private 
    void HandleRpc(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1EB4860 // public override 
    void OGLLDNFBPGH(); // 0x1EBB400 // private 
    void POKHOLLJLKP(int FCGFEOGMCBJ); // 0x1EBD3A0 // private 
    void MGFOANDJFCO(); // 0x1EB9480 // private 
    void MJPGCBBILLK(); // 0x1EB98E0 // public 
    void ClearVote(); // 0x1EB0050 // public 
    void IPHFFGPLEAN(); // 0x1EB5520 // private 
    void LCLCABKFPAJ(); // 0x1EB8580 // private 
    System::Collections::IEnumerator* BCEFEEJCAPC(); // 0x1EAE5A0 // private 
    void EGFMPEKAECE(); // 0x1EB2430 // private 
    void KFLFIAPCGMM(cs::array<uint8_t>* HIDHPMAKEKH); // 0x1EB74F0 // private 
    void ctor(); // 0x1EBE4F0 // public 
    void ABOOGHPMGGB(); // 0x267200 // public 
    bool CCCABICBOLF(uint8_t ABBBAKKPJED); // 0x1EAF170 // public 
    void BBJFDHHDCOO(int8_t JFJAGHIELCK); // 0x1EAE2B0 // public 
    void CMOOEGINHGG(); // 0x1EAFCD0 // public 
    bool BHCAPIGOPLM(uint8_t ABBBAKKPJED); // 0x1EAEA10 // public 
    System::Collections::IEnumerator* HLGIDKKBFMI(GameData_PlayerInfo* CGCPOBCEOPN, GameData_PlayerInfo* ICNNMFOJGLC); // 0x1EB4020 // public 
    void LLIFOAAMAEG(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EB86D0 // private 
    bool FCMKFNOBLID(int JFJAGHIELCK); // 0x1EB2D20 // public 
    void NNELMDAPHBP(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EBAB90 // private 
    void DFNAOKHNGDH(uint8_t CGCPOBCEOPN); // 0x1EB0790 // private 
    void MJIJGEBBMAO(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EB9690 // private 
    bool FACJJIKFHOO(uint8_t ABBBAKKPJED); // 0x1EB2B90 // public 
    void CPAEJJIIBKC(); // 0x1EAFD50 // public 
    void OAOOBKFCGBH(); // 0x1EBB170 // private 
    void IKFBBDBBBNB(); // 0x1EB4E20 // private 
    cs::array<uint8_t>* BOCJLLEOFDG(); // 0x1EAEC90 // private 
    void HandleDisconnect1(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x1EB43E0 // public 
    void KHIKOHAMPNA(int8_t JFJAGHIELCK); // 0x1EB7940 // public 
    System::Collections::IEnumerator* CoIntro(GameData_PlayerInfo* CGCPOBCEOPN, GameData_PlayerInfo* ICNNMFOJGLC); // 0x1EB02D0 // public 
    void OOFMLFDFAJG(); // 0x1EBC850 // private 
    void PPBJNNFHPAB(uint8_t ABBBAKKPJED, int8_t DGPHHBBKKNM); // 0x1EBD520 // public 
    void KLIGOGDHHIM(); // 0x1EB7E70 // public 
    bool GIDNAHJLHBF(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1EB32B0 // public override 
    void DAJGPAAOEII(); // 0x267200 // public 
    void KDKAEKFKLCI(uint8_t CGCPOBCEOPN); // 0x1EB74C0 // public 
    void BFJOKBMOILI(); // 0x1EAE970 // public 
    void MACIFIOGMAI(cs::array<uint8_t>* HIDHPMAKEKH, GameData_PlayerInfo* KLHCDCKJHKC, bool EMLKEPIBJLK); // 0x1EB8E50 // private 
    void IOGFCBIEDIC(); // 0x1EB5140 // private 
    bool Select(int JFJAGHIELCK); // 0x1EBD660 // public 
    void DINMKKJGOOJ(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1EB1480 // public override 

};


namespace ark
{
template<>
struct meta_statics<MeetingHud>
{
    MeetingHud* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&MeetingHud::HHPIJNNGDNF> () { return 0x1EB3FF0; }
    template<> inline uintptr_t rva<&MeetingHud::KNHCBINCPAM> () { return 0x1EB7EF0; }
    template<> inline uintptr_t rva<&MeetingHud::GMLNDABHBPG> () { return 0x1EB3510; }
    template<> inline uintptr_t rva<&MeetingHud::OPFMDENKAPC> () { return 0x1EB29C0; }
    template<> inline uintptr_t rva<&MeetingHud::KOGIJIPDLFG> () { return 0x1EB7F80; }
    template<> inline uintptr_t rva<&MeetingHud::KAMAGLIKPBB> () { return 0x1EB66E0; }
    template<> inline uintptr_t rva<&MeetingHud::KBGHNNAHKHE> () { return 0x1EB6810; }
    template<> inline uintptr_t rva<&MeetingHud::CastVote> () { return 0x1EAFE00; }
    template<> inline uintptr_t rva<&MeetingHud::CDLGIAMFHBH> () { return 0x1EAF230; }
    template<> inline uintptr_t rva<&MeetingHud::ELEKFKDCNGG> () { return 0x1EB29C0; }
    template<> inline uintptr_t rva<&MeetingHud::JNDAMFLFKBH> () { return 0x1EB65D0; }
    template<> inline uintptr_t rva<&MeetingHud::CHGBANDAECD> () { return 0x1EAF930; }
    template<> inline uintptr_t rva<&MeetingHud::Close> () { return 0x1EB00F0; }
    template<> inline uintptr_t rva<&MeetingHud::JGFKOFCONEN> () { return 0x1EB60F0; }
    template<> inline uintptr_t rva<&MeetingHud::GPLENACPIHD> () { return 0x1EB3880; }
    template<> inline uintptr_t rva<&MeetingHud::PBKOCGADCPH> () { return 0x1EBCAA0; }
    template<> inline uintptr_t rva<&MeetingHud::Confirm> () { return 0x1EB0330; }
    template<> inline uintptr_t rva<&MeetingHud::GLOOEMMDNPA> () { return 0x1EB33A0; }
    template<> inline uintptr_t rva<&MeetingHud::PDAFBBCNEHJ> () { return 0x1EBD2E0; }
    template<> inline uintptr_t rva<&MeetingHud::OILPNAOEJKP> () { return 0x1EBB550; }
    template<> inline uintptr_t rva<&MeetingHud::BEEDNFOPNOL> () { return 0x1EAE8D0; }
    template<> inline uintptr_t rva<&MeetingHud::HandleProceed> () { return 0x1EB4720; }
    template<> inline uintptr_t rva<&MeetingHud::OnDisable> () { return 0x1EBCA30; }
    template<> inline uintptr_t rva<&MeetingHud::Start> () { return 0x1EBD910; }
    template<> inline uintptr_t rva<&MeetingHud::RpcClose> () { return 0x1EBD5E0; }
    template<> inline uintptr_t rva<&MeetingHud::KIBKLODCOHL> () { return 0x1EB7B70; }
    template<> inline uintptr_t rva<&MeetingHud::KKJEMJBIPFC> () { return 0x1EB7D90; }
    template<> inline uintptr_t rva<&MeetingHud::IAACEEOMMCK> () { return 0x1EB4970; }
    template<> inline uintptr_t rva<&MeetingHud::Deserialize> () { return 0x1EB1CC0; }
    template<> inline uintptr_t rva<&MeetingHud::BBINPDBDHAK> () { return 0x1EAE140; }
    template<> inline uintptr_t rva<&MeetingHud::HBHNOGPDMMJ> () { return 0x1EB3B00; }
    template<> inline uintptr_t rva<&MeetingHud::KKDOHANFCOL> () { return 0x1EB7C70; }
    template<> inline uintptr_t rva<&MeetingHud::DHHDLJIGDIP> () { return 0x1EB09C0; }
    template<> inline uintptr_t rva<&MeetingHud::DHMNGCAGCNA> () { return 0x1EB1390; }
    template<> inline uintptr_t rva<&MeetingHud::DHLIKCGJKFN> () { return 0x1EB12D0; }
    template<> inline uintptr_t rva<&MeetingHud::NJCLEFCPHHC> () { return 0x1EBA220; }
    template<> inline uintptr_t rva<&MeetingHud::NEGBKEDOOJJ> () { return 0x1EB9D40; }
    template<> inline uintptr_t rva<&MeetingHud::CBOFLFCJFLK> () { return 0x1EAED30; }
    template<> inline uintptr_t rva<&MeetingHud::Update> () { return 0x1EBDBD0; }
    template<> inline uintptr_t rva<&MeetingHud::ELIGMBJMBPP> () { return 0x1EB2A40; }
    template<> inline uintptr_t rva<&MeetingHud::PNPHNNEOAPL> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::FHLILJMBHEN> () { return 0x1EB2EE0; }
    template<> inline uintptr_t rva<&MeetingHud::NLLPKCNANAK> () { return 0x1EBA960; }
    template<> inline uintptr_t rva<&MeetingHud::DLLINKGJLKK> () { return 0x1EB1590; }
    template<> inline uintptr_t rva<&MeetingHud::JODPJFAACPD> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::FOFDIEPFKDL> () { return 0x1EB31C0; }
    template<> inline uintptr_t rva<&MeetingHud::LCGFJOCAGJI> () { return 0x1EB82C0; }
    template<> inline uintptr_t rva<&MeetingHud::AIKJOHIFCDI> () { return 0x1EADA20; }
    template<> inline uintptr_t rva<&MeetingHud::OMFOBKIENPI> () { return 0x1EBBE20; }
    template<> inline uintptr_t rva<&MeetingHud::FLIBNBNDJAM> () { return 0x1EB2F70; }
    template<> inline uintptr_t rva<&MeetingHud::CDPMGLEMECB> () { return 0x1EAF610; }
    template<> inline uintptr_t rva<&MeetingHud::FBIOOLJNINI> () { return 0x1EB2CD0; }
    template<> inline uintptr_t rva<&MeetingHud::ILDIAAOGIBM> () { return 0x1EB4E90; }
    template<> inline uintptr_t rva<&MeetingHud::JGCGLBIKKGO> () { return 0x1EB5EA0; }
    template<> inline uintptr_t rva<&MeetingHud::HandleDisconnect> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::BANMFLGLGHA> () { return 0x1EADF10; }
    template<> inline uintptr_t rva<&MeetingHud::OAEEJNOODIG> () { return 0x1EBB000; }
    template<> inline uintptr_t rva<&MeetingHud::BDKMEIGLBMB> () { return 0x1EAE6A0; }
    template<> inline uintptr_t rva<&MeetingHud::MDOHMJAAFMK> () { return 0x1EB8F30; }
    template<> inline uintptr_t rva<&MeetingHud::HEEJCFCACMF> () { return 0x1EAE970; }
    template<> inline uintptr_t rva<&MeetingHud::GetVotesRemaining> () { return 0x1EB3990; }
    template<> inline uintptr_t rva<&MeetingHud::AGBEDIJLGBG> () { return 0x1EAD9D0; }
    template<> inline uintptr_t rva<&MeetingHud::AIKOJLJJGNP> () { return 0x1EADD50; }
    template<> inline uintptr_t rva<&MeetingHud::PCLLJNPINGE> () { return 0x1EBCF40; }
    template<> inline uintptr_t rva<&MeetingHud::OIODMPKGFGK> () { return 0x1EBB810; }
    template<> inline uintptr_t rva<&MeetingHud::CmdCastVote> () { return 0x1EB0210; }
    template<> inline uintptr_t rva<&MeetingHud::EJOIIECKFPD> () { return 0x1EB26F0; }
    template<> inline uintptr_t rva<&MeetingHud::PPBHAKMNKCI> () { return 0x1EBD430; }
    template<> inline uintptr_t rva<&MeetingHud::KPHIPIEPAKF> () { return 0x1EB8040; }
    template<> inline uintptr_t rva<&MeetingHud::PCMOGFKAOEB> () { return 0x1EBD220; }
    template<> inline uintptr_t rva<&MeetingHud::JKHAABGEFFK> () { return 0x1EB64B0; }
    template<> inline uintptr_t rva<&MeetingHud::HOBCHJNFOHF> () { return 0x1EB4120; }
    template<> inline uintptr_t rva<&MeetingHud::IAILNNNIIPC> () { return 0x1EB4AC0; }
    template<> inline uintptr_t rva<&MeetingHud::DidVote> () { return 0x1EB1E00; }
    template<> inline uintptr_t rva<&MeetingHud::HLIDFPBAMMM> () { return 0x1EB4080; }
    template<> inline uintptr_t rva<&MeetingHud::JDGECBFJHNC> () { return 0x1EB5610; }
    template<> inline uintptr_t rva<&MeetingHud::BBPOPDDBCMD> () { return 0x1EAE500; }
    template<> inline uintptr_t rva<&MeetingHud::IEHLENLOOJI> () { return 0x1EB4C70; }
    template<> inline uintptr_t rva<&MeetingHud::KDGCBPKLOJO> () { return 0x1EB73D0; }
    template<> inline uintptr_t rva<&MeetingHud::LNBOHJOIGFH> () { return 0x1EB8BE0; }
    template<> inline uintptr_t rva<&MeetingHud::GGKBPFPOOFA> () { return 0x1EB3240; }
    template<> inline uintptr_t rva<&MeetingHud::MEEHADOLFOP> () { return 0x1EB9070; }
    template<> inline uintptr_t rva<&MeetingHud::ServerStart> () { return 0x1EB74C0; }
    template<> inline uintptr_t rva<&MeetingHud::BNBBMAFDACC> () { return 0x1EAEB00; }
    template<> inline uintptr_t rva<&MeetingHud::GMOBBEOBHKI> () { return 0x1EB3580; }
    template<> inline uintptr_t rva<&MeetingHud::NPBIECFNDHH> () { return 0x1EBAC60; }
    template<> inline uintptr_t rva<&MeetingHud::KCAPICJJNGJ> () { return 0x1EB7180; }
    template<> inline uintptr_t rva<&MeetingHud::JHDJFEPCICK> () { return 0x1EB61B0; }
    template<> inline uintptr_t rva<&MeetingHud::IPGPFPHJPLB> () { return 0x1EB5480; }
    template<> inline uintptr_t rva<&MeetingHud::Awake> () { return 0x1EADE20; }
    template<> inline uintptr_t rva<&MeetingHud::ADFDAKNEKKN> () { return 0x1EAD670; }
    template<> inline uintptr_t rva<&MeetingHud::HFLFOHIGPNG> () { return 0x1EB3BB0; }
    template<> inline uintptr_t rva<&MeetingHud::LLLJMIBFGNK> () { return 0x1EB8920; }
    template<> inline uintptr_t rva<&MeetingHud::CBPODLMCDGE> () { return 0x1EAEF90; }
    template<> inline uintptr_t rva<&MeetingHud::FAOLNCCHJOO> () { return 0x1EB2C50; }
    template<> inline uintptr_t rva<&MeetingHud::IJCKDMIIFJO> () { return 0x1EB4D30; }
    template<> inline uintptr_t rva<&MeetingHud::JEBDDGKKCJH> () { return 0x1EB5D20; }
    template<> inline uintptr_t rva<&MeetingHud::OLJNLMHPIPD> () { return 0x1EBBB60; }
    template<> inline uintptr_t rva<&MeetingHud::ONGJLDEFFCK> () { return 0x1EBC540; }
    template<> inline uintptr_t rva<&MeetingHud::MLDIBIJIIOA> () { return 0x1EB9A00; }
    template<> inline uintptr_t rva<&MeetingHud::OOADPNKFPNE> () { return 0x1EBC600; }
    template<> inline uintptr_t rva<&MeetingHud::Serialize> () { return 0x1EBD820; }
    template<> inline uintptr_t rva<&MeetingHud::NPBJCCDFELE> () { return 0x1EBAD70; }
    template<> inline uintptr_t rva<&MeetingHud::CKMKLHHLGJH> () { return 0x1EAFC00; }
    template<> inline uintptr_t rva<&MeetingHud::BDDOFOCOBKA> () { return 0x1EAE5F0; }
    template<> inline uintptr_t rva<&MeetingHud::KBPLBKIOGPD> () { return 0x1EB7110; }
    template<> inline uintptr_t rva<&MeetingHud::BJCMLPGMFBL> () { return 0x1EAEAD0; }
    template<> inline uintptr_t rva<&MeetingHud::EEAMIFENJPM> () { return 0x1EB21F0; }
    template<> inline uintptr_t rva<&MeetingHud::EKGLFEDAEMI> () { return 0x1EB2770; }
    template<> inline uintptr_t rva<&MeetingHud::EBLDLPBKCIH> () { return 0x1EB1ED0; }
    template<> inline uintptr_t rva<&MeetingHud::DBPHKEICGNH> () { return 0x1EB04C0; }
    template<> inline uintptr_t rva<&MeetingHud::NGICMHPNJAH> () { return 0x1EB9F70; }
    template<> inline uintptr_t rva<&MeetingHud::BLPNHECDDCE> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::OLFNPLJNPAP> () { return 0x1EBB9D0; }
    template<> inline uintptr_t rva<&MeetingHud::ADGDJJDAPMF> () { return 0x1EAD8B0; }
    template<> inline uintptr_t rva<&MeetingHud::MPJDHOEEKBL> () { return 0x1EB9C30; }
    template<> inline uintptr_t rva<&MeetingHud::GNHLIPLEIML> () { return 0x1EB3660; }
    template<> inline uintptr_t rva<&MeetingHud::CFAIAFAGFGJ> () { return 0x1EAF7F0; }
    template<> inline uintptr_t rva<&MeetingHud::IMEKBFJBICN> () { return 0x1EB4F30; }
    template<> inline uintptr_t rva<&MeetingHud::HandleRpc> () { return 0x1EB4860; }
    template<> inline uintptr_t rva<&MeetingHud::OGLLDNFBPGH> () { return 0x1EBB400; }
    template<> inline uintptr_t rva<&MeetingHud::POKHOLLJLKP> () { return 0x1EBD3A0; }
    template<> inline uintptr_t rva<&MeetingHud::MGFOANDJFCO> () { return 0x1EB9480; }
    template<> inline uintptr_t rva<&MeetingHud::MJPGCBBILLK> () { return 0x1EB98E0; }
    template<> inline uintptr_t rva<&MeetingHud::ClearVote> () { return 0x1EB0050; }
    template<> inline uintptr_t rva<&MeetingHud::IPHFFGPLEAN> () { return 0x1EB5520; }
    template<> inline uintptr_t rva<&MeetingHud::LCLCABKFPAJ> () { return 0x1EB8580; }
    template<> inline uintptr_t rva<&MeetingHud::BCEFEEJCAPC> () { return 0x1EAE5A0; }
    template<> inline uintptr_t rva<&MeetingHud::EGFMPEKAECE> () { return 0x1EB2430; }
    template<> inline uintptr_t rva<&MeetingHud::KFLFIAPCGMM> () { return 0x1EB74F0; }
    template<> inline uintptr_t rva<&MeetingHud::ctor> () { return 0x1EBE4F0; }
    template<> inline uintptr_t rva<&MeetingHud::ABOOGHPMGGB> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::CCCABICBOLF> () { return 0x1EAF170; }
    template<> inline uintptr_t rva<&MeetingHud::BBJFDHHDCOO> () { return 0x1EAE2B0; }
    template<> inline uintptr_t rva<&MeetingHud::CMOOEGINHGG> () { return 0x1EAFCD0; }
    template<> inline uintptr_t rva<&MeetingHud::BHCAPIGOPLM> () { return 0x1EAEA10; }
    template<> inline uintptr_t rva<&MeetingHud::HLGIDKKBFMI> () { return 0x1EB4020; }
    template<> inline uintptr_t rva<&MeetingHud::LLIFOAAMAEG> () { return 0x1EB86D0; }
    template<> inline uintptr_t rva<&MeetingHud::FCMKFNOBLID> () { return 0x1EB2D20; }
    template<> inline uintptr_t rva<&MeetingHud::NNELMDAPHBP> () { return 0x1EBAB90; }
    template<> inline uintptr_t rva<&MeetingHud::DFNAOKHNGDH> () { return 0x1EB0790; }
    template<> inline uintptr_t rva<&MeetingHud::MJIJGEBBMAO> () { return 0x1EB9690; }
    template<> inline uintptr_t rva<&MeetingHud::FACJJIKFHOO> () { return 0x1EB2B90; }
    template<> inline uintptr_t rva<&MeetingHud::CPAEJJIIBKC> () { return 0x1EAFD50; }
    template<> inline uintptr_t rva<&MeetingHud::OAOOBKFCGBH> () { return 0x1EBB170; }
    template<> inline uintptr_t rva<&MeetingHud::IKFBBDBBBNB> () { return 0x1EB4E20; }
    template<> inline uintptr_t rva<&MeetingHud::BOCJLLEOFDG> () { return 0x1EAEC90; }
    template<> inline uintptr_t rva<&MeetingHud::HandleDisconnect1> () { return 0x1EB43E0; }
    template<> inline uintptr_t rva<&MeetingHud::KHIKOHAMPNA> () { return 0x1EB7940; }
    template<> inline uintptr_t rva<&MeetingHud::CoIntro> () { return 0x1EB02D0; }
    template<> inline uintptr_t rva<&MeetingHud::OOFMLFDFAJG> () { return 0x1EBC850; }
    template<> inline uintptr_t rva<&MeetingHud::PPBJNNFHPAB> () { return 0x1EBD520; }
    template<> inline uintptr_t rva<&MeetingHud::KLIGOGDHHIM> () { return 0x1EB7E70; }
    template<> inline uintptr_t rva<&MeetingHud::GIDNAHJLHBF> () { return 0x1EB32B0; }
    template<> inline uintptr_t rva<&MeetingHud::DAJGPAAOEII> () { return 0x267200; }
    template<> inline uintptr_t rva<&MeetingHud::KDKAEKFKLCI> () { return 0x1EB74C0; }
    template<> inline uintptr_t rva<&MeetingHud::BFJOKBMOILI> () { return 0x1EAE970; }
    template<> inline uintptr_t rva<&MeetingHud::MACIFIOGMAI> () { return 0x1EB8E50; }
    template<> inline uintptr_t rva<&MeetingHud::IOGFCBIEDIC> () { return 0x1EB5140; }
    template<> inline uintptr_t rva<&MeetingHud::Select> () { return 0x1EBD660; }
    template<> inline uintptr_t rva<&MeetingHud::DINMKKJGOOJ> () { return 0x1EB1480; }
} // ark::method_info
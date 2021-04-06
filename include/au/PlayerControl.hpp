//au//PlayerControl
#pragma once
#include <ark/class.hpp>
#include <au/InnerNet/InnerNetObject.hpp>
struct GameData_PlayerInfo;
namespace UnityEngine{ struct AudioSource; }
namespace UnityEngine{ struct AudioClip; }
#include <cs/array.hpp>
struct TextRenderer;
struct LightSource;
struct TextTranslator;
namespace UnityEngine{ struct Collider2D; }
struct PlayerPhysics;
struct CustomNetworkTransform;
struct PetBehaviour;
struct HatParent;
namespace UnityEngine{ struct SpriteRenderer; }
struct IGDMNKLDEPI;
namespace System::Collections::Generic{ template <class> struct List; }
struct NEJOFOOJFDE;
namespace System::Collections::Generic{ template <class...> struct Dictionary; }
namespace System::Collections{ struct IEnumerator; }
#include <cs/string.hpp>
#include <au/MapArea.hpp>
#include <au/PlayerVoteStatus.hpp>
namespace Hazel{ struct MessageWriter; }
struct SkinData;
namespace Hazel{ struct MessageReader; }
#include <au/UnityEngine/Color.hpp>
namespace UnityEngine{ struct Renderer; }
struct PlayerTask;
#include <au/PlayerDeathReason.hpp>
#include <au/UnityEngine/Vector2.hpp>

struct PlayerControl : ark::meta<PlayerControl, InnerNet::InnerNetObject>
{
ark_meta("", "PlayerControl", "");

    // Fields

    int EHHNKOPLOHP; // 0x24
    uint8_t PlayerId; // 0x28
    float MaxReportDistance; // 0x2C
    bool moveable; // 0x30
    bool inVent; // 0x31
    static PlayerControl* LocalPlayer(); // 0x0
    GameData_PlayerInfo* playerInfo; // 0x34
    UnityEngine::AudioSource* FootSteps; // 0x38
    UnityEngine::AudioClip* KillSfx; // 0x3C
    cs::array<struct KillAnimation>* KillAnimations; // 0x40
    float killTimer; // 0x44
    int RemainingEmergencies; // 0x48
    TextRenderer* nameText; // 0x4C
    LightSource* LightPrefab; // 0x50
    LightSource* BBELGDJLCCL; // 0x54
    TextTranslator* textTranslator; // 0x58
    UnityEngine::Collider2D* Collider; // 0x5C
    PlayerPhysics* MyPhysics; // 0x60
    CustomNetworkTransform* NetTransform; // 0x64
    PetBehaviour* CurrentPet; // 0x68
    HatParent* HatRenderer; // 0x6C
    UnityEngine::SpriteRenderer* LNMJKMLHMIM; // 0x70
    cs::array<UnityEngine::Collider2D>* BNODMNIBMLI; // 0x74
    static IGDMNKLDEPI* GameOptions(); // 0x4
    System::Collections::Generic::List<PlayerTask>* myTasks; // 0x78
    cs::array<int/*PowerTools::SpriteAnim**/>* ScannerAnims; // 0x7C
    cs::array<UnityEngine::SpriteRenderer>* ScannersImages; // 0x80
    NEJOFOOJFDE* GJGDLGKDLJF; // 0x84
    bool OIBKBDFEHHO; // 0x88
    bool isDummy; // 0x89
    bool notRealPlayer; // 0x8A
    static System::Collections::Generic::List<PlayerControl>* AllPlayerControls(); // 0x8
    System::Collections::Generic::Dictionary<UnityEngine::Collider2D, NEJOFOOJFDE>* AAMDMBAFFOI; // 0x8C
    System::Collections::Generic::List<NEJOFOOJFDE>* FKIFHDLGMEB; // 0x90
    System::Collections::Generic::List<NEJOFOOJFDE>* EBBLBDMJOLG; // 0x94
    uint8_t FEBCGNHPCGM; // 0x98
    bool LMEMMKEFLHI; // 0x99

    // Methods

    void CheckColor(uint8_t JAKOFFAIMMM); // 0x17C0E50 // public 
    void AIEGIHGFGGP(); // 0x17C0070 // public 
    void SetHatAlpha(float DOMHNAPNHFM); // 0x17CCD40 // public 
    System::Collections::IEnumerator* PNKILIECDMN(); // 0x17CA5E0 // private 
    void EEIAMIIJJKI(cs::string* GKDDCDEKIBJ); // 0x17C1FB0 // public 
    void RpcStartMeeting(GameData_PlayerInfo* FLLBPBGADAH); // 0x17CC710 // public
    void FGGGNHMGBPM(int JAKOFFAIMMM); // 0x17C2800 // public 
    void PAMKHPDENDJ(); // 0x17C94B0 // private 
    void IEGMMEHDOGI(unsigned int CKAOPFHPEBG); // 0x17C5750 // public 
    void BPOFCCPJIGF(cs::string* GKDDCDEKIBJ); // 0x17C0AD0 // public 
    void ALLKABOIEOJ(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C0100 // private
    void DANCOMEDCJM(MapArea LEDKOPINDJL); // 0x17C1630 // public
    void CmdCheckColor(uint8_t JAKOFFAIMMM); // 0x17C11E0 // public 
    void RpcSendChatNote(uint8_t MCIOFPNBBIO, PlayerVoteStatus KEKEIAFEBIO); // 0x17CBE80 // public
    void KJBPACLOAFJ(PetBehaviour* CGFOGGFNKBA, int PNGKEHIHPLJ, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17C6840 // public static 
    void OLDFOAMKDIF(); // 0x17C85E0 // private 
    System::Collections::IEnumerator* CoStartMeeting(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C13F0 // public
    void set_Visible(bool IKGGJMHPDGH); // 0x17CE250 // public 
    void FixedUpdate(); // 0x17C3310 // private 
    bool JPJIOGOJLHL(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x17C67F0 // public override 
    void RpcUsePlatform(); // 0x17CC910 // public 
    void HMBLMGMAGEA(); // 0x17C4DF0 // public 
    void RpcMurderPlayer(PlayerControl* IGLDJOKKFJE); // 0x17CBCF0 // public 
    void SetSkinImage(SkinData* DGCIKAIFOCF, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17C7EB0 // public static 
    void CAGJGJJEFKH(unsigned int CKAOPFHPEBG, int PNGKEHIHPLJ, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17C0B70 // public static 
    void CompleteTask(unsigned int EGFIPPDPIHF); // 0x17C1450 // public 
    void EHJOBDBGEFL(unsigned int MBLJCBHIDHK); // 0x17C2210 // public 
    void Deserialize(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x17C1CF0 // public override 
    void FBDPIBBBHEN(unsigned int CKAOPFHPEBG); // 0x17C2580 // public 
    GameData_PlayerInfo* DGIIMHABNEF(); // 0x17C1980 // public
    void EFKLPEKDJGE(unsigned int PCJBOAOIJNG); // 0x17C2170 // public 
    void AddSystemTask(MapArea LEDKOPINDJL); // 0x17C0560 // public
    bool get_Visible(); // 0x17C22C0 // public 
    void SetPlayerMaterialColors(UnityEngine::Color JBOMEMICJJM, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CD540 // public static 
    void MurderPlayer(PlayerControl* IGLDJOKKFJE); // 0x17C6FF0 // public 
    void NHLANFNDHGI(int PNGKEHIHPLJ, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17C7EE0 // public static 
    void HFFHDOOAKFK(cs::array<uint8_t>* LBJJHLMFDJL); // 0x17C4030 // private 
    void FOHJHHINALH(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x17C2A40 // public override 
    void DBEBPDFILGE(GameData_PlayerInfo* FLLBPBGADAH); // 0x17C17B0 // public
    System::Collections::IEnumerator* Start(); // 0x17CDB10 // private 
    void HandleRpc(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x17C5040 // public override 
    void Awake(); // 0x17C07A0 // private 
    void SetTasks(System::Collections::Generic::List<struct GameData_FPNIHBANCDO*>* DNCIJBKFLLJ); // 0x17CDAB0 // public
    void RpcSetColor(uint8_t JAKOFFAIMMM); // 0x17CC0F0 // public
    System::Collections::IEnumerator* HAKNMAHPCPG(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C3FD0 // public
    void DKHAMIHHLDB(bool ICFFMGFHJJI, uint8_t PBOPCIHIPHC); // 0x17C1B90 // private
    void BFBKLFCIDOO(MapArea LEDKOPINDJL); // 0x17C0890 // public
    void OnDestroy(); // 0x17C93A0 // public override
    void ctor(); // 0x17CDD10 // public
    void HIPCEJEDKPN(unsigned int MBLJCBHIDHK, int PNGKEHIHPLJ); // 0x17C4CD0 // public
    void MOAGKFAFOPH(int IFALDPEMJAE); // 0x17C6F60 // public
    void SetPetImage(unsigned int CKAOPFHPEBG, int PNGKEHIHPLJ, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17CD270 // public static
    void PlayAnimation(uint8_t HLEDCAFGNNG); // 0x17CB1C0 // public
    void HJDPKIELFPO(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x17C1CF0 // public override
    void DFMFNNGFFMI(bool IKGGJMHPDGH); // 0x17C1880 // public
    void SetHat(unsigned int MBLJCBHIDHK, int PNGKEHIHPLJ); // 0x17CCD90 // public
    void HHGMEPNCLJC(cs::string* GKDDCDEKIBJ); // 0x17C4B10 // public
    void POAJAKGHDNI(PetBehaviour* CGFOGGFNKBA, int PNGKEHIHPLJ, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17CA630 // public static
    void Revive(); // 0x17CBA30 // public
    System::Collections::IEnumerator* MHAKFHOMKAJ(System::Collections::Generic::List<struct GameData_FPNIHBANCDO*>* DNCIJBKFLLJ); // 0x17C6E50 // private
    void RemoveTask(PlayerTask* NBPIFFEDABA); // 0x17CB710 // public
    void SetPlayerMaterialColors1(UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CD6A0 // public
    void PFHAAPNLCLD(UnityEngine::Color JBOMEMICJJM, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CA280 // public static
    void GGPFHKBAFNH(cs::array<GameData_PlayerInfo>* LBJJHLMFDJL); // 0x17C3DD0 // public
    void RpcSetInfected(cs::array<GameData_PlayerInfo>* LBJJHLMFDJL); // 0x17CC240 // public
    PlayerControl* NJMEFIKPJDG(); // 0x17C8100 // private
    void JIJJODAIKFD(); // 0x17C6600 // public
    void IFOOCJDLFMD(PlayerControl* IGLDJOKKFJE); // 0x17C57F0 // public
    System::Collections::IEnumerator* CHCONMKHFGD(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C0D20 // public
    bool RpcSendChat(cs::string* KNCEOHEBIHI); // 0x17CBF70 // public
    void RpcSetPet(unsigned int CKAOPFHPEBG); // 0x17CC450 // public
    void LJHGPEMHHGA(uint8_t JAKOFFAIMMM); // 0x17C6BC0 // public
    void UpdatePlatformIcon(); // 0x17CDB60 // public
    void RpcSetScanner(bool IKGGJMHPDGH); // 0x17CC4F0 // public
    void JGFJCPLCDPD(int PNGKEHIHPLJ, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17C6150 // public static
    void DJIKBELGAHG(int JAKOFFAIMMM); // 0x17C1A20 // public
    void JJPNFEFMOMM(uint8_t JAKOFFAIMMM); // 0x17C6740 // public
    void RpcPlayAnimation(uint8_t HLEDCAFGNNG); // 0x17CBDA0 // public
    void SetSkinImage1(unsigned int PCJBOAOIJNG, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17CD950 // public static
    void ADIBLBNOJJD(unsigned int EGFIPPDPIHF); // 0x17BFAE0 // public
    void CGEGGEJOIGJ(); // 0x17C0C20 // public
    void PDGNDPHGOFM(UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CA0D0 // public
    void PDBONDDHAEG(cs::string* GKDDCDEKIBJ); // 0x17C9F10 // public
    void CheckName(cs::string* GKDDCDEKIBJ); // 0x17C0FF0 // public
    void CmdCheckName(cs::string* GKDDCDEKIBJ); // 0x17C1290 // public
    void SetPetImage1(PetBehaviour* CGFOGGFNKBA, int PNGKEHIHPLJ, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17CD160 // public static
    void OFELMMDANIO(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C8520 // public
    void SetKillTimer(float KAIMOLNHDCG); // 0x17CCEB0 // public
    void HMHNPPECDBO(unsigned int EGFIPPDPIHF); // 0x17C4E80 // public
    void RpcSyncSettings(IGDMNKLDEPI* PAOKIAHKEMG); // 0x17CC7E0 // public
    GameData_PlayerInfo* get_Data(); // 0x17CE1B0 // public
    void NDMAGKFDBBN(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x17C7800 // public override
    void Exiled(); // 0x17C22F0 // public
    void SetPlayerMaterialColors2(int PNGKEHIHPLJ, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CD730 // public static
    void NJMHLOJGBKL(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C8470 // public
    void KKHDNDANHAC(uint8_t MCIOFPNBBIO, PlayerVoteStatus KEKEIAFEBIO); // 0x17C6950 // public
    void AGANIGJHGNB(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17BFCC0 // private
    void CJBGAEHHJCC(GameData_PlayerInfo* FLLBPBGADAH); // 0x17C0D80 // public
    void RpcCompleteTask(unsigned int EGFIPPDPIHF); // 0x17CBC50 // public
    bool AOJIHLBIKGF(cs::string* KNCEOHEBIHI); // 0x17C03E0 // public
    void BFIJIFAEFGE(bool IKGGJMHPDGH); // 0x17C09E0 // public
    void UseClosest(); // 0x17CDBF0 // public
    void PKCGCNHHHGE(UnityEngine::Color JBOMEMICJJM, UnityEngine::Renderer* AGOAPDBAHKG); // 0x17CA480 // public static
    void POIAKGCEDBB(cs::array<uint8_t>* LBJJHLMFDJL); // 0x17CA740 // private
    void SetAppearanceFromSaveData(); // 0x17CCAA0 // public
    void RpcSetHat(unsigned int MBLJCBHIDHK); // 0x17CC190 // public
    void KOFMABLJNIF(bool ICFFMGFHJJI, uint8_t PBOPCIHIPHC); // 0x17C6A50 // private
    void RemoveInfected(); // 0x17CB610 // public
    void PlayStepSound(); // 0x17CB250 // public
    void FMOLDHLICIM(GameData_PlayerInfo* FLLBPBGADAH); // 0x17C2970 // public
    void PDHOAIGKNFJ(unsigned int MBLJCBHIDHK, int PNGKEHIHPLJ); // 0x17CA160 // public
    void PHCGOJGOHJI(cs::string* GKDDCDEKIBJ); // 0x17CA3E0 // public
    void cctor(); // 0x17CDC80 // private static
    void JHMHIDCNGIP(PlayerControl* IGLDJOKKFJE); // 0x17C6550 // public
    void JHAFNBGOBNN(unsigned int EGFIPPDPIHF); // 0x17C6370 // public
    void ONPHIFNAFCP(); // 0x17C9110 // public
    void HOGDMFCIEOB(cs::string* GKDDCDEKIBJ); // 0x17C4F20 // public
    void Die(PlayerDeathReason HKOLMCHJICI); // 0x17C1D40 // public
    void MMHGLCMPCLE(); // 0x17C6EB0 // public static
    System::Collections::IEnumerator* HFHAGJGNPHL(System::Collections::Generic::List<struct GameData_FPNIHBANCDO*>* DNCIJBKFLLJ); // 0x17C4AB0 // private
    void ReportClosest(); // 0x17CB810 // public
    void SetName(cs::string* GKDDCDEKIBJ, bool KNEGLNPIFCE = bool(false)); // 0x17CCFD0 // public
    System::Collections::IEnumerator* JAGEBKMBEEA(); // 0x17C6000 // private
    void HideCursorTemporarily(); // 0x17C56A0 // public static
    void MEKNFDPDEKP(unsigned int EGFIPPDPIHF); // 0x17C6DB0 // public
    void CmdReportDeadBody(GameData_PlayerInfo* IGLDJOKKFJE); // 0x17C1340 // public
    void SetColor(int JAKOFFAIMMM); // 0x17CCBD0 // public
    void RpcSetStartCounter(int IFALDPEMJAE); // 0x17CC690 // public
    void RpcSetName(cs::string* GKDDCDEKIBJ); // 0x17CC3B0 // public
    void RpcSetSkin(unsigned int PCJBOAOIJNG); // 0x17CC5F0 // public
    void SetSkin(unsigned int PCJBOAOIJNG); // 0x17CDA00 // public
    bool get_CanMove(); // 0x17CDE60 // public
    void NEEBAMPAGKD(SkinData* DGCIKAIFOCF, UnityEngine::SpriteRenderer* IGLDJOKKFJE); // 0x17C7EB0 // public static
    System::Collections::IEnumerator* FCHAFFLKOIH(System::Collections::Generic::List<struct GameData_FPNIHBANCDO*>* DNCIJBKFLLJ); // 0x17C27A0 // private
    bool Serialize(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x17CCA50 // public override 
    void SetPet(unsigned int CKAOPFHPEBG); // 0x17CD320 // public 
    UnityEngine::Vector2 GetTruePosition(); // 0x17C3F40 // public 
    void AHPKJAJGMEN(GameData_PlayerInfo* FLLBPBGADAH); // 0x17BFFA0 // public
    void ACMJCLPCEHJ(unsigned int EGFIPPDPIHF); // 0x17BF900 // public 
    System::Collections::IEnumerator* MEDBBCNPHAK(); // 0x17C6D60 // private 
    bool EHNNPCGLDPG(); // 0x17C22C0 // public 
    void JBNJBHMIBOM(); // 0x17C6050 // private 

};


namespace ark
{
template<>
struct meta_statics<PlayerControl>
{
    PlayerControl* LocalPlayer;
    IGDMNKLDEPI* GameOptions;
    System::Collections::Generic::List<PlayerControl>* AllPlayerControls;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&PlayerControl::CheckColor> () { return 0x17C0E50; }
    template<> inline uintptr_t rva<&PlayerControl::AIEGIHGFGGP> () { return 0x17C0070; }
    template<> inline uintptr_t rva<&PlayerControl::SetHatAlpha> () { return 0x17CCD40; }
    template<> inline uintptr_t rva<&PlayerControl::PNKILIECDMN> () { return 0x17CA5E0; }
    template<> inline uintptr_t rva<&PlayerControl::EEIAMIIJJKI> () { return 0x17C1FB0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcStartMeeting> () { return 0x17CC710; }
    template<> inline uintptr_t rva<&PlayerControl::FGGGNHMGBPM> () { return 0x17C2800; }
    template<> inline uintptr_t rva<&PlayerControl::PAMKHPDENDJ> () { return 0x17C94B0; }
    template<> inline uintptr_t rva<&PlayerControl::IEGMMEHDOGI> () { return 0x17C5750; }
    template<> inline uintptr_t rva<&PlayerControl::BPOFCCPJIGF> () { return 0x17C0AD0; }
    template<> inline uintptr_t rva<&PlayerControl::ALLKABOIEOJ> () { return 0x17C0100; }
    template<> inline uintptr_t rva<&PlayerControl::DANCOMEDCJM> () { return 0x17C1630; }
    template<> inline uintptr_t rva<&PlayerControl::CmdCheckColor> () { return 0x17C11E0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSendChatNote> () { return 0x17CBE80; }
    template<> inline uintptr_t rva<&PlayerControl::KJBPACLOAFJ> () { return 0x17C6840; }
    template<> inline uintptr_t rva<&PlayerControl::OLDFOAMKDIF> () { return 0x17C85E0; }
    template<> inline uintptr_t rva<&PlayerControl::CoStartMeeting> () { return 0x17C13F0; }
    template<> inline uintptr_t rva<&PlayerControl::set_Visible> () { return 0x17CE250; }
    template<> inline uintptr_t rva<&PlayerControl::FixedUpdate> () { return 0x17C3310; }
    template<> inline uintptr_t rva<&PlayerControl::JPJIOGOJLHL> () { return 0x17C67F0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcUsePlatform> () { return 0x17CC910; }
    template<> inline uintptr_t rva<&PlayerControl::HMBLMGMAGEA> () { return 0x17C4DF0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcMurderPlayer> () { return 0x17CBCF0; }
    template<> inline uintptr_t rva<&PlayerControl::SetSkinImage> () { return 0x17C7EB0; }
    template<> inline uintptr_t rva<&PlayerControl::CAGJGJJEFKH> () { return 0x17C0B70; }
    template<> inline uintptr_t rva<&PlayerControl::CompleteTask> () { return 0x17C1450; }
    template<> inline uintptr_t rva<&PlayerControl::EHJOBDBGEFL> () { return 0x17C2210; }
    template<> inline uintptr_t rva<&PlayerControl::Deserialize> () { return 0x17C1CF0; }
    template<> inline uintptr_t rva<&PlayerControl::FBDPIBBBHEN> () { return 0x17C2580; }
    template<> inline uintptr_t rva<&PlayerControl::DGIIMHABNEF> () { return 0x17C1980; }
    template<> inline uintptr_t rva<&PlayerControl::EFKLPEKDJGE> () { return 0x17C2170; }
    template<> inline uintptr_t rva<&PlayerControl::AddSystemTask> () { return 0x17C0560; }
    template<> inline uintptr_t rva<&PlayerControl::get_Visible> () { return 0x17C22C0; }
    template<> inline uintptr_t rva<&PlayerControl::SetPlayerMaterialColors> () { return 0x17CD540; }
    template<> inline uintptr_t rva<&PlayerControl::MurderPlayer> () { return 0x17C6FF0; }
    template<> inline uintptr_t rva<&PlayerControl::NHLANFNDHGI> () { return 0x17C7EE0; }
    template<> inline uintptr_t rva<&PlayerControl::HFFHDOOAKFK> () { return 0x17C4030; }
    template<> inline uintptr_t rva<&PlayerControl::FOHJHHINALH> () { return 0x17C2A40; }
    template<> inline uintptr_t rva<&PlayerControl::DBEBPDFILGE> () { return 0x17C17B0; }
    template<> inline uintptr_t rva<&PlayerControl::Start> () { return 0x17CDB10; }
    template<> inline uintptr_t rva<&PlayerControl::HandleRpc> () { return 0x17C5040; }
    template<> inline uintptr_t rva<&PlayerControl::Awake> () { return 0x17C07A0; }
    template<> inline uintptr_t rva<&PlayerControl::SetTasks> () { return 0x17CDAB0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetColor> () { return 0x17CC0F0; }
    template<> inline uintptr_t rva<&PlayerControl::HAKNMAHPCPG> () { return 0x17C3FD0; }
    template<> inline uintptr_t rva<&PlayerControl::DKHAMIHHLDB> () { return 0x17C1B90; }
    template<> inline uintptr_t rva<&PlayerControl::BFBKLFCIDOO> () { return 0x17C0890; }
    template<> inline uintptr_t rva<&PlayerControl::OnDestroy> () { return 0x17C93A0; }
    template<> inline uintptr_t rva<&PlayerControl::ctor> () { return 0x17CDD10; }
    template<> inline uintptr_t rva<&PlayerControl::HIPCEJEDKPN> () { return 0x17C4CD0; }
    template<> inline uintptr_t rva<&PlayerControl::MOAGKFAFOPH> () { return 0x17C6F60; }
    template<> inline uintptr_t rva<&PlayerControl::SetPetImage> () { return 0x17CD270; }
    template<> inline uintptr_t rva<&PlayerControl::PlayAnimation> () { return 0x17CB1C0; }
    template<> inline uintptr_t rva<&PlayerControl::HJDPKIELFPO> () { return 0x17C1CF0; }
    template<> inline uintptr_t rva<&PlayerControl::DFMFNNGFFMI> () { return 0x17C1880; }
    template<> inline uintptr_t rva<&PlayerControl::SetHat> () { return 0x17CCD90; }
    template<> inline uintptr_t rva<&PlayerControl::HHGMEPNCLJC> () { return 0x17C4B10; }
    template<> inline uintptr_t rva<&PlayerControl::POAJAKGHDNI> () { return 0x17CA630; }
    template<> inline uintptr_t rva<&PlayerControl::Revive> () { return 0x17CBA30; }
    template<> inline uintptr_t rva<&PlayerControl::MHAKFHOMKAJ> () { return 0x17C6E50; }
    template<> inline uintptr_t rva<&PlayerControl::RemoveTask> () { return 0x17CB710; }
    template<> inline uintptr_t rva<&PlayerControl::SetPlayerMaterialColors1> () { return 0x17CD6A0; }
    template<> inline uintptr_t rva<&PlayerControl::PFHAAPNLCLD> () { return 0x17CA280; }
    template<> inline uintptr_t rva<&PlayerControl::GGPFHKBAFNH> () { return 0x17C3DD0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetInfected> () { return 0x17CC240; }
    template<> inline uintptr_t rva<&PlayerControl::NJMEFIKPJDG> () { return 0x17C8100; }
    template<> inline uintptr_t rva<&PlayerControl::JIJJODAIKFD> () { return 0x17C6600; }
    template<> inline uintptr_t rva<&PlayerControl::IFOOCJDLFMD> () { return 0x17C57F0; }
    template<> inline uintptr_t rva<&PlayerControl::CHCONMKHFGD> () { return 0x17C0D20; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSendChat> () { return 0x17CBF70; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetPet> () { return 0x17CC450; }
    template<> inline uintptr_t rva<&PlayerControl::LJHGPEMHHGA> () { return 0x17C6BC0; }
    template<> inline uintptr_t rva<&PlayerControl::UpdatePlatformIcon> () { return 0x17CDB60; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetScanner> () { return 0x17CC4F0; }
    template<> inline uintptr_t rva<&PlayerControl::JGFJCPLCDPD> () { return 0x17C6150; }
    template<> inline uintptr_t rva<&PlayerControl::DJIKBELGAHG> () { return 0x17C1A20; }
    template<> inline uintptr_t rva<&PlayerControl::JJPNFEFMOMM> () { return 0x17C6740; }
    template<> inline uintptr_t rva<&PlayerControl::RpcPlayAnimation> () { return 0x17CBDA0; }
    template<> inline uintptr_t rva<&PlayerControl::SetSkinImage1> () { return 0x17CD950; }
    template<> inline uintptr_t rva<&PlayerControl::ADIBLBNOJJD> () { return 0x17BFAE0; }
    template<> inline uintptr_t rva<&PlayerControl::CGEGGEJOIGJ> () { return 0x17C0C20; }
    template<> inline uintptr_t rva<&PlayerControl::PDGNDPHGOFM> () { return 0x17CA0D0; }
    template<> inline uintptr_t rva<&PlayerControl::PDBONDDHAEG> () { return 0x17C9F10; }
    template<> inline uintptr_t rva<&PlayerControl::CheckName> () { return 0x17C0FF0; }
    template<> inline uintptr_t rva<&PlayerControl::CmdCheckName> () { return 0x17C1290; }
    template<> inline uintptr_t rva<&PlayerControl::SetPetImage1> () { return 0x17CD160; }
    template<> inline uintptr_t rva<&PlayerControl::OFELMMDANIO> () { return 0x17C8520; }
    template<> inline uintptr_t rva<&PlayerControl::SetKillTimer> () { return 0x17CCEB0; }
    template<> inline uintptr_t rva<&PlayerControl::HMHNPPECDBO> () { return 0x17C4E80; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSyncSettings> () { return 0x17CC7E0; }
    template<> inline uintptr_t rva<&PlayerControl::get_Data> () { return 0x17CE1B0; }
    template<> inline uintptr_t rva<&PlayerControl::NDMAGKFDBBN> () { return 0x17C7800; }
    template<> inline uintptr_t rva<&PlayerControl::Exiled> () { return 0x17C22F0; }
    template<> inline uintptr_t rva<&PlayerControl::SetPlayerMaterialColors2> () { return 0x17CD730; }
    template<> inline uintptr_t rva<&PlayerControl::NJMHLOJGBKL> () { return 0x17C8470; }
    template<> inline uintptr_t rva<&PlayerControl::KKHDNDANHAC> () { return 0x17C6950; }
    template<> inline uintptr_t rva<&PlayerControl::AGANIGJHGNB> () { return 0x17BFCC0; }
    template<> inline uintptr_t rva<&PlayerControl::CJBGAEHHJCC> () { return 0x17C0D80; }
    template<> inline uintptr_t rva<&PlayerControl::RpcCompleteTask> () { return 0x17CBC50; }
    template<> inline uintptr_t rva<&PlayerControl::AOJIHLBIKGF> () { return 0x17C03E0; }
    template<> inline uintptr_t rva<&PlayerControl::BFIJIFAEFGE> () { return 0x17C09E0; }
    template<> inline uintptr_t rva<&PlayerControl::UseClosest> () { return 0x17CDBF0; }
    template<> inline uintptr_t rva<&PlayerControl::PKCGCNHHHGE> () { return 0x17CA480; }
    template<> inline uintptr_t rva<&PlayerControl::POIAKGCEDBB> () { return 0x17CA740; }
    template<> inline uintptr_t rva<&PlayerControl::SetAppearanceFromSaveData> () { return 0x17CCAA0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetHat> () { return 0x17CC190; }
    template<> inline uintptr_t rva<&PlayerControl::KOFMABLJNIF> () { return 0x17C6A50; }
    template<> inline uintptr_t rva<&PlayerControl::RemoveInfected> () { return 0x17CB610; }
    template<> inline uintptr_t rva<&PlayerControl::PlayStepSound> () { return 0x17CB250; }
    template<> inline uintptr_t rva<&PlayerControl::FMOLDHLICIM> () { return 0x17C2970; }
    template<> inline uintptr_t rva<&PlayerControl::PDHOAIGKNFJ> () { return 0x17CA160; }
    template<> inline uintptr_t rva<&PlayerControl::PHCGOJGOHJI> () { return 0x17CA3E0; }
    template<> inline uintptr_t rva<&PlayerControl::cctor> () { return 0x17CDC80; }
    template<> inline uintptr_t rva<&PlayerControl::JHMHIDCNGIP> () { return 0x17C6550; }
    template<> inline uintptr_t rva<&PlayerControl::JHAFNBGOBNN> () { return 0x17C6370; }
    template<> inline uintptr_t rva<&PlayerControl::ONPHIFNAFCP> () { return 0x17C9110; }
    template<> inline uintptr_t rva<&PlayerControl::HOGDMFCIEOB> () { return 0x17C4F20; }
    template<> inline uintptr_t rva<&PlayerControl::Die> () { return 0x17C1D40; }
    template<> inline uintptr_t rva<&PlayerControl::MMHGLCMPCLE> () { return 0x17C6EB0; }
    template<> inline uintptr_t rva<&PlayerControl::HFHAGJGNPHL> () { return 0x17C4AB0; }
    template<> inline uintptr_t rva<&PlayerControl::ReportClosest> () { return 0x17CB810; }
    template<> inline uintptr_t rva<&PlayerControl::SetName> () { return 0x17CCFD0; }
    template<> inline uintptr_t rva<&PlayerControl::JAGEBKMBEEA> () { return 0x17C6000; }
    template<> inline uintptr_t rva<&PlayerControl::HideCursorTemporarily> () { return 0x17C56A0; }
    template<> inline uintptr_t rva<&PlayerControl::MEKNFDPDEKP> () { return 0x17C6DB0; }
    template<> inline uintptr_t rva<&PlayerControl::CmdReportDeadBody> () { return 0x17C1340; }
    template<> inline uintptr_t rva<&PlayerControl::SetColor> () { return 0x17CCBD0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetStartCounter> () { return 0x17CC690; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetName> () { return 0x17CC3B0; }
    template<> inline uintptr_t rva<&PlayerControl::RpcSetSkin> () { return 0x17CC5F0; }
    template<> inline uintptr_t rva<&PlayerControl::SetSkin> () { return 0x17CDA00; }
    template<> inline uintptr_t rva<&PlayerControl::get_CanMove> () { return 0x17CDE60; }
    template<> inline uintptr_t rva<&PlayerControl::NEEBAMPAGKD> () { return 0x17C7EB0; }
    template<> inline uintptr_t rva<&PlayerControl::FCHAFFLKOIH> () { return 0x17C27A0; }
    template<> inline uintptr_t rva<&PlayerControl::Serialize> () { return 0x17CCA50; }
    template<> inline uintptr_t rva<&PlayerControl::SetPet> () { return 0x17CD320; }
    template<> inline uintptr_t rva<&PlayerControl::GetTruePosition> () { return 0x17C3F40; }
    template<> inline uintptr_t rva<&PlayerControl::AHPKJAJGMEN> () { return 0x17BFFA0; }
    template<> inline uintptr_t rva<&PlayerControl::ACMJCLPCEHJ> () { return 0x17BF900; }
    template<> inline uintptr_t rva<&PlayerControl::MEDBBCNPHAK> () { return 0x17C6D60; }
    template<> inline uintptr_t rva<&PlayerControl::EHNNPCGLDPG> () { return 0x17C22C0; }
    template<> inline uintptr_t rva<&PlayerControl::JBNJBHMIBOM> () { return 0x17C6050; }
} // ark::method_info
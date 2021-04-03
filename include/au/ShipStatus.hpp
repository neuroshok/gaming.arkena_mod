//au//ShipStatus
#pragma once
#include <ark/class.hpp>
#include <au/InnerNet/InnerNetObject.hpp>
#include <au/UnityEngine/Color.hpp>
struct MapBehaviour;
struct ExileController;
struct OverlayKillAnimation;
#include <au/UnityEngine/Vector2.hpp>
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class...> struct Dictionary; }
namespace UnityEngine{ struct AudioClip; }
namespace PowerTools{ struct SpriteAnim; }
namespace UnityEngine{ struct AnimationClip; }
namespace UnityEngine{ struct ParticleSystem; }
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct Sprite; }
struct MedScannerBehaviour;
#include <au/ShipStatus_MapType.hpp>
#include <au/MapArea.hpp>
#include <au/PlayerTask.hpp>
#include <au/NormalPlayerTask.hpp>
struct PlayerControl;
struct GameData_PlayerInfo;
#include <au/EndGameReason.hpp>
#include <au/StringNames.hpp>
namespace Hazel{ struct MessageWriter; }
namespace Hazel{ struct MessageReader; }
struct NormalPlayerTask;
namespace System::Collections{ struct IEnumerator; }
namespace System::Collections::Generic{ template <class> struct List; }
namespace System::Collections::Generic{ template <class...> struct HashSet; }
struct Vent;

struct ShipStatus : ark::meta<ShipStatus, InnerNet::InnerNetObject>
{
ark_meta("", "ShipStatus", "");

    // Fields

    static ShipStatus* Instance(); // 0x0
    UnityEngine::Color CameraColor; // 0x24
    float MaxLightRadius; // 0x34
    float MinLightRadius; // 0x38
    float MapScale; // 0x3C
    MapBehaviour* MapPrefab; // 0x40
    ExileController* ExileCutscenePrefab; // 0x44
    OverlayKillAnimation* EmergencyOverlay; // 0x48
    OverlayKillAnimation* ReportOverlay; // 0x4C
    UnityEngine::Vector2 InitialSpawnCenter; // 0x50
    UnityEngine::Vector2 MeetingSpawnCenter; // 0x58
    UnityEngine::Vector2 MeetingSpawnCenter2; // 0x60
    float SpawnRadius; // 0x68
    cs::array<NormalPlayerTask>* CommonTasks; // 0x6C
    cs::array<NormalPlayerTask>* LongTasks; // 0x70
    cs::array<NormalPlayerTask>* NormalTasks; // 0x74
    cs::array<PlayerTask>* SpecialTasks; // 0x78
    cs::array<UnityEngine::Transform>* DummyLocations; // 0x7C
    cs::array<struct SurvCamera*>* AllCameras; // 0x80
    cs::array<struct PlainDoor*>* AllDoors; // 0x84
    cs::array<struct Console*>* Alls; // 0x88
    System::Collections::Generic::Dictionary<MapArea, struct CBFMKGACLNE*>* Systems; // 0x8C
    cs::array<StringNames>* SystemNames; // 0x90
    cs::array<TaskType>* _EENFBHNGDPI_k__BackingField; // 0x94
    cs::array<struct PlainShipRoom*>* _AADJNODEAEO_k__BackingField; // 0x98
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* _MHLFLFAJHDL_k__BackingField; // 0x9C
    cs::array<Vent>* _ICFPNAEHMIA_k__BackingField; // 0xA0
    UnityEngine::AudioClip* SabotageSound; // 0xA4
    cs::array<UnityEngine::AnimationClip>* WeaponFires; // 0xA8
    PowerTools::SpriteAnim* WeaponsImage; // 0xAC
    cs::array<UnityEngine::AudioClip>* VentMoveSounds; // 0xB0
    UnityEngine::AudioClip* VentEnterSound; // 0xB4
    UnityEngine::AnimationClip* HatchActive; // 0xB8
    PowerTools::SpriteAnim* Hatch; // 0xBC
    UnityEngine::ParticleSystem* HatchParticles; // 0xC0
    UnityEngine::AnimationClip* ShieldsActive; // 0xC4
    cs::array<PowerTools::SpriteAnim>* ShieldsImages; // 0xC8
    UnityEngine::SpriteRenderer* ShieldBorder; // 0xCC
    UnityEngine::Sprite* ShieldBorderOn; // 0xD0
    MedScannerBehaviour* MedScanner; // 0xD4
    int PHBMACMGIPG; // 0xD8
    float Timer; // 0xDC
    float EmergencyCooldown; // 0xE0
    ShipStatus_MapType Type; // 0xE4
    bool _JHDLPBFKOIL_k__BackingField; // 0xE8
    int KPFIAIGDLPK; // 0xEC

    // Methods

    void GKNFAFOBAIN(cs::array<struct PlainShipRoom*>* IKGGJMHPDGH); // 0x8FAE40 // private
    void PMFCDEGOKIM(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void OPEMGPNLIGG(MapArea OJOBEIGMNMD, PlayerControl* CJFDNCENCEM, uint8_t HGIEDPKOHNJ); // 0x1A4E550 // public
    void DPJPLJHEDFG(MapArea CDLMBAHPJJJ); // 0x1A45690 // public
    void GGKNONHPJAB(); // 0x1A47E90 // private static 
    void OCCGENFHIFO(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    void BLMLGNHDFOM(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    void PMFBOJMKPIJ(bool IKGGJMHPDGH); // 0x1A44730 // public 
    void OKDFOFMOAOP(); // 0x1A4E1C0 // private 
    void KDAGMMDJPGH(); // 0x1A4A590 // public virtual 
    void PPACDINHKMF(); // 0x1A4F260 // private 
    void GOIBPEBEMKD(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void MFLHIMOFKAD(); // 0x1A4B1B0 // public 
    float OLBHOBPGBBH(GameData_PlayerInfo* CJFDNCENCEM); // 0x1A4E3C0 // public virtual
    void GLENBDLPPOK(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void CADHMKNCJCB(bool IKGGJMHPDGH); // 0x1A44730 // public 
    void BFPIGGLFJPK(); // 0x1A43800 // public 
    cs::array<TaskType>* DFIECKNONIN(); // 0x3C26E0 // public
    void IOFPNKCEHFO(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    void CDNPNAMIPBE(bool IKGGJMHPDGH); // 0x1A44730 // public 
    void PBKIGLMJEDH(EndGameReason OAFCENKMAGP, bool GKFHPFPIHGA); // 0x1A4EEF0 // private static
    void DENCILJLCIB(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void MHGLONALCBG(); // 0x1A4B7C0 // public 
    void OGMOLIBKCKI(); // 0x1A4DC00 // public 
    void BIAEKLBMHDP(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    void set_BeginCalled(bool IKGGJMHPDGH); // 0x1A44730 // public 
    void GOCBKLBLGBH(); // 0x1A48380 // public 
    void Awake(); // 0x1A42FE0 // private 
    void NEMDEMKAJEA(); // 0x1A4C670 // public 
    void CIEMECADMHK(); // 0x1A44870 // public 
    void MLNGHKDCJML(); // 0x1A4B880 // internal 
    void GPBGDGGADAK(); // 0x1A48460 // private 
    bool Serialize(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1A4F6A0 // public override 
    cs::array<Vent>* KAHNAODFCMC(); // 0x5D8D50 // public
    void JPLJMLAEEOO(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1A4A570 // public override 
    void BMKMHNMOJBG(); // 0x1A43C80 // private 
    void EDLBGGDJAMF(); // 0x1A45B80 // private 
    void IOMDDNAFNFE(); // 0x1A49ED0 // private static 
    void JHMNONGPMLE(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void NAKGJLBMEND(EndGameReason OAFCENKMAGP, bool GKFHPFPIHGA); // 0x1A4BBD0 // private static
    void IJIEBNONBOB(); // 0x1A49E40 // public virtual 
    void ALONOGIGODJ(); // 0x1A42F50 // public virtual 
    void HNNKPAPBOFP(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1A49360 // public override 
    void EACKMODKNIA(cs::array<struct PlainShipRoom*>* IKGGJMHPDGH); // 0x8FAE40 // private
    void NLNGICGJECA(); // 0x1A4CD70 // private 
    cs::array<struct PlainShipRoom*>* BHLCCFOOPAJ(); // 0x3DF0C0 // public
    void GPBELMGKKGP(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void MJACFAHFCFH(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    void GDFEKKKEPKI(); // 0x1A47B40 // internal 
    void NGKKACEKNKN(); // 0x1A4CC20 // public 
    bool DOAJPCLOHAE(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1A45530 // public override 
    bool OKHNMOCKMAA(); // 0x1A4E2C0 // public 
    void LJHOAKPKODG(); // 0x1A4AA20 // public 
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* LHGNAIODHGI(); // 0x5D8D90 // public
    void AKLOAPGPLBJ(); // 0x1A42A70 // public 
    float CalculateLightRadius(GameData_PlayerInfo* CJFDNCENCEM); // 0x1A44FC0 // public virtual
    void FNKDLCEJGKN(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1A47250 // public override 
    void LLFNENCMCDI(); // 0x1A4AE30 // public 
    void NBEBPPBCGLJ(); // 0x1A4BCF0 // private 
    void MGHGHPGCHEI(); // 0x1A4B480 // internal 
    void FireWeapon(); // 0x1A472D0 // public 
    void CloseDoorsOfType(MapArea HJPFNDGKBCP); // 0x1A453B0 // public
    void FKOBPNJCHPL(); // 0x1A46DB0 // private 
    cs::array<TaskType>* AIMJLCEMNLI(); // 0x3C26E0 // public
    void OnMeetingCalled(); // 0x267200 // public virtual 
    void NKECEDOGBFF(); // 0x1A4CCE0 // public 
    void AFJGHLCCEMO(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1A42460 // public override 
    bool get_IsDirty(); // 0x2FD990 // public override 
    cs::array<Vent>* FDHAGBKOEFM(); // 0x5D8D50 // public
    void BIPMPOFJMMM(cs::array<struct PlainShipRoom*>* IKGGJMHPDGH); // 0x8FAE40 // private
    void PBALKPNCMKM(MapArea HJPFNDGKBCP); // 0x1A4EE50 // public
    NormalPlayerTask* LJKFMBOIHFH(uint8_t EGFIPPDPIHF); // 0x1A4ACF0 // public 
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* HPODDLHHNLF(); // 0x5D8D90 // public
    void HandleRpc(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1A498E0 // public override 
    void ctor(); // 0x1A4FC50 // public 
    bool PKPCDDKPBLE(); // 0x31E7E0 // public override 
    void Start(); // 0x1A4F9C0 // protected virtual 
    void BPIBJCLGGAK(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    void GJJFDLLNIMJ(); // 0x1A48080 // private 
    void OnDestroy(); // 0x1A4E5E0 // public override 
    void DCDFMGJOJAL(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    void KJABLBMPFBC(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1A4A740 // public override 
    void OACDEPGBKAD(); // 0x1A4D0B0 // private 
    void IPOHHKJEICI(cs::array<struct PlainShipRoom*>* IKGGJMHPDGH); // 0x8FAE40 // private
    bool BGBFKOGPMCA(); // 0x31E7E0 // public override 
    void CMNACEJFKAP(); // 0x1A449B0 // private 
    float LGCIJLFECII(GameData_PlayerInfo* CJFDNCENCEM); // 0x1A4A890 // public virtual
    cs::array<struct PlainShipRoom*>* get_AllRooms(); // 0x3DF0C0 // public
    void HKKIIGLOJLC(); // 0x1A49290 // private 
    System::Collections::IEnumerator* JJMNGHMHIPC(); // 0x1A4A210 // public virtual 
    bool CJILDKCBABE(); // 0x1A44900 // public 
    bool DLAGGOCMAMH(); // 0x1A45450 // public 
    void RpcCloseDoorsOfType(MapArea CDLMBAHPJJJ); // 0x1A4F4C0 // public
    void MAFPIHLHJAK(System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* IKGGJMHPDGH); // 0x5D8EF0 // private
    bool PMIHMNIKADE(); // 0x1A4F010 // public 
    void OpenHatch(); // 0x1A4ED90 // public 
    void LJBIICKOEIM(bool IKGGJMHPDGH); // 0x1A44730 // public 
    void JLCKPLJIGOJ(); // 0x1A4A250 // private static 
    bool FFFHMOEEEBD(); // 0x1A46AD0 // public 
    NormalPlayerTask* IAIEPFBIHML(uint8_t EGFIPPDPIHF); // 0x1A49A80 // public 
    void StartShields(); // 0x1A4F920 // public 
    void AFELMHCCKCO(); // 0x1A42380 // public 
    NormalPlayerTask* GetTaskById(uint8_t EGFIPPDPIHF); // 0x1A48560 // public 
    void RepairGameOverSystems(); // 0x1A4F3A0 // public virtual 
    cs::array<Vent>* get_AllVents(); // 0x5D8D50 // public
    void AKCBOPBBNMI(); // 0x1A425A0 // public 
    void AGLKGMBPAFD(); // 0x267200 // public virtual 
    void CDAIOAGBDCN(PlayerControl* CJFDNCENCEM, int CCKLGJKEEDP, bool IBAIAGJLGFF); // 0x1A44750 // public virtual 
    bool ENONNLBKEIF(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1A46970 // public override 
    bool KLONCOMMOFE(); // 0x31E7E0 // public override 
    void SpawnPlayer(PlayerControl* CJFDNCENCEM, int CCKLGJKEEDP, bool IBAIAGJLGFF); // 0x1A4F800 // public virtual 
    void IENDOAPMGLM(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    void Begin(); // 0x1A44240 // public 
    void RepairSystem(MapArea OJOBEIGMNMD, PlayerControl* CJFDNCENCEM, uint8_t HGIEDPKOHNJ); // 0x1A4F430 // public
    void LGKMOOLNANA(); // 0x267200 // public virtual 
    void DKMLEAJLOMC(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    cs::array<Vent>* AEJKKKFLOPI(); // 0x5D8D50 // public
    void Deserialize(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1A45870 // public override 
    bool JNPENLOCLOA(); // 0x31E7E0 // public override 
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* DGAICIGEDJM(); // 0x5D8D90 // public
    void GCFILLGIAGI(); // 0x1A47680 // public 
    void HBADPACGGDI(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    bool PDOGBFKDOOH(); // 0x2FD990 // public override 
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* get_FastRooms(); // 0x5D8D90 // public
    void LOFNDNOCEFJ(cs::array<struct PlainShipRoom*>* IKGGJMHPDGH); // 0x8FAE40 // private
    System::Collections::IEnumerator* PrespawnStep(); // 0x1A4F360 // public virtual 
    cs::array<TaskType>* COHAOALDEAI(); // 0x3C26E0 // public
    void MENJMKEHICN(); // 0x1A4AFC0 // private static 
    bool BEOFAAODJBI(); // 0x1A43720 // public 
    void OnEnable(); // 0x1A4E6B0 // protected virtual 
    void EMLDEIPOGEE(); // 0x1A46870 // private 
    NormalPlayerTask* ICGIGGNLLAA(uint8_t EGFIPPDPIHF); // 0x1A49BC0 // public 
    void KDONFIJIKKG(EndGameReason OAFCENKMAGP, bool GKFHPFPIHGA); // 0x1A4A620 // private static
    void BGGMHCNJHHB(PlayerControl* CJFDNCENCEM, int CCKLGJKEEDP, bool IBAIAGJLGFF); // 0x1A43890 // public virtual 
    void HPPMCBJPDGN(); // 0x1A49410 // public 
    bool FLMPAIJEFHM(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1A470F0 // public override 
    void IABIEDMDFFD(); // 0x1A49980 // private 
    cs::array<struct PlainShipRoom*>* JGOLFHMNKBJ(); // 0x3DF0C0 // public
    void HCNMDCOALPI(); // 0x1A486A0 // private 
    void HLKOLGMFCBB(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    cs::array<struct PlainShipRoom*>* MGAEGPMJNAM(); // 0x3DF0C0 // public
    void HGFNKDGBNLG(); // 0x1A48DB0 // public 
    bool JKDMDBNIELP(); // 0x1A46AD0 // public 
    bool get_BeginCalled(); // 0x1A46AD0 // public 
    void FixedUpdate(); // 0x1A473B0 // public 
    void BDJDNDKJOEN(); // 0x1A43620 // private 
    void NGGCJFADHJA(); // 0x1A4C730 // public 
    void JPJJIIFKOFM(EndGameReason OAFCENKMAGP, bool GKFHPFPIHGA); // 0x1A4A450 // private static
    void ELGMNEAPFPB(MapArea CDLMBAHPJJJ); // 0x1A467C0 // public
    bool CheckTaskCompletion(); // 0x1A45150 // public 
    void KLBCHHCNDOA(bool IKGGJMHPDGH); // 0x1A44730 // public 
    bool EDKPHJOPFPH(); // 0x1A45920 // public 
    void RpcRepairSystem(MapArea OJOBEIGMNMD, int HGIEDPKOHNJ); // 0x1A4F570 // public
    float ADIFBIDFKJC(GameData_PlayerInfo* CJFDNCENCEM); // 0x1A421F0 // public virtual
    cs::array<TaskType>* get_AllStepWatchers(); // 0x3C26E0 // public
    void BIEFLOCJKMJ(); // 0x1A439B0 // public 
    void OCOFKCPJPNK(); // 0x1A4D3F0 // private 
    void EENLFIECGMN(/*ref*/ int HAOOEANGKFM, int AJFBAIGJLGG, System::Collections::Generic::List<uint8_t>* DNCIJBKFLLJ, System::Collections::Generic::HashSet<TaskType>* HEPEIDMDCBC, System::Collections::Generic::List<NormalPlayerTask>* HDEPOPGHFNL); // 0x1A46270 // private
    void KOFMJAPBIPO(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1A4A7E0 // public override 
    NormalPlayerTask* IILAELGINIC(uint8_t EGFIPPDPIHF); // 0x1A49D00 // public 
    bool IsGameOverDueToDeath(); // 0x1A4A0D0 // public 
    bool NEFDIEGBAEN(); // 0x1A4C410 // public 
    void JAIBPGBKDMD(cs::array<Vent>* IKGGJMHPDGH); // 0x3C2D60 // private
    void BBIIDENFKML(); // 0x1A43320 // public virtual 
    void FGNIBIDKHIA(); // 0x1A46AE0 // public 
    void MBBCOHFLIIM(); // 0x1A4AEF0 // public override 
    void AGBANJGAOKI(cs::array<TaskType>* IKGGJMHPDGH); // 0x3C2C40 // private
    void DPKPFPOHICA(MapArea OJOBEIGMNMD, int HGIEDPKOHNJ); // 0x1A45740 // public
    cs::array<TaskType>* OLPPNFOMOJF(); // 0x3C26E0 // public
    void EIOKEKBNEAA(); // 0x1A46540 // protected virtual 
    void GMDANFGMPNM(); // 0x1A48180 // private static 
    void BCJIKJMJOKP(); // 0x1A433B0 // protected virtual 
    void AJIJIICKJLO(MapArea OJOBEIGMNMD, PlayerControl* CJFDNCENCEM, uint8_t HGIEDPKOHNJ); // 0x1A42510 // public
    System::Collections::Generic::Dictionary<MapArea, struct PlainShipRoom*>* PMBKCAPCDKP(); // 0x5D8D90 // public

};


namespace ark
{
template<>
struct meta_statics<ShipStatus>
{
    ShipStatus* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&ShipStatus::GKNFAFOBAIN> () { return 0x8FAE40; }
    template<> inline uintptr_t rva<&ShipStatus::PMFCDEGOKIM> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::OPEMGPNLIGG> () { return 0x1A4E550; }
    template<> inline uintptr_t rva<&ShipStatus::DPJPLJHEDFG> () { return 0x1A45690; }
    template<> inline uintptr_t rva<&ShipStatus::GGKNONHPJAB> () { return 0x1A47E90; }
    template<> inline uintptr_t rva<&ShipStatus::OCCGENFHIFO> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::BLMLGNHDFOM> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::PMFBOJMKPIJ> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::OKDFOFMOAOP> () { return 0x1A4E1C0; }
    template<> inline uintptr_t rva<&ShipStatus::KDAGMMDJPGH> () { return 0x1A4A590; }
    template<> inline uintptr_t rva<&ShipStatus::PPACDINHKMF> () { return 0x1A4F260; }
    template<> inline uintptr_t rva<&ShipStatus::GOIBPEBEMKD> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::MFLHIMOFKAD> () { return 0x1A4B1B0; }
    template<> inline uintptr_t rva<&ShipStatus::OLBHOBPGBBH> () { return 0x1A4E3C0; }
    template<> inline uintptr_t rva<&ShipStatus::GLENBDLPPOK> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::CADHMKNCJCB> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::BFPIGGLFJPK> () { return 0x1A43800; }
    template<> inline uintptr_t rva<&ShipStatus::DFIECKNONIN> () { return 0x3C26E0; }
    template<> inline uintptr_t rva<&ShipStatus::IOFPNKCEHFO> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::CDNPNAMIPBE> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::PBKIGLMJEDH> () { return 0x1A4EEF0; }
    template<> inline uintptr_t rva<&ShipStatus::DENCILJLCIB> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::MHGLONALCBG> () { return 0x1A4B7C0; }
    template<> inline uintptr_t rva<&ShipStatus::OGMOLIBKCKI> () { return 0x1A4DC00; }
    template<> inline uintptr_t rva<&ShipStatus::BIAEKLBMHDP> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::set_BeginCalled> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::GOCBKLBLGBH> () { return 0x1A48380; }
    template<> inline uintptr_t rva<&ShipStatus::Awake> () { return 0x1A42FE0; }
    template<> inline uintptr_t rva<&ShipStatus::NEMDEMKAJEA> () { return 0x1A4C670; }
    template<> inline uintptr_t rva<&ShipStatus::CIEMECADMHK> () { return 0x1A44870; }
    template<> inline uintptr_t rva<&ShipStatus::MLNGHKDCJML> () { return 0x1A4B880; }
    template<> inline uintptr_t rva<&ShipStatus::GPBGDGGADAK> () { return 0x1A48460; }
    template<> inline uintptr_t rva<&ShipStatus::Serialize> () { return 0x1A4F6A0; }
    template<> inline uintptr_t rva<&ShipStatus::KAHNAODFCMC> () { return 0x5D8D50; }
    template<> inline uintptr_t rva<&ShipStatus::JPLJMLAEEOO> () { return 0x1A4A570; }
    template<> inline uintptr_t rva<&ShipStatus::BMKMHNMOJBG> () { return 0x1A43C80; }
    template<> inline uintptr_t rva<&ShipStatus::EDLBGGDJAMF> () { return 0x1A45B80; }
    template<> inline uintptr_t rva<&ShipStatus::IOMDDNAFNFE> () { return 0x1A49ED0; }
    template<> inline uintptr_t rva<&ShipStatus::JHMNONGPMLE> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::NAKGJLBMEND> () { return 0x1A4BBD0; }
    template<> inline uintptr_t rva<&ShipStatus::IJIEBNONBOB> () { return 0x1A49E40; }
    template<> inline uintptr_t rva<&ShipStatus::ALONOGIGODJ> () { return 0x1A42F50; }
    template<> inline uintptr_t rva<&ShipStatus::HNNKPAPBOFP> () { return 0x1A49360; }
    template<> inline uintptr_t rva<&ShipStatus::EACKMODKNIA> () { return 0x8FAE40; }
    template<> inline uintptr_t rva<&ShipStatus::NLNGICGJECA> () { return 0x1A4CD70; }
    template<> inline uintptr_t rva<&ShipStatus::BHLCCFOOPAJ> () { return 0x3DF0C0; }
    template<> inline uintptr_t rva<&ShipStatus::GPBELMGKKGP> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::MJACFAHFCFH> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::GDFEKKKEPKI> () { return 0x1A47B40; }
    template<> inline uintptr_t rva<&ShipStatus::NGKKACEKNKN> () { return 0x1A4CC20; }
    template<> inline uintptr_t rva<&ShipStatus::DOAJPCLOHAE> () { return 0x1A45530; }
    template<> inline uintptr_t rva<&ShipStatus::OKHNMOCKMAA> () { return 0x1A4E2C0; }
    template<> inline uintptr_t rva<&ShipStatus::LJHOAKPKODG> () { return 0x1A4AA20; }
    template<> inline uintptr_t rva<&ShipStatus::LHGNAIODHGI> () { return 0x5D8D90; }
    template<> inline uintptr_t rva<&ShipStatus::AKLOAPGPLBJ> () { return 0x1A42A70; }
    template<> inline uintptr_t rva<&ShipStatus::CalculateLightRadius> () { return 0x1A44FC0; }
    template<> inline uintptr_t rva<&ShipStatus::FNKDLCEJGKN> () { return 0x1A47250; }
    template<> inline uintptr_t rva<&ShipStatus::LLFNENCMCDI> () { return 0x1A4AE30; }
    template<> inline uintptr_t rva<&ShipStatus::NBEBPPBCGLJ> () { return 0x1A4BCF0; }
    template<> inline uintptr_t rva<&ShipStatus::MGHGHPGCHEI> () { return 0x1A4B480; }
    template<> inline uintptr_t rva<&ShipStatus::FireWeapon> () { return 0x1A472D0; }
    template<> inline uintptr_t rva<&ShipStatus::CloseDoorsOfType> () { return 0x1A453B0; }
    template<> inline uintptr_t rva<&ShipStatus::FKOBPNJCHPL> () { return 0x1A46DB0; }
    template<> inline uintptr_t rva<&ShipStatus::AIMJLCEMNLI> () { return 0x3C26E0; }
    template<> inline uintptr_t rva<&ShipStatus::OnMeetingCalled> () { return 0x267200; }
    template<> inline uintptr_t rva<&ShipStatus::NKECEDOGBFF> () { return 0x1A4CCE0; }
    template<> inline uintptr_t rva<&ShipStatus::AFJGHLCCEMO> () { return 0x1A42460; }
    template<> inline uintptr_t rva<&ShipStatus::get_IsDirty> () { return 0x2FD990; }
    template<> inline uintptr_t rva<&ShipStatus::FDHAGBKOEFM> () { return 0x5D8D50; }
    template<> inline uintptr_t rva<&ShipStatus::BIPMPOFJMMM> () { return 0x8FAE40; }
    template<> inline uintptr_t rva<&ShipStatus::PBALKPNCMKM> () { return 0x1A4EE50; }
    template<> inline uintptr_t rva<&ShipStatus::LJKFMBOIHFH> () { return 0x1A4ACF0; }
    template<> inline uintptr_t rva<&ShipStatus::HPODDLHHNLF> () { return 0x5D8D90; }
    template<> inline uintptr_t rva<&ShipStatus::HandleRpc> () { return 0x1A498E0; }
    template<> inline uintptr_t rva<&ShipStatus::ctor> () { return 0x1A4FC50; }
    template<> inline uintptr_t rva<&ShipStatus::PKPCDDKPBLE> () { return 0x31E7E0; }
    template<> inline uintptr_t rva<&ShipStatus::Start> () { return 0x1A4F9C0; }
    template<> inline uintptr_t rva<&ShipStatus::BPIBJCLGGAK> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::GJJFDLLNIMJ> () { return 0x1A48080; }
    template<> inline uintptr_t rva<&ShipStatus::OnDestroy> () { return 0x1A4E5E0; }
    template<> inline uintptr_t rva<&ShipStatus::DCDFMGJOJAL> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::KJABLBMPFBC> () { return 0x1A4A740; }
    template<> inline uintptr_t rva<&ShipStatus::OACDEPGBKAD> () { return 0x1A4D0B0; }
    template<> inline uintptr_t rva<&ShipStatus::IPOHHKJEICI> () { return 0x8FAE40; }
    template<> inline uintptr_t rva<&ShipStatus::BGBFKOGPMCA> () { return 0x31E7E0; }
    template<> inline uintptr_t rva<&ShipStatus::CMNACEJFKAP> () { return 0x1A449B0; }
    template<> inline uintptr_t rva<&ShipStatus::LGCIJLFECII> () { return 0x1A4A890; }
    template<> inline uintptr_t rva<&ShipStatus::get_AllRooms> () { return 0x3DF0C0; }
    template<> inline uintptr_t rva<&ShipStatus::HKKIIGLOJLC> () { return 0x1A49290; }
    template<> inline uintptr_t rva<&ShipStatus::JJMNGHMHIPC> () { return 0x1A4A210; }
    template<> inline uintptr_t rva<&ShipStatus::CJILDKCBABE> () { return 0x1A44900; }
    template<> inline uintptr_t rva<&ShipStatus::DLAGGOCMAMH> () { return 0x1A45450; }
    template<> inline uintptr_t rva<&ShipStatus::RpcCloseDoorsOfType> () { return 0x1A4F4C0; }
    template<> inline uintptr_t rva<&ShipStatus::MAFPIHLHJAK> () { return 0x5D8EF0; }
    template<> inline uintptr_t rva<&ShipStatus::PMIHMNIKADE> () { return 0x1A4F010; }
    template<> inline uintptr_t rva<&ShipStatus::OpenHatch> () { return 0x1A4ED90; }
    template<> inline uintptr_t rva<&ShipStatus::LJBIICKOEIM> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::JLCKPLJIGOJ> () { return 0x1A4A250; }
    template<> inline uintptr_t rva<&ShipStatus::FFFHMOEEEBD> () { return 0x1A46AD0; }
    template<> inline uintptr_t rva<&ShipStatus::IAIEPFBIHML> () { return 0x1A49A80; }
    template<> inline uintptr_t rva<&ShipStatus::StartShields> () { return 0x1A4F920; }
    template<> inline uintptr_t rva<&ShipStatus::AFELMHCCKCO> () { return 0x1A42380; }
    template<> inline uintptr_t rva<&ShipStatus::GetTaskById> () { return 0x1A48560; }
    template<> inline uintptr_t rva<&ShipStatus::RepairGameOverSystems> () { return 0x1A4F3A0; }
    template<> inline uintptr_t rva<&ShipStatus::get_AllVents> () { return 0x5D8D50; }
    template<> inline uintptr_t rva<&ShipStatus::AKCBOPBBNMI> () { return 0x1A425A0; }
    template<> inline uintptr_t rva<&ShipStatus::AGLKGMBPAFD> () { return 0x267200; }
    template<> inline uintptr_t rva<&ShipStatus::CDAIOAGBDCN> () { return 0x1A44750; }
    template<> inline uintptr_t rva<&ShipStatus::ENONNLBKEIF> () { return 0x1A46970; }
    template<> inline uintptr_t rva<&ShipStatus::KLONCOMMOFE> () { return 0x31E7E0; }
    template<> inline uintptr_t rva<&ShipStatus::SpawnPlayer> () { return 0x1A4F800; }
    template<> inline uintptr_t rva<&ShipStatus::IENDOAPMGLM> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::Begin> () { return 0x1A44240; }
    template<> inline uintptr_t rva<&ShipStatus::RepairSystem> () { return 0x1A4F430; }
    template<> inline uintptr_t rva<&ShipStatus::LGKMOOLNANA> () { return 0x267200; }
    template<> inline uintptr_t rva<&ShipStatus::DKMLEAJLOMC> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::AEJKKKFLOPI> () { return 0x5D8D50; }
    template<> inline uintptr_t rva<&ShipStatus::Deserialize> () { return 0x1A45870; }
    template<> inline uintptr_t rva<&ShipStatus::JNPENLOCLOA> () { return 0x31E7E0; }
    template<> inline uintptr_t rva<&ShipStatus::DGAICIGEDJM> () { return 0x5D8D90; }
    template<> inline uintptr_t rva<&ShipStatus::GCFILLGIAGI> () { return 0x1A47680; }
    template<> inline uintptr_t rva<&ShipStatus::HBADPACGGDI> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::PDOGBFKDOOH> () { return 0x2FD990; }
    template<> inline uintptr_t rva<&ShipStatus::get_FastRooms> () { return 0x5D8D90; }
    template<> inline uintptr_t rva<&ShipStatus::LOFNDNOCEFJ> () { return 0x8FAE40; }
    template<> inline uintptr_t rva<&ShipStatus::PrespawnStep> () { return 0x1A4F360; }
    template<> inline uintptr_t rva<&ShipStatus::COHAOALDEAI> () { return 0x3C26E0; }
    template<> inline uintptr_t rva<&ShipStatus::MENJMKEHICN> () { return 0x1A4AFC0; }
    template<> inline uintptr_t rva<&ShipStatus::BEOFAAODJBI> () { return 0x1A43720; }
    template<> inline uintptr_t rva<&ShipStatus::OnEnable> () { return 0x1A4E6B0; }
    template<> inline uintptr_t rva<&ShipStatus::EMLDEIPOGEE> () { return 0x1A46870; }
    template<> inline uintptr_t rva<&ShipStatus::ICGIGGNLLAA> () { return 0x1A49BC0; }
    template<> inline uintptr_t rva<&ShipStatus::KDONFIJIKKG> () { return 0x1A4A620; }
    template<> inline uintptr_t rva<&ShipStatus::BGGMHCNJHHB> () { return 0x1A43890; }
    template<> inline uintptr_t rva<&ShipStatus::HPPMCBJPDGN> () { return 0x1A49410; }
    template<> inline uintptr_t rva<&ShipStatus::FLMPAIJEFHM> () { return 0x1A470F0; }
    template<> inline uintptr_t rva<&ShipStatus::IABIEDMDFFD> () { return 0x1A49980; }
    template<> inline uintptr_t rva<&ShipStatus::JGOLFHMNKBJ> () { return 0x3DF0C0; }
    template<> inline uintptr_t rva<&ShipStatus::HCNMDCOALPI> () { return 0x1A486A0; }
    template<> inline uintptr_t rva<&ShipStatus::HLKOLGMFCBB> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::MGAEGPMJNAM> () { return 0x3DF0C0; }
    template<> inline uintptr_t rva<&ShipStatus::HGFNKDGBNLG> () { return 0x1A48DB0; }
    template<> inline uintptr_t rva<&ShipStatus::JKDMDBNIELP> () { return 0x1A46AD0; }
    template<> inline uintptr_t rva<&ShipStatus::get_BeginCalled> () { return 0x1A46AD0; }
    template<> inline uintptr_t rva<&ShipStatus::FixedUpdate> () { return 0x1A473B0; }
    template<> inline uintptr_t rva<&ShipStatus::BDJDNDKJOEN> () { return 0x1A43620; }
    template<> inline uintptr_t rva<&ShipStatus::NGGCJFADHJA> () { return 0x1A4C730; }
    template<> inline uintptr_t rva<&ShipStatus::JPJJIIFKOFM> () { return 0x1A4A450; }
    template<> inline uintptr_t rva<&ShipStatus::ELGMNEAPFPB> () { return 0x1A467C0; }
    template<> inline uintptr_t rva<&ShipStatus::CheckTaskCompletion> () { return 0x1A45150; }
    template<> inline uintptr_t rva<&ShipStatus::KLBCHHCNDOA> () { return 0x1A44730; }
    template<> inline uintptr_t rva<&ShipStatus::EDKPHJOPFPH> () { return 0x1A45920; }
    template<> inline uintptr_t rva<&ShipStatus::RpcRepairSystem> () { return 0x1A4F570; }
    template<> inline uintptr_t rva<&ShipStatus::ADIFBIDFKJC> () { return 0x1A421F0; }
    template<> inline uintptr_t rva<&ShipStatus::get_AllStepWatchers> () { return 0x3C26E0; }
    template<> inline uintptr_t rva<&ShipStatus::BIEFLOCJKMJ> () { return 0x1A439B0; }
    template<> inline uintptr_t rva<&ShipStatus::OCOFKCPJPNK> () { return 0x1A4D3F0; }
    template<> inline uintptr_t rva<&ShipStatus::EENLFIECGMN> () { return 0x1A46270; }
    template<> inline uintptr_t rva<&ShipStatus::KOFMJAPBIPO> () { return 0x1A4A7E0; }
    template<> inline uintptr_t rva<&ShipStatus::IILAELGINIC> () { return 0x1A49D00; }
    template<> inline uintptr_t rva<&ShipStatus::IsGameOverDueToDeath> () { return 0x1A4A0D0; }
    template<> inline uintptr_t rva<&ShipStatus::NEFDIEGBAEN> () { return 0x1A4C410; }
    template<> inline uintptr_t rva<&ShipStatus::JAIBPGBKDMD> () { return 0x3C2D60; }
    template<> inline uintptr_t rva<&ShipStatus::BBIIDENFKML> () { return 0x1A43320; }
    template<> inline uintptr_t rva<&ShipStatus::FGNIBIDKHIA> () { return 0x1A46AE0; }
    template<> inline uintptr_t rva<&ShipStatus::MBBCOHFLIIM> () { return 0x1A4AEF0; }
    template<> inline uintptr_t rva<&ShipStatus::AGBANJGAOKI> () { return 0x3C2C40; }
    template<> inline uintptr_t rva<&ShipStatus::DPKPFPOHICA> () { return 0x1A45740; }
    template<> inline uintptr_t rva<&ShipStatus::OLPPNFOMOJF> () { return 0x3C26E0; }
    template<> inline uintptr_t rva<&ShipStatus::EIOKEKBNEAA> () { return 0x1A46540; }
    template<> inline uintptr_t rva<&ShipStatus::GMDANFGMPNM> () { return 0x1A48180; }
    template<> inline uintptr_t rva<&ShipStatus::BCJIKJMJOKP> () { return 0x1A433B0; }
    template<> inline uintptr_t rva<&ShipStatus::AJIJIICKJLO> () { return 0x1A42510; }
    template<> inline uintptr_t rva<&ShipStatus::PMBKCAPCDKP> () { return 0x5D8D90; }
} // ark::method_info
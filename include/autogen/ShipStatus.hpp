#pragma once

#include <ark/class.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/Unity/Vector2.hpp>
#include <autogen/Unity/Vector3.hpp>
#include <autogen/Unity/Color.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Vent.hpp>

struct GCGACPGKENC{};


// ShipStatus in 2020.12.9s
struct ShipStatus : ark::meta<ShipStatus, InnerNet::InnerNetObject>
{
    ark_meta("", "HLBNNHFCNAJ", "");

    enum class MapType : std::int32_t {
        Ship = 0,
        Hq = 1,
        Pb = 2,
    };

    Unity::Color CameraColor;
    float MaxLightRadius; // [marker]
    float MinLightRadius;
    float MapScale;
    struct MapBehaviour_o* MapPrefab;
    struct ExileController_o* ExileCutscenePrefab;
    Unity::Vector2 InitialSpawnCenter;
    Unity::Vector2 MeetingSpawnCenter;
    Unity::Vector2 MeetingSpawnCenter2;
    float SpawnRadius;
    struct NormalPlayerTask_array* CommonTasks;
    struct NormalPlayerTask_array* LongTasks;
    struct NormalPlayerTask_array* NormalTasks;
    struct PlayerTask_array* SpecialTasks;
    struct Unity_Transform_array* DummyLocations;
    struct SurvCamera_array* AllCameras;
    struct PlainDoor_array* AllDoors;
    struct Console_array* AllConsoles;
    struct System_Collections_Generic_Dictionary_HBKFJKIHEFM__GCEKFCICMHL__o* Systems;
    struct AKPFLLKKOBN_array* _HMALBFKGHFE_k__BackingField;
    struct PlainShipRoom_array* _PDBPIILBHAE_k__BackingField;
    struct System_Collections_Generic_Dictionary_HBKFJKIHEFM__PlainShipRoom__o* _FNFHCOHJDBK_k__BackingField;
    il2cpp::array<Vent>* vents;
    struct Unity_AnimationClip_array* WeaponFires;
    struct PowerTools_SpriteAnim_o* WeaponsImage;
    struct Unity_AudioClip_array* VentMoveSounds;
    struct Unity_AudioClip_o* VentEnterSound;
    struct Unity_AnimationClip_o* HatchActive;
    struct PowerTools_SpriteAnim_o* Hatch;
    struct Unity_ParticleSystem_o* HatchParticles;
    struct Unity_AnimationClip_o* ShieldsActive;
    struct PowerTools_SpriteAnim_array* ShieldsImages;
    struct Unity_SpriteRenderer_o* ShieldBorder;
    struct Unity_Sprite_o* ShieldBorderOn;
    struct MedScannerBehaviour_o* MedScanner;
    std::int32_t WeaponFireIdx;
    float Timer;
    float EmergencyCooldown;
    MapType Type;
    std::int32_t HBFNNGCEGNI;


    struct IPNGEOLGOFC* NKJNJJHHLJH(std::int8_t AOONHAJNJLD) { return method_call(NKJNJJHHLJH, AOONHAJNJLD); } // 0x9805A0
    void _ctor() { return method_call(_ctor, ); } // 0x982100
    //struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* DOLPGCEOFMN() { return method_call(DOLPGCEOFMN, ); } // 0x461760
    struct DJLENIPKKGM* /* array */ FKDKKLINCJD() { return method_call(FKDKKLINCJD, ); } // 0x2B1550
    float LGONAMPCGMC(GameData::PlayerInfo* IIEKJBMPELC) { return method_call(LGONAMPCGMC, IIEKJBMPELC); } // 0x97F730
    il2cpp::array<GCGACPGKENC>* get_AllRooms() { return method_call(get_AllRooms, ); } // 0x464010
    void EFMKCLKMGIN() { return method_call(EFMKCLKMGIN, ); } // 0x97CA70
    void DGNINIOAIAN(il2cpp::array<GCGACPGKENC>* HIJOHCLAKMG) { return method_call(DGNINIOAIAN, HIJOHCLAKMG); } // 0x464300
    // virtual // void HandleRpc(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(HandleRpc, HKHMBLJFLMC, ALMCIJKELCP); } // 0x97F120 // Slot: 7
    void NJOJCFDGEAE() { return method_call(NJOJCFDGEAE, ); } // 0x980240
    void AHONIGLHLJD() { return method_call(AHONIGLHLJD, ); } // 0x978F20
    void GNKIDPLLBBE() { return method_call(GNKIDPLLBBE, ); } // 0x97E1A0
    //void PJJJAKMJNLP(std::int32_t HAJDIADKCAG, std::int32_t JFFMDPKEEJG, struct List<byte>* JGBINEOMNFJ, struct HashSet<BOOMIBKNGPP>* LCAAOEACLPN, struct List<IPNGEOLGOFC>* IAJHJCAEFHG) { return method_call(PJJJAKMJNLP, HAJDIADKCAG, JFFMDPKEEJG, JGBINEOMNFJ, LCAAOEACLPN, IAJHJCAEFHG); } // 0x9817E0
    // virtual // void GKLFFKMMIBK(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(GKLFFKMMIBK, HKHMBLJFLMC, ALMCIJKELCP); } // 0x97DA60 // Slot: 10
    //void LABACBHKOPF(struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* HIJOHCLAKMG) { return method_call(LABACBHKOPF, HIJOHCLAKMG); } // 0x4642E0
    bool CheckTaskCompletion() { return method_call(CheckTaskCompletion, ); } // 0x97AD00
    void Awake() { return method_call(Awake, ); } // 0x979250
    // virtual // void Deserialize(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(Deserialize, ALMCIJKELCP, BILBBBFMCOB); } // 0x97BB10 // Slot: 9
    void GNHBGIBFJFC() { return method_call(GNHBGIBFJFC, ); } // 0x97DAE0
    struct DJLENIPKKGM* /* array */ FOHHMOFNAKH() { return method_call(FOHHMOFNAKH, ); } // 0x2B1550
    struct Vector2* GetSpawnLocation(std::int32_t NHOCGFDHKKK, std::int32_t MHPJGDFEDHK, bool OBHNMMLLONC) { return method_call(GetSpawnLocation, NHOCGFDHKKK, MHPJGDFEDHK, OBHNMMLLONC); } // 0x97E260
    void GKGGEGKEBFE() { return method_call(GKGGEGKEBFE, ); } // 0x97D420
    struct Vector2* EABPDFCDLFC(std::int32_t NHOCGFDHKKK, std::int32_t MHPJGDFEDHK, bool OBHNMMLLONC) { return method_call(EABPDFCDLFC, NHOCGFDHKKK, MHPJGDFEDHK, OBHNMMLLONC); } // 0x97BD10
    //void CAKMDDJHFLL(std::int32_t HAJDIADKCAG, std::int32_t JFFMDPKEEJG, struct List<byte>* JGBINEOMNFJ, struct HashSet<BOOMIBKNGPP>* LCAAOEACLPN, struct List<IPNGEOLGOFC>* IAJHJCAEFHG) { return method_call(CAKMDDJHFLL, HAJDIADKCAG, JFFMDPKEEJG, JGBINEOMNFJ, LCAAOEACLPN, IAJHJCAEFHG); } // 0x979F20
    // virtual // void CGIAAAKNEIM() { return method_call(CGIAAAKNEIM, ); } // 0x97A560 // Slot: 11
    void StartShields() { return method_call(StartShields, ); } // 0x981F10
    void ODADIPBMDJM() { return method_call(ODADIPBMDJM, ); } // 0x980860
    bool IsGameOverDueToDeath() { return method_call(IsGameOverDueToDeath, ); } // 0x97F2A0
    void JPFAMIKCHIL(il2cpp::array<GCGACPGKENC>* HIJOHCLAKMG) { return method_call(JPFAMIKCHIL, HIJOHCLAKMG); } // 0x464300
    void FixedUpdate() { return method_call(FixedUpdate, ); } // 0x97CF80
    void FGIHHEGKGPH() { return method_call(FGIHHEGKGPH, ); } // 0x97CD90
    // virtual // bool LLODOOMCMDK(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(LLODOOMCMDK, AGLJMGAODDG, BILBBBFMCOB); } // 0x97F8E0 // Slot: 12
    // virtual // bool Serialize(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(Serialize, AGLJMGAODDG, BILBBBFMCOB); } // 0x981CF0 // Slot: 8
    void BMDPCLMLABN(struct LJFDDJHBOGF* BNHNBDIBABN) { return method_call(BMDPCLMLABN, BNHNBDIBABN); } // 0x979750
    void OCPEKOICKAI() { return method_call(OCPEKOICKAI, ); } // 0x980780
    void DLEEDJLIACG() { return method_call(DLEEDJLIACG, ); } // 0x97B780
    void EEAIKOEJBKF() { return method_call(EEAIKOEJBKF, ); } // 0x97C660
    void KLNNEILABNF(struct LJFDDJHBOGF* LNGGICEILCG, PlayerControl* IIEKJBMPELC, std::int8_t AMMANIHDKKA) { return method_call(KLNNEILABNF, LNGGICEILCG, IIEKJBMPELC, AMMANIHDKKA); } // 0x97F6A0
    //struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* get_FastRooms() { return method_call(get_FastRooms, ); } // 0x461760
    //void GOBHGMPJACJ(struct DJLENIPKKGM* /* array */ HIJOHCLAKMG) { return method_call(GOBHGMPJACJ, HIJOHCLAKMG); } // 0x2B1560
    void GJCEBMFBDCL(struct LJFDDJHBOGF* LNGGICEILCG, std::int32_t AMMANIHDKKA) { return method_call(GJCEBMFBDCL, LNGGICEILCG, AMMANIHDKKA); } // 0x97D2F0
    void Begin() { return method_call(Begin, ); } // 0x979B20
    //void HJPGKKDNKCF(std::int32_t HAJDIADKCAG, std::int32_t JFFMDPKEEJG, struct List<byte>* JGBINEOMNFJ, struct HashSet<BOOMIBKNGPP>* LCAAOEACLPN, struct List<IPNGEOLGOFC>* IAJHJCAEFHG) { return method_call(HJPGKKDNKCF, HAJDIADKCAG, JFFMDPKEEJG, JGBINEOMNFJ, LCAAOEACLPN, IAJHJCAEFHG); } // 0x97ECC0
    void BLEDIKDPHLB(il2cpp::array<GCGACPGKENC>* HIJOHCLAKMG) { return method_call(BLEDIKDPHLB, HIJOHCLAKMG); } // 0x464300
    void DOHFGCPPGBP() { return method_call(DOHFGCPPGBP, ); } // 0x97B860
    // virtual // void FEKHCLLKFFP() { return method_call(FEKHCLLKFFP, ); } // 0x97CCA0 // Slot: 13
    struct IPNGEOLGOFC* GetTaskById(std::int8_t AOONHAJNJLD) { return method_call(GetTaskById, AOONHAJNJLD); } // 0x97E4C0
    bool NIFFBGNMBME() { return method_call(NIFFBGNMBME, ); } // 0x9801B0
    void BNNKEPGEBOM() { return method_call(BNNKEPGEBOM, ); } // 0x979800
    void MGAFLOIOBCO(struct LJFDDJHBOGF* BJJLFKLPBEM) { return method_call(MGAFLOIOBCO, BJJLFKLPBEM); } // 0x97FAA0
    // virtual // void MOGKMKFFFBB(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(MOGKMKFFFBB, HKHMBLJFLMC, ALMCIJKELCP); } // 0x97FFA0 // Slot: 14
    void RpcCloseDoorsOfType(struct LJFDDJHBOGF* BJJLFKLPBEM) { return method_call(RpcCloseDoorsOfType, BJJLFKLPBEM); } // 0x981B10
    void CNLKDDHIKEP(struct LJFDDJHBOGF* BJJLFKLPBEM) { return method_call(CNLKDDHIKEP, BJJLFKLPBEM); } // 0x97AAA0
    void KHFKIICLINI() { return method_call(KHFKIICLINI, ); } // 0x97F5C0
    // virtual // void FFDKNENMKJO(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(FFDKNENMKJO, HKHMBLJFLMC, ALMCIJKELCP); } // 0x97CD70 // Slot: 15
    void HENEIINKANG(struct AIMMJPEOPEC* JMMJJGKBFJC, bool EMAKAHIFLDE) { return method_call(HENEIINKANG, JMMJJGKBFJC, EMAKAHIFLDE); } // 0x97E640
    void DJMDNBHODKO() { return method_call(DJMDNBHODKO, ); } // 0x97B140
    //void PKHNHNNOJOB(struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* HIJOHCLAKMG) { return method_call(PKHNHNNOJOB, HIJOHCLAKMG); } // 0x4642E0
    void EDADLDHABOP() { return method_call(EDADLDHABOP, ); } // 0x97C580
    // virtual // void NGICJLFNJHH(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(NGICJLFNJHH, ALMCIJKELCP, BILBBBFMCOB); } // 0x980020 // Slot: 16
    void EJDIJKLEEPA(struct LJFDDJHBOGF* BJJLFKLPBEM) { return method_call(EJDIJKLEEPA, BJJLFKLPBEM); } // 0x97CB50
    //struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* FJNBIAKFFHK() { return method_call(FJNBIAKFFHK, ); } // 0x461760
    struct Vector2* MGANPFFIHGM(std::int32_t NHOCGFDHKKK, std::int32_t MHPJGDFEDHK, bool OBHNMMLLONC) { return method_call(MGANPFFIHGM, NHOCGFDHKKK, MHPJGDFEDHK, OBHNMMLLONC); } // 0x97FB50
    void HDOHHJAEGLF(struct AIMMJPEOPEC* JMMJJGKBFJC, bool EMAKAHIFLDE) { return method_call(HDOHHJAEGLF, JMMJJGKBFJC, EMAKAHIFLDE); } // 0x97E5C0
    // virtual // void CCFLGFGFPNE(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(CCFLGFGFPNE, ALMCIJKELCP, BILBBBFMCOB); } // 0x97A150 // Slot: 17
    void RepairSystem(struct LJFDDJHBOGF* LNGGICEILCG, PlayerControl* IIEKJBMPELC, std::int8_t AMMANIHDKKA) { return method_call(RepairSystem, LNGGICEILCG, IIEKJBMPELC, AMMANIHDKKA); } // 0x981A70
    bool JCOHMAPBLJH() { return method_call(JCOHMAPBLJH, ); } // 0x97F3D0
    //void HOAJHEMNKEI(std::int32_t HAJDIADKCAG, std::int32_t JFFMDPKEEJG, struct List<byte>* JGBINEOMNFJ, struct HashSet<BOOMIBKNGPP>* LCAAOEACLPN, struct List<IPNGEOLGOFC>* IAJHJCAEFHG) { return method_call(HOAJHEMNKEI, HAJDIADKCAG, JFFMDPKEEJG, JGBINEOMNFJ, LCAAOEACLPN, IAJHJCAEFHG); } // 0x97EEE0
    //struct Dictionary<LJFDDJHBOGF, GCGACPGKENC>* GEKONEEKCFO() { return method_call(GEKONEEKCFO, ); } // 0x461760
    void EndGame(std::int32_t reason, bool EMAKAHIFLDE) { return method_call(EndGame, reason, EMAKAHIFLDE); } // 0x9819F0
    void OnEnable() { return method_call(OnEnable, ); } // 0x981140
    void CloseDoorsOfType(struct LJFDDJHBOGF* BNHNBDIBABN) { return method_call(CloseDoorsOfType, BNHNBDIBABN); } // 0x97AEF0
    void GBNPNDMCBJI() { return method_call(GBNPNDMCBJI, ); } // 0x97D230
    void OpenHatch() { return method_call(OpenHatch, ); } // 0x981720
    float OJOEBONMFIH(GameData::PlayerInfo* IIEKJBMPELC) { return method_call(OJOEBONMFIH, IIEKJBMPELC); } // 0x980EC0
    void ABICEOHOFMB() { return method_call(ABICEOHOFMB, ); } // 0x978D70
    float CalculateLightRadius(GameData::PlayerInfo* IIEKJBMPELC) { return method_call(CalculateLightRadius, IIEKJBMPELC); } // 0x97AB50
    void DDIJELCPFPD() { return method_call(DDIJELCPFPD, ); } // 0x97AFA0
    void JGKALIKFCDJ(il2cpp::array<GCGACPGKENC>* HIJOHCLAKMG) { return method_call(JGKALIKFCDJ, HIJOHCLAKMG); } // 0x464300
    // virtual // bool MIJIBKGOJJN(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(MIJIBKGOJJN, AGLJMGAODDG, BILBBBFMCOB); } // 0x97FCB0 // Slot: 18
    bool BPHDDNJIHKK() { return method_call(BPHDDNJIHKK, ); } // 0x979930
    void CDKOFOPMBDI() { return method_call(CDKOFOPMBDI, ); } // 0x97A2E0
    //void DENAOAAIPPG(struct DJLENIPKKGM* /* array */ HIJOHCLAKMG) { return method_call(DENAOAAIPPG, HIJOHCLAKMG); } // 0x2B1560
    struct DJLENIPKKGM* /* array */ get_AllStepWatchers() { return method_call(get_AllStepWatchers, ); } // 0x2B1550
    void ECNNLBKGIKE() { return method_call(ECNNLBKGIKE, ); } // 0x97BF70
    void Start() { return method_call(Start, ); } // 0x981FB0
    void RpcRepairSystem(struct LJFDDJHBOGF* LNGGICEILCG, std::int32_t AMMANIHDKKA) { return method_call(RpcRepairSystem, LNGGICEILCG, AMMANIHDKKA); } // 0x981BC0
    void HJGGHNDEJLG() { return method_call(HJGGHNDEJLG, ); } // 0x97E6C0
    il2cpp::array<Vent>* get_AllVents() { return method_call(get_AllVents, ); } // 0x4635E0
    //void CLKGHNPMGLI(il2cpp::array<Vent>* /* array */ HIJOHCLAKMG) { return method_call(CLKGHNPMGLI, HIJOHCLAKMG); } // 0x4636D0
    // virtual // void OnDestroy() { return method_call(OnDestroy, ); } // 0x981070 // Slot: 5
    void CHGPCCPKNNG(struct LJFDDJHBOGF* LNGGICEILCG, PlayerControl* IIEKJBMPELC, std::int8_t AMMANIHDKKA) { return method_call(CHGPCCPKNNG, LNGGICEILCG, IIEKJBMPELC, AMMANIHDKKA); } // 0x97A630
    void FireWeapon() { return method_call(FireWeapon, ); } // 0x97CE90
    void BDEONFJIAEB() { return method_call(BDEONFJIAEB, ); } // 0x9794D0
    void CIOPEJJKFEJ() { return method_call(CIOPEJJKFEJ, ); } // 0x97A6C0
    void MMLJKPHGCAA() { return method_call(MMLJKPHGCAA, ); } // 0x97FEC0
    void NPOIDLGBHDM() { return method_call(NPOIDLGBHDM, ); } // 0x9806A0
    void ICKBKNMHKCM() { return method_call(ICKBKNMHKCM, ); } // 0x97F1C0
    void ODGDLOEMNGO() { return method_call(ODGDLOEMNGO, ); } // 0x980B80
    void FDMECCCPCJN() { return method_call(FDMECCCPCJN, ); } // 0x97CC00
};

namespace ark::method_info
{

	method_rva(ShipStatus::NKJNJJHHLJH, 0x9805A0)
	method_rva(ShipStatus::_ctor, 0x982100)
	//method_rva(ShipStatus::DOLPGCEOFMN, 0x461760)
	method_rva(ShipStatus::FKDKKLINCJD, 0x2B1550)
	method_rva(ShipStatus::LGONAMPCGMC, 0x97F730)
	method_rva(ShipStatus::get_AllRooms, 0x464010)
	method_rva(ShipStatus::EFMKCLKMGIN, 0x97CA70)
	method_rva(ShipStatus::DGNINIOAIAN, 0x464300)
	// method_rva(ShipStatus::HandleRpc, 0x97F120)
	method_rva(ShipStatus::NJOJCFDGEAE, 0x980240)
	method_rva(ShipStatus::AHONIGLHLJD, 0x978F20)
	method_rva(ShipStatus::GNKIDPLLBBE, 0x97E1A0)
	//method_rva(ShipStatus::PJJJAKMJNLP, 0x9817E0)
	// method_rva(ShipStatus::GKLFFKMMIBK, 0x97DA60)
	//method_rva(ShipStatus::LABACBHKOPF, 0x4642E0)
	method_rva(ShipStatus::CheckTaskCompletion, 0x97AD00)
	method_rva(ShipStatus::Awake, 0x979250)
	// method_rva(ShipStatus::Deserialize, 0x97BB10)
	method_rva(ShipStatus::GNHBGIBFJFC, 0x97DAE0)
	method_rva(ShipStatus::FOHHMOFNAKH, 0x2B1550)
	method_rva(ShipStatus::GetSpawnLocation, 0x97E260)
	method_rva(ShipStatus::GKGGEGKEBFE, 0x97D420)
	method_rva(ShipStatus::EABPDFCDLFC, 0x97BD10)
	//method_rva(ShipStatus::CAKMDDJHFLL, 0x979F20)
	// method_rva(ShipStatus::CGIAAAKNEIM, 0x97A560)
	method_rva(ShipStatus::StartShields, 0x981F10)
	method_rva(ShipStatus::ODADIPBMDJM, 0x980860)
	method_rva(ShipStatus::IsGameOverDueToDeath, 0x97F2A0)
	method_rva(ShipStatus::JPFAMIKCHIL, 0x464300)
	method_rva(ShipStatus::FixedUpdate, 0x97CF80)
	method_rva(ShipStatus::FGIHHEGKGPH, 0x97CD90)
	// method_rva(ShipStatus::LLODOOMCMDK, 0x97F8E0)
	// method_rva(ShipStatus::Serialize, 0x981CF0)
	method_rva(ShipStatus::BMDPCLMLABN, 0x979750)
	method_rva(ShipStatus::OCPEKOICKAI, 0x980780)
	method_rva(ShipStatus::DLEEDJLIACG, 0x97B780)
	method_rva(ShipStatus::EEAIKOEJBKF, 0x97C660)
	method_rva(ShipStatus::KLNNEILABNF, 0x97F6A0)
	//method_rva(ShipStatus::get_FastRooms, 0x461760)
	//method_rva(ShipStatus::GOBHGMPJACJ, 0x2B1560)
	method_rva(ShipStatus::GJCEBMFBDCL, 0x97D2F0)
	method_rva(ShipStatus::Begin, 0x979B20)
	//method_rva(ShipStatus::HJPGKKDNKCF, 0x97ECC0)
	method_rva(ShipStatus::BLEDIKDPHLB, 0x464300)
	method_rva(ShipStatus::DOHFGCPPGBP, 0x97B860)
	// method_rva(ShipStatus::FEKHCLLKFFP, 0x97CCA0)
	method_rva(ShipStatus::GetTaskById, 0x97E4C0)
	method_rva(ShipStatus::NIFFBGNMBME, 0x9801B0)
	method_rva(ShipStatus::BNNKEPGEBOM, 0x979800)
	method_rva(ShipStatus::MGAFLOIOBCO, 0x97FAA0)
	// method_rva(ShipStatus::MOGKMKFFFBB, 0x97FFA0)
	method_rva(ShipStatus::RpcCloseDoorsOfType, 0x981B10)
	method_rva(ShipStatus::CNLKDDHIKEP, 0x97AAA0)
	method_rva(ShipStatus::KHFKIICLINI, 0x97F5C0)
	// method_rva(ShipStatus::FFDKNENMKJO, 0x97CD70)
	method_rva(ShipStatus::HENEIINKANG, 0x97E640)
	method_rva(ShipStatus::DJMDNBHODKO, 0x97B140)
	//method_rva(ShipStatus::PKHNHNNOJOB, 0x4642E0)
	method_rva(ShipStatus::EDADLDHABOP, 0x97C580)
	// method_rva(ShipStatus::NGICJLFNJHH, 0x980020)
	method_rva(ShipStatus::EJDIJKLEEPA, 0x97CB50)
	//method_rva(ShipStatus::FJNBIAKFFHK, 0x461760)
	method_rva(ShipStatus::MGANPFFIHGM, 0x97FB50)
	method_rva(ShipStatus::HDOHHJAEGLF, 0x97E5C0)
	// method_rva(ShipStatus::CCFLGFGFPNE, 0x97A150)
	method_rva(ShipStatus::RepairSystem, 0x981A70)
	method_rva(ShipStatus::JCOHMAPBLJH, 0x97F3D0)
	//method_rva(ShipStatus::HOAJHEMNKEI, 0x97EEE0)
	//method_rva(ShipStatus::GEKONEEKCFO, 0x461760)
	method_rva(ShipStatus::EndGame, 0x9819F0)
	method_rva(ShipStatus::OnEnable, 0x981140)
	method_rva(ShipStatus::CloseDoorsOfType, 0x97AEF0)
	method_rva(ShipStatus::GBNPNDMCBJI, 0x97D230)
	method_rva(ShipStatus::OpenHatch, 0x981720)
	method_rva(ShipStatus::OJOEBONMFIH, 0x980EC0)
	method_rva(ShipStatus::ABICEOHOFMB, 0x978D70)
	method_rva(ShipStatus::CalculateLightRadius, 0x97AB50)
	method_rva(ShipStatus::DDIJELCPFPD, 0x97AFA0)
	method_rva(ShipStatus::JGKALIKFCDJ, 0x464300)
	// method_rva(ShipStatus::MIJIBKGOJJN, 0x97FCB0)
	method_rva(ShipStatus::BPHDDNJIHKK, 0x979930)
	method_rva(ShipStatus::CDKOFOPMBDI, 0x97A2E0)
	//method_rva(ShipStatus::DENAOAAIPPG, 0x2B1560)
	method_rva(ShipStatus::get_AllStepWatchers, 0x2B1550)
	method_rva(ShipStatus::ECNNLBKGIKE, 0x97BF70)
	method_rva(ShipStatus::Start, 0x981FB0)
	method_rva(ShipStatus::RpcRepairSystem, 0x981BC0)
	method_rva(ShipStatus::HJGGHNDEJLG, 0x97E6C0)
	method_rva(ShipStatus::get_AllVents, 0x4635E0)
	//method_rva(ShipStatus::CLKGHNPMGLI, 0x4636D0)
	// method_rva(ShipStatus::OnDestroy, 0x981070)
	method_rva(ShipStatus::CHGPCCPKNNG, 0x97A630)
	method_rva(ShipStatus::FireWeapon, 0x97CE90)
	method_rva(ShipStatus::BDEONFJIAEB, 0x9794D0)
	method_rva(ShipStatus::CIOPEJJKFEJ, 0x97A6C0)
	method_rva(ShipStatus::MMLJKPHGCAA, 0x97FEC0)
	method_rva(ShipStatus::NPOIDLGBHDM, 0x9806A0)
	method_rva(ShipStatus::ICKBKNMHKCM, 0x97F1C0)
	method_rva(ShipStatus::ODGDLOEMNGO, 0x980B80)
	method_rva(ShipStatus::FDMECCCPCJN, 0x97CC00)
}
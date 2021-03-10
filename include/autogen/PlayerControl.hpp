#pragma once

#include <ark/class.hpp>

#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/PlayerTask.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/Unity/Renderer.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>
#include <autogen/Unity/TextRenderer.hpp>
#include <autogen/Unity/Vector2.hpp>

#include <cs/array.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

#pragma once

#include <ark/class.hpp>

struct PlayerControl : ark::meta<PlayerControl, InnerNetObject>
{
	ark_meta("", "PlayerControl", "PlayerControl, Assembly - CSharp");

	std::int32_t MGLNOHJGBPC; // 0x24
	std::int8_t PlayerId; // 0x28
	float MaxReportDistance; // 0x2C
	bool moveable; // 0x30
	bool inVent; // 0x31
	static struct PlayerControl* LocalPlayer; // 0x0
	struct GameData.GOOIGLGKMCE* PKMHEDAKKHE; // 0x34
	struct AudioSource* FootSteps; // 0x38
	struct AudioClip* KillSfx; // 0x3C
	struct KillAnimation[]* KillAnimations; // 0x40
	float killTimer; // 0x44
	std::int32_t RemainingEmergencies; // 0x48
	struct TextRenderer* nameText; // 0x4C
	struct LightSource* LightPrefab; // 0x50
	struct LightSource* PBDPNJIEAEB; // 0x54
	struct TextTranslator* textTranslator; // 0x58
	struct Collider2D* Collider; // 0x5C
	struct PlayerPhysics* MyPhysics; // 0x60
	struct CustomNetworkTransform* NetTransform; // 0x64
	struct PetBehaviour* CurrentPet; // 0x68
	struct HatParent* HatRenderer; // 0x6C
	struct SpriteRenderer* NEANKEKJNCB; // 0x70
	struct Collider2D[]* IACABPDMLLO; // 0x74
	static struct PAMOPBEDCNI* GameOptions; // 0x4
	struct List<PlayerTask>* myTasks; // 0x78
	struct SpriteAnim[]* ScannerAnims; // 0x7C
	struct SpriteRenderer[]* ScannersImages; // 0x80
	struct HIPLKEPBLKI* LCNLNMNLJAK; // 0x84
	bool MHENEHCLAMK; // 0x88
	bool isDummy; // 0x89
	bool notRealPlayer; // 0x8A
	static struct List<PlayerControl>* AllPlayerControls; // 0x8
	struct Dictionary<Collider2D, HIPLKEPBLKI>* LGFNPDCEFEN; // 0x8C
	struct List<HIPLKEPBLKI>* GPJHINFNJCN; // 0x90
	struct List<HIPLKEPBLKI>* FNNOJMLHMPF; // 0x94
	std::int8_t JOBKKIMKPMB; // 0x98
	bool KOGHHGOKDDB; // 0x99

	bool JMPBLADDKFA(struct string* KLNJLCOMCAI) { return method_call(JMPBLADDKFA, KLNJLCOMCAI); } // 0x13F8E90
	void SetAppearanceFromSaveData() { return method_call(SetAppearanceFromSaveData, ); } // 0x13FDCE0
	void RpcSetHat(std::uint32_t GAHEEOBFPPM) { return method_call(RpcSetHat, GAHEEOBFPPM); } // 0x13FD450
	void EDNGLBGAPJA(std::int8_t FLJDHKECACG, struct LOBKMIADLGE* GHPIPGCOMAL) { return method_call(EDNGLBGAPJA, FLJDHKECACG, GHPIPGCOMAL); } // 0x13F58E0
	struct PlayerControl* MJBDDNIABAM() { return method_call(MJBDDNIABAM, ); } // 0x13FA650
	void AIIINHGHJBN(struct GameData.GOOIGLGKMCE[]* FMAOEJEHPAO) { return method_call(AIIINHGHJBN, FMAOEJEHPAO); } // 0x13F3240
	void JEGFGGMHOAN(std::int32_t GGCHOCFMPKK) { return method_call(JEGFGGMHOAN, GGCHOCFMPKK); } // 0x13F83F0
	void set_Visible(bool NJFHEFBMBOD) { return method_call(set_Visible, NJFHEFBMBOD); } // 0x13FF290
	void PlayStepSound() { return method_call(PlayStepSound, ); } // 0x13FC660
	void SetPlayerMaterialColors(struct Color* JMDILEGDONK, struct Renderer* FNEEAAEEGLD) { return method_call(SetPlayerMaterialColors, JMDILEGDONK, FNEEAAEEGLD); } // 0x13FE6B0
	// virtual // void NIAHECKBOJJ() { return method_call(NIAHECKBOJJ, ); } // 0x13FB3E0 // Slot: 10
	void RpcSetSkin(std::uint32_t JJJEILFGKOE) { return method_call(RpcSetSkin, JJJEILFGKOE); } // 0x13FD870
	void RemoveInfected() { return method_call(RemoveInfected, ); } // 0x13FC9A0
	struct GameData.GOOIGLGKMCE* PNGBDGFIJEO() { return method_call(PNGBDGFIJEO, ); } // 0x13FC3D0
	void RpcMurderPlayer(struct PlayerControl* PAIBDFDMIGK) { return method_call(RpcMurderPlayer, PAIBDFDMIGK); } // 0x13FD000
	struct IEnumerator* OFJLLJOPHGK() { return method_call(OFJLLJOPHGK, ); } // 0x13FBAF0
	void RemoveTask(struct PlayerTask* HHCGLKKJDLA) { return method_call(RemoveTask, HHCGLKKJDLA); } // 0x13FCA90
	// virtual // void AHOKENBFKNE(std::int8_t ACCJCEHMKLN, struct MessageReader* HFPCBBHJIPJ) { return method_call(AHOKENBFKNE, ACCJCEHMKLN, HFPCBBHJIPJ); } // 0x13F2A10 // Slot: 11
	void SetPetImage(struct PetBehaviour* LJKJFNFJBLE, std::int32_t FGAOHLPPBDL, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(SetPetImage, LJKJFNFJBLE, FGAOHLPPBDL, PAIBDFDMIGK); } // 0x13FE320
	void EKOKDCPLCAP() { return method_call(EKOKDCPLCAP, ); } // 0x13F5BE0
	void UseClosest() { return method_call(UseClosest, ); } // 0x13FECF0
	void CheckColor(std::int8_t MCBMEOBLGBM) { return method_call(CheckColor, MCBMEOBLGBM); } // 0x13F4DA0
	void BADNEFKAFCF() { return method_call(BADNEFKAFCF, ); } // 0x13F39C0
	void SetTasks(struct List<GameData.HKFJOIBBOBD>* CAJJGNGJLMM) { return method_call(SetTasks, CAJJGNGJLMM); } // 0x13FEBA0
	void SetSkin(std::uint32_t JJJEILFGKOE) { return method_call(SetSkin, JJJEILFGKOE); } // 0x13FEB00
	void LPIIJJFOOAF() { return method_call(LPIIJJFOOAF, ); } // 0x13F93B0
	struct PlayerControl* EMIKDNBAACC() { return method_call(EMIKDNBAACC, ); } // 0x13F5F20
	void SetSkinImage(std::uint32_t JJJEILFGKOE, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(SetSkinImage, JJJEILFGKOE, PAIBDFDMIGK); } // 0x13FEA60
	void HEHBCPNMHKD(bool NJFHEFBMBOD) { return method_call(HEHBCPNMHKD, NJFHEFBMBOD); } // 0x13F7680
	void JIHPOFAKMKD() { return method_call(JIHPOFAKMKD, ); } // 0x13F84E0
	void MEAMMJCPGOF(std::uint32_t JJJEILFGKOE) { return method_call(MEAMMJCPGOF, JJJEILFGKOE); } // 0x13F9F60
	struct GameData.GOOIGLGKMCE* get_Data() { return method_call(get_Data, ); } // 0x13FF1F0
	// virtual // void HandleRpc(std::int8_t ACCJCEHMKLN, struct MessageReader* HFPCBBHJIPJ) { return method_call(HandleRpc, ACCJCEHMKLN, HFPCBBHJIPJ); } // 0x13F78F0 // Slot: 7
	void Awake() { return method_call(Awake, ); } // 0x13F3900
	void _cctor() { return method_call(_cctor, ); } // 0x13FED70
	bool BCOPFNBDAID() { return method_call(BCOPFNBDAID, ); } // 0x13F45D0
	void RpcSetInfected(struct GameData.GOOIGLGKMCE[]* FMAOEJEHPAO) { return method_call(RpcSetInfected, FMAOEJEHPAO); } // 0x13FD500
	void GGCPMHOCFJP(float KDPIPBLHAJP) { return method_call(GGCPMHOCFJP, KDPIPBLHAJP); } // 0x13F7100
	void OBMAHIBLHEJ(struct PAMOPBEDCNI* OMFKMPLOPPM) { return method_call(OBMAHIBLHEJ, OMFKMPLOPPM); } // 0x13FB9E0
	// virtual // void PHEHIHGADGA(struct MessageReader* HFPCBBHJIPJ, bool CHDIOBMNLGH) { return method_call(PHEHIHGADGA, HFPCBBHJIPJ, CHDIOBMNLGH); } // 0x13F5680 // Slot: 12
	void SetPlayerMaterialColors(std::int32_t FGAOHLPPBDL, struct Renderer* FNEEAAEEGLD) { return method_call(SetPlayerMaterialColors, FGAOHLPPBDL, FNEEAAEEGLD); } // 0x13FE7E0
	void SetPetImage(std::uint32_t OKCKCDKKMPL, std::int32_t FGAOHLPPBDL, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(SetPetImage, OKCKCDKKMPL, FGAOHLPPBDL, PAIBDFDMIGK); } // 0x13FE420
	void RpcSyncSettings(struct PAMOPBEDCNI* OMFKMPLOPPM) { return method_call(RpcSyncSettings, OMFKMPLOPPM); } // 0x13FDA60
	void HCIJNDNEOJM(struct GameData.GOOIGLGKMCE* PAIBDFDMIGK) { return method_call(HCIJNDNEOJM, PAIBDFDMIGK); } // 0x13F74C0
	void MurderPlayer(struct PlayerControl* PAIBDFDMIGK) { return method_call(MurderPlayer, PAIBDFDMIGK); } // 0x13FAB80
	void BLEDICFCFNN() { return method_call(BLEDICFCFNN, ); } // 0x13F4900
	void HideCursorTemporarily() { return method_call(HideCursorTemporarily, ); } // 0x13F7EB0
	void Revive() { return method_call(Revive, ); } // 0x13FCD60
	void RpcSetName(struct string* ILCMIGKHPJE) { return method_call(RpcSetName, ILCMIGKHPJE); } // 0x13FD640
	void SetColor(std::int8_t MCBMEOBLGBM) { return method_call(SetColor, MCBMEOBLGBM); } // 0x13FDE00
	void PPKHNGBPONM(bool MEGPBODIIGE, std::int8_t CCLKHBFHDAD) { return method_call(PPKHNGBPONM, MEGPBODIIGE, CCLKHBFHDAD); } // 0x13FC470
	void SetPlayerMaterialColors(struct Renderer* FNEEAAEEGLD) { return method_call(SetPlayerMaterialColors, FNEEAAEEGLD); } // 0x13FE9D0
	struct IEnumerator* OHPPPPGOICK() { return method_call(OHPPPPGOICK, ); } // 0x13FBC30
	// virtual // void OnDestroy() { return method_call(OnDestroy, ); } // 0x13FBD60 // Slot: 5
	bool RpcSendChat(struct string* KLNJLCOMCAI) { return method_call(RpcSendChat, KLNJLCOMCAI); } // 0x13FD260
	void IIDLPOPEFCG(std::uint32_t GAHEEOBFPPM, std::int32_t FGAOHLPPBDL) { return method_call(IIDLPOPEFCG, GAHEEOBFPPM, FGAOHLPPBDL); } // 0x13F7F60
	void ALOFAGOJDMI(std::uint32_t CBAHIKLHCAO) { return method_call(ALOFAGOJDMI, CBAHIKLHCAO); } // 0x13F3380
	bool AGOOGLFAHAF() { return method_call(AGOOGLFAHAF, ); } // 0x13F2710
	void IIJEIMIHILO(struct SkinData* AHOBHLFABCK, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(IIJEIMIHILO, AHOBHLFABCK, PAIBDFDMIGK); } // 0x13F80A0
	void AMPIGFMHGBM(struct GameData.GOOIGLGKMCE* PAIBDFDMIGK) { return method_call(AMPIGFMHGBM, PAIBDFDMIGK); } // 0x13F3520
	// virtual // void JJJPKCMLHGN(std::int8_t ACCJCEHMKLN, struct MessageReader* HFPCBBHJIPJ) { return method_call(JJJPKCMLHGN, ACCJCEHMKLN, HFPCBBHJIPJ); } // 0x13F8560 // Slot: 13
	void UpdatePlatformIcon() { return method_call(UpdatePlatformIcon, ); } // 0x13FEC70
	void CKHEFBFDMJB(struct string* ILCMIGKHPJE) { return method_call(CKHEFBFDMJB, ILCMIGKHPJE); } // 0x13F4BB0
	struct IEnumerator* NAMOCDKBMPG(struct List<GameData.HKFJOIBBOBD>* CAJJGNGJLMM) { return method_call(NAMOCDKBMPG, CAJJGNGJLMM); } // 0x13FB380
	void NIMJAEGHFFI() { return method_call(NIMJAEGHFFI, ); } // 0x13FB4D0
	void SetSkinImage(struct SkinData* AHOBHLFABCK, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(SetSkinImage, AHOBHLFABCK, PAIBDFDMIGK); } // 0x13F80A0
	void MEDCFJALGHH(std::int8_t MCBMEOBLGBM) { return method_call(MEDCFJALGHH, MCBMEOBLGBM); } // 0x13FA000
	void RpcSetPet(std::uint32_t OKCKCDKKMPL) { return method_call(RpcSetPet, OKCKCDKKMPL); } // 0x13FD6E0
	void SetHatAlpha(float KDPIPBLHAJP) { return method_call(SetHatAlpha, KDPIPBLHAJP); } // 0x13F7100
	void CmdReportDeadBody(struct GameData.GOOIGLGKMCE* PAIBDFDMIGK) { return method_call(CmdReportDeadBody, PAIBDFDMIGK); } // 0x13F5220
	// virtual // void HLHNFKMAKJM() { return method_call(HLHNFKMAKJM, ); } // 0x13F7800 // Slot: 14
	void SetPet(std::uint32_t OKCKCDKKMPL) { return method_call(SetPet, OKCKCDKKMPL); } // 0x13FE4B0
	void PFKNCFCJJID(std::int8_t OLEGCKPDFHO) { return method_call(PFKNCFCJJID, OLEGCKPDFHO); } // 0x13FC200
	void DAKCGJLJFJO(std::uint32_t JJJEILFGKOE, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(DAKCGJLJFJO, JJJEILFGKOE, PAIBDFDMIGK); } // 0x13F54E0
	void RpcPlayAnimation(std::int8_t OLEGCKPDFHO) { return method_call(RpcPlayAnimation, OLEGCKPDFHO); } // 0x13FD0B0
	void MADBIKBIJDA(std::int8_t MCBMEOBLGBM) { return method_call(MADBIKBIJDA, MCBMEOBLGBM); } // 0x13F94D0
	void AddSystemTask(struct GOODOHMJKLN* IBKONFPFHAB) { return method_call(AddSystemTask, IBKONFPFHAB); } // 0x13F36E0
	void RpcCompleteTask(std::uint32_t CBAHIKLHCAO) { return method_call(RpcCompleteTask, CBAHIKLHCAO); } // 0x13FCF50
	void DNLMBEHKFGH(struct PetBehaviour* LJKJFNFJBLE, std::int32_t FGAOHLPPBDL, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(DNLMBEHKFGH, LJKJFNFJBLE, FGAOHLPPBDL, PAIBDFDMIGK); } // 0x13F5580
	bool PAGBHMPINNP() { return method_call(PAGBHMPINNP, ); } // 0x13FBE50
	void FixedUpdate() { return method_call(FixedUpdate, ); } // 0x13F6630
	void OOEGINIOBJD(struct GameData.GOOIGLGKMCE* PLABNNNBHAC) { return method_call(OOEGINIOBJD, PLABNNNBHAC); } // 0x13FBC90
	void PlayAnimation(std::int8_t OLEGCKPDFHO) { return method_call(PlayAnimation, OLEGCKPDFHO); } // 0x13FC5D0
	void RpcSendChatNote(std::int8_t FLJDHKECACG, struct LOBKMIADLGE* GHPIPGCOMAL) { return method_call(RpcSendChatNote, FLJDHKECACG, GHPIPGCOMAL); } // 0x13FD180
	struct PlayerControl* IPJBDHONKMH() { return method_call(IPJBDHONKMH, ); } // 0x13F80D0
	void SetKillTimer(float ELJAAAHBHOM) { return method_call(SetKillTimer, ELJAAAHBHOM); } // 0x13FE090
	void Die(struct OLDMNEAOIPG* CEFHOIEBAGF) { return method_call(Die, CEFHOIEBAGF); } // 0x13F56D0
	void HENLJMIGGNN(std::int8_t OLEGCKPDFHO) { return method_call(HENLJMIGGNN, OLEGCKPDFHO); } // 0x13F7770
	void CmdCheckColor(std::int8_t MCBMEOBLGBM) { return method_call(CmdCheckColor, MCBMEOBLGBM); } // 0x13F50C0
	bool MGDIOGPBIGB() { return method_call(MGDIOGPBIGB, ); } // 0x13FA150
	struct IEnumerator* Start() { return method_call(Start, ); } // 0x13FEC10
	void ReportClosest() { return method_call(ReportClosest, ); } // 0x13FCB80
	struct IEnumerator* JHIIPPBCHFA() { return method_call(JHIIPPBCHFA, ); } // 0x13F8480
	void SetName(struct string* ILCMIGKHPJE, bool NIIKNBLIAPO = False) { return method_call(SetName, ILCMIGKHPJE, NIIKNBLIAPO); } // 0x13FE1D0
	void CHPBBFJNCEJ(struct string* ILCMIGKHPJE) { return method_call(CHPBBFJNCEJ, ILCMIGKHPJE); } // 0x13F4A20
	void RpcSetScanner(bool NJFHEFBMBOD) { return method_call(RpcSetScanner, NJFHEFBMBOD); } // 0x13FD780
	void BFCPOMNDDBB(std::uint32_t OKCKCDKKMPL, std::int32_t FGAOHLPPBDL, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(BFCPOMNDDBB, OKCKCDKKMPL, FGAOHLPPBDL, PAIBDFDMIGK); } // 0x13F4790
	void PKPMADHEGNN(std::uint32_t GAHEEOBFPPM, std::int32_t FGAOHLPPBDL) { return method_call(PKPMADHEGNN, GAHEEOBFPPM, FGAOHLPPBDL); } // 0x13FC290
	void AFJMJGNCKJG(struct PlayerControl* PAIBDFDMIGK) { return method_call(AFJMJGNCKJG, PAIBDFDMIGK); } // 0x13F2660
	void LHIINHPLECB(std::uint32_t OKCKCDKKMPL, std::int32_t FGAOHLPPBDL, struct SpriteRenderer* PAIBDFDMIGK) { return method_call(LHIINHPLECB, OKCKCDKKMPL, FGAOHLPPBDL, PAIBDFDMIGK); } // 0x13F9320
	void PCCIIPFNLEC(struct PlayerControl* PAIBDFDMIGK) { return method_call(PCCIIPFNLEC, PAIBDFDMIGK); } // 0x13FC150
	void Exiled() { return method_call(Exiled, ); } // 0x13F6250
	void GPLAKDFMNJP(std::int8_t OLEGCKPDFHO) { return method_call(GPLAKDFMNJP, OLEGCKPDFHO); } // 0x13F7330
	struct Vector2* GNADBCGCKMK() { return method_call(GNADBCGCKMK, ); } // 0x13F7270
	void LEAHPAABBKP() { return method_call(LEAHPAABBKP, ); } // 0x13F8FE0
	void NLCHFKDGNJD() { return method_call(NLCHFKDGNJD, ); } // 0x13FB550
	struct IEnumerator* CoStartMeeting(struct GameData.GOOIGLGKMCE* PAIBDFDMIGK) { return method_call(CoStartMeeting, PAIBDFDMIGK); } // 0x13F52E0
	void RpcUsePlatform() { return method_call(RpcUsePlatform, ); } // 0x13FDB70
	// virtual // void Deserialize(struct MessageReader* HFPCBBHJIPJ, bool CHDIOBMNLGH) { return method_call(Deserialize, HFPCBBHJIPJ, CHDIOBMNLGH); } // 0x13F5680 // Slot: 9
	void JKENPFJODKL() { return method_call(JKENPFJODKL, ); } // 0x13F8DA0
	bool get_CanMove() { return method_call(get_CanMove, ); } // 0x13FEEF0
	void FCHPIPOPIAK(bool NJFHEFBMBOD) { return method_call(FCHPIPOPIAK, NJFHEFBMBOD); } // 0x13F6490
	void BDGGODJELFB(struct GOODOHMJKLN* IBKONFPFHAB) { return method_call(BDGGODJELFB, IBKONFPFHAB); } // 0x13F4600
	void OGDDFKCIBOP(std::int8_t FLJDHKECACG, struct LOBKMIADLGE* GHPIPGCOMAL) { return method_call(OGDDFKCIBOP, FLJDHKECACG, GHPIPGCOMAL); } // 0x13FBB50
	// virtual // bool Serialize(struct MessageWriter* CDKLDMFODLF, bool CHDIOBMNLGH) { return method_call(Serialize, CDKLDMFODLF, CHDIOBMNLGH); } // 0x13FDC90 // Slot: 8
	void RpcStartMeeting(struct GameData.GOOIGLGKMCE* PLABNNNBHAC) { return method_call(RpcStartMeeting, PLABNNNBHAC); } // 0x13FD990
	void RpcSetColor(std::int8_t MCBMEOBLGBM) { return method_call(RpcSetColor, MCBMEOBLGBM); } // 0x13FD3B0
	void CPJLLCFJDPP(std::int8_t MCBMEOBLGBM) { return method_call(CPJLLCFJDPP, MCBMEOBLGBM); } // 0x13F4C50
	void GJHMIDDFEGI() { return method_call(GJHMIDDFEGI, ); } // 0x13F7150
	void EGENMCBGBLN(std::uint32_t GAHEEOBFPPM, std::int32_t FGAOHLPPBDL) { return method_call(EGENMCBGBLN, GAHEEOBFPPM, FGAOHLPPBDL); } // 0x13F59C0
	bool get_Visible() { return method_call(get_Visible, ); } // 0x13F45D0
	void FEMCAONPMFH(std::uint32_t JJJEILFGKOE) { return method_call(FEMCAONPMFH, JJJEILFGKOE); } // 0x13F6590
	void MIDLLPPLJHM(std::uint32_t OKCKCDKKMPL) { return method_call(MIDLLPPLJHM, OKCKCDKKMPL); } // 0x13FA450
	void CheckName(struct string* ILCMIGKHPJE) { return method_call(CheckName, ILCMIGKHPJE); } // 0x13F4F20
	void OBBDJMDGGLA(bool MEGPBODIIGE, std::int8_t CCLKHBFHDAD) { return method_call(OBBDJMDGGLA, MEGPBODIIGE, CCLKHBFHDAD); } // 0x13FB890
	struct Vector2* GetTruePosition() { return method_call(GetTruePosition, ); } // 0x13F7400
	void CompleteTask(std::uint32_t CBAHIKLHCAO) { return method_call(CompleteTask, CBAHIKLHCAO); } // 0x13F5340
	void _ctor() { return method_call(_ctor, ); } // 0x13FEDE0
	void BAEKHAKBNMN(std::int8_t MCBMEOBLGBM) { return method_call(BAEKHAKBNMN, MCBMEOBLGBM); } // 0x13F4480
	void RpcSetStartCounter(std::int32_t GGCHOCFMPKK) { return method_call(RpcSetStartCounter, GGCHOCFMPKK); } // 0x13FD910
	void EIFLOJMOHEO(std::int8_t FLJDHKECACG, struct LOBKMIADLGE* GHPIPGCOMAL) { return method_call(EIFLOJMOHEO, FLJDHKECACG, GHPIPGCOMAL); } // 0x13F5B00
	void SetHat(std::uint32_t GAHEEOBFPPM, std::int32_t FGAOHLPPBDL) { return method_call(SetHat, GAHEEOBFPPM, FGAOHLPPBDL); } // 0x13FDF50
	void CmdCheckName(struct string* ILCMIGKHPJE) { return method_call(CmdCheckName, ILCMIGKHPJE); } // 0x13F5170
	void MLDGEMJGIJM(struct OLDMNEAOIPG* CEFHOIEBAGF) { return method_call(MLDGEMJGIJM, CEFHOIEBAGF); } // 0x13FA970
	void MAFDKHHIBID(std::int8_t* FMAOEJEHPAO) { return method_call(MAFDKHHIBID, FMAOEJEHPAO); } // 0x13F9620
};
namespace ark::method_info
{

	method_rva(PlayerControl::JMPBLADDKFA, 0x13F8E90)
	method_rva(PlayerControl::SetAppearanceFromSaveData, 0x13FDCE0)
	method_rva(PlayerControl::RpcSetHat, 0x13FD450)
	method_rva(PlayerControl::EDNGLBGAPJA, 0x13F58E0)
	method_rva(PlayerControl::MJBDDNIABAM, 0x13FA650)
	method_rva(PlayerControl::AIIINHGHJBN, 0x13F3240)
	method_rva(PlayerControl::JEGFGGMHOAN, 0x13F83F0)
	method_rva(PlayerControl::set_Visible, 0x13FF290)
	method_rva(PlayerControl::PlayStepSound, 0x13FC660)
	method_rva(PlayerControl::SetPlayerMaterialColors, 0x13FE6B0)
	// method_rva(PlayerControl::NIAHECKBOJJ, 0x13FB3E0)
	method_rva(PlayerControl::RpcSetSkin, 0x13FD870)
	method_rva(PlayerControl::RemoveInfected, 0x13FC9A0)
	method_rva(PlayerControl::PNGBDGFIJEO, 0x13FC3D0)
	method_rva(PlayerControl::RpcMurderPlayer, 0x13FD000)
	method_rva(PlayerControl::OFJLLJOPHGK, 0x13FBAF0)
	method_rva(PlayerControl::RemoveTask, 0x13FCA90)
	// method_rva(PlayerControl::AHOKENBFKNE, 0x13F2A10)
	method_rva(PlayerControl::SetPetImage, 0x13FE320)
	method_rva(PlayerControl::EKOKDCPLCAP, 0x13F5BE0)
	method_rva(PlayerControl::UseClosest, 0x13FECF0)
	method_rva(PlayerControl::CheckColor, 0x13F4DA0)
	method_rva(PlayerControl::BADNEFKAFCF, 0x13F39C0)
	method_rva(PlayerControl::SetTasks, 0x13FEBA0)
	method_rva(PlayerControl::SetSkin, 0x13FEB00)
	method_rva(PlayerControl::LPIIJJFOOAF, 0x13F93B0)
	method_rva(PlayerControl::EMIKDNBAACC, 0x13F5F20)
	method_rva(PlayerControl::SetSkinImage, 0x13FEA60)
	method_rva(PlayerControl::HEHBCPNMHKD, 0x13F7680)
	method_rva(PlayerControl::JIHPOFAKMKD, 0x13F84E0)
	method_rva(PlayerControl::MEAMMJCPGOF, 0x13F9F60)
	method_rva(PlayerControl::get_Data, 0x13FF1F0)
	// method_rva(PlayerControl::HandleRpc, 0x13F78F0)
	method_rva(PlayerControl::Awake, 0x13F3900)
	method_rva(PlayerControl::_cctor, 0x13FED70)
	method_rva(PlayerControl::BCOPFNBDAID, 0x13F45D0)
	method_rva(PlayerControl::RpcSetInfected, 0x13FD500)
	method_rva(PlayerControl::GGCPMHOCFJP, 0x13F7100)
	method_rva(PlayerControl::OBMAHIBLHEJ, 0x13FB9E0)
	// method_rva(PlayerControl::PHEHIHGADGA, 0x13F5680)
	method_rva(PlayerControl::SetPlayerMaterialColors, 0x13FE7E0)
	method_rva(PlayerControl::SetPetImage, 0x13FE420)
	method_rva(PlayerControl::RpcSyncSettings, 0x13FDA60)
	method_rva(PlayerControl::HCIJNDNEOJM, 0x13F74C0)
	method_rva(PlayerControl::MurderPlayer, 0x13FAB80)
	method_rva(PlayerControl::BLEDICFCFNN, 0x13F4900)
	method_rva(PlayerControl::HideCursorTemporarily, 0x13F7EB0)
	method_rva(PlayerControl::Revive, 0x13FCD60)
	method_rva(PlayerControl::RpcSetName, 0x13FD640)
	method_rva(PlayerControl::SetColor, 0x13FDE00)
	method_rva(PlayerControl::PPKHNGBPONM, 0x13FC470)
	method_rva(PlayerControl::SetPlayerMaterialColors, 0x13FE9D0)
	method_rva(PlayerControl::OHPPPPGOICK, 0x13FBC30)
	// method_rva(PlayerControl::OnDestroy, 0x13FBD60)
	method_rva(PlayerControl::RpcSendChat, 0x13FD260)
	method_rva(PlayerControl::IIDLPOPEFCG, 0x13F7F60)
	method_rva(PlayerControl::ALOFAGOJDMI, 0x13F3380)
	method_rva(PlayerControl::AGOOGLFAHAF, 0x13F2710)
	method_rva(PlayerControl::IIJEIMIHILO, 0x13F80A0)
	method_rva(PlayerControl::AMPIGFMHGBM, 0x13F3520)
	// method_rva(PlayerControl::JJJPKCMLHGN, 0x13F8560)
	method_rva(PlayerControl::UpdatePlatformIcon, 0x13FEC70)
	method_rva(PlayerControl::CKHEFBFDMJB, 0x13F4BB0)
	method_rva(PlayerControl::NAMOCDKBMPG, 0x13FB380)
	method_rva(PlayerControl::NIMJAEGHFFI, 0x13FB4D0)
	method_rva(PlayerControl::SetSkinImage, 0x13F80A0)
	method_rva(PlayerControl::MEDCFJALGHH, 0x13FA000)
	method_rva(PlayerControl::RpcSetPet, 0x13FD6E0)
	method_rva(PlayerControl::SetHatAlpha, 0x13F7100)
	method_rva(PlayerControl::CmdReportDeadBody, 0x13F5220)
	// method_rva(PlayerControl::HLHNFKMAKJM, 0x13F7800)
	method_rva(PlayerControl::SetPet, 0x13FE4B0)
	method_rva(PlayerControl::PFKNCFCJJID, 0x13FC200)
	method_rva(PlayerControl::DAKCGJLJFJO, 0x13F54E0)
	method_rva(PlayerControl::RpcPlayAnimation, 0x13FD0B0)
	method_rva(PlayerControl::MADBIKBIJDA, 0x13F94D0)
	method_rva(PlayerControl::AddSystemTask, 0x13F36E0)
	method_rva(PlayerControl::RpcCompleteTask, 0x13FCF50)
	method_rva(PlayerControl::DNLMBEHKFGH, 0x13F5580)
	method_rva(PlayerControl::PAGBHMPINNP, 0x13FBE50)
	method_rva(PlayerControl::FixedUpdate, 0x13F6630)
	method_rva(PlayerControl::OOEGINIOBJD, 0x13FBC90)
	method_rva(PlayerControl::PlayAnimation, 0x13FC5D0)
	method_rva(PlayerControl::RpcSendChatNote, 0x13FD180)
	method_rva(PlayerControl::IPJBDHONKMH, 0x13F80D0)
	method_rva(PlayerControl::SetKillTimer, 0x13FE090)
	method_rva(PlayerControl::Die, 0x13F56D0)
	method_rva(PlayerControl::HENLJMIGGNN, 0x13F7770)
	method_rva(PlayerControl::CmdCheckColor, 0x13F50C0)
	method_rva(PlayerControl::MGDIOGPBIGB, 0x13FA150)
	method_rva(PlayerControl::Start, 0x13FEC10)
	method_rva(PlayerControl::ReportClosest, 0x13FCB80)
	method_rva(PlayerControl::JHIIPPBCHFA, 0x13F8480)
	method_rva(PlayerControl::SetName, 0x13FE1D0)
	method_rva(PlayerControl::CHPBBFJNCEJ, 0x13F4A20)
	method_rva(PlayerControl::RpcSetScanner, 0x13FD780)
	method_rva(PlayerControl::BFCPOMNDDBB, 0x13F4790)
	method_rva(PlayerControl::PKPMADHEGNN, 0x13FC290)
	method_rva(PlayerControl::AFJMJGNCKJG, 0x13F2660)
	method_rva(PlayerControl::LHIINHPLECB, 0x13F9320)
	method_rva(PlayerControl::PCCIIPFNLEC, 0x13FC150)
	method_rva(PlayerControl::Exiled, 0x13F6250)
	method_rva(PlayerControl::GPLAKDFMNJP, 0x13F7330)
	method_rva(PlayerControl::GNADBCGCKMK, 0x13F7270)
	method_rva(PlayerControl::LEAHPAABBKP, 0x13F8FE0)
	method_rva(PlayerControl::NLCHFKDGNJD, 0x13FB550)
	method_rva(PlayerControl::CoStartMeeting, 0x13F52E0)
	method_rva(PlayerControl::RpcUsePlatform, 0x13FDB70)
	// method_rva(PlayerControl::Deserialize, 0x13F5680)
	method_rva(PlayerControl::JKENPFJODKL, 0x13F8DA0)
	method_rva(PlayerControl::get_CanMove, 0x13FEEF0)
	method_rva(PlayerControl::FCHPIPOPIAK, 0x13F6490)
	method_rva(PlayerControl::BDGGODJELFB, 0x13F4600)
	method_rva(PlayerControl::OGDDFKCIBOP, 0x13FBB50)
	// method_rva(PlayerControl::Serialize, 0x13FDC90)
	method_rva(PlayerControl::RpcStartMeeting, 0x13FD990)
	method_rva(PlayerControl::RpcSetColor, 0x13FD3B0)
	method_rva(PlayerControl::CPJLLCFJDPP, 0x13F4C50)
	method_rva(PlayerControl::GJHMIDDFEGI, 0x13F7150)
	method_rva(PlayerControl::EGENMCBGBLN, 0x13F59C0)
	method_rva(PlayerControl::get_Visible, 0x13F45D0)
	method_rva(PlayerControl::FEMCAONPMFH, 0x13F6590)
	method_rva(PlayerControl::MIDLLPPLJHM, 0x13FA450)
	method_rva(PlayerControl::CheckName, 0x13F4F20)
	method_rva(PlayerControl::OBBDJMDGGLA, 0x13FB890)
	method_rva(PlayerControl::GetTruePosition, 0x13F7400)
	method_rva(PlayerControl::CompleteTask, 0x13F5340)
	method_rva(PlayerControl::_ctor, 0x13FEDE0)
	method_rva(PlayerControl::BAEKHAKBNMN, 0x13F4480)
	method_rva(PlayerControl::RpcSetStartCounter, 0x13FD910)
	method_rva(PlayerControl::EIFLOJMOHEO, 0x13F5B00)
	method_rva(PlayerControl::SetHat, 0x13FDF50)
	method_rva(PlayerControl::CmdCheckName, 0x13F5170)
	method_rva(PlayerControl::MLDGEMJGIJM, 0x13FA970)
	method_rva(PlayerControl::MAFDKHHIBID, 0x13F9620)
}
#pragma once

#include <ark/class.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>
#include <autogen/UnityEngine/Vector2.hpp>

template<class T> using List = System::Collections::Generic::List<T>;
using Vector2 = UnityEngine::Vector2;
using TextRenderer = UnityEngine::TextRenderer;

struct PlayerControl : InnerNet::InnerNetObject, ark::meta<PlayerControl> // TypeDefIndex: 8921
{
	static inline auto internal_name = "FFGALNAPKCD";
	std::int32_t MKMDLEOKDIN; // 0x24
	std::int8_t PlayerId; // 0x28
	float MaxReportDistance; // 0x2C
	bool moveable; // 0x30
	bool inVent; // 0x31
	PlayerControl* LocalPlayer; // 0x0
	struct EGLJNOMOGNP_DCJMABDDJCF* NDGFFHMFGIG; // 0x34
	struct AudioSource* FootSteps; // 0x38
	struct AudioClip* KillSfx; // 0x3C
	struct MNGKAKKOKPN* KillAnimations; // 0x40

	float killTimer; // 0x44
	std::int32_t RemainingEmergencies; // 0x48
	TextRenderer* nameText; // 0x4C
	struct APONPILBEGP* LightPrefab; // 0x50
	struct APONPILBEGP* BFEGOAGLOGD; // 0x54

	struct Collider2D* Collider; // 0x58

	struct LIMNONMAAFA* MyPhysics; // 0x5C

	struct LNBAPKHKDPG* NetTransform; // 0x60
	struct DLMDFGBMGPC* CurrentPet; // 0x64
	struct DAMECBEEJAL* HatRenderer; // 0x68
	struct SpriteRenderer* MKIDFJAEBGH; // 0x6C
	struct Collider2D* FGIKJBLDEIL; // 0x70
	struct KMOGFLPJLLK* GameOptions; // 0x4
	List<struct PILBGHDHJLH>* myTasks; // 0x74
	struct SpriteAnim* ScannerAnims; // 0x78
	struct SpriteRenderer* ScannersImages; // 0x7C
	struct CMCLOPELAIG* PJHNJMEGPFG; // 0x80
	bool OJIGFMDLDAK; // 0x84
	List<PlayerControl>* AllPlayerControls; // 0x8
	/*struct Dictionary<Collider2D, CMCLOPELAIG>* */ void* PMJANCAEKGA; // 0x88
	List<CMCLOPELAIG>* GMCMFOMNLMN; // 0x8C
	List<CMCLOPELAIG>* LOJJDGNBIIN; // 0x90
	std::int8_t OMMKFLAIKKJ; // 0x94
	bool LAGLLALNLPJ; // 0x95

	void RpcSetScanner(bool HIJOHCLAKMG) { return method_call(RpcSetScanner, HIJOHCLAKMG); } // 0x8F06B0
	//void SetPetImage(std::uint32_t FHPHKIBKMHO, std::int32_t NPFHOONFFDI, struct SpriteRenderer* CAKODNGLPDF) { return method_call(SetPetImage, FHPHKIBKMHO, NPFHOONFFDI, CAKODNGLPDF); } // 0x8F0FC0
	void ILICKLHOAEF(std::uint32_t AOONHAJNJLD) { return method_call(ILICKLHOAEF, AOONHAJNJLD); } // 0x8E7EA0
	void HNEOMMPDEKA(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(HNEOMMPDEKA, CAKODNGLPDF); } // 0x8E7620
	void NOABIGDJKAG(struct PILBGHDHJLH* OJGILIGMHKL) { return method_call(NOABIGDJKAG, OJGILIGMHKL); } // 0x8ED160
	void JCLKGBPJOJB(std::int8_t POCIJABNOLE) { return method_call(JCLKGBPJOJB, POCIJABNOLE); } // 0x8E8470
	void IOKMGLKDMIB(std::int8_t BOFNMFDDECJ) { return method_call(IOKMGLKDMIB, BOFNMFDDECJ); } // 0x8E83E0
	void KLMOINNFPAD() { return method_call(KLMOINNFPAD, ); } // 0x8E9E60
	void EFIBDOFNNAN() { return method_call(EFIBDOFNNAN, ); } // 0x8E3FA0
	void JGOCHENJAIM(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(JGOCHENJAIM, CAKODNGLPDF); } // 0x8E8EF0
	void PCALDAADHKE(std::uint32_t FHPHKIBKMHO) { return method_call(PCALDAADHKE, FHPHKIBKMHO); } // 0x8EEC10
	void SetSkin(std::uint32_t EPBONDIDGDF) { return method_call(SetSkin, EPBONDIDGDF); } // 0x8F1840
	void RpcSetInfected(struct EGLJNOMOGNP_DCJMABDDJCF* JPGEIBIBJPJ) { return method_call(RpcSetInfected, JPGEIBIBJPJ); } // 0x8F0430
	void SetHatAlpha(float IOEIMBPLJDJ) { return method_call(SetHatAlpha, IOEIMBPLJDJ); } // 0x8EEBC0
	void RpcPlayAnimation(std::int8_t BOFNMFDDECJ) { return method_call(RpcPlayAnimation, BOFNMFDDECJ); } // 0x8EFFE0
	//// IEnumerator DJDGDNLFOLL(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(DJDGDNLFOLL, CAKODNGLPDF); } // 0x8E2B00
	//// IEnumerator LAFAHEINIFL(List<struct EGLJNOMOGNP_CAAACHLJJNE*>* JGBINEOMNFJ) { return method_call(LAFAHEINIFL, JGBINEOMNFJ); } // 0x8EA0E0
	void GMINMCCBMLN(struct SkinData* ADLNPGGEOHF, struct SpriteRenderer* CAKODNGLPDF) { return method_call(GMINMCCBMLN, ADLNPGGEOHF, CAKODNGLPDF); } // 0x8E6190
	void GKLFFKMMIBK(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(GKLFFKMMIBK, HKHMBLJFLMC, ALMCIJKELCP); } // 0x8E5B20
	void OGOIANMJKOE(PlayerControl* CAKODNGLPDF) { return method_call(OGOIANMJKOE, CAKODNGLPDF); } // 0x8ED770
	void RemoveInfected() { return method_call(RemoveInfected, ); } // 0x8EF8E0
	void OKLDLAAHNII(struct EGLJNOMOGNP_DCJMABDDJCF* KINIPFCLILM) { return method_call(OKLDLAAHNII, KINIPFCLILM); } // 0x8EE270
	void SetName(struct string* MLBHDDBAPLO) { return method_call(SetName, MLBHDDBAPLO); } // 0x8F0ED0
	void EABGDJAGKDL() { return method_call(EABGDJAGKDL, ); } // 0x8E3910
	void Deserialize(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(Deserialize, ALMCIJKELCP, BILBBBFMCOB); } // 0x8E36C0
	bool PINNDOFILDJ(struct string* PGIBDIEPGIC) { return method_call(PINNDOFILDJ, PGIBDIEPGIC); } // 0x8EF090
	void _cctor() { return method_call(_cctor, ); } // 0x8F1D50
	void POLIPJOOJEC(struct string* MLBHDDBAPLO) { return method_call(POLIPJOOJEC, MLBHDDBAPLO); } // 0x8EF3D0
	void HNHICMKMJEO(std::uint32_t AOONHAJNJLD) { return method_call(HNHICMKMJEO, AOONHAJNJLD); } // 0x8E77E0
	//// IEnumerator CoStartMeeting(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(CoStartMeeting, CAKODNGLPDF); } // 0x8E2850
	void OHKFOKNOGPO(std::int8_t BOFNMFDDECJ) { return method_call(OHKFOKNOGPO, BOFNMFDDECJ); } // 0x8ED820
	void Revive() { return method_call(Revive, ); } // 0x8EFCA0
	void EFCINMDKACB(std::uint32_t AOONHAJNJLD) { return method_call(EFCINMDKACB, AOONHAJNJLD); } // 0x8E3E00
	void JPAAAADKEGH(struct Renderer* CNJAHEAJNAO) { return method_call(JPAAAADKEGH, CNJAHEAJNAO); } // 0x8E9490
	void NJCBINJCNMF(std::int8_t BOFNMFDDECJ) { return method_call(NJCBINJCNMF, BOFNMFDDECJ); } // 0x8EC940
	void MDBMDMHLIIC(std::uint32_t AOONHAJNJLD) { return method_call(MDBMDMHLIIC, AOONHAJNJLD); } // 0x8EAFC0
	void NIBIJEKAEPN() { return method_call(NIBIJEKAEPN, ); } // 0x8EC650
	void AJPLICOEPOE(std::uint32_t AOONHAJNJLD) { return method_call(AJPLICOEPOE, AOONHAJNJLD); } // 0x8E1180
	void RpcCompleteTask(std::uint32_t AOONHAJNJLD) { return method_call(RpcCompleteTask, AOONHAJNJLD); } // 0x8EFE90
	void FHHEGFFCAIK(struct Renderer* CNJAHEAJNAO) { return method_call(FHHEGFFCAIK, CNJAHEAJNAO); } // 0x8E4910
	void AddSystemTask(struct LJFDDJHBOGF* DNKIAHLBJJC) { return method_call(AddSystemTask, DNKIAHLBJJC); } // 0x8E1450
	void Awake() { return method_call(Awake, ); } // 0x8E1670
	void SetColor(std::int8_t POCIJABNOLE) { return method_call(SetColor, POCIJABNOLE); } // 0x8F0AE0
	//void SetPlayerMaterialColors(struct Renderer* CNJAHEAJNAO) { return method_call(SetPlayerMaterialColors, CNJAHEAJNAO); } // 0x8F1560
	bool JMFFFDJCKDE() { return method_call(JMFFFDJCKDE, ); } // 0x8E92A0
	void Exiled() { return method_call(Exiled, ); } // 0x8E4340
	struct EGLJNOMOGNP_DCJMABDDJCF* get_Data() { return method_call(get_Data, ); } // 0x8F2140
	void LILBDMCOOFB() { return method_call(LILBDMCOOFB, ); } // 0x8EA8B0
	void PAPJPDPAFNN(float IOEIMBPLJDJ) { return method_call(PAPJPDPAFNN, IOEIMBPLJDJ); } // 0x8EEBC0
	PlayerControl* OAFBLFBAOJJ() { return method_call(OAFBLFBAOJJ, ); } // 0x8ED350
	void set_Visible(bool HIJOHCLAKMG) { return method_call(set_Visible, HIJOHCLAKMG); } // 0x8F21E0
	void KCCPOLAGNBE() { return method_call(KCCPOLAGNBE, ); } // 0x8E9520
	//void SetSkinImage(struct SkinData* ADLNPGGEOHF, struct SpriteRenderer* CAKODNGLPDF) { return method_call(SetSkinImage, ADLNPGGEOHF, CAKODNGLPDF); } // 0x8E6190
	void ONKBPFEBJHJ(std::int8_t LLBNLKGCCLF, struct AHIDPDEBPDC* IAGNPOCAGCI) { return method_call(ONKBPFEBJHJ, LLBNLKGCCLF, IAGNPOCAGCI); } // 0x8EE800
	void FDOIKGIEGGM(std::int8_t POCIJABNOLE) { return method_call(FDOIKGIEGGM, POCIJABNOLE); } // 0x8E46B0
	void RpcMurderPlayer(PlayerControl* CAKODNGLPDF) { return method_call(RpcMurderPlayer, CAKODNGLPDF); } // 0x8EFF30
	void RpcSetSkin(std::uint32_t EPBONDIDGDF) { return method_call(RpcSetSkin, EPBONDIDGDF); } // 0x8F07A0
	void SetHat(std::uint32_t CAEHOLMOBNA, std::int32_t NPFHOONFFDI) { return method_call(SetHat, CAEHOLMOBNA, NPFHOONFFDI); } // 0x8F0C30
	void FGBMJINLILE(std::int8_t POCIJABNOLE) { return method_call(FGBMJINLILE, POCIJABNOLE); } // 0x8E4800
	void KOEMJMNGPIN(bool EHNJJAPKPMF, std::int8_t PFDMDIMFBFI) { return method_call(KOEMJMNGPIN, EHNJJAPKPMF, PFDMDIMFBFI); } // 0x8E9F90
	// IEnumerator APHAPNBBNDJ() { return method_call(APHAPNBBNDJ, ); } // 0x8E1330
	void LICGEEFNELO(std::int8_t BOFNMFDDECJ) { return method_call(LICGEEFNELO, BOFNMFDDECJ); } // 0x8EA3C0
	//void SetPlayerMaterialColors(struct Color* HHJCOBKGBFF, struct Renderer* CNJAHEAJNAO) { return method_call(SetPlayerMaterialColors, HHJCOBKGBFF, CNJAHEAJNAO); } // 0x8F1430
	void RpcSetColor(std::int8_t POCIJABNOLE) { return method_call(RpcSetColor, POCIJABNOLE); } // 0x8F02E0
	void Start() { return method_call(Start, ); } // 0x8F1940
	void CLGJLJMBNFP(std::uint32_t FHPHKIBKMHO) { return method_call(CLGJLJMBNFP, FHPHKIBKMHO); } // 0x8E1E50
	bool MKDHLHMMHAK() { return method_call(MKDHLHMMHAK, ); } // 0x8EB960
	bool get_CanMove() { return method_call(get_CanMove, ); } // 0x8F1ED0
	void HAAGONNLDOH(struct byte* JPGEIBIBJPJ) { return method_call(HAAGONNLDOH, JPGEIBIBJPJ); } // 0x8E6420
	void RpcSetName(struct string* MLBHDDBAPLO) { return method_call(RpcSetName, MLBHDDBAPLO); } // 0x8F0570
	bool Serialize(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(Serialize, AGLJMGAODDG, BILBBBFMCOB); } // 0x8E9E10
	void JNDBNEEOINI(std::int8_t BOFNMFDDECJ) { return method_call(JNDBNEEOINI, BOFNMFDDECJ); } // 0x8E92D0
	void CKKLCFLFACL(struct PILBGHDHJLH* OJGILIGMHKL) { return method_call(CKKLCFLFACL, OJGILIGMHKL); } // 0x8E1CB0
	void RemoveTask(struct PILBGHDHJLH* OJGILIGMHKL) { return method_call(RemoveTask, OJGILIGMHKL); } // 0x8EF9D0
	void NEKDHECGAHD() { return method_call(NEKDHECGAHD, ); } // 0x8EC5D0
	void RpcStartMeeting(struct EGLJNOMOGNP_DCJMABDDJCF* KINIPFCLILM) { return method_call(RpcStartMeeting, KINIPFCLILM); } // 0x8F08C0
	void GKNFBKIGFNO(std::uint32_t FHPHKIBKMHO) { return method_call(GKNFBKIGFNO, FHPHKIBKMHO); } // 0x8E6040
	bool KKJNEPGMAID(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(KKJNEPGMAID, AGLJMGAODDG, BILBBBFMCOB); } // 0x8E9E10
	void CmdCheckName(struct string* MLBHDDBAPLO) { return method_call(CmdCheckName, MLBHDDBAPLO); } // 0x8E26E0
	bool HBPIGGMJMPP(struct string* PGIBDIEPGIC) { return method_call(HBPIGGMJMPP, PGIBDIEPGIC); } // 0x8E6F10
	void KEDGNMIOFDJ(PlayerControl* CAKODNGLPDF) { return method_call(KEDGNMIOFDJ, CAKODNGLPDF); } // 0x8E9920
	void CFJNKPGNJOP(std::int32_t NPFHOONFFDI, struct Renderer* CNJAHEAJNAO) { return method_call(CFJNKPGNJOP, NPFHOONFFDI, CNJAHEAJNAO); } // 0x8E1940
	void DKIGBFCJNIH() { return method_call(DKIGBFCJNIH, ); } // 0x8E2B60
	void INEEAAKMPOE(std::uint32_t EPBONDIDGDF, struct SpriteRenderer* CAKODNGLPDF) { return method_call(INEEAAKMPOE, EPBONDIDGDF, CAKODNGLPDF); } // 0x8E8340
	void EDAHCGIIGEC() { return method_call(EDAHCGIIGEC, ); } // 0x8E3B50
	bool RpcSendChat(struct string* PGIBDIEPGIC) { return method_call(RpcSendChat, PGIBDIEPGIC); } // 0x8F0190
	void ACDENNDCABE(std::uint32_t EPBONDIDGDF) { return method_call(ACDENNDCABE, EPBONDIDGDF); } // 0x8E1080
	void CheckColor(std::int8_t POCIJABNOLE) { return method_call(CheckColor, POCIJABNOLE); } // 0x8E2370
	void MGFJCAPBNIJ(struct Renderer* CNJAHEAJNAO) { return method_call(MGFJCAPBNIJ, CNJAHEAJNAO); } // 0x8EB620
	void LNAKEPEKACG(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(LNAKEPEKACG, CAKODNGLPDF); } // 0x8EAC40
	void PAAEIGJECFE(std::uint32_t CAEHOLMOBNA, std::int32_t NPFHOONFFDI) { return method_call(PAAEIGJECFE, CAEHOLMOBNA, NPFHOONFFDI); } // 0x8EE9C0
	void LFHBFEOGGDP(std::uint32_t CAEHOLMOBNA) { return method_call(LFHBFEOGGDP, CAEHOLMOBNA); } // 0x8EA140
	void MurderPlayer(PlayerControl* CAKODNGLPDF) { return method_call(MurderPlayer, CAKODNGLPDF); } // 0x8EBBD0
	void OJPCECLPCCF(struct byte* JPGEIBIBJPJ) { return method_call(OJPCECLPCCF, JPGEIBIBJPJ); } // 0x8ED8B0
	void HGBOKFKHBFC(struct KMOGFLPJLLK* IOFBPLNIJIC) { return method_call(HGBOKFKHBFC, IOFBPLNIJIC); } // 0x8E73C0
	void CKOJBMDNHDC() { return method_call(CKOJBMDNHDC, ); } // 0x8E1DA0
	void ANPCFADOLNH(struct EGLJNOMOGNP_DCJMABDDJCF* KINIPFCLILM) { return method_call(ANPCFADOLNH, KINIPFCLILM); } // 0x8E1220
	void PlayAnimation(std::int8_t BOFNMFDDECJ) { return method_call(PlayAnimation, BOFNMFDDECJ); } // 0x8EF4C0
	void SetTasks(List<struct EGLJNOMOGNP_CAAACHLJJNE*>* JGBINEOMNFJ) { return method_call(SetTasks, JGBINEOMNFJ); } // 0x8F18E0
	void CmdReportDeadBody(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(CmdReportDeadBody, CAKODNGLPDF); } // 0x8E2790
	PlayerControl* CLKILNOCHEP() { return method_call(CLKILNOCHEP, ); } // 0x8E2050
	void RpcSetStartCounter(std::int32_t OLDMPECBIHH) { return method_call(RpcSetStartCounter, OLDMPECBIHH); } // 0x8F0840
	void NLCGJIEDBBG(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(NLCGJIEDBBG, HKHMBLJFLMC, ALMCIJKELCP); } // 0x8EC9D0
	void NCPOMLBONHO(std::uint32_t FHPHKIBKMHO) { return method_call(NCPOMLBONHO, FHPHKIBKMHO); } // 0x8EC3D0
	void FixedUpdate() { return method_call(FixedUpdate, ); } // 0x8E5110
	void LIEICKEPEPE() { return method_call(LIEICKEPEPE, ); } // 0x8EA510
	void HandleRpc(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(HandleRpc, HKHMBLJFLMC, ALMCIJKELCP); } // 0x8E7980
	void UseClosest() { return method_call(UseClosest, ); } // 0x8F1CD0
	void EEPNJCJFCOD(std::int8_t POCIJABNOLE) { return method_call(EEPNJCJFCOD, POCIJABNOLE); } // 0x8E3CB0
	void LPHKIEICAON(float NPHJCKDCKDD) { return method_call(LPHKIEICAON, NPHJCKDCKDD); } // 0x8EAD00
	// IEnumerator AFLAGNHDGGH(List<struct EGLJNOMOGNP_CAAACHLJJNE*>* JGBINEOMNFJ) { return method_call(AFLAGNHDGGH, JGBINEOMNFJ); } // 0x8E1120
	bool get_Visible() { return method_call(get_Visible, ); } // 0x8E92A0
	void MKAIDPJOJFP(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(MKAIDPJOJFP, CAKODNGLPDF); } // 0x8EB7A0
	bool PJEDCGOKPII() { return method_call(PJEDCGOKPII, ); } // 0x8E92A0
	void MALCOGGEKED(bool EHNJJAPKPMF, std::int8_t PFDMDIMFBFI) { return method_call(MALCOGGEKED, EHNJJAPKPMF, PFDMDIMFBFI); } // 0x8EAE60
	void KCDBLGOANGO(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(KCDBLGOANGO, CAKODNGLPDF); } // 0x8E9710
	void PlayStepSound() { return method_call(PlayStepSound, ); } // 0x8EF550
	void LGKFCCNOCGF(std::int8_t POCIJABNOLE) { return method_call(LGKFCCNOCGF, POCIJABNOLE); } // 0x8EA310
	void PHKNIONIKCK(std::int8_t BOFNMFDDECJ) { return method_call(PHKNIONIKCK, BOFNMFDDECJ); } // 0x8EEF40
	void SetKillTimer(float NPHJCKDCKDD) { return method_call(SetKillTimer, NPHJCKDCKDD); } // 0x8F0D70
	void LIJFIPPPLOG() { return method_call(LIJFIPPPLOG, ); } // 0x8EA5C0
	void PJDHDPBPHOO(std::int8_t LLBNLKGCCLF, struct AHIDPDEBPDC* IAGNPOCAGCI) { return method_call(PJDHDPBPHOO, LLBNLKGCCLF, IAGNPOCAGCI); } // 0x8EF1E0
	void SetPetImage(struct DLMDFGBMGPC* IFBFBBLDDBK, std::int32_t NPFHOONFFDI, struct SpriteRenderer* CAKODNGLPDF) { return method_call(SetPetImage, IFBFBBLDDBK, NPFHOONFFDI, CAKODNGLPDF); } // 0x8F1130
	void KDOFBFLCHFI(std::int8_t POCIJABNOLE) { return method_call(KDOFBFLCHFI, POCIJABNOLE); } // 0x8E97D0
	Vector2 GetTruePosition() { return method_call(GetTruePosition, ); } // 0x8E6360
	bool HGLKLEFOBAF(struct string* PGIBDIEPGIC) { return method_call(HGLKLEFOBAF, PGIBDIEPGIC); } // 0x8E74D0
	void RpcSetHat(std::uint32_t CAEHOLMOBNA) { return method_call(RpcSetHat, CAEHOLMOBNA); } // 0x8F0380
	void CheckName(struct string* MLBHDDBAPLO) { return method_call(CheckName, MLBHDDBAPLO); } // 0x8E2490
	void HEJHHOBBOBI(bool HIJOHCLAKMG) { return method_call(HEJHHOBBOBI, HIJOHCLAKMG); } // 0x8E72D0
	void OMPDACJGDIJ(bool HIJOHCLAKMG) { return method_call(OMPDACJGDIJ, HIJOHCLAKMG); } // 0x8EE380
	void GNDBOKNONJB(std::uint32_t AOONHAJNJLD) { return method_call(GNDBOKNONJB, AOONHAJNJLD); } // 0x8E61C0
	void PHFBHMLPLPM(struct Color* HHJCOBKGBFF, struct Renderer* CNJAHEAJNAO) { return method_call(PHFBHMLPLPM, HHJCOBKGBFF, CNJAHEAJNAO); } // 0x8EEE10
	bool HEBJKEEOHOK() { return method_call(HEBJKEEOHOK, ); } // 0x8E7060
	void KHLAHAFCHHM(std::uint32_t FHPHKIBKMHO) { return method_call(KHLAHAFCHHM, FHPHKIBKMHO); } // 0x8E9A70
	void _ctor() { return method_call(_ctor, ); } // 0x8F1DC0
	PlayerControl* INBICOPCOCN() { return method_call(INBICOPCOCN, ); } // 0x8E8040
	void CGOHBBOFFBC(struct string* MLBHDDBAPLO) { return method_call(CGOHBBOFFBC, MLBHDDBAPLO); } // 0x8E1AF0
	void ENCDNKFILGC() { return method_call(ENCDNKFILGC, ); } // 0x8E4250
	void SetPlayerMaterialColors(std::int32_t NPFHOONFFDI, struct Renderer* CNJAHEAJNAO) { return method_call(SetPlayerMaterialColors, NPFHOONFFDI, CNJAHEAJNAO); } // 0x8F15F0
	void FIIGIJHGODC(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(FIIGIJHGODC, HKHMBLJFLMC, ALMCIJKELCP); } // 0x8E49A0
	void JGBHNKMJFHA(struct byte* JPGEIBIBJPJ) { return method_call(JGBHNKMJFHA, JPGEIBIBJPJ); } // 0x8E8520
	void NPBIIAEJFFE(std::int32_t OLDMPECBIHH) { return method_call(NPBIIAEJFFE, OLDMPECBIHH); } // 0x8ED250
	void EECEFCEEMOI() { return method_call(EECEFCEEMOI, ); } // 0x8E3C30
	void RpcSyncSettings(struct KMOGFLPJLLK* IOFBPLNIJIC) { return method_call(RpcSyncSettings, IOFBPLNIJIC); } // 0x8F09D0
	void Die(struct DBLJKMDLJIF* OECOPGMHMKC) { return method_call(Die, OECOPGMHMKC); } // 0x8E3700
	void FGHBFGPILAE(struct Renderer* CNJAHEAJNAO) { return method_call(FGHBFGPILAE, CNJAHEAJNAO); } // 0x8E4880
	void GMCHEJDFJLP(struct string* MLBHDDBAPLO) { return method_call(GMCHEJDFJLP, MLBHDDBAPLO); } // 0x8E60E0
	void JOMBEGNNEDO(struct Color* HHJCOBKGBFF, struct Renderer* CNJAHEAJNAO) { return method_call(JOMBEGNNEDO, HHJCOBKGBFF, CNJAHEAJNAO); } // 0x8E9360
	void OnDestroy() { return method_call(OnDestroy, ); } // 0x8EE8E0
	void CEFHOMJLDOL() { return method_call(CEFHOMJLDOL, ); } // 0x8E1850
	void EBEHICLEFIF() { return method_call(EBEHICLEFIF, ); } // 0x8E3990
	void EGKPFCGBADG(struct string* MLBHDDBAPLO) { return method_call(EGKPFCGBADG, MLBHDDBAPLO); } // 0x8E4160
	void CBMEJKPGHOA() { return method_call(CBMEJKPGHOA, ); } // 0x8E1770
	void ReportClosest() { return method_call(ReportClosest, ); } // 0x8EFAC0
	void DNNIKFFODAH(struct string* MLBHDDBAPLO) { return method_call(DNNIKFFODAH, MLBHDDBAPLO); } // 0x8E3520
	void CompleteTask(std::uint32_t AOONHAJNJLD) { return method_call(CompleteTask, AOONHAJNJLD); } // 0x8E28B0
	void APMIKIHJHNP(struct string* MLBHDDBAPLO) { return method_call(APMIKIHJHNP, MLBHDDBAPLO); } // 0x8E1380
	void CmdCheckColor(std::int8_t POCIJABNOLE) { return method_call(CmdCheckColor, POCIJABNOLE); } // 0x8E2630
	void NMOONHOMEBI(std::int8_t BOFNMFDDECJ) { return method_call(NMOONHOMEBI, BOFNMFDDECJ); } // 0x8ED0D0
	void FFNCCHAFDMF(std::uint32_t EPBONDIDGDF, struct SpriteRenderer* CAKODNGLPDF) { return method_call(FFNCCHAFDMF, EPBONDIDGDF, CAKODNGLPDF); } // 0x8E4760
	void KHOKFCBONMN(std::int8_t BOFNMFDDECJ) { return method_call(KHOKFCBONMN, BOFNMFDDECJ); } // 0x8E9C70
	// IEnumerator BKACPBFANPP() { return method_call(BKACPBFANPP, ); } // 0x8E1720
	void PMICBFLPPNH(struct KMOGFLPJLLK* IOFBPLNIJIC) { return method_call(PMICBFLPPNH, IOFBPLNIJIC); } // 0x8EF2C0
	void SetSkinImage(std::uint32_t EPBONDIDGDF, struct SpriteRenderer* CAKODNGLPDF) { return method_call(SetSkinImage, EPBONDIDGDF, CAKODNGLPDF); } // 0x8F17A0
	void ONIGNKDLJMI() { return method_call(ONIGNKDLJMI, ); } // 0x8EE470
	void SetPet(std::uint32_t FHPHKIBKMHO) { return method_call(SetPet, FHPHKIBKMHO); } // 0x8F1230
	bool MDNFIPDDCBO(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(MDNFIPDDCBO, AGLJMGAODDG, BILBBBFMCOB); } // 0x8E9E10
	void CKIPOCJFJNJ(struct PILBGHDHJLH* OJGILIGMHKL) { return method_call(CKIPOCJFJNJ, OJGILIGMHKL); } // 0x8E1BC0
	void FINMJGBNEHP(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(FINMJGBNEHP, CAKODNGLPDF); } // 0x8E4F50
	void KGLNLIFMIPK(std::uint32_t EPBONDIDGDF) { return method_call(KGLNLIFMIPK, EPBONDIDGDF); } // 0x8E99D0
	void OFJDBLFDJLM(struct DLMDFGBMGPC* IFBFBBLDDBK, std::int32_t NPFHOONFFDI, struct SpriteRenderer* CAKODNGLPDF) { return method_call(OFJDBLFDJLM, IFBFBBLDDBK, NPFHOONFFDI, CAKODNGLPDF); } // 0x8ED670
	// IEnumerator KNKGODDCEKP(struct EGLJNOMOGNP_DCJMABDDJCF* CAKODNGLPDF) { return method_call(KNKGODDCEKP, CAKODNGLPDF); } // 0x8E9F30
	void JJONHMOCEMN() { return method_call(JJONHMOCEMN, ); } // 0x8E90B0
	void KKCAFDPBABB(struct KMOGFLPJLLK* IOFBPLNIJIC) { return method_call(KKCAFDPBABB, IOFBPLNIJIC); } // 0x8E9D00
	void RpcSetPet(std::uint32_t FHPHKIBKMHO) { return method_call(RpcSetPet, FHPHKIBKMHO); } // 0x8F0610
	void MIKCFGKJDEK(struct string* MLBHDDBAPLO) { return method_call(MIKCFGKJDEK, MLBHDDBAPLO); } // 0x8EB6B0
	//Vector2 PAJCEBAEADA() { return method_call(PAJCEBAEADA, ); } // 0x8EEB00
	void FDAKHKKFJIK(struct Color* HHJCOBKGBFF, struct Renderer* CNJAHEAJNAO) { return method_call(FDAKHKKFJIK, HHJCOBKGBFF, CNJAHEAJNAO); } // 0x8E4580
	void MEEAEDBNABI(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(MEEAEDBNABI, HKHMBLJFLMC, ALMCIJKELCP); } // 0x8EB060
	void RpcSendChatNote(std::int8_t LLBNLKGCCLF, struct AHIDPDEBPDC* IAGNPOCAGCI) { return method_call(RpcSendChatNote, LLBNLKGCCLF, IAGNPOCAGCI); } // 0x8F00B0
	void NPKIHBHPFFF(std::int32_t OLDMPECBIHH) { return method_call(NPKIHBHPFFF, OLDMPECBIHH); } // 0x8ED2D0
	void DHFFBGIAJLA(struct string* MLBHDDBAPLO) { return method_call(DHFFBGIAJLA, MLBHDDBAPLO); } // 0x8E2A50
};
namespace ark::method_info
{

	method_rva(PlayerControl::RpcSetScanner, 0x8F06B0)
	method_rva(PlayerControl::SetPetImage, 0x8F0FC0)
	method_rva(PlayerControl::ILICKLHOAEF, 0x8E7EA0)
	method_rva(PlayerControl::HNEOMMPDEKA, 0x8E7620)
	method_rva(PlayerControl::NOABIGDJKAG, 0x8ED160)
	method_rva(PlayerControl::JCLKGBPJOJB, 0x8E8470)
	method_rva(PlayerControl::IOKMGLKDMIB, 0x8E83E0)
	method_rva(PlayerControl::KLMOINNFPAD, 0x8E9E60)
	method_rva(PlayerControl::EFIBDOFNNAN, 0x8E3FA0)
	method_rva(PlayerControl::JGOCHENJAIM, 0x8E8EF0)
	method_rva(PlayerControl::PCALDAADHKE, 0x8EEC10)
	method_rva(PlayerControl::SetSkin, 0x8F1840)
	method_rva(PlayerControl::RpcSetInfected, 0x8F0430)
	method_rva(PlayerControl::SetHatAlpha, 0x8EEBC0)
	method_rva(PlayerControl::RpcPlayAnimation, 0x8EFFE0)
	//method_rva(PlayerControl::DJDGDNLFOLL, 0x8E2B00)
	//method_rva(PlayerControl::LAFAHEINIFL, 0x8EA0E0)
	method_rva(PlayerControl::GMINMCCBMLN, 0x8E6190)
	method_rva(PlayerControl::GKLFFKMMIBK, 0x8E5B20)
	method_rva(PlayerControl::OGOIANMJKOE, 0x8ED770)
	method_rva(PlayerControl::RemoveInfected, 0x8EF8E0)
	method_rva(PlayerControl::OKLDLAAHNII, 0x8EE270)
	method_rva(PlayerControl::SetName, 0x8F0ED0)
	method_rva(PlayerControl::EABGDJAGKDL, 0x8E3910)
	method_rva(PlayerControl::Deserialize, 0x8E36C0)
	method_rva(PlayerControl::PINNDOFILDJ, 0x8EF090)
	method_rva(PlayerControl::_cctor, 0x8F1D50)
	method_rva(PlayerControl::POLIPJOOJEC, 0x8EF3D0)
	method_rva(PlayerControl::HNHICMKMJEO, 0x8E77E0)
	//method_rva(PlayerControl::CoStartMeeting, 0x8E2850)
	method_rva(PlayerControl::OHKFOKNOGPO, 0x8ED820)
	method_rva(PlayerControl::Revive, 0x8EFCA0)
	method_rva(PlayerControl::EFCINMDKACB, 0x8E3E00)
	method_rva(PlayerControl::JPAAAADKEGH, 0x8E9490)
	method_rva(PlayerControl::NJCBINJCNMF, 0x8EC940)
	method_rva(PlayerControl::MDBMDMHLIIC, 0x8EAFC0)
	method_rva(PlayerControl::NIBIJEKAEPN, 0x8EC650)
	method_rva(PlayerControl::AJPLICOEPOE, 0x8E1180)
	method_rva(PlayerControl::RpcCompleteTask, 0x8EFE90)
	method_rva(PlayerControl::FHHEGFFCAIK, 0x8E4910)
	method_rva(PlayerControl::AddSystemTask, 0x8E1450)
	method_rva(PlayerControl::Awake, 0x8E1670)
	method_rva(PlayerControl::SetColor, 0x8F0AE0)
	method_rva(PlayerControl::SetPlayerMaterialColors, 0x8F1560)
	method_rva(PlayerControl::JMFFFDJCKDE, 0x8E92A0)
	method_rva(PlayerControl::Exiled, 0x8E4340)
	method_rva(PlayerControl::get_Data, 0x8F2140)
	method_rva(PlayerControl::LILBDMCOOFB, 0x8EA8B0)
	method_rva(PlayerControl::PAPJPDPAFNN, 0x8EEBC0)
	method_rva(PlayerControl::OAFBLFBAOJJ, 0x8ED350)
	method_rva(PlayerControl::set_Visible, 0x8F21E0)
	method_rva(PlayerControl::KCCPOLAGNBE, 0x8E9520)
	method_rva(PlayerControl::SetSkinImage, 0x8E6190)
	method_rva(PlayerControl::ONKBPFEBJHJ, 0x8EE800)
	method_rva(PlayerControl::FDOIKGIEGGM, 0x8E46B0)
	method_rva(PlayerControl::RpcMurderPlayer, 0x8EFF30)
	method_rva(PlayerControl::RpcSetSkin, 0x8F07A0)
	method_rva(PlayerControl::SetHat, 0x8F0C30)
	method_rva(PlayerControl::FGBMJINLILE, 0x8E4800)
	method_rva(PlayerControl::KOEMJMNGPIN, 0x8E9F90)
	//method_rva(PlayerControl::APHAPNBBNDJ, 0x8E1330)
	method_rva(PlayerControl::LICGEEFNELO, 0x8EA3C0)
	//method_rva(PlayerControl::SetPlayerMaterialColors, 0x8F1430)
	method_rva(PlayerControl::RpcSetColor, 0x8F02E0)
	method_rva(PlayerControl::Start, 0x8F1940)
	method_rva(PlayerControl::CLGJLJMBNFP, 0x8E1E50)
	method_rva(PlayerControl::MKDHLHMMHAK, 0x8EB960)
	method_rva(PlayerControl::get_CanMove, 0x8F1ED0)
	method_rva(PlayerControl::HAAGONNLDOH, 0x8E6420)
	method_rva(PlayerControl::RpcSetName, 0x8F0570)
	method_rva(PlayerControl::Serialize, 0x8E9E10)
	method_rva(PlayerControl::JNDBNEEOINI, 0x8E92D0)
	method_rva(PlayerControl::CKKLCFLFACL, 0x8E1CB0)
	method_rva(PlayerControl::RemoveTask, 0x8EF9D0)
	method_rva(PlayerControl::NEKDHECGAHD, 0x8EC5D0)
	method_rva(PlayerControl::RpcStartMeeting, 0x8F08C0)
	method_rva(PlayerControl::GKNFBKIGFNO, 0x8E6040)
	method_rva(PlayerControl::KKJNEPGMAID, 0x8E9E10)
	method_rva(PlayerControl::CmdCheckName, 0x8E26E0)
	method_rva(PlayerControl::HBPIGGMJMPP, 0x8E6F10)
	method_rva(PlayerControl::KEDGNMIOFDJ, 0x8E9920)
	method_rva(PlayerControl::CFJNKPGNJOP, 0x8E1940)
	method_rva(PlayerControl::DKIGBFCJNIH, 0x8E2B60)
	method_rva(PlayerControl::INEEAAKMPOE, 0x8E8340)
	method_rva(PlayerControl::EDAHCGIIGEC, 0x8E3B50)
	method_rva(PlayerControl::RpcSendChat, 0x8F0190)
	method_rva(PlayerControl::ACDENNDCABE, 0x8E1080)
	method_rva(PlayerControl::CheckColor, 0x8E2370)
	method_rva(PlayerControl::MGFJCAPBNIJ, 0x8EB620)
	method_rva(PlayerControl::LNAKEPEKACG, 0x8EAC40)
	method_rva(PlayerControl::PAAEIGJECFE, 0x8EE9C0)
	method_rva(PlayerControl::LFHBFEOGGDP, 0x8EA140)
	method_rva(PlayerControl::MurderPlayer, 0x8EBBD0)
	method_rva(PlayerControl::OJPCECLPCCF, 0x8ED8B0)
	method_rva(PlayerControl::HGBOKFKHBFC, 0x8E73C0)
	method_rva(PlayerControl::CKOJBMDNHDC, 0x8E1DA0)
	method_rva(PlayerControl::ANPCFADOLNH, 0x8E1220)
	method_rva(PlayerControl::PlayAnimation, 0x8EF4C0)
	method_rva(PlayerControl::SetTasks, 0x8F18E0)
	method_rva(PlayerControl::CmdReportDeadBody, 0x8E2790)
	method_rva(PlayerControl::CLKILNOCHEP, 0x8E2050)
	method_rva(PlayerControl::RpcSetStartCounter, 0x8F0840)
	method_rva(PlayerControl::NLCGJIEDBBG, 0x8EC9D0)
	method_rva(PlayerControl::NCPOMLBONHO, 0x8EC3D0)
	method_rva(PlayerControl::FixedUpdate, 0x8E5110)
	method_rva(PlayerControl::LIEICKEPEPE, 0x8EA510)
	method_rva(PlayerControl::HandleRpc, 0x8E7980)
	method_rva(PlayerControl::UseClosest, 0x8F1CD0)
	method_rva(PlayerControl::EEPNJCJFCOD, 0x8E3CB0)
	method_rva(PlayerControl::LPHKIEICAON, 0x8EAD00)
	//method_rva(PlayerControl::AFLAGNHDGGH, 0x8E1120)
	method_rva(PlayerControl::get_Visible, 0x8E92A0)
	method_rva(PlayerControl::MKAIDPJOJFP, 0x8EB7A0)
	method_rva(PlayerControl::PJEDCGOKPII, 0x8E92A0)
	method_rva(PlayerControl::MALCOGGEKED, 0x8EAE60)
	method_rva(PlayerControl::KCDBLGOANGO, 0x8E9710)
	method_rva(PlayerControl::PlayStepSound, 0x8EF550)
	method_rva(PlayerControl::LGKFCCNOCGF, 0x8EA310)
	method_rva(PlayerControl::PHKNIONIKCK, 0x8EEF40)
	method_rva(PlayerControl::SetKillTimer, 0x8F0D70)
	method_rva(PlayerControl::LIJFIPPPLOG, 0x8EA5C0)
	method_rva(PlayerControl::PJDHDPBPHOO, 0x8EF1E0)
	//method_rva(PlayerControl::SetPetImage, 0x8F1130)
	method_rva(PlayerControl::KDOFBFLCHFI, 0x8E97D0)
	method_rva(PlayerControl::GetTruePosition, 0x8E6360)
	method_rva(PlayerControl::HGLKLEFOBAF, 0x8E74D0)
	method_rva(PlayerControl::RpcSetHat, 0x8F0380)
	method_rva(PlayerControl::CheckName, 0x8E2490)
	method_rva(PlayerControl::HEJHHOBBOBI, 0x8E72D0)
	method_rva(PlayerControl::OMPDACJGDIJ, 0x8EE380)
	method_rva(PlayerControl::GNDBOKNONJB, 0x8E61C0)
	method_rva(PlayerControl::PHFBHMLPLPM, 0x8EEE10)
	method_rva(PlayerControl::HEBJKEEOHOK, 0x8E7060)
	method_rva(PlayerControl::KHLAHAFCHHM, 0x8E9A70)
	method_rva(PlayerControl::_ctor, 0x8F1DC0)
	method_rva(PlayerControl::INBICOPCOCN, 0x8E8040)
	method_rva(PlayerControl::CGOHBBOFFBC, 0x8E1AF0)
	method_rva(PlayerControl::ENCDNKFILGC, 0x8E4250)
	//method_rva(PlayerControl::SetPlayerMaterialColors, 0x8F15F0)
	method_rva(PlayerControl::FIIGIJHGODC, 0x8E49A0)
	method_rva(PlayerControl::JGBHNKMJFHA, 0x8E8520)
	method_rva(PlayerControl::NPBIIAEJFFE, 0x8ED250)
	method_rva(PlayerControl::EECEFCEEMOI, 0x8E3C30)
	method_rva(PlayerControl::RpcSyncSettings, 0x8F09D0)
	method_rva(PlayerControl::Die, 0x8E3700)
	method_rva(PlayerControl::FGHBFGPILAE, 0x8E4880)
	method_rva(PlayerControl::GMCHEJDFJLP, 0x8E60E0)
	method_rva(PlayerControl::JOMBEGNNEDO, 0x8E9360)
	method_rva(PlayerControl::OnDestroy, 0x8EE8E0)
	method_rva(PlayerControl::CEFHOMJLDOL, 0x8E1850)
	method_rva(PlayerControl::EBEHICLEFIF, 0x8E3990)
	method_rva(PlayerControl::EGKPFCGBADG, 0x8E4160)
	method_rva(PlayerControl::CBMEJKPGHOA, 0x8E1770)
	method_rva(PlayerControl::ReportClosest, 0x8EFAC0)
	method_rva(PlayerControl::DNNIKFFODAH, 0x8E3520)
	method_rva(PlayerControl::CompleteTask, 0x8E28B0)
	method_rva(PlayerControl::APMIKIHJHNP, 0x8E1380)
	method_rva(PlayerControl::CmdCheckColor, 0x8E2630)
	method_rva(PlayerControl::NMOONHOMEBI, 0x8ED0D0)
	method_rva(PlayerControl::FFNCCHAFDMF, 0x8E4760)
	method_rva(PlayerControl::KHOKFCBONMN, 0x8E9C70)
	//method_rva(PlayerControl::BKACPBFANPP, 0x8E1720)
	method_rva(PlayerControl::PMICBFLPPNH, 0x8EF2C0)
	//method_rva(PlayerControl::SetSkinImage, 0x8F17A0)
	method_rva(PlayerControl::ONIGNKDLJMI, 0x8EE470)
	method_rva(PlayerControl::SetPet, 0x8F1230)
	method_rva(PlayerControl::MDNFIPDDCBO, 0x8E9E10)
	method_rva(PlayerControl::CKIPOCJFJNJ, 0x8E1BC0)
	method_rva(PlayerControl::FINMJGBNEHP, 0x8E4F50)
	method_rva(PlayerControl::KGLNLIFMIPK, 0x8E99D0)
	method_rva(PlayerControl::OFJDBLFDJLM, 0x8ED670)
	//method_rva(PlayerControl::KNKGODDCEKP, 0x8E9F30)
	method_rva(PlayerControl::JJONHMOCEMN, 0x8E90B0)
	method_rva(PlayerControl::KKCAFDPBABB, 0x8E9D00)
	method_rva(PlayerControl::RpcSetPet, 0x8F0610)
	method_rva(PlayerControl::MIKCFGKJDEK, 0x8EB6B0)
	//method_rva(PlayerControl::PAJCEBAEADA, 0x8EEB00)
	method_rva(PlayerControl::FDAKHKKFJIK, 0x8E4580)
	method_rva(PlayerControl::MEEAEDBNABI, 0x8EB060)
	method_rva(PlayerControl::RpcSendChatNote, 0x8F00B0)
	method_rva(PlayerControl::NPKIHBHPFFF, 0x8ED2D0)
	method_rva(PlayerControl::DHFFBGIAJLA, 0x8E2A50)
}
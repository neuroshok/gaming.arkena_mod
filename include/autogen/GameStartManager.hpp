#pragma once

#include <ark/class.hpp>
#include <autogen/PlayerControl.hpp>
#include <autogen/Unity/TextRenderer.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>

struct GameStartManager : ark::meta<GameStartManager, Unity::MonoBehaviour> /*PPAEIPHJPDH<GameStartManager>*/
{
    ark_meta("", "ANKMIOIMNFE", "");

	float INPGMOJAEDP;
	std::int32_t MinPlayers; // 0x10
	Unity::TextRenderer* PlayerCounter; // 0x14
	std::int32_t CurrentPlayers; // 0x18
	struct GameObject* GameSizePopup; // 0x1C
	Unity::TextRenderer* GameRoomName; // 0x20
	struct PFLIBLFPGGB* LobbyPrefab; // 0x24
	Unity::TextRenderer* GameStartText; // 0x28
	struct SpriteRenderer* StartButton; // 0x2C
	struct SpriteRenderer* MakePublicButton; // 0x30
	struct Sprite* PublicGameImage; // 0x34
	struct Sprite* PrivateGameImage; // 0x38
	struct GameStartManager_JFICJODDLMC* BJFKBBMOKHN; // 0x3C
	float OFHLAEPLHNF; // 0x40

	void NCANEKGMEHG(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(NCANEKGMEHG, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBC0210
	void AEMBCBMOIGD(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(AEMBCBMOIGD, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBD150
	void JNJLCHCNHLG() { method_call(JNJLCHCNHLG); } // 0xBBF710
	void EBADJPNAEGL() { method_call(EBADJPNAEGL); } // 0xBBE240
	void DEGNOGAIBIE() { method_call(DEGNOGAIBIE); } // 0xBBDB80
	void BMIJEHANBHB() { method_call(BMIJEHANBHB); } // 0xBBD8F0
	void Start() { method_call(Start); } // 0xBC0700
	void LPKAGGPMKOC(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(LPKAGGPMKOC, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBFCA0
	void KOMGPDMMCMF() { method_call(KOMGPDMMCMF); } // 0xBBD200
	void SetStartCounter(std::uint8_t NOGEHEKPMCA) { method_call(SetStartCounter, NOGEHEKPMCA); } // 0xBC0620
	void ECODAFCIIJB() { method_call(ECODAFCIIJB); } // 0xBBE590
	void _ctor() { method_call(_ctor); } // 0xBC0F70
	void Update() { method_call(Update); } // 0xBC0A50
	//void HandleDisconnect_0() { method_call(HandleDisconnect_0); } // 0xBBF370
	void HandleDisconnect(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(HandleDisconnect, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBF370
	void GGDDCCELOBI() { method_call(GGDDCCELOBI); } // 0xBBF000
	void MKHEAHBGNKD() { method_call(MKHEAHBGNKD); } // 0xBBFE30
	void PIHDFMACBMP() { method_call(PIHDFMACBMP); } // 0xBBDAD0
	void IFELFGHDGJD() { method_call(IFELFGHDGJD); } // 0xBBF420
	void FinallyBegin() { method_call(FinallyBegin); } // 0xBBEE90
	void JGLHJNPMKAD(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(JGLHJNPMKAD, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBF4D0
	void LDCAGEFDMJE() { method_call(LDCAGEFDMJE); } // 0xBBFC30
	void MakePublic() { method_call(MakePublic); } // 0xBC0070
	void ANHDDPJFPEF() { method_call(ANHDDPJFPEF); } // 0xBBD2B0
	void BeginGame() { method_call(BeginGame); } // 0xBBD9A0
	void OBFBEAEMLGC() { method_call(OBFBEAEMLGC); } // 0xBC02C0
	void BEFBEAONOGG() { method_call(BEFBEAONOGG); } // 0xBBD760
	void GGCEPMIOCDB() { method_call(GGCEPMIOCDB); } // 0xBBEF40
	void ResetStartState() { method_call(ResetStartState); } // 0xBC0490
	void OGJGMDOIMKD() { method_call(OGJGMDOIMKD); } // 0xBC0370
	void NADGAPLFNNH() { method_call(NADGAPLFNNH); } // 0xBC00E0
	void HCLBCIHKIEJ() { method_call(HCLBCIHKIEJ); } // 0xBBF2C0
	void MNBFJADKGPM() { method_call(MNBFJADKGPM); } // 0xBBFEE0
	void APGLGCCANJP() { method_call(APGLGCCANJP); } // 0xBBD600
	void MONLPDLNPEH(std::uint8_t NOGEHEKPMCA) { method_call(MONLPDLNPEH, NOGEHEKPMCA); } // 0xBBFF90
	void GHJPADGOFAK() { method_call(GHJPADGOFAK); } // 0xBBF130
	void DOHDCIOHLKG() { method_call(DOHDCIOHLKG); } // 0xBBE1D0
	void MAACOIJDEHN(std::uint8_t NOGEHEKPMCA) { method_call(MAACOIJDEHN, NOGEHEKPMCA); } // 0xBBFD50
	void DFKJMOKECIE() { method_call(DFKJMOKECIE); } // 0xBBE0A0
	void JJBKMOFHOKL() { method_call(JJBKMOFHOKL); } // 0xBBF580
	void FLHCKGHFEDK() { method_call(FLHCKGHFEDK); } // 0xBBEA10
	void AJIJOOJLLHJ(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(AJIJOOJLLHJ, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBD200
	void ReallyBegin(bool DCOMAFPNKKN) { method_call(ReallyBegin, DCOMAFPNKKN); } // 0xBC03E0
	void COHBJGNFBGD(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(COHBJGNFBGD, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBDAD0
	void BAFOMBMBNFI(PlayerControl* NMEAPOJFNKA, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(BAFOMBMBNFI, NMEAPOJFNKA, OECOPGMHMKC); } // 0xBBD6B0
};
namespace ark::method_info
{

	method_rva(GameStartManager::NCANEKGMEHG, 0xBC0210)
	method_rva(GameStartManager::AEMBCBMOIGD, 0xBBD150)
	method_rva(GameStartManager::JNJLCHCNHLG, 0xBBF710)
	method_rva(GameStartManager::EBADJPNAEGL, 0xBBE240)
	method_rva(GameStartManager::DEGNOGAIBIE, 0xBBDB80)
	method_rva(GameStartManager::BMIJEHANBHB, 0xBBD8F0)
	method_rva(GameStartManager::Start, 0xBC0700)
	method_rva(GameStartManager::LPKAGGPMKOC, 0xBBFCA0)
	method_rva(GameStartManager::KOMGPDMMCMF, 0xBBD200)
	method_rva(GameStartManager::SetStartCounter, 0xBC0620)
	method_rva(GameStartManager::ECODAFCIIJB, 0xBBE590)
	method_rva(GameStartManager::_ctor, 0xBC0F70)
	method_rva(GameStartManager::Update, 0xBC0A50)
	//method_rva(GameStartManager::HandleDisconnect, 0xBBF370)
	method_rva(GameStartManager::HandleDisconnect, 0xBBF370)
	method_rva(GameStartManager::GGDDCCELOBI, 0xBBF000)
	method_rva(GameStartManager::MKHEAHBGNKD, 0xBBFE30)
	method_rva(GameStartManager::PIHDFMACBMP, 0xBBDAD0)
	method_rva(GameStartManager::IFELFGHDGJD, 0xBBF420)
	method_rva(GameStartManager::FinallyBegin, 0xBBEE90)
	method_rva(GameStartManager::JGLHJNPMKAD, 0xBBF4D0)
	method_rva(GameStartManager::LDCAGEFDMJE, 0xBBFC30)
	method_rva(GameStartManager::MakePublic, 0xBC0070)
	method_rva(GameStartManager::ANHDDPJFPEF, 0xBBD2B0)
	method_rva(GameStartManager::BeginGame, 0xBBD9A0)
	method_rva(GameStartManager::OBFBEAEMLGC, 0xBC02C0)
	method_rva(GameStartManager::BEFBEAONOGG, 0xBBD760)
	method_rva(GameStartManager::GGCEPMIOCDB, 0xBBEF40)
	method_rva(GameStartManager::ResetStartState, 0xBC0490)
	method_rva(GameStartManager::OGJGMDOIMKD, 0xBC0370)
	method_rva(GameStartManager::NADGAPLFNNH, 0xBC00E0)
	method_rva(GameStartManager::HCLBCIHKIEJ, 0xBBF2C0)
	method_rva(GameStartManager::MNBFJADKGPM, 0xBBFEE0)
	method_rva(GameStartManager::APGLGCCANJP, 0xBBD600)
	method_rva(GameStartManager::MONLPDLNPEH, 0xBBFF90)
	method_rva(GameStartManager::GHJPADGOFAK, 0xBBF130)
	method_rva(GameStartManager::DOHDCIOHLKG, 0xBBE1D0)
	method_rva(GameStartManager::MAACOIJDEHN, 0xBBFD50)
	method_rva(GameStartManager::DFKJMOKECIE, 0xBBE0A0)
	method_rva(GameStartManager::JJBKMOFHOKL, 0xBBF580)
	method_rva(GameStartManager::FLHCKGHFEDK, 0xBBEA10)
	method_rva(GameStartManager::AJIJOOJLLHJ, 0xBBD200)
	method_rva(GameStartManager::ReallyBegin, 0xBC03E0)
	method_rva(GameStartManager::COHBJGNFBGD, 0xBBDAD0)
	method_rva(GameStartManager::BAFOMBMBNFI, 0xBBD6B0)
}
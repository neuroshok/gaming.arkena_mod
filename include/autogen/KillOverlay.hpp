#pragma once

#include <ark/class.hpp>

#include <cs/array.hpp>

#include <autogen/GameData.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>

struct OAKKJMGJBGG;

struct KillOverlay : ark::meta<KillOverlay, Unity::MonoBehaviour>
{
	ark_meta("", "CFKDGHIEFFA", "");

	struct SpriteRenderer* background; // 0xC
	struct GameObject* flameParent; // 0x10
	cs::array<OAKKJMGJBGG>* KillAnims; // 0x14
	float FadeTime; // 0x18
	OAKKJMGJBGG* EmergencyOverlay; // 0x1C
	OAKKJMGJBGG* ReportOverlay; // 0x20
	void* v;//struct Queue<Func<IEnumerator>>* CAHIHMPNLCP; // 0x24
	struct Coroutine* LFEGDCKJAIO; // 0x28
	struct Coroutine* DINCFHJCLFA; // 0x2C

	struct IEnumerator* LCNILHPAPHJ() { return method_call(LCNILHPAPHJ); } // 0x1397FA0
	bool AABLEOPBMLF() { return method_call(AABLEOPBMLF); } // 0x1397590
	void EFKJHDPPOJF(float KKHLLNAKPFM) { return method_call(EFKJHDPPOJF, KKHLLNAKPFM); } // 0x1397790
	void OFNHDKPKCKB(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(OFNHDKPKCKB, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398240
	void EKBOODIHCIL(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(EKBOODIHCIL, CPFLLCANGCB, OHKJALIJBLO); } // 0x1397870
	void GLJJFFLEFPD(float KKHLLNAKPFM) { return method_call(GLJJFFLEFPD, KKHLLNAKPFM); } // 0x13979D0
	void MFMNCEIBCJA(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(MFMNCEIBCJA, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398060
	struct IEnumerator* HHEDOKDPGHO(OAKKJMGJBGG* BNMFALPGNKE) { return method_call(HHEDOKDPGHO, BNMFALPGNKE); } // 0x1397B40
	struct IEnumerator* CKAMFGMBBEP(OAKKJMGJBGG* BNMFALPGNKE) { return method_call(CKAMFGMBBEP, BNMFALPGNKE); } // 0x13976E0
	struct IEnumerator* GOCOBDMFAAK() { return method_call(GOCOBDMFAAK); } // 0x1397A60
	struct IEnumerator* EEPABKDIFBM() { return method_call(EEPABKDIFBM); } // 0x1397740
	void KJPLEHNFAFP(float KKHLLNAKPFM) { return method_call(KJPLEHNFAFP, KKHLLNAKPFM); } // 0x1397EC0
	void BPIINPFMIKF(OAKKJMGJBGG* OKPHGNCPCOF, GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(BPIINPFMIKF, OKPHGNCPCOF, CPFLLCANGCB, OHKJALIJBLO); } // 0x13975E0
	struct IEnumerator* OHEHBFDIOFK() { return method_call(OHEHBFDIOFK); } // 0x1398340
	struct IEnumerator* JBDCOPFEMEO(OAKKJMGJBGG* OKPHGNCPCOF, GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(JBDCOPFEMEO, OKPHGNCPCOF, CPFLLCANGCB, OHKJALIJBLO); } // 0x1397D60
	void ShowOne(OAKKJMGJBGG* OKPHGNCPCOF, GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(ShowOne, OKPHGNCPCOF, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398590
	struct IEnumerator* JBDCOPFEMEO_1(OAKKJMGJBGG* BNMFALPGNKE) { return method_call(JBDCOPFEMEO_1, BNMFALPGNKE); } // 0x1397D00
	struct IEnumerator* HPMNBNDBPMC(OAKKJMGJBGG* BNMFALPGNKE) { return method_call(HPMNBNDBPMC, BNMFALPGNKE); } // 0x1397CA0
	void OMDBKJJEBJJ(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(OMDBKJJEBJJ, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398390
	bool KNAMEDAPIOP() { return method_call(KNAMEDAPIOP); } // 0x1397F50
	void ShowOne_1(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(ShowOne_1, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398490
	void HJFKDMAEPGE(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(HJFKDMAEPGE, CPFLLCANGCB, OHKJALIJBLO); } // 0x1397BA0
	void HBCBOMHBDIL(float KKHLLNAKPFM) { return method_call(HBCBOMHBDIL, KKHLLNAKPFM); } // 0x1397AB0
	void MJJPEKGMONC(float KKHLLNAKPFM) { return method_call(MJJPEKGMONC, KKHLLNAKPFM); } // 0x1398160
	void _ctor() { return method_call(_ctor); } // 0x13986E0
	struct IEnumerator* WaitForFinish() { return method_call(WaitForFinish); } // 0x1398690
	struct IEnumerator* NEIOGMFMNDC() { return method_call(NEIOGMFMNDC); } // 0x13981F0
	struct IEnumerator* MCEEAMONJDF(OAKKJMGJBGG* OKPHGNCPCOF, GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(MCEEAMONJDF, OKPHGNCPCOF, CPFLLCANGCB, OHKJALIJBLO); } // 0x1398000
	void KDEBNKHEHBD(GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(KDEBNKHEHBD, CPFLLCANGCB, OHKJALIJBLO); } // 0x1397DC0
	bool get_IsOpen() { return method_call(get_IsOpen); } // 0x1398740
	struct IEnumerator* FINGLHHEPNE(OAKKJMGJBGG* OKPHGNCPCOF, GameData::PlayerInfo* CPFLLCANGCB, GameData::PlayerInfo* OHKJALIJBLO) { return method_call(FINGLHHEPNE, OKPHGNCPCOF, CPFLLCANGCB, OHKJALIJBLO); } // 0x1397970
	struct IEnumerator* EHIGNNAFKCK() { return method_call(EHIGNNAFKCK); } // 0x1397820
};
namespace ark::method_info
{
	method_rva(KillOverlay::LCNILHPAPHJ, 0x1397FA0)
	method_rva(KillOverlay::AABLEOPBMLF, 0x1397590)
	method_rva(KillOverlay::EFKJHDPPOJF, 0x1397790)
	method_rva(KillOverlay::OFNHDKPKCKB, 0x1398240)
	method_rva(KillOverlay::EKBOODIHCIL, 0x1397870)
	method_rva(KillOverlay::GLJJFFLEFPD, 0x13979D0)
	method_rva(KillOverlay::MFMNCEIBCJA, 0x1398060)
	method_rva(KillOverlay::HHEDOKDPGHO, 0x1397B40)
	method_rva(KillOverlay::CKAMFGMBBEP, 0x13976E0)
	method_rva(KillOverlay::GOCOBDMFAAK, 0x1397A60)
	method_rva(KillOverlay::EEPABKDIFBM, 0x1397740)
	method_rva(KillOverlay::KJPLEHNFAFP, 0x1397EC0)
	method_rva(KillOverlay::BPIINPFMIKF, 0x13975E0)
	method_rva(KillOverlay::OHEHBFDIOFK, 0x1398340)
	method_rva(KillOverlay::JBDCOPFEMEO, 0x1397D60)
	method_rva(KillOverlay::ShowOne, 0x1398590)
	method_rva(KillOverlay::JBDCOPFEMEO_1, 0x1397D00)
	method_rva(KillOverlay::HPMNBNDBPMC, 0x1397CA0)
	method_rva(KillOverlay::OMDBKJJEBJJ, 0x1398390)
	method_rva(KillOverlay::KNAMEDAPIOP, 0x1397F50)
	method_rva(KillOverlay::ShowOne_1, 0x1398490)
	method_rva(KillOverlay::HJFKDMAEPGE, 0x1397BA0)
	method_rva(KillOverlay::HBCBOMHBDIL, 0x1397AB0)
	method_rva(KillOverlay::MJJPEKGMONC, 0x1398160)
	method_rva(KillOverlay::_ctor, 0x13986E0)
	method_rva(KillOverlay::WaitForFinish, 0x1398690)
	method_rva(KillOverlay::NEIOGMFMNDC, 0x13981F0)
	method_rva(KillOverlay::MCEEAMONJDF, 0x1398000)
	method_rva(KillOverlay::KDEBNKHEHBD, 0x1397DC0)
	method_rva(KillOverlay::get_IsOpen, 0x1398740)
	method_rva(KillOverlay::FINGLHHEPNE, 0x1397970)
	method_rva(KillOverlay::EHIGNNAFKCK, 0x1397820)
}
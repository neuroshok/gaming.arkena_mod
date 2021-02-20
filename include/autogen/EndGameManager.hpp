#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Color.hpp>
#include <autogen/Unity/TextRenderer.hpp>

class EndGameManager : ark::meta<EndGameManager, MonoBehaviour> // TypeDefIndex: 8507
{
	ark_meta("", "ABNGEPFHMHP");

	Unity::TextRenderer* WinText; // 0xC
	struct MeshRenderer* BackgroundBar; // 0x10
	struct MeshRenderer* Foreground; // 0x14
	struct FloatRange* ForegroundRadius; // 0x18
	struct SpriteRenderer* FrontMost; // 0x1C
	struct FOONEKDGJBL* PlayerPrefab; // 0x20
	struct Sprite* GhostSprite; // 0x24
	struct SpriteRenderer* PlayAgainButton; // 0x28
	struct SpriteRenderer* ExitButton; // 0x2C
	struct AudioClip* DisconnectStinger; // 0x30
	struct AudioClip* CrewStinger; // 0x34
	struct AudioClip* ImpostorStinger; // 0x38
	float BaseY; // 0x3C
	float ONPGFCPAKPE; // 0x40

	struct IEnumerator* KKKPLDFDAOH() { return method_call(KKKPLDFDAOH, ); } // 0xF4C720
	void CIDAOGAPNFF() { return method_call(CIDAOGAPNFF, ); } // 0xF495F0
	struct IEnumerator* BOONEPDDCLM() { return method_call(BOONEPDDCLM, ); } // 0xF495A0
	struct IEnumerator* LCHAFBADHBF() { return method_call(LCHAFBADHBF, ); } // 0xF4D550
	struct IEnumerator* ANJMLPNLPGH() { return method_call(ANJMLPNLPGH, ); } // 0xF492F0
	void _ctor() { return method_call(_ctor, ); } // 0xF51520
	void NextGame() { return method_call(NextGame, ); } // 0xF4E7D0
	void BHGOJOFHGCG() { return method_call(BHGOJOFHGCG, ); } // 0xF493E0
	struct IEnumerator* WaitWithTimeout(struct Func<bool>* AOEEKHMFIAK) { return method_call(WaitWithTimeout, AOEEKHMFIAK); } // 0xF514D0
	void EMPOBOOPPDH() { return method_call(EMPOBOOPPDH, ); } // 0xF4A6E0
	void AIAOBJIBDGM() { return method_call(AIAOBJIBDGM, ); } // 0xF48510
	struct IEnumerator* HICCCHLFNDP() { return method_call(HICCCHLFNDP, ); } // 0xF4ABB0
	void HMMBDDAINBC() { return method_call(HMMBDDAINBC, ); } // 0xF4AC00
	struct IEnumerator* ALEKDCCCEGE() { return method_call(ALEKDCCCEGE, ); } // 0xF49200
	void OCJNLBOKGIK() { return method_call(OCJNLBOKGIK, ); } // 0xF495F0
	void JGOKIDICDDD() { return method_call(JGOKIDICDDD, ); } // 0xF4BA20
	void NMOFEPDPJDO() { return method_call(NMOFEPDPJDO, ); } // 0xF4E630
	void JDIJDCHKHJP() { return method_call(JDIJDCHKHJP, ); } // 0xF4B8C0
	void GAKCOLPFPKC(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(GAKCOLPFPKC, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF4A980
	struct IEnumerator* OOLGFOBFPIB() { return method_call(OOLGFOBFPIB, ); } // 0xF51170
	void NHEIEGAFOFC(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(NHEIEGAFOFC, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF4E4E0
	void Exit() { return method_call(Exit, ); } // 0xF4A760
	struct IEnumerator* CoBegin() { return method_call(CoBegin, ); } // 0xF496C0
	void PAKHBLPFIBD(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(PAKHBLPFIBD, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF51250
	void FEOOBNBLADD() { return method_call(FEOOBNBLADD, ); } // 0xF4A900
	struct IEnumerator* OAGLHKAAFEI(struct Func<bool>* AOEEKHMFIAK) { return method_call(OAGLHKAAFEI, AOEEKHMFIAK); } // 0xF4E920
	void OHEPLAKIOIH(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(OHEPLAKIOIH, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF50470
	struct IEnumerator* LBCDHLONGBM(struct Func<bool>* AOEEKHMFIAK) { return method_call(LBCDHLONGBM, AOEEKHMFIAK); } // 0xF4D500
	void EAIAKOJIHKM() { return method_call(EAIAKOJIHKM, ); } // 0xF497B0
	void BLHPPLMOPBB() { return method_call(BLHPPLMOPBB, ); } // 0xF49500
	void MFIBPNBCMKM() { return method_call(MFIBPNBCMKM, ); } // 0xF4D6F0
	struct IEnumerator* HGGCPFDBNHB() { return method_call(HGGCPFDBNHB, ); } // 0xF4AB60
	void JGCGNCBBMKO() { return method_call(JGCGNCBBMKO, ); } // 0xF4A6E0
	void OPJAOGIPFAD() { return method_call(OPJAOGIPFAD, ); } // 0xF511C0
	void NAHJACNAAHH() { return method_call(NAHJACNAAHH, ); } // 0xF4E3B0
	void EEBFIFNKPKJ() { return method_call(EEBFIFNKPKJ, ); } // 0xF4A540
	void ODKNFIGIAAM() { return method_call(ODKNFIGIAAM, ); } // 0xF4EA90
	struct IEnumerator* DKCFBGEAHKI() { return method_call(DKCFBGEAHKI, ); } // 0xF49760
	void KNPGKOEDFJG() { return method_call(KNPGKOEDFJG, ); } // 0xF4D470
	void ELIPHHEHCMD(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(ELIPHHEHCMD, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF4A620
	struct IEnumerator* EKBOPBCOLOI() { return method_call(EKBOPBCOLOI, ); } // 0xF4A5D0
	void GMNDFKDIIEK() { return method_call(GMNDFKDIIEK, ); } // 0xF4AA40
	struct IEnumerator* ICMHMJKNMHC() { return method_call(ICMHMJKNMHC, ); } // 0xF4B7E0
	void Start() { return method_call(Start, ); } // 0xF51430
	void JFEMPAHFNPE(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(JFEMPAHFNPE, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF4B960
	void BKEFJENDAAG() { return method_call(BKEFJENDAAG, ); } // 0xF49460
	struct IEnumerator* CoJoinGame() { return method_call(CoJoinGame, ); } // 0xF49710
	void KLFOPILIGBM() { return method_call(KLFOPILIGBM, ); } // 0xF4C770
	void ONCPHOPEOMO() { return method_call(ONCPHOPEOMO, ); } // 0xF50530
	struct IEnumerator* MPFPBODJCOB(struct Func<bool>* AOEEKHMFIAK) { return method_call(MPFPBODJCOB, AOEEKHMFIAK); } // 0xF4E360
	void IEDPNMMCAOJ() { return method_call(IEDPNMMCAOJ, ); } // 0xF4B830
	void NIEEAKEAMCI() { return method_call(NIEEAKEAMCI, ); } // 0xF4E5A0
	void FENGLAANOFM(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(FENGLAANOFM, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF4A840
	void HEPGMIADAMD() { return method_call(HEPGMIADAMD, ); } // 0xF4AAD0
	void ODFDLJHEFFJ() { return method_call(ODFDLJHEFFJ, ); } // 0xF4EA10
	struct IEnumerator* CPMNHDMJLPD() { return method_call(CPMNHDMJLPD, ); } // 0xF49670
	void OAMLIHKICAP() { return method_call(OAMLIHKICAP, ); } // 0xF4E970
	struct IEnumerator* ACEHDEFIHEP(struct Func<bool>* AOEEKHMFIAK) { return method_call(ACEHDEFIHEP, AOEEKHMFIAK); } // 0xF48420
	struct IEnumerator* NOOEPFCIBDI() { return method_call(NOOEPFCIBDI, ); } // 0xF4E780
	void NAKGGHGBFAN() { return method_call(NAKGGHGBFAN, ); } // 0xF4E450
	struct IEnumerator* FCBCDBEALBO() { return method_call(FCBCDBEALBO, ); } // 0xF4A7F0
	void OEHMMGMMEAJ() { return method_call(OEHMMGMMEAJ, ); } // 0xF4F760
	struct IEnumerator* ADDCBLFCDCK(struct Func<bool>* AOEEKHMFIAK) { return method_call(ADDCBLFCDCK, AOEEKHMFIAK); } // 0xF48470
	struct IEnumerator* AEPCDNAJLEE() { return method_call(AEPCDNAJLEE, ); } // 0xF484C0
	void PAOKEHEDNLL() { return method_call(PAOKEHEDNLL, ); } // 0xF51310
	void LDFLDIDCEFD() { return method_call(LDFLDIDCEFD, ); } // 0xF4D5A0
	void EBGEPLFOJOB() { return method_call(EBGEPLFOJOB, ); } // 0xF49840
	void BFGCIBEFILC() { return method_call(BFGCIBEFILC, ); } // 0xF49340
	void ANHDDPJFPEF() { return method_call(ANHDDPJFPEF, ); } // 0xF49250
	void PBIHIFNLMLG() { return method_call(PBIHIFNLMLG, ); } // 0xF513B0
	void OHAIJKCIICC(struct AudioSource* HLHMFLICGMB, float GDMHDAJAPDD) { return method_call(OHAIJKCIICC, HLHMFLICGMB, GDMHDAJAPDD); } // 0xF503B0
	struct IEnumerator* MGFFNHMLBNP() { return method_call(MGFFNHMLBNP, ); } // 0xF4E310
};
namespace ark::method_info
{

	method_rva(EndGameManager::KKKPLDFDAOH, 0xF4C720)
	method_rva(EndGameManager::CIDAOGAPNFF, 0xF495F0)
	method_rva(EndGameManager::BOONEPDDCLM, 0xF495A0)
	method_rva(EndGameManager::LCHAFBADHBF, 0xF4D550)
	method_rva(EndGameManager::ANJMLPNLPGH, 0xF492F0)
	method_rva(EndGameManager::_ctor, 0xF51520)
	method_rva(EndGameManager::NextGame, 0xF4E7D0)
	method_rva(EndGameManager::BHGOJOFHGCG, 0xF493E0)
	method_rva(EndGameManager::WaitWithTimeout, 0xF514D0)
	method_rva(EndGameManager::EMPOBOOPPDH, 0xF4A6E0)
	method_rva(EndGameManager::AIAOBJIBDGM, 0xF48510)
	method_rva(EndGameManager::HICCCHLFNDP, 0xF4ABB0)
	method_rva(EndGameManager::HMMBDDAINBC, 0xF4AC00)
	method_rva(EndGameManager::ALEKDCCCEGE, 0xF49200)
	method_rva(EndGameManager::OCJNLBOKGIK, 0xF495F0)
	method_rva(EndGameManager::JGOKIDICDDD, 0xF4BA20)
	method_rva(EndGameManager::NMOFEPDPJDO, 0xF4E630)
	method_rva(EndGameManager::JDIJDCHKHJP, 0xF4B8C0)
	method_rva(EndGameManager::GAKCOLPFPKC, 0xF4A980)
	method_rva(EndGameManager::OOLGFOBFPIB, 0xF51170)
	method_rva(EndGameManager::NHEIEGAFOFC, 0xF4E4E0)
	method_rva(EndGameManager::Exit, 0xF4A760)
	method_rva(EndGameManager::CoBegin, 0xF496C0)
	method_rva(EndGameManager::PAKHBLPFIBD, 0xF51250)
	method_rva(EndGameManager::FEOOBNBLADD, 0xF4A900)
	method_rva(EndGameManager::OAGLHKAAFEI, 0xF4E920)
	method_rva(EndGameManager::OHEPLAKIOIH, 0xF50470)
	method_rva(EndGameManager::LBCDHLONGBM, 0xF4D500)
	method_rva(EndGameManager::EAIAKOJIHKM, 0xF497B0)
	method_rva(EndGameManager::BLHPPLMOPBB, 0xF49500)
	method_rva(EndGameManager::MFIBPNBCMKM, 0xF4D6F0)
	method_rva(EndGameManager::HGGCPFDBNHB, 0xF4AB60)
	method_rva(EndGameManager::JGCGNCBBMKO, 0xF4A6E0)
	method_rva(EndGameManager::OPJAOGIPFAD, 0xF511C0)
	method_rva(EndGameManager::NAHJACNAAHH, 0xF4E3B0)
	method_rva(EndGameManager::EEBFIFNKPKJ, 0xF4A540)
	method_rva(EndGameManager::ODKNFIGIAAM, 0xF4EA90)
	method_rva(EndGameManager::DKCFBGEAHKI, 0xF49760)
	method_rva(EndGameManager::KNPGKOEDFJG, 0xF4D470)
	method_rva(EndGameManager::ELIPHHEHCMD, 0xF4A620)
	method_rva(EndGameManager::EKBOPBCOLOI, 0xF4A5D0)
	method_rva(EndGameManager::GMNDFKDIIEK, 0xF4AA40)
	method_rva(EndGameManager::ICMHMJKNMHC, 0xF4B7E0)
	method_rva(EndGameManager::Start, 0xF51430)
	method_rva(EndGameManager::JFEMPAHFNPE, 0xF4B960)
	method_rva(EndGameManager::BKEFJENDAAG, 0xF49460)
	method_rva(EndGameManager::CoJoinGame, 0xF49710)
	method_rva(EndGameManager::KLFOPILIGBM, 0xF4C770)
	method_rva(EndGameManager::ONCPHOPEOMO, 0xF50530)
	method_rva(EndGameManager::MPFPBODJCOB, 0xF4E360)
	method_rva(EndGameManager::IEDPNMMCAOJ, 0xF4B830)
	method_rva(EndGameManager::NIEEAKEAMCI, 0xF4E5A0)
	method_rva(EndGameManager::FENGLAANOFM, 0xF4A840)
	method_rva(EndGameManager::HEPGMIADAMD, 0xF4AAD0)
	method_rva(EndGameManager::ODFDLJHEFFJ, 0xF4EA10)
	method_rva(EndGameManager::CPMNHDMJLPD, 0xF49670)
	method_rva(EndGameManager::OAMLIHKICAP, 0xF4E970)
	method_rva(EndGameManager::ACEHDEFIHEP, 0xF48420)
	method_rva(EndGameManager::NOOEPFCIBDI, 0xF4E780)
	method_rva(EndGameManager::NAKGGHGBFAN, 0xF4E450)
	method_rva(EndGameManager::FCBCDBEALBO, 0xF4A7F0)
	method_rva(EndGameManager::OEHMMGMMEAJ, 0xF4F760)
	method_rva(EndGameManager::ADDCBLFCDCK, 0xF48470)
	method_rva(EndGameManager::AEPCDNAJLEE, 0xF484C0)
	method_rva(EndGameManager::PAOKEHEDNLL, 0xF51310)
	method_rva(EndGameManager::LDFLDIDCEFD, 0xF4D5A0)
	method_rva(EndGameManager::EBGEPLFOJOB, 0xF49840)
	method_rva(EndGameManager::BFGCIBEFILC, 0xF49340)
	method_rva(EndGameManager::ANHDDPJFPEF, 0xF49250)
	method_rva(EndGameManager::PBIHIFNLMLG, 0xF513B0)
	method_rva(EndGameManager::OHAIJKCIICC, 0xF503B0)
	method_rva(EndGameManager::MGFFNHMLBNP, 0xF4E310)
}
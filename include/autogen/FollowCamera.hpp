#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Vector2.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

struct alignas(4) FollowCamera : ark::meta<FollowCamera, Unity::MonoBehaviour>
{
	ark_meta("", "KGIKNCBGPFJ");

	Unity::MonoBehaviour* Target; // 0xC
	Unity::Vector2 Offset; // 0x10
	bool Locked; // 0x18
	float shakeAmount; // 0x1C
	float shakePeriod; // 0x20

	void OPAKPELBGNB(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(OPAKPELBGNB, CAKODNGLPDF); } // 0x154C5E0
	void BGHPMABBNOC(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(BGHPMABBNOC, CAKODNGLPDF); } // 0x1542FA0
	void CDGBALKKEBK(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(CDGBALKKEBK, CAKODNGLPDF); } // 0x1543E60
	void IKCADCGEMAL() { return method_call(IKCADCGEMAL, ); } // 0x1548450
	void HLEINOFEMHD(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(HLEINOFEMHD, CAKODNGLPDF); } // 0x1547BE0
	void OOMLDILIPBI() { return method_call(OOMLDILIPBI, ); } // 0x154C2D0
	void DGCDJBOBKOC() { return method_call(DGCDJBOBKOC, ); } // 0x1544960
	struct IEnumerator* CKOGEDHPBIK(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(CKOGEDHPBIK, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1544370
	struct IEnumerator* BBBOPAPMEFC(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(BBBOPAPMEFC, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542ED0
	void LAKEJBJEEHG() { return method_call(LAKEJBJEEHG, ); } // 0x1549AD0
	void FLLKHEPFDLJ(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(FLLKHEPFDLJ, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1546A40
	void NGHDFJBDJDF() { return method_call(NGHDFJBDJDF, ); } // 0x154B260
	void BIDBBDLGPNB() { return method_call(BIDBBDLGPNB, ); } // 0x15430E0
	void FMGHIADHADN(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(FMGHIADHADN, CAKODNGLPDF); } // 0x1546DC0
	void LIKEBECMKDA(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(LIKEBECMKDA, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A830
	struct IEnumerator* FEOPEJAOKBJ(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(FEOPEJAOKBJ, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x15462E0
	void JNONHPFPLHH() { return method_call(JNONHPFPLHH, ); } // 0x1548CE0
	void BBDNPCHOHJG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(BBDNPCHOHJG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542F30
	void AJMPDEIBOCK() { return method_call(AJMPDEIBOCK, ); } // 0x1542470
	void DCKOIDOOGFI() { return method_call(DCKOIDOOGFI, ); } // 0x1544650
	void OKAIPMKIPHK(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(OKAIPMKIPHK, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A370
	void OHBLOBAPIFA() { return method_call(OHBLOBAPIFA, ); } // 0x154BF00
	void ANBJAIKJJAL() { return method_call(ANBJAIKJJAL, ); } // 0x1542A90
	struct IEnumerator* EJLDMKKKOGI(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(EJLDMKKKOGI, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1545F20
	void IHDOMMCJEII() { return method_call(IHDOMMCJEII, ); } // 0x1548000
	struct IEnumerator* JEAKOIAFFNN(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(JEAKOIAFFNN, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1548C80
	struct IEnumerator* AJCLBJGAALJ(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(AJCLBJGAALJ, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542410
	void GHAEOFPJNLC(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GHAEOFPJNLC, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547490
	struct IEnumerator* PEJKCBNEMPH(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(PEJKCBNEMPH, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C720
	void LFJAEGFHBMP(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(LFJAEGFHBMP, CAKODNGLPDF); } // 0x154A230
	struct IEnumerator* CFPKAAMDCCB(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(CFPKAAMDCCB, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x15442B0
	void PFDAKBEFIJB(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(PFDAKBEFIJB, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x15473C0
	void CMGEFKFNJOO(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(CMGEFKFNJOO, CAKODNGLPDF); } // 0x15443D0
	struct IEnumerator* HIFFIDDGBCD(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(HIFFIDDGBCD, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547B80
	void HNMMABKHMPO(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(HNMMABKHMPO, CAKODNGLPDF); } // 0x1547D20
	void LGGOFPNIKLP(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(LGGOFPNIKLP, CAKODNGLPDF); } // 0x154A3E0
	void CPFAFMEHPCP(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(CPFAFMEHPCP, CAKODNGLPDF); } // 0x1544510
	struct IEnumerator* PPGAKCGHNJF(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(PPGAKCGHNJF, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C7E0
	void LOEKBLPKCMA() { return method_call(LOEKBLPKCMA, ); } // 0x154AC10
	struct IEnumerator* OCBFJDBAEFC(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(OCBFJDBAEFC, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154BB90
	void FIFPFMOLOPK() { return method_call(FIFPFMOLOPK, ); } // 0x1546340
	struct IEnumerator* CINHLMKCLEJ(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(CINHLMKCLEJ, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1544310
	void DPNBFDBBJBJ() { return method_call(DPNBFDBBJBJ, ); } // 0x1545AD0
	void NIIAFIPOILA() { return method_call(NIIAFIPOILA, ); } // 0x154B570
	void HGJCLJIMICE(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(HGJCLJIMICE, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1546A40
	void MGJNJFIGOIE(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(MGJNJFIGOIE, CAKODNGLPDF); } // 0x154AF20
	void GDNLPIGIIBG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GDNLPIGIIBG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x15473C0
	struct IEnumerator* JCPDPOFILJG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(JCPDPOFILJG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1548C20
	void ILAEBJEPEBO(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(ILAEBJEPEBO, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1548760
	void GLBEKILPBGF(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GLBEKILPBGF, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542F30
	void LOBFJHEPKFD(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(LOBFJHEPKFD, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1548760
	struct IEnumerator* DIMHPAOJPEP(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(DIMHPAOJPEP, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1545000
	void JPGBGJIOADD() { return method_call(JPGBGJIOADD, ); } // 0x1548FF0
	struct IEnumerator* LJGDDLOPNOD(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(LJGDDLOPNOD, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A8A0
	void KLKFMJKOILG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(KLKFMJKOILG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1549750
	void IBKMICKDGDC(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(IBKMICKDGDC, CAKODNGLPDF); } // 0x1547EC0
	void LIFECOLDDHN() { return method_call(LIFECOLDDHN, ); } // 0x154A520
	void ONPHJHHGHJN(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(ONPHJHHGHJN, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A370
	void LFPEIIEGEEM(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(LFPEIIEGEEM, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A370
	void BMBLDOJKHOP() { return method_call(BMBLDOJKHOP, ); } // 0x1543530
	void CCPOBHKEILP() { return method_call(CCPOBHKEILP, ); } // 0x1543B50
	struct IEnumerator* GEBFCBHGKDA(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GEBFCBHGKDA, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547430
	void DKIGBFCJNIH() { return method_call(DKIGBFCJNIH, ); } // 0x1545060
	void NKBCFAIEJMF() { return method_call(NKBCFAIEJMF, ); } // 0x154B880
	void EJNJHHDBOJN(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(EJNJHHDBOJN, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1545F80
	void HCGACOONMAB() { return method_call(HCGACOONMAB, ); } // 0x1547810
	void JGGMFHCNMBL(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(JGGMFHCNMBL, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547350
	struct IEnumerator* NGAGNLLCHCD(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(NGAGNLLCHCD, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154B200
	void ALKHNDDOHME() { return method_call(ALKHNDDOHME, ); } // 0x1542780
	void CAPJDOFODJD() { return method_call(CAPJDOFODJD, ); } // 0x1543840
	void IPCAGIGBPOK(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(IPCAGIGBPOK, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1544C70
	void EDMBOBMDIEH(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(EDMBOBMDIEH, CAKODNGLPDF); } // 0x1545DE0
	void FixedUpdate() { return method_call(FixedUpdate, ); } // 0x1547040
	void IHEPMOLMEOE(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(IHEPMOLMEOE, CAKODNGLPDF); } // 0x1548310
	void FLDJJGPFEMB(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(FLDJJGPFEMB, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x15466C0
	void PJPMLBFIOPA(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(PJPMLBFIOPA, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547490
	void DOHFGCPPGBP() { return method_call(DOHFGCPPGBP, ); } // 0x15457C0
	void ONJLNHNNDFN(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(ONJLNHNNDFN, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A830
	void JPLMDDAFMJA() { return method_call(JPLMDDAFMJA, ); } // 0x1549300
	struct IEnumerator* HHHJGHBBAKB(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(HHHJGHBBAKB, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547B20
	void EAGHLNJBDLP(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(EAGHLNJBDLP, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542E60
	void FMPNJIACOJO(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(FMPNJIACOJO, CAKODNGLPDF); } // 0x1546F00
	void BAGDKBOHBKF(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(BAGDKBOHBKF, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542E60
	struct IEnumerator* HOFCCEPKLKL(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(HOFCCEPKLKL, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547E60
	void LEFNAHAOIMD(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(LEFNAHAOIMD, CAKODNGLPDF); } // 0x154A0F0
	struct IEnumerator* BADPDNHEGIG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(BADPDNHEGIG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542E00
	void EPHHMKGLFMB(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(EPHHMKGLFMB, CAKODNGLPDF); } // 0x15461A0
	void HBKEJAFCIIF() { return method_call(HBKEJAFCIIF, ); } // 0x1547500
	struct IEnumerator* MIMMAMFDGOG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(MIMMAMFDGOG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154B060
	void FONKAKIBFDE(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(FONKAKIBFDE, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542E60
	void KMNODLOPCIF() { return method_call(KMNODLOPCIF, ); } // 0x15497C0
	void INNMBKPANOJ() { return method_call(INNMBKPANOJ, ); } // 0x15487D0
	void FMFBIHCHKLN() { return method_call(FMFBIHCHKLN, ); } // 0x1546AB0
	void GIAACNOFIGC(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GIAACNOFIGC, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547350
	void DLENILDKIDA() { return method_call(DLENILDKIDA, ); } // 0x1545370
	void DMPIDEHEOFP(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(DMPIDEHEOFP, CAKODNGLPDF); } // 0x1545680
	void LBAKJNMPBLA() { return method_call(LBAKJNMPBLA, ); } // 0x1549DE0
	void EKPFFCJPOPN(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(EKPFFCJPOPN, CAKODNGLPDF); } // 0x1545FF0
	void CDJMGKPEJCK() { return method_call(CDJMGKPEJCK, ); } // 0x1543FA0
	void JBHECMCEELI(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(JBHECMCEELI, CAKODNGLPDF); } // 0x1548AE0
	void GDEBIAIHGEH(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(GDEBIAIHGEH, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1547350
	struct IEnumerator* PNPDKINHIKE(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(PNPDKINHIKE, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C780
	void NAJOGLLBPBI(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(NAJOGLLBPBI, CAKODNGLPDF); } // 0x154B0C0
	void _ctor() { return method_call(_ctor, ); } // 0x154C8B0
	struct IEnumerator* APLKFMCFGGG(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(APLKFMCFGGG, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1542DA0
	void EMDAAOFJOCF(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(EMDAAOFJOCF, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1546130
	void ADJHEIBAFCP() { return method_call(ADJHEIBAFCP, ); } // 0x1541DF0
	void OCKGPPICEBB() { return method_call(OCKGPPICEBB, ); } // 0x154BBF0
	struct IEnumerator* OOGADBLMEOM(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(OOGADBLMEOM, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C270
	void LNMGBDIOJLK() { return method_call(LNMGBDIOJLK, ); } // 0x154A900
	void FLHJDJGNGPL() { return method_call(FLHJDJGNGPL, ); } // 0x1546730
	void DHHGHDEDALE(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(DHHGHDEDALE, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1544C70
	void DHHLNGEEDOD() { return method_call(DHHLNGEEDOD, ); } // 0x1544CE0
	void AICFIHIHHIM() { return method_call(AICFIHIHHIM, ); } // 0x1542100
	void FIKEHNEFJMM(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(FIKEHNEFJMM, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x1546650
	void KJNBCMGOCPL(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(KJNBCMGOCPL, CAKODNGLPDF); } // 0x1549610
	void OJDLKJKNGAP(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(OJDLKJKNGAP, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154A370
	void BLAFCALNALC(Unity::MonoBehaviour* CAKODNGLPDF) { return method_call(BLAFCALNALC, CAKODNGLPDF); } // 0x15433F0
	void ShakeScreen(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(ShakeScreen, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C840
	struct IEnumerator* OHEFILGOEED(float KNJBBEFMHBI, float JPHNCOBPLAG) { return method_call(OHEFILGOEED, KNJBBEFMHBI, JPHNCOBPLAG); } // 0x154C210
};
namespace ark::method_info
{

	method_rva(FollowCamera::OPAKPELBGNB, 0x154C5E0)
	method_rva(FollowCamera::BGHPMABBNOC, 0x1542FA0)
	method_rva(FollowCamera::CDGBALKKEBK, 0x1543E60)
	method_rva(FollowCamera::IKCADCGEMAL, 0x1548450)
	method_rva(FollowCamera::HLEINOFEMHD, 0x1547BE0)
	method_rva(FollowCamera::OOMLDILIPBI, 0x154C2D0)
	method_rva(FollowCamera::DGCDJBOBKOC, 0x1544960)
	method_rva(FollowCamera::CKOGEDHPBIK, 0x1544370)
	method_rva(FollowCamera::BBBOPAPMEFC, 0x1542ED0)
	method_rva(FollowCamera::LAKEJBJEEHG, 0x1549AD0)
	method_rva(FollowCamera::FLLKHEPFDLJ, 0x1546A40)
	method_rva(FollowCamera::NGHDFJBDJDF, 0x154B260)
	method_rva(FollowCamera::BIDBBDLGPNB, 0x15430E0)
	method_rva(FollowCamera::FMGHIADHADN, 0x1546DC0)
	method_rva(FollowCamera::LIKEBECMKDA, 0x154A830)
	method_rva(FollowCamera::FEOPEJAOKBJ, 0x15462E0)
	method_rva(FollowCamera::JNONHPFPLHH, 0x1548CE0)
	method_rva(FollowCamera::BBDNPCHOHJG, 0x1542F30)
	method_rva(FollowCamera::AJMPDEIBOCK, 0x1542470)
	method_rva(FollowCamera::DCKOIDOOGFI, 0x1544650)
	method_rva(FollowCamera::OKAIPMKIPHK, 0x154A370)
	method_rva(FollowCamera::OHBLOBAPIFA, 0x154BF00)
	method_rva(FollowCamera::ANBJAIKJJAL, 0x1542A90)
	method_rva(FollowCamera::EJLDMKKKOGI, 0x1545F20)
	method_rva(FollowCamera::IHDOMMCJEII, 0x1548000)
	method_rva(FollowCamera::JEAKOIAFFNN, 0x1548C80)
	method_rva(FollowCamera::AJCLBJGAALJ, 0x1542410)
	method_rva(FollowCamera::GHAEOFPJNLC, 0x1547490)
	method_rva(FollowCamera::PEJKCBNEMPH, 0x154C720)
	method_rva(FollowCamera::LFJAEGFHBMP, 0x154A230)
	method_rva(FollowCamera::CFPKAAMDCCB, 0x15442B0)
	method_rva(FollowCamera::PFDAKBEFIJB, 0x15473C0)
	method_rva(FollowCamera::CMGEFKFNJOO, 0x15443D0)
	method_rva(FollowCamera::HIFFIDDGBCD, 0x1547B80)
	method_rva(FollowCamera::HNMMABKHMPO, 0x1547D20)
	method_rva(FollowCamera::LGGOFPNIKLP, 0x154A3E0)
	method_rva(FollowCamera::CPFAFMEHPCP, 0x1544510)
	method_rva(FollowCamera::PPGAKCGHNJF, 0x154C7E0)
	method_rva(FollowCamera::LOEKBLPKCMA, 0x154AC10)
	method_rva(FollowCamera::OCBFJDBAEFC, 0x154BB90)
	method_rva(FollowCamera::FIFPFMOLOPK, 0x1546340)
	method_rva(FollowCamera::CINHLMKCLEJ, 0x1544310)
	method_rva(FollowCamera::DPNBFDBBJBJ, 0x1545AD0)
	method_rva(FollowCamera::NIIAFIPOILA, 0x154B570)
	method_rva(FollowCamera::HGJCLJIMICE, 0x1546A40)
	method_rva(FollowCamera::MGJNJFIGOIE, 0x154AF20)
	method_rva(FollowCamera::GDNLPIGIIBG, 0x15473C0)
	method_rva(FollowCamera::JCPDPOFILJG, 0x1548C20)
	method_rva(FollowCamera::ILAEBJEPEBO, 0x1548760)
	method_rva(FollowCamera::GLBEKILPBGF, 0x1542F30)
	method_rva(FollowCamera::LOBFJHEPKFD, 0x1548760)
	method_rva(FollowCamera::DIMHPAOJPEP, 0x1545000)
	method_rva(FollowCamera::JPGBGJIOADD, 0x1548FF0)
	method_rva(FollowCamera::LJGDDLOPNOD, 0x154A8A0)
	method_rva(FollowCamera::KLKFMJKOILG, 0x1549750)
	method_rva(FollowCamera::IBKMICKDGDC, 0x1547EC0)
	method_rva(FollowCamera::LIFECOLDDHN, 0x154A520)
	method_rva(FollowCamera::ONPHJHHGHJN, 0x154A370)
	method_rva(FollowCamera::LFPEIIEGEEM, 0x154A370)
	method_rva(FollowCamera::BMBLDOJKHOP, 0x1543530)
	method_rva(FollowCamera::CCPOBHKEILP, 0x1543B50)
	method_rva(FollowCamera::GEBFCBHGKDA, 0x1547430)
	method_rva(FollowCamera::DKIGBFCJNIH, 0x1545060)
	method_rva(FollowCamera::NKBCFAIEJMF, 0x154B880)
	method_rva(FollowCamera::EJNJHHDBOJN, 0x1545F80)
	method_rva(FollowCamera::HCGACOONMAB, 0x1547810)
	method_rva(FollowCamera::JGGMFHCNMBL, 0x1547350)
	method_rva(FollowCamera::NGAGNLLCHCD, 0x154B200)
	method_rva(FollowCamera::ALKHNDDOHME, 0x1542780)
	method_rva(FollowCamera::CAPJDOFODJD, 0x1543840)
	method_rva(FollowCamera::IPCAGIGBPOK, 0x1544C70)
	method_rva(FollowCamera::EDMBOBMDIEH, 0x1545DE0)
	method_rva(FollowCamera::FixedUpdate, 0x1547040)
	method_rva(FollowCamera::IHEPMOLMEOE, 0x1548310)
	method_rva(FollowCamera::FLDJJGPFEMB, 0x15466C0)
	method_rva(FollowCamera::PJPMLBFIOPA, 0x1547490)
	method_rva(FollowCamera::DOHFGCPPGBP, 0x15457C0)
	method_rva(FollowCamera::ONJLNHNNDFN, 0x154A830)
	method_rva(FollowCamera::JPLMDDAFMJA, 0x1549300)
	method_rva(FollowCamera::HHHJGHBBAKB, 0x1547B20)
	method_rva(FollowCamera::EAGHLNJBDLP, 0x1542E60)
	method_rva(FollowCamera::FMPNJIACOJO, 0x1546F00)
	method_rva(FollowCamera::BAGDKBOHBKF, 0x1542E60)
	method_rva(FollowCamera::HOFCCEPKLKL, 0x1547E60)
	method_rva(FollowCamera::LEFNAHAOIMD, 0x154A0F0)
	method_rva(FollowCamera::BADPDNHEGIG, 0x1542E00)
	method_rva(FollowCamera::EPHHMKGLFMB, 0x15461A0)
	method_rva(FollowCamera::HBKEJAFCIIF, 0x1547500)
	method_rva(FollowCamera::MIMMAMFDGOG, 0x154B060)
	method_rva(FollowCamera::FONKAKIBFDE, 0x1542E60)
	method_rva(FollowCamera::KMNODLOPCIF, 0x15497C0)
	method_rva(FollowCamera::INNMBKPANOJ, 0x15487D0)
	method_rva(FollowCamera::FMFBIHCHKLN, 0x1546AB0)
	method_rva(FollowCamera::GIAACNOFIGC, 0x1547350)
	method_rva(FollowCamera::DLENILDKIDA, 0x1545370)
	method_rva(FollowCamera::DMPIDEHEOFP, 0x1545680)
	method_rva(FollowCamera::LBAKJNMPBLA, 0x1549DE0)
	method_rva(FollowCamera::EKPFFCJPOPN, 0x1545FF0)
	method_rva(FollowCamera::CDJMGKPEJCK, 0x1543FA0)
	method_rva(FollowCamera::JBHECMCEELI, 0x1548AE0)
	method_rva(FollowCamera::GDEBIAIHGEH, 0x1547350)
	method_rva(FollowCamera::PNPDKINHIKE, 0x154C780)
	method_rva(FollowCamera::NAJOGLLBPBI, 0x154B0C0)
	method_rva(FollowCamera::_ctor, 0x154C8B0)
	method_rva(FollowCamera::APLKFMCFGGG, 0x1542DA0)
	method_rva(FollowCamera::EMDAAOFJOCF, 0x1546130)
	method_rva(FollowCamera::ADJHEIBAFCP, 0x1541DF0)
	method_rva(FollowCamera::OCKGPPICEBB, 0x154BBF0)
	method_rva(FollowCamera::OOGADBLMEOM, 0x154C270)
	method_rva(FollowCamera::LNMGBDIOJLK, 0x154A900)
	method_rva(FollowCamera::FLHJDJGNGPL, 0x1546730)
	method_rva(FollowCamera::DHHGHDEDALE, 0x1544C70)
	method_rva(FollowCamera::DHHLNGEEDOD, 0x1544CE0)
	method_rva(FollowCamera::AICFIHIHHIM, 0x1542100)
	method_rva(FollowCamera::FIKEHNEFJMM, 0x1546650)
	method_rva(FollowCamera::KJNBCMGOCPL, 0x1549610)
	method_rva(FollowCamera::OJDLKJKNGAP, 0x154A370)
	method_rva(FollowCamera::BLAFCALNALC, 0x15433F0)
	method_rva(FollowCamera::ShakeScreen, 0x154C840)
	method_rva(FollowCamera::OHEFILGOEED, 0x154C210)
}
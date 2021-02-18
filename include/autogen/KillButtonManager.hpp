#pragma once

#include <ark/class.hpp>
#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Vector2.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>

// KillButtonManager
struct KillButtonManager : ark::meta<KillButtonManager, UnityEngine::MonoBehaviour> // TypeDefIndex: 8657
{
	ark_meta("", "MLPJGKEACMM");
    
	struct PlayerControl* CurrentTarget; // 0xC
	struct SpriteRenderer* renderer; // 0x10
	UnityEngine::TextRenderer* TimerText; // 0x14
	bool isCoolingDown; // 0x18
	bool isActive; // 0x19
	UnityEngine::Vector2 FFHAJFJBHHN; // 0x1C

	void CGEIAPGMDII(PlayerControl* target) { method_call(CGEIAPGMDII, target); } // 0xFE3E00 
	void DCJEMIAHHGN() { method_call(DCJEMIAHHGN); } // 0xFE4730
	void IOBIAJJHLOK(PlayerControl* target) { method_call(IOBIAJJHLOK, target); } // 0xFEA110 
	void NJMLBEFFOHG() { method_call(NJMLBEFFOHG); } // 0xFEDA90
	void MDDEEBBAMMO() { method_call(MDDEEBBAMMO); } // 0xFEC470
	void HEMBMMBJOBF(float JECMPCICNEB, float HFOEEFJGACL) { method_call(HEMBMMBJOBF, JECMPCICNEB, HFOEEFJGACL); } // 0xFE82C0 
	void FEOBKBAPPBK(float JECMPCICNEB, float HFOEEFJGACL) { method_call(FEOBKBAPPBK, JECMPCICNEB, HFOEEFJGACL); } // 0xFE6A40 
	void SetCoolDown(float JECMPCICNEB, float HFOEEFJGACL) { method_call(SetCoolDown, JECMPCICNEB, HFOEEFJGACL); } // 0xFEF310 
	void NMHAADCCMAL() { method_call(NMHAADCCMAL); } // 0xFEDAC0
	void BKEFJENDAAG() { method_call(BKEFJENDAAG); } // 0xFE3460
	void IOJIGGFNCLP() { method_call(IOJIGGFNCLP); } // 0xFEA670
	void GBFBBAOBNLD(float JECMPCICNEB, float HFOEEFJGACL) { method_call(GBFBBAOBNLD, JECMPCICNEB, HFOEEFJGACL); } // 0xFE76B0 
	void PINJFKJFOLG(PlayerControl* target) { method_call(PINJFKJFOLG, target); } // 0xFEEDD0 
	void GEAMLBMLBKJ() { method_call(GEAMLBMLBKJ); } // 0xFE7980
	void NEHOOFBNKAM(PlayerControl* target) { method_call(NEHOOFBNKAM, target); } // 0xFED540 
	void JBHECMCEELI(PlayerControl* target) { method_call(JBHECMCEELI, target); } // 0xFEA7C0 
	void FAAAHOFCALK() { method_call(FAAAHOFCALK); } // 0xFE69E0
	void LOAFEENHGGI(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LOAFEENHGGI, JECMPCICNEB, HFOEEFJGACL); } // 0xFEC2F0 
	void ICOIIDLILIL(PlayerControl* target) { method_call(ICOIIDLILIL, target); } // 0xFE9090 
	void GPBEHNCCDMP(float JECMPCICNEB, float HFOEEFJGACL) { method_call(GPBEHNCCDMP, JECMPCICNEB, HFOEEFJGACL); } // 0xFE7C80 
	void FGENEIOAACA(PlayerControl* target) { method_call(FGENEIOAACA, target); } // 0xFE6BC0 
	void MILOGABJNKH(PlayerControl* target) { method_call(MILOGABJNKH, target); } // 0xFECA00 
	void SetTarget(PlayerControl* target) { method_call(SetTarget, target); } // 0xFEF4B0 
	void ONIGNKDLJMI() { method_call(ONIGNKDLJMI); } // 0xFEE300
	void CDABPHHIDKJ(PlayerControl* target) { method_call(CDABPHHIDKJ, target); } // 0xFE3890 
	void LALPBDHDMLD() { method_call(LALPBDHDMLD); } // 0xFEB710
	void DPHJENNMDKC(PlayerControl* target) { method_call(DPHJENNMDKC, target); } // 0xFE5390 
	void LMGJOLLIDNF() { method_call(LMGJOLLIDNF); } // 0xFEBFF0
	void ELGPMALFKPE(float JECMPCICNEB, float HFOEEFJGACL) { method_call(ELGPMALFKPE, JECMPCICNEB, HFOEEFJGACL); } // 0xFE6500 
	void IMMDNFFDDEN() { method_call(IMMDNFFDDEN); } // 0xFE9FC0
	void IFABKDAAGEF(float JECMPCICNEB, float HFOEEFJGACL) { method_call(IFABKDAAGEF, JECMPCICNEB, HFOEEFJGACL); } // 0xFE94C0 
	void NAKBHCPBDNI() { method_call(NAKBHCPBDNI); } // 0xFED3F0
	void HBPBLPMDAMI(float JECMPCICNEB, float HFOEEFJGACL) { method_call(HBPBLPMDAMI, JECMPCICNEB, HFOEEFJGACL); } // 0xFE8110 
	void NLBHELHCANH() { method_call(NLBHELHCANH); } // 0xFE3460
	void GCFHPFPFJFD() { method_call(GCFHPFPFJFD); } // 0xFE7830
	void LBEIHKAKJAG() { method_call(LBEIHKAKJAG); } // 0xFEB860
	void ALNANDOFDLN() { method_call(ALNANDOFDLN); } // 0xFE2C00
	void BIMGNLLOKAP(PlayerControl* target) { method_call(BIMGNLLOKAP, target); } // 0xFE31B0 
	void ILIFILLHGOD() { method_call(ILIFILLHGOD); } // 0xFE9BC0
	void AHCDCAHLGOL() { method_call(AHCDCAHLGOL); } // 0xFE2BA0
	void JFIHOAOKCNH() { method_call(JFIHOAOKCNH); } // 0xFEAA60
	void IOIBOGKBIHK(PlayerControl* target) { method_call(IOIBOGKBIHK, target); } // 0xFEA3C0 
	void EKPFFCJPOPN(PlayerControl* target) { method_call(EKPFFCJPOPN, target); } // 0xFE6260 
	void PBOFAHCIJPH() { method_call(PBOFAHCIJPH); } // 0xFEE480
	void ALCLBLEKNBE() { method_call(ALCLBLEKNBE); } // 0xFE2BD0
	void FDDNEFODBMF() { method_call(FDDNEFODBMF); } // 0xFE6A10
	void NFMMPKBDMIK(PlayerControl* target) { method_call(NFMMPKBDMIK, target); } // 0xFED7F0 
	void IEHFIMCKDLA() { method_call(IEHFIMCKDLA); } // 0xFE9490
	void IMJFLAFMELJ(PlayerControl* target) { method_call(IMJFLAFMELJ, target); } // 0xFE9D10 
	void CDGBALKKEBK(PlayerControl* target) { method_call(CDGBALKKEBK, target); } // 0xFE3B30 
	void Start() { method_call(Start); } // 0xFEF750
	void MKKDAJKLBGG(float JECMPCICNEB, float HFOEEFJGACL) { method_call(MKKDAJKLBGG, JECMPCICNEB, HFOEEFJGACL); } // 0xFECCB0 
	void EHDENINNAGG(PlayerControl* target) { method_call(EHDENINNAGG, target); } // 0xFE5D00 
	void KJNBCMGOCPL(PlayerControl* target) { method_call(KJNBCMGOCPL, target); } // 0xFEB440 
	void CMMOJDLMFLJ(PlayerControl* target) { method_call(CMMOJDLMFLJ, target); } // 0xFE4490 
	void EBFFKEDKJKI(PlayerControl* target) { method_call(EBFFKEDKJKI, target); } // 0xFE5A60 
	void LBCCCPAFOAF() { method_call(LBCCCPAFOAF); } // 0xFE9060
	void MLJDIOPOBIM() { method_call(MLJDIOPOBIM); } // 0xFED100
	void ONAFPLJEFOH(PlayerControl* target) { method_call(ONAFPLJEFOH, target); } // 0xFEE060 
	void GADBFDHPJOA() { method_call(GADBFDHPJOA); } // 0xFE7560
	void PHIJHNPBBNJ(PlayerControl* target) { method_call(PHIJHNPBBNJ, target); } // 0xFEE5D0 
	void CHIKPIBNIKP() { method_call(CHIKPIBNIKP); } // 0xFE40A0
	void CIOGPOHCAJI(PlayerControl* target) { method_call(CIOGPOHCAJI, target); } // 0xFE41F0 
	void ICIDJPPIEMH() { method_call(ICIDJPPIEMH); } // 0xFE9060
	void DFLMMDADCLO() { method_call(DFLMMDADCLO); } // 0xFE48B0
	void GMELBMMPFCH() { method_call(GMELBMMPFCH); } // 0xFE7AD0
	void DFKKGMCIPPJ() { method_call(DFKKGMCIPPJ); } // 0xFE4880
	void HNMMABKHMPO(PlayerControl* target) { method_call(HNMMABKHMPO, target); } // 0xFE8730 
	void PerformKill() { method_call(PerformKill); } // 0xFEF1C0
	void FMGHIADHADN(PlayerControl* target) { method_call(FMGHIADHADN, target); } // 0xFE7000 
	void LNPMLABILFG() { method_call(LNPMLABILFG); } // 0xFEC1A0
	void KFFMHBJGBJH(float JECMPCICNEB, float HFOEEFJGACL) { method_call(KFFMHBJGBJH, JECMPCICNEB, HFOEEFJGACL); } // 0xFEAFB0 
	void LBMHGFDKCBC(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LBMHGFDKCBC, JECMPCICNEB, HFOEEFJGACL); } // 0xFEB9B0 
	void PIFCCPALNEB() { method_call(PIFCCPALNEB); } // 0xFEE9D0
	void MDLFNEAMGBN() { method_call(MDLFNEAMGBN); } // 0xFEC5C0
	void OFEPDIIEHFN() { method_call(OFEPDIIEHFN); } // 0xFE2BA0
	void BEMDMJCNIML(PlayerControl* target) { method_call(BEMDMJCNIML, target); } // 0xFE2F00 
	void HEIELFJACDO() { method_call(HEIELFJACDO); } // 0xFE8290
	void FJNAIMPIPBB(float JECMPCICNEB, float HFOEEFJGACL) { method_call(FJNAIMPIPBB, JECMPCICNEB, HFOEEFJGACL); } // 0xFE6E60 
	void JKCNIDKNPNP(PlayerControl* target) { method_call(JKCNIDKNPNP, target); } // 0xFEAD00 
	void HODFDEPPGEM() { method_call(HODFDEPPGEM); } // 0xFE89D0
	void HJACJOPLHNN() { method_call(HJACJOPLHNN); } // 0xFE8460
	void BLBEPEIHDHG(PlayerControl* target) { method_call(BLBEPEIHDHG, target); } // 0xFE35E0 
	void MOHKKFBPNBN(float JECMPCICNEB, float HFOEEFJGACL) { method_call(MOHKKFBPNBN, JECMPCICNEB, HFOEEFJGACL); } // 0xFED250 
	void MKNNHHDCNGH(PlayerControl* target) { method_call(MKNNHHDCNGH, target); } // 0xFECE50 
	void _ctor() { method_call(_ctor); } // 0xFEF780
	void LCODNOLLBHL(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LCODNOLLBHL, JECMPCICNEB, HFOEEFJGACL); } // 0xFEBB50 
	void KKIEJMMBIML() { method_call(KKIEJMMBIML); } // 0xFEB6E0
	void IBKMICKDGDC(PlayerControl* target) { method_call(IBKMICKDGDC, target); } // 0xFE8DC0 
	void EHFOMPJMDLI(PlayerControl* target) { method_call(EHFOMPJMDLI, target); } // 0xFE5FB0 
	void EAFOGADAGAO(PlayerControl* target) { method_call(EAFOGADAGAO, target); } // 0xFE57B0 
	void DLIJPGPLGLK() { method_call(DLIJPGPLGLK); } // 0xFE4DF0
	void DIBKOBBNDBF() { method_call(DIBKOBBNDBF); } // 0xFE4A00
	void PIMPJPCIIEI(PlayerControl* target) { method_call(PIMPJPCIIEI, target); } // 0xFEEB20 
	void LCPACFOGALG(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LCPACFOGALG, JECMPCICNEB, HFOEEFJGACL); } // 0xFEBCF0 
	void EODLNPADJAJ(float JECMPCICNEB, float HFOEEFJGACL) { method_call(EODLNPADJAJ, JECMPCICNEB, HFOEEFJGACL); } // 0xFE6840 
	void KHMPMMGCEAM() { method_call(KHMPMMGCEAM); } // 0xFEB2F0
	void HACBNGPDNFE(float JECMPCICNEB, float HFOEEFJGACL) { method_call(HACBNGPDNFE, JECMPCICNEB, HFOEEFJGACL); } // 0xFE7F70 
	void OKHGJKFLIIC() { method_call(OKHGJKFLIIC); } // 0xFEE030
	void PHLEEOOJLDA() { method_call(PHLEEOOJLDA); } // 0xFEE880
	void AAHIPCOGAOI() { method_call(AAHIPCOGAOI); } // 0xFE27B0
	void IHEPMOLMEOE(PlayerControl* target) { method_call(IHEPMOLMEOE, target); } // 0xFE9660 
	void MEBGPEDIHCI() { method_call(MEBGPEDIHCI); } // 0xFEC710
	void JELAGOBFILF() { method_call(JELAGOBFILF); } // 0xFE2BD0
	void OGPANBBKNOL(float JECMPCICNEB, float HFOEEFJGACL) { method_call(OGPANBBKNOL, JECMPCICNEB, HFOEEFJGACL); } // 0xFEDD60 
	void FPGIFILHKDL(PlayerControl* target) { method_call(FPGIFILHKDL, target); } // 0xFE72B0 
	void CFJPLBHEEEF() { method_call(CFJPLBHEEEF); } // 0xFE3DD0
	void ODHHGGOOEEE() { method_call(ODHHGGOOEEE); } // 0xFEDC10
	void IAPONFCIHPK(PlayerControl* target) { method_call(IAPONFCIHPK, target); } // 0xFE8B20 
	void NCDBPLGIFLP() { method_call(NCDBPLGIFLP); } // 0xFE3460
	void OIKHFDLOGIN() { method_call(OIKHFDLOGIN); } // 0xFEDEE0
	void GNHMPKJPKDA() { method_call(GNHMPKJPKDA); } // 0xFE7B00
	void GOPHPINHBMD() { method_call(GOPHPINHBMD); } // 0xFE7B30
	void PLBBLPNNHPP() { method_call(PLBBLPNNHPP); } // 0xFEF070
	void JIJDGPECKEJ() { method_call(JIJDGPECKEJ); } // 0xFEABB0
	void DIFAMIEBMGD() { method_call(DIFAMIEBMGD); } // 0xFE4B50
	void KFNAHOMGAOM(float JECMPCICNEB, float HFOEEFJGACL) { method_call(KFNAHOMGAOM, JECMPCICNEB, HFOEEFJGACL); } // 0xFEB150 
	void BCKEEJJJEGH() { method_call(BCKEEJJJEGH); } // 0xFE2ED0
	void IKNMGKBKCHO(PlayerControl* target) { method_call(IKNMGKBKCHO, target); } // 0xFE9910 
	void AAIFMJCAOBC(PlayerControl* target) { method_call(AAIFMJCAOBC, target); } // 0xFE2900 
	void DPLCKCJECJM(float JECMPCICNEB, float HFOEEFJGACL) { method_call(DPLCKCJECJM, JECMPCICNEB, HFOEEFJGACL); } // 0xFE5630 
	void DOJKAGBLGPA(float JECMPCICNEB, float HFOEEFJGACL) { method_call(DOJKAGBLGPA, JECMPCICNEB, HFOEEFJGACL); } // 0xFE51F0 
	void BKJGHKFAHCD() { method_call(BKJGHKFAHCD); } // 0xFE3490
	void HLMPGLJAHON(PlayerControl* target) { method_call(HLMPGLJAHON, target); } // 0xFE8490 
	void ENPNJMKCHAE(float JECMPCICNEB, float HFOEEFJGACL) { method_call(ENPNJMKCHAE, JECMPCICNEB, HFOEEFJGACL); } // 0xFE66A0 
	void DJNPHMLOEEC() { method_call(DJNPHMLOEEC); } // 0xFE4CA0
	void PABBIMAKEOI() { method_call(PABBIMAKEOI); } // 0xFEE330
	void LIANNOPEPMH(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LIANNOPEPMH, JECMPCICNEB, HFOEEFJGACL); } // 0xFEBE70 
	void DMPIDEHEOFP(PlayerControl* target) { method_call(DMPIDEHEOFP, target); } // 0xFE4F40 
	void AODFPKJJBFH(float JECMPCICNEB, float HFOEEFJGACL) { method_call(AODFPKJJBFH, JECMPCICNEB, HFOEEFJGACL); } // 0xFE2D50 
	void IDAEECPGOPC() { method_call(IDAEECPGOPC); } // 0xFE9340
	void LMMIKHGEPBI(float JECMPCICNEB, float HFOEEFJGACL) { method_call(LMMIKHGEPBI, JECMPCICNEB, HFOEEFJGACL); } // 0xFEC020 
	void MFIGMHGMDGN(float JECMPCICNEB, float HFOEEFJGACL) { method_call(MFIGMHGMDGN, JECMPCICNEB, HFOEEFJGACL); } // 0xFEC860 
	void GPOJGIJFKMP() { method_call(GPOJGIJFKMP); } // 0xFE7E20
};
namespace ark::method_info
{

	method_rva(KillButtonManager::CGEIAPGMDII, 0xFE3E00)
	method_rva(KillButtonManager::DCJEMIAHHGN, 0xFE4730)
	method_rva(KillButtonManager::IOBIAJJHLOK, 0xFEA110)
	method_rva(KillButtonManager::NJMLBEFFOHG, 0xFEDA90)
	method_rva(KillButtonManager::MDDEEBBAMMO, 0xFEC470)
	method_rva(KillButtonManager::HEMBMMBJOBF, 0xFE82C0)
	method_rva(KillButtonManager::FEOBKBAPPBK, 0xFE6A40)
	method_rva(KillButtonManager::SetCoolDown, 0xFEF310)
	method_rva(KillButtonManager::NMHAADCCMAL, 0xFEDAC0)
	method_rva(KillButtonManager::BKEFJENDAAG, 0xFE3460)
	method_rva(KillButtonManager::IOJIGGFNCLP, 0xFEA670)
	method_rva(KillButtonManager::GBFBBAOBNLD, 0xFE76B0)
	method_rva(KillButtonManager::PINJFKJFOLG, 0xFEEDD0)
	method_rva(KillButtonManager::GEAMLBMLBKJ, 0xFE7980)
	method_rva(KillButtonManager::NEHOOFBNKAM, 0xFED540)
	method_rva(KillButtonManager::JBHECMCEELI, 0xFEA7C0)
	method_rva(KillButtonManager::FAAAHOFCALK, 0xFE69E0)
	method_rva(KillButtonManager::LOAFEENHGGI, 0xFEC2F0)
	method_rva(KillButtonManager::ICOIIDLILIL, 0xFE9090)
	method_rva(KillButtonManager::GPBEHNCCDMP, 0xFE7C80)
	method_rva(KillButtonManager::FGENEIOAACA, 0xFE6BC0)
	method_rva(KillButtonManager::MILOGABJNKH, 0xFECA00)
	method_rva(KillButtonManager::SetTarget, 0xFEF4B0)
	method_rva(KillButtonManager::ONIGNKDLJMI, 0xFEE300)
	method_rva(KillButtonManager::CDABPHHIDKJ, 0xFE3890)
	method_rva(KillButtonManager::LALPBDHDMLD, 0xFEB710)
	method_rva(KillButtonManager::DPHJENNMDKC, 0xFE5390)
	method_rva(KillButtonManager::LMGJOLLIDNF, 0xFEBFF0)
	method_rva(KillButtonManager::ELGPMALFKPE, 0xFE6500)
	method_rva(KillButtonManager::IMMDNFFDDEN, 0xFE9FC0)
	method_rva(KillButtonManager::IFABKDAAGEF, 0xFE94C0)
	method_rva(KillButtonManager::NAKBHCPBDNI, 0xFED3F0)
	method_rva(KillButtonManager::HBPBLPMDAMI, 0xFE8110)
	method_rva(KillButtonManager::NLBHELHCANH, 0xFE3460)
	method_rva(KillButtonManager::GCFHPFPFJFD, 0xFE7830)
	method_rva(KillButtonManager::LBEIHKAKJAG, 0xFEB860)
	method_rva(KillButtonManager::ALNANDOFDLN, 0xFE2C00)
	method_rva(KillButtonManager::BIMGNLLOKAP, 0xFE31B0)
	method_rva(KillButtonManager::ILIFILLHGOD, 0xFE9BC0)
	method_rva(KillButtonManager::AHCDCAHLGOL, 0xFE2BA0)
	method_rva(KillButtonManager::JFIHOAOKCNH, 0xFEAA60)
	method_rva(KillButtonManager::IOIBOGKBIHK, 0xFEA3C0)
	method_rva(KillButtonManager::EKPFFCJPOPN, 0xFE6260)
	method_rva(KillButtonManager::PBOFAHCIJPH, 0xFEE480)
	method_rva(KillButtonManager::ALCLBLEKNBE, 0xFE2BD0)
	method_rva(KillButtonManager::FDDNEFODBMF, 0xFE6A10)
	method_rva(KillButtonManager::NFMMPKBDMIK, 0xFED7F0)
	method_rva(KillButtonManager::IEHFIMCKDLA, 0xFE9490)
	method_rva(KillButtonManager::IMJFLAFMELJ, 0xFE9D10)
	method_rva(KillButtonManager::CDGBALKKEBK, 0xFE3B30)
	method_rva(KillButtonManager::Start, 0xFEF750)
	method_rva(KillButtonManager::MKKDAJKLBGG, 0xFECCB0)
	method_rva(KillButtonManager::EHDENINNAGG, 0xFE5D00)
	method_rva(KillButtonManager::KJNBCMGOCPL, 0xFEB440)
	method_rva(KillButtonManager::CMMOJDLMFLJ, 0xFE4490)
	method_rva(KillButtonManager::EBFFKEDKJKI, 0xFE5A60)
	method_rva(KillButtonManager::LBCCCPAFOAF, 0xFE9060)
	method_rva(KillButtonManager::MLJDIOPOBIM, 0xFED100)
	method_rva(KillButtonManager::ONAFPLJEFOH, 0xFEE060)
	method_rva(KillButtonManager::GADBFDHPJOA, 0xFE7560)
	method_rva(KillButtonManager::PHIJHNPBBNJ, 0xFEE5D0)
	method_rva(KillButtonManager::CHIKPIBNIKP, 0xFE40A0)
	method_rva(KillButtonManager::CIOGPOHCAJI, 0xFE41F0)
	method_rva(KillButtonManager::ICIDJPPIEMH, 0xFE9060)
	method_rva(KillButtonManager::DFLMMDADCLO, 0xFE48B0)
	method_rva(KillButtonManager::GMELBMMPFCH, 0xFE7AD0)
	method_rva(KillButtonManager::DFKKGMCIPPJ, 0xFE4880)
	method_rva(KillButtonManager::HNMMABKHMPO, 0xFE8730)
	method_rva(KillButtonManager::PerformKill, 0xFEF1C0)
	method_rva(KillButtonManager::FMGHIADHADN, 0xFE7000)
	method_rva(KillButtonManager::LNPMLABILFG, 0xFEC1A0)
	method_rva(KillButtonManager::KFFMHBJGBJH, 0xFEAFB0)
	method_rva(KillButtonManager::LBMHGFDKCBC, 0xFEB9B0)
	method_rva(KillButtonManager::PIFCCPALNEB, 0xFEE9D0)
	method_rva(KillButtonManager::MDLFNEAMGBN, 0xFEC5C0)
	method_rva(KillButtonManager::OFEPDIIEHFN, 0xFE2BA0)
	method_rva(KillButtonManager::BEMDMJCNIML, 0xFE2F00)
	method_rva(KillButtonManager::HEIELFJACDO, 0xFE8290)
	method_rva(KillButtonManager::FJNAIMPIPBB, 0xFE6E60)
	method_rva(KillButtonManager::JKCNIDKNPNP, 0xFEAD00)
	method_rva(KillButtonManager::HODFDEPPGEM, 0xFE89D0)
	method_rva(KillButtonManager::HJACJOPLHNN, 0xFE8460)
	method_rva(KillButtonManager::BLBEPEIHDHG, 0xFE35E0)
	method_rva(KillButtonManager::MOHKKFBPNBN, 0xFED250)
	method_rva(KillButtonManager::MKNNHHDCNGH, 0xFECE50)
	method_rva(KillButtonManager::_ctor, 0xFEF780)
	method_rva(KillButtonManager::LCODNOLLBHL, 0xFEBB50)
	method_rva(KillButtonManager::KKIEJMMBIML, 0xFEB6E0)
	method_rva(KillButtonManager::IBKMICKDGDC, 0xFE8DC0)
	method_rva(KillButtonManager::EHFOMPJMDLI, 0xFE5FB0)
	method_rva(KillButtonManager::EAFOGADAGAO, 0xFE57B0)
	method_rva(KillButtonManager::DLIJPGPLGLK, 0xFE4DF0)
	method_rva(KillButtonManager::DIBKOBBNDBF, 0xFE4A00)
	method_rva(KillButtonManager::PIMPJPCIIEI, 0xFEEB20)
	method_rva(KillButtonManager::LCPACFOGALG, 0xFEBCF0)
	method_rva(KillButtonManager::EODLNPADJAJ, 0xFE6840)
	method_rva(KillButtonManager::KHMPMMGCEAM, 0xFEB2F0)
	method_rva(KillButtonManager::HACBNGPDNFE, 0xFE7F70)
	method_rva(KillButtonManager::OKHGJKFLIIC, 0xFEE030)
	method_rva(KillButtonManager::PHLEEOOJLDA, 0xFEE880)
	method_rva(KillButtonManager::AAHIPCOGAOI, 0xFE27B0)
	method_rva(KillButtonManager::IHEPMOLMEOE, 0xFE9660)
	method_rva(KillButtonManager::MEBGPEDIHCI, 0xFEC710)
	method_rva(KillButtonManager::JELAGOBFILF, 0xFE2BD0)
	method_rva(KillButtonManager::OGPANBBKNOL, 0xFEDD60)
	method_rva(KillButtonManager::FPGIFILHKDL, 0xFE72B0)
	method_rva(KillButtonManager::CFJPLBHEEEF, 0xFE3DD0)
	method_rva(KillButtonManager::ODHHGGOOEEE, 0xFEDC10)
	method_rva(KillButtonManager::IAPONFCIHPK, 0xFE8B20)
	method_rva(KillButtonManager::NCDBPLGIFLP, 0xFE3460)
	method_rva(KillButtonManager::OIKHFDLOGIN, 0xFEDEE0)
	method_rva(KillButtonManager::GNHMPKJPKDA, 0xFE7B00)
	method_rva(KillButtonManager::GOPHPINHBMD, 0xFE7B30)
	method_rva(KillButtonManager::PLBBLPNNHPP, 0xFEF070)
	method_rva(KillButtonManager::JIJDGPECKEJ, 0xFEABB0)
	method_rva(KillButtonManager::DIFAMIEBMGD, 0xFE4B50)
	method_rva(KillButtonManager::KFNAHOMGAOM, 0xFEB150)
	method_rva(KillButtonManager::BCKEEJJJEGH, 0xFE2ED0)
	method_rva(KillButtonManager::IKNMGKBKCHO, 0xFE9910)
	method_rva(KillButtonManager::AAIFMJCAOBC, 0xFE2900)
	method_rva(KillButtonManager::DPLCKCJECJM, 0xFE5630)
	method_rva(KillButtonManager::DOJKAGBLGPA, 0xFE51F0)
	method_rva(KillButtonManager::BKJGHKFAHCD, 0xFE3490)
	method_rva(KillButtonManager::HLMPGLJAHON, 0xFE8490)
	method_rva(KillButtonManager::ENPNJMKCHAE, 0xFE66A0)
	method_rva(KillButtonManager::DJNPHMLOEEC, 0xFE4CA0)
	method_rva(KillButtonManager::PABBIMAKEOI, 0xFEE330)
	method_rva(KillButtonManager::LIANNOPEPMH, 0xFEBE70)
	method_rva(KillButtonManager::DMPIDEHEOFP, 0xFE4F40)
	method_rva(KillButtonManager::AODFPKJJBFH, 0xFE2D50)
	method_rva(KillButtonManager::IDAEECPGOPC, 0xFE9340)
	method_rva(KillButtonManager::LMMIKHGEPBI, 0xFEC020)
	method_rva(KillButtonManager::MFIGMHGMDGN, 0xFEC860)
	method_rva(KillButtonManager::GPOJGIJFKMP, 0xFE7E20)
}

#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>

struct KillButtonManager : ark::meta<KillButtonManager, Unity::MonoBehaviour>
{
	ark_meta("", "KillButtonManager", "KillButtonManager, Assembly - CSharp");

	PlayerControl* CurrentTarget; // 0xC
	Unity::SpriteRenderer* renderer; // 0x10
	struct TextRenderer* TimerText; // 0x14
	bool isCoolingDown; // 0x18
	bool isActive; // 0x19
	Unity::Vector2 CBINOKLOKNG; // 0x1C

	void IPNGGMPDEDB(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(IPNGGMPDEDB, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE27A0
	void NKKBHIANFOF() { return method_call(NKKBHIANFOF, ); } // 0x1CE4EB0
	void NNMKHJIOOOE(PlayerControl* PAIBDFDMIGK) { return method_call(NNMKHJIOOOE, PAIBDFDMIGK); } // 0x1CE5200
	void DJFGLBOEHFL() { return method_call(DJFGLBOEHFL, ); } // 0x1CDFBD0
	void MAPJOKDHKGE() { return method_call(MAPJOKDHKGE, ); } // 0x1CE4230
	void GKBNMGOEECA(PlayerControl* PAIBDFDMIGK) { return method_call(GKBNMGOEECA, PAIBDFDMIGK); } // 0x1CE1A40
	void EDBECLOMAGH() { return method_call(EDBECLOMAGH, ); } // 0x1CDFEA0
	void EJAOKDGCJNK() { return method_call(EJAOKDGCJNK, ); } // 0x1CE0880
	void FJIIAMOKKIF(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(FJIIAMOKKIF, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE0D80
	void PJOPFLLJKFN() { return method_call(PJOPFLLJKFN, ); } // 0x1CE51A0
	void OFFAGNBKCKI(PlayerControl* PAIBDFDMIGK) { return method_call(OFFAGNBKCKI, PAIBDFDMIGK); } // 0x1CE5E00
	void IKBDLPPGHKJ() { return method_call(IKBDLPPGHKJ, ); } // 0x1CE2500
	void OGHGJMFNPII() { return method_call(OGHGJMFNPII, ); } // 0x1CDF8D0
	void OHNOMBDPAML() { return method_call(OHNOMBDPAML, ); } // 0x1CE60A0
	void JKGFAHLBFFI() { return method_call(JKGFAHLBFFI, ); } // 0x1CE18C0
	void EIKFAPJCLLN(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(EIKFAPJCLLN, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE06E0
	void LNHNHPPOFDJ(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(LNHNHPPOFDJ, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE3710
	void GHJNMOPLEDI() { return method_call(GHJNMOPLEDI, ); } // 0x1CE18C0
	void OEAEHJJKAJK(PlayerControl* PAIBDFDMIGK) { return method_call(OEAEHJJKAJK, PAIBDFDMIGK); } // 0x1CE5B60
	void PJIINKGBOEL() { return method_call(PJIINKGBOEL, ); } // 0x1CE6530
	void OACEACONCID() { return method_call(OACEACONCID, ); } // 0x1CE54B0
	void GNEIFCENEPF(PlayerControl* PAIBDFDMIGK) { return method_call(GNEIFCENEPF, PAIBDFDMIGK); } // 0x1CE1CE0
	void ALGJOFHOFPB() { return method_call(ALGJOFHOFPB, ); } // 0x1CDF1D0
	void MAOKMPEOLFH(PlayerControl* PAIBDFDMIGK) { return method_call(MAOKMPEOLFH, PAIBDFDMIGK); } // 0x1CE3F80
	void IJGLHGDCPOA() { return method_call(IJGLHGDCPOA, ); } // 0x1CE08B0
	void KHIHHDKMJLJ() { return method_call(KHIHHDKMJLJ, ); } // 0x1CE3430
	void FIGONGBHCIK(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(FIGONGBHCIK, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE0BE0
	void NLHMICOEAIG(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(NLHMICOEAIG, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE5000
	void JHKNNMECLEL() { return method_call(JHKNNMECLEL, ); } // 0x1CE2AC0
	void GCFOCLMHPAN(PlayerControl* PAIBDFDMIGK) { return method_call(GCFOCLMHPAN, PAIBDFDMIGK); } // 0x1CE14C0
	void MNEBKMPOIOO(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(MNEBKMPOIOO, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE4BB0
	void IPEFHCEKCOI() { return method_call(IPEFHCEKCOI, ); } // 0x1CE2650
	void OBNEBBHCOEM(PlayerControl* PAIBDFDMIGK) { return method_call(OBNEBBHCOEM, PAIBDFDMIGK); } // 0x1CE5600
	void MAGCNJPKEHA(PlayerControl* PAIBDFDMIGK) { return method_call(MAGCNJPKEHA, PAIBDFDMIGK); } // 0x1CE3CE0
	void LOLLFPMNDJH(PlayerControl* PAIBDFDMIGK) { return method_call(LOLLFPMNDJH, PAIBDFDMIGK); } // 0x1CE38B0
	void OAHIIIIEGAK() { return method_call(OAHIIIIEGAK, ); } // 0x1CE08B0
	void DCICGBBBDHF() { return method_call(DCICGBBBDHF, ); } // 0x1CDFBD0
	void FCDOEMHGNGM(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(FCDOEMHGNGM, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE08E0
	void MIMMHICGNIM(PlayerControl* PAIBDFDMIGK) { return method_call(MIMMHICGNIM, PAIBDFDMIGK); } // 0x1CE4520
	void NNHCCGLFBMH() { return method_call(NNHCCGLFBMH, ); } // 0x1CE51D0
	void EHFCMGDJBBI(PlayerControl* PAIBDFDMIGK) { return method_call(EHFCMGDJBBI, PAIBDFDMIGK); } // 0x1CE01A0
	void BKEDEJNBDPN() { return method_call(BKEDEJNBDPN, ); } // 0x1CDF380
	void AHCBCKEJCCA(PlayerControl* PAIBDFDMIGK) { return method_call(AHCBCKEJCCA, PAIBDFDMIGK); } // 0x1CDED90
	void EIJLIHDGCOL(PlayerControl* PAIBDFDMIGK) { return method_call(EIJLIHDGCOL, PAIBDFDMIGK); } // 0x1CE0440
	void AJAELHDAHOE(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(AJAELHDAHOE, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CDF030
	void LJHOKAHKNNP(PlayerControl* PAIBDFDMIGK) { return method_call(LJHOKAHKNNP, PAIBDFDMIGK); } // 0x1CE3460
	void FJJAGGGFDGM() { return method_call(FJJAGGGFDGM, ); } // 0x1CE0F20
	void PIIONHBDEAO(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(PIIONHBDEAO, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE6390
	void MLECABGIHFK() { return method_call(MLECABGIHFK, ); } // 0x1CE4A60
	void ODMGFMPECKN(PlayerControl* PAIBDFDMIGK) { return method_call(ODMGFMPECKN, PAIBDFDMIGK); } // 0x1CE58B0
	void PerformKill() { return method_call(PerformKill, ); } // 0x1CE6A70
	void _ctor() { return method_call(_ctor, ); } // 0x182DFE0
	void NLMGDACFNJD() { return method_call(NLMGDACFNJD, ); } // 0x1CE51A0
	void GINMCIJLMNP() { return method_call(GINMCIJLMNP, ); } // 0x1CE18F0
	void SetTarget(PlayerControl* PAIBDFDMIGK) { return method_call(SetTarget, PAIBDFDMIGK); } // 0x1CE6D60
	void CCAALHGMPMO() { return method_call(CCAALHGMPMO, ); } // 0x1CDF4D0
	void DANOGOHHJBK() { return method_call(DANOGOHHJBK, ); } // 0x1CDF8D0
	void OGBIFMAAOCL() { return method_call(OGBIFMAAOCL, ); } // 0x1CE18C0
	void SetCoolDown(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(SetCoolDown, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE6BC0
	void MAFPCOBCONO(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(MAFPCOBCONO, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE3B60
	void FMNALGJINKD(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(FMNALGJINKD, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE1070
	void JKGNICFGPNF() { return method_call(JKGNICFGPNF, ); } // 0x1CE2C10
	void MCIFDOFAIAE(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(MCIFDOFAIAE, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE4380
	void DCECJELMLAI() { return method_call(DCECJELMLAI, ); } // 0x1CDFA80
	void JCLNGELMPEK(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(JCLNGELMPEK, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE2920
	void BBPGHOFEOLB() { return method_call(BBPGHOFEOLB, ); } // 0x1CDF200
	void GPKICILKFDG(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(GPKICILKFDG, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE1F80
	void DAPCEGFGNDA(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(DAPCEGFGNDA, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CDF900
	void Start() { return method_call(Start, ); } // 0x1CE51D0
	void BKCGODMFOCG() { return method_call(BKCGODMFOCG, ); } // 0x1CDF230
	void EGFDLOFPAMO(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(EGFDLOFPAMO, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE0000
	void GAKPPHCHPMM(PlayerControl* PAIBDFDMIGK) { return method_call(GAKPPHCHPMM, PAIBDFDMIGK); } // 0x1CE1210
	void CMKIDIOLIBO(PlayerControl* PAIBDFDMIGK) { return method_call(CMKIDIOLIBO, PAIBDFDMIGK); } // 0x1CDF620
	void GGBNCFCAHFF() { return method_call(GGBNCFCAHFF, ); } // 0x1CE1770
	void DKMCJJKBOLC(PlayerControl* PAIBDFDMIGK) { return method_call(DKMCJJKBOLC, PAIBDFDMIGK); } // 0x1CDFC00
	void FEDFMAMEMND() { return method_call(FEDFMAMEMND, ); } // 0x1CE0A60
	void HMMCALBDIMA(PlayerControl* PAIBDFDMIGK) { return method_call(HMMCALBDIMA, PAIBDFDMIGK); } // 0x1CE2250
	void KCFAAHLMNEF(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(KCFAAHLMNEF, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE3010
	void NHFMMDGCMHO() { return method_call(NHFMMDGCMHO, ); } // 0x1CE4E80
	void MPLAKFNMCGK() { return method_call(MPLAKFNMCGK, ); } // 0x1CE4D30
	void PLHOMKJFLJM(PlayerControl* PAIBDFDMIGK) { return method_call(PLHOMKJFLJM, PAIBDFDMIGK); } // 0x1CE6680
	void EJBCHLHFEAO() { return method_call(EJBCHLHFEAO, ); } // 0x1CE08B0
	void ONCCLKLDLKJ(float EEJDHCDOBNK, float OOKDPFNEAJI) { return method_call(ONCCLKLDLKJ, EEJDHCDOBNK, OOKDPFNEAJI); } // 0x1CE61F0
	void ADFPHIGPJKL() { return method_call(ADFPHIGPJKL, ); } // 0x1CDEC40
	void HKECIGPBOHM() { return method_call(HKECIGPBOHM, ); } // 0x1CE2100
	void MJJJNKCEIFA(PlayerControl* PAIBDFDMIGK) { return method_call(MJJJNKCEIFA, PAIBDFDMIGK); } // 0x1CE47C0
	void POGKHNALBJK() { return method_call(POGKHNALBJK, ); } // 0x1CE6920
	void JKKLJNEJMEA(PlayerControl* PAIBDFDMIGK) { return method_call(JKKLJNEJMEA, PAIBDFDMIGK); } // 0x1CE2D60
	void FFJNIODPCBI() { return method_call(FFJNIODPCBI, ); } // 0x1CE0BB0
	void KGEGOBJMJBJ(PlayerControl* PAIBDFDMIGK) { return method_call(KGEGOBJMJBJ, PAIBDFDMIGK); } // 0x1CE3190
};
namespace ark::method_info
{

	method_rva(KillButtonManager::IPNGGMPDEDB, 0x1CE27A0)
	method_rva(KillButtonManager::NKKBHIANFOF, 0x1CE4EB0)
	method_rva(KillButtonManager::NNMKHJIOOOE, 0x1CE5200)
	method_rva(KillButtonManager::DJFGLBOEHFL, 0x1CDFBD0)
	method_rva(KillButtonManager::MAPJOKDHKGE, 0x1CE4230)
	method_rva(KillButtonManager::GKBNMGOEECA, 0x1CE1A40)
	method_rva(KillButtonManager::EDBECLOMAGH, 0x1CDFEA0)
	method_rva(KillButtonManager::EJAOKDGCJNK, 0x1CE0880)
	method_rva(KillButtonManager::FJIIAMOKKIF, 0x1CE0D80)
	method_rva(KillButtonManager::PJOPFLLJKFN, 0x1CE51A0)
	method_rva(KillButtonManager::OFFAGNBKCKI, 0x1CE5E00)
	method_rva(KillButtonManager::IKBDLPPGHKJ, 0x1CE2500)
	method_rva(KillButtonManager::OGHGJMFNPII, 0x1CDF8D0)
	method_rva(KillButtonManager::OHNOMBDPAML, 0x1CE60A0)
	method_rva(KillButtonManager::JKGFAHLBFFI, 0x1CE18C0)
	method_rva(KillButtonManager::EIKFAPJCLLN, 0x1CE06E0)
	method_rva(KillButtonManager::LNHNHPPOFDJ, 0x1CE3710)
	method_rva(KillButtonManager::GHJNMOPLEDI, 0x1CE18C0)
	method_rva(KillButtonManager::OEAEHJJKAJK, 0x1CE5B60)
	method_rva(KillButtonManager::PJIINKGBOEL, 0x1CE6530)
	method_rva(KillButtonManager::OACEACONCID, 0x1CE54B0)
	method_rva(KillButtonManager::GNEIFCENEPF, 0x1CE1CE0)
	method_rva(KillButtonManager::ALGJOFHOFPB, 0x1CDF1D0)
	method_rva(KillButtonManager::MAOKMPEOLFH, 0x1CE3F80)
	method_rva(KillButtonManager::IJGLHGDCPOA, 0x1CE08B0)
	method_rva(KillButtonManager::KHIHHDKMJLJ, 0x1CE3430)
	method_rva(KillButtonManager::FIGONGBHCIK, 0x1CE0BE0)
	method_rva(KillButtonManager::NLHMICOEAIG, 0x1CE5000)
	method_rva(KillButtonManager::JHKNNMECLEL, 0x1CE2AC0)
	method_rva(KillButtonManager::GCFOCLMHPAN, 0x1CE14C0)
	method_rva(KillButtonManager::MNEBKMPOIOO, 0x1CE4BB0)
	method_rva(KillButtonManager::IPEFHCEKCOI, 0x1CE2650)
	method_rva(KillButtonManager::OBNEBBHCOEM, 0x1CE5600)
	method_rva(KillButtonManager::MAGCNJPKEHA, 0x1CE3CE0)
	method_rva(KillButtonManager::LOLLFPMNDJH, 0x1CE38B0)
	method_rva(KillButtonManager::OAHIIIIEGAK, 0x1CE08B0)
	method_rva(KillButtonManager::DCICGBBBDHF, 0x1CDFBD0)
	method_rva(KillButtonManager::FCDOEMHGNGM, 0x1CE08E0)
	method_rva(KillButtonManager::MIMMHICGNIM, 0x1CE4520)
	method_rva(KillButtonManager::NNHCCGLFBMH, 0x1CE51D0)
	method_rva(KillButtonManager::EHFCMGDJBBI, 0x1CE01A0)
	method_rva(KillButtonManager::BKEDEJNBDPN, 0x1CDF380)
	method_rva(KillButtonManager::AHCBCKEJCCA, 0x1CDED90)
	method_rva(KillButtonManager::EIJLIHDGCOL, 0x1CE0440)
	method_rva(KillButtonManager::AJAELHDAHOE, 0x1CDF030)
	method_rva(KillButtonManager::LJHOKAHKNNP, 0x1CE3460)
	method_rva(KillButtonManager::FJJAGGGFDGM, 0x1CE0F20)
	method_rva(KillButtonManager::PIIONHBDEAO, 0x1CE6390)
	method_rva(KillButtonManager::MLECABGIHFK, 0x1CE4A60)
	method_rva(KillButtonManager::ODMGFMPECKN, 0x1CE58B0)
	method_rva(KillButtonManager::PerformKill, 0x1CE6A70)
	method_rva(KillButtonManager::_ctor, 0x182DFE0)
	method_rva(KillButtonManager::NLMGDACFNJD, 0x1CE51A0)
	method_rva(KillButtonManager::GINMCIJLMNP, 0x1CE18F0)
	method_rva(KillButtonManager::SetTarget, 0x1CE6D60)
	method_rva(KillButtonManager::CCAALHGMPMO, 0x1CDF4D0)
	method_rva(KillButtonManager::DANOGOHHJBK, 0x1CDF8D0)
	method_rva(KillButtonManager::OGBIFMAAOCL, 0x1CE18C0)
	method_rva(KillButtonManager::SetCoolDown, 0x1CE6BC0)
	method_rva(KillButtonManager::MAFPCOBCONO, 0x1CE3B60)
	method_rva(KillButtonManager::FMNALGJINKD, 0x1CE1070)
	method_rva(KillButtonManager::JKGNICFGPNF, 0x1CE2C10)
	method_rva(KillButtonManager::MCIFDOFAIAE, 0x1CE4380)
	method_rva(KillButtonManager::DCECJELMLAI, 0x1CDFA80)
	method_rva(KillButtonManager::JCLNGELMPEK, 0x1CE2920)
	method_rva(KillButtonManager::BBPGHOFEOLB, 0x1CDF200)
	method_rva(KillButtonManager::GPKICILKFDG, 0x1CE1F80)
	method_rva(KillButtonManager::DAPCEGFGNDA, 0x1CDF900)
	method_rva(KillButtonManager::Start, 0x1CE51D0)
	method_rva(KillButtonManager::BKCGODMFOCG, 0x1CDF230)
	method_rva(KillButtonManager::EGFDLOFPAMO, 0x1CE0000)
	method_rva(KillButtonManager::GAKPPHCHPMM, 0x1CE1210)
	method_rva(KillButtonManager::CMKIDIOLIBO, 0x1CDF620)
	method_rva(KillButtonManager::GGBNCFCAHFF, 0x1CE1770)
	method_rva(KillButtonManager::DKMCJJKBOLC, 0x1CDFC00)
	method_rva(KillButtonManager::FEDFMAMEMND, 0x1CE0A60)
	method_rva(KillButtonManager::HMMCALBDIMA, 0x1CE2250)
	method_rva(KillButtonManager::KCFAAHLMNEF, 0x1CE3010)
	method_rva(KillButtonManager::NHFMMDGCMHO, 0x1CE4E80)
	method_rva(KillButtonManager::MPLAKFNMCGK, 0x1CE4D30)
	method_rva(KillButtonManager::PLHOMKJFLJM, 0x1CE6680)
	method_rva(KillButtonManager::EJBCHLHFEAO, 0x1CE08B0)
	method_rva(KillButtonManager::ONCCLKLDLKJ, 0x1CE61F0)
	method_rva(KillButtonManager::ADFPHIGPJKL, 0x1CDEC40)
	method_rva(KillButtonManager::HKECIGPBOHM, 0x1CE2100)
	method_rva(KillButtonManager::MJJJNKCEIFA, 0x1CE47C0)
	method_rva(KillButtonManager::POGKHNALBJK, 0x1CE6920)
	method_rva(KillButtonManager::JKKLJNEJMEA, 0x1CE2D60)
	method_rva(KillButtonManager::FFJNIODPCBI, 0x1CE0BB0)
	method_rva(KillButtonManager::KGEGOBJMJBJ, 0x1CE3190)
}
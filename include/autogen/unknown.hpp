#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/TextRenderer.hpp>

struct FOONEKDGJBL : ark::meta<FOONEKDGJBL, Unity::MonoBehaviour> // TypeDefIndex: 8943
{
	ark_meta("", "FOONEKDGJBL");

	struct SpriteRenderer* Body; // 0xC
	struct SpriteRenderer* Hands; // 0x10
	struct DAMECBEEJAL* HatSlot; // 0x14
	struct SpriteRenderer* SkinSlot; // 0x18
	struct SpriteRenderer* PetSlot; // 0x1C
	Unity::TextRenderer* NameText; // 0x20

	void JEJGBGGEEBL(bool EEBEPJKKIJK) { return method_call(JEJGBGGEEBL, EEBEPJKKIJK); } // 0x136F2F0
	void CHGIJHLOHBK(bool EEBEPJKKIJK) { return method_call(CHGIJHLOHBK, EEBEPJKKIJK); } // 0x136E5A0
	void IPKGDEHGFCP(bool EEBEPJKKIJK) { return method_call(IPKGDEHGFCP, EEBEPJKKIJK); } // 0x136F080
	void HIGBLHOICAC(bool EEBEPJKKIJK) { return method_call(HIGBLHOICAC, EEBEPJKKIJK); } // 0x136EC90
	void SetDeadFlipX(bool EEBEPJKKIJK) { return method_call(SetDeadFlipX, EEBEPJKKIJK); } // 0x136FAA0
	void CNHGGLLBJIH(bool EEBEPJKKIJK) { return method_call(CNHGGLLBJIH, EEBEPJKKIJK); } // 0x136E690
	void HJDGIOCPFBF(bool EEBEPJKKIJK) { return method_call(HJDGIOCPFBF, EEBEPJKKIJK); } // 0x136ED80
	void JADJOGMOOOM(bool EEBEPJKKIJK) { return method_call(JADJOGMOOOM, EEBEPJKKIJK); } // 0x136F200
	void GAPBAPKDHAF(bool EEBEPJKKIJK) { return method_call(GAPBAPKDHAF, EEBEPJKKIJK); } // 0x136EB10
	void ODIBLKMCCHK(bool EEBEPJKKIJK) { return method_call(ODIBLKMCCHK, EEBEPJKKIJK); } // 0x136F8C0
	void KABHICBDDPN(bool EEBEPJKKIJK) { return method_call(KABHICBDDPN, EEBEPJKKIJK); } // 0x136F3E0
	void LBEAKMMGEJB(bool EEBEPJKKIJK) { return method_call(LBEAKMMGEJB, EEBEPJKKIJK); } // 0x136F560
	void PMOAFOJAGBI(bool EEBEPJKKIJK) { return method_call(PMOAFOJAGBI, EEBEPJKKIJK); } // 0x136F9B0
	void SetFlipX(bool EEBEPJKKIJK) { return method_call(SetFlipX, EEBEPJKKIJK); } // 0x136FB90
	void MIFCEFCGGOA(bool EEBEPJKKIJK) { return method_call(MIFCEFCGGOA, EEBEPJKKIJK); } // 0x136F650
	void DHDGKAFNNMO(bool EEBEPJKKIJK) { return method_call(DHDGKAFNNMO, EEBEPJKKIJK); } // 0x136E810
	void IACHDNCFKNF(bool EEBEPJKKIJK) { return method_call(IACHDNCFKNF, EEBEPJKKIJK); } // 0x136EF00
	void DOANFLIHMNG(bool EEBEPJKKIJK) { return method_call(DOANFLIHMNG, EEBEPJKKIJK); } // 0x136E990
	void ANDKCBEDCHD(bool EEBEPJKKIJK) { return method_call(ANDKCBEDCHD, EEBEPJKKIJK); } // 0x136E4B0
	void OAGOGGIDJFG(bool EEBEPJKKIJK) { return method_call(OAGOGGIDJFG, EEBEPJKKIJK); } // 0x136F740
	void _ctor() { return method_call(_ctor, ); } // 0x38A130
};
namespace ark::method_info
{

	method_rva(FOONEKDGJBL::JEJGBGGEEBL, 0x136F2F0)
	method_rva(FOONEKDGJBL::CHGIJHLOHBK, 0x136E5A0)
	method_rva(FOONEKDGJBL::IPKGDEHGFCP, 0x136F080)
	method_rva(FOONEKDGJBL::HIGBLHOICAC, 0x136EC90)
	method_rva(FOONEKDGJBL::SetDeadFlipX, 0x136FAA0)
	method_rva(FOONEKDGJBL::CNHGGLLBJIH, 0x136E690)
	method_rva(FOONEKDGJBL::HJDGIOCPFBF, 0x136ED80)
	method_rva(FOONEKDGJBL::JADJOGMOOOM, 0x136F200)
	method_rva(FOONEKDGJBL::GAPBAPKDHAF, 0x136EB10)
	method_rva(FOONEKDGJBL::ODIBLKMCCHK, 0x136F8C0)
	method_rva(FOONEKDGJBL::KABHICBDDPN, 0x136F3E0)
	method_rva(FOONEKDGJBL::LBEAKMMGEJB, 0x136F560)
	method_rva(FOONEKDGJBL::PMOAFOJAGBI, 0x136F9B0)
	method_rva(FOONEKDGJBL::SetFlipX, 0x136FB90)
	method_rva(FOONEKDGJBL::MIFCEFCGGOA, 0x136F650)
	method_rva(FOONEKDGJBL::DHDGKAFNNMO, 0x136E810)
	method_rva(FOONEKDGJBL::IACHDNCFKNF, 0x136EF00)
	method_rva(FOONEKDGJBL::DOANFLIHMNG, 0x136E990)
	method_rva(FOONEKDGJBL::ANDKCBEDCHD, 0x136E4B0)
	method_rva(FOONEKDGJBL::OAGOGGIDJFG, 0x136F740)
	method_rva(FOONEKDGJBL::_ctor, 0x38A130)
}

/*
struct ONBHCKMBBKI : ark::meta<ONBHCKMBBKI, Unity::MonoBehaviour> // TypeDefIndex: 8942
{
	ark_meta("", "ONBHCKMBBKI");

	struct SpriteRenderer* layer; // 0xC
	struct SpriteAnim* animator; // 0x10
	struct SkinData* skin; // 0x14

	void SetSpawn(float NPHJCKDCKDD = 0) { return method_call(SetSpawn, NPHJCKDCKDD); } // 0xCA6470
	void DIIOCJOHACJ(float NPHJCKDCKDD = 0) { return method_call(DIIOCJOHACJ, NPHJCKDCKDD); } // 0xCA2D70
	void FKHAFLNJILA(bool HIJOHCLAKMG) { return method_call(FKHAFLNJILA, HIJOHCLAKMG); } // 0xCA2D40
	void FIIAFGDJGKG(std::uint32_t EPBONDIDGDF) { return method_call(FIIAFGDJGKG, EPBONDIDGDF); } // 0xCA3C70
	void ONHKMLDNAIA(bool HIJOHCLAKMG) { return method_call(ONHKMLDNAIA, HIJOHCLAKMG); } // 0xCA2C80
	void HCAEGGFGECL(std::uint32_t EPBONDIDGDF) { return method_call(HCAEGGFGECL, EPBONDIDGDF); } // 0xCA4330
	void OCANCJMIKJB() { return method_call(OCANCJMIKJB, ); } // 0xCA5980
	void KGCMCMKIDNI(std::uint32_t EPBONDIDGDF) { return method_call(KGCMCMKIDNI, EPBONDIDGDF); } // 0xCA4CC0
	void KEENPLJKAJO() { return method_call(KEENPLJKAJO, ); } // 0xCA4C30
	void EMDOAGONNGJ() { return method_call(EMDOAGONNGJ, ); } // 0xCA3300
	void LHDLGNBHGAH(float NPHJCKDCKDD = 0) { return method_call(LHDLGNBHGAH, NPHJCKDCKDD); } // 0xCA53A0
	void ENEGLFDGBDH() { return method_call(ENEGLFDGBDH, ); } // 0xCA35D0
	void PFGOOJHALCD() { return method_call(PFGOOJHALCD, ); } // 0xCA5F30
	void HFHOLIGCNEP() { return method_call(HFHOLIGCNEP, ); } // 0xCA4460
	void SetIdle() { return method_call(SetIdle, ); } // 0xCA6280
	void IEKHEAJLKHF() { return method_call(IEKHEAJLKHF, ); } // 0xCA4550
	void NOBMCHGEGEM(float NPHJCKDCKDD = 0) { return method_call(NOBMCHGEGEM, NPHJCKDCKDD); } // 0xCA5840
	void PFLLGLGKCLH(bool HIJOHCLAKMG) { return method_call(PFLLGLGKCLH, HIJOHCLAKMG); } // 0xCA2D40
	void OHIKFOJKCKB(std::uint32_t EPBONDIDGDF) { return method_call(OHIKFOJKCKB, EPBONDIDGDF); } // 0xCA5BC0
	void FFNJKMMONDO() { return method_call(FFNJKMMONDO, ); } // 0xCA3AF0
	void EELDBFHLLML() { return method_call(EELDBFHLLML, ); } // 0xCA2F40
	void JPAALFNIOLO() { return method_call(JPAALFNIOLO, ); } // 0xCA4AC0
	void OFMAHPDICPI() { return method_call(OFMAHPDICPI, ); } // 0xCA5A60
	void ACFGLOABJNK() { return method_call(ACFGLOABJNK, ); } // 0xCA2690
	void IHCCOANJPEH() { return method_call(IHCCOANJPEH, ); } // 0xCA4640
	void EMOCNLHCEGH(std::uint32_t EPBONDIDGDF) { return method_call(EMOCNLHCEGH, EPBONDIDGDF); } // 0xCA3570
	void KGLNLIFMIPK(std::uint32_t EPBONDIDGDF) { return method_call(KGLNLIFMIPK, EPBONDIDGDF); } // 0xCA4D20
	void JNBFJMDNEGL() { return method_call(JNBFJMDNEGL, ); } // 0xCA49E0
	void CKKFDAHCDHL(bool HIJOHCLAKMG) { return method_call(CKKFDAHCDHL, HIJOHCLAKMG); } // 0xCA2C80
	void LIADOGNBOEE(bool HIJOHCLAKMG) { return method_call(LIADOGNBOEE, HIJOHCLAKMG); } // 0xCA2D40
	void CONMFBFOHAC(bool HIJOHCLAKMG) { return method_call(CONMFBFOHAC, HIJOHCLAKMG); } // 0xCA2D40
	void MBLCOLPKAGD() { return method_call(MBLCOLPKAGD, ); } // 0xCA5480
	void MKGCALLAMMF(std::uint32_t EPBONDIDGDF) { return method_call(MKGCALLAMMF, EPBONDIDGDF); } // 0xCA55F0
	void NIADPGJOMAD(bool HIJOHCLAKMG) { return method_call(NIADPGJOMAD, HIJOHCLAKMG); } // 0xCA2C80
	void FDKKDDBDKMC() { return method_call(FDKKDDBDKMC, ); } // 0xCA3980
	void PFEGGFJBGEK() { return method_call(PFEGGFJBGEK, ); } // 0xCA5E30
	void HDEGMENCIAN(bool HIJOHCLAKMG) { return method_call(HDEGMENCIAN, HIJOHCLAKMG); } // 0xCA2C80
	void FIFGLNAAMCI() { return method_call(FIFGLNAAMCI, ); } // 0xCA3B80
	void IJAIEKFNFEC() { return method_call(IJAIEKFNFEC, ); } // 0xCA4760
	void SetRun() { return method_call(SetRun, ); } // 0xCA6370
	void set_Flipped(bool HIJOHCLAKMG) { return method_call(set_Flipped, HIJOHCLAKMG); } // 0xCA2D40
	void JAJFODLBDMF(bool HIJOHCLAKMG) { return method_call(JAJFODLBDMF, HIJOHCLAKMG); } // 0xCA2D40
	void KJPPENEKDID() { return method_call(KJPPENEKDID, ); } // 0xCA50F0
	void JIOEFPEGPOI() { return method_call(JIOEFPEGPOI, ); } // 0xCA48E0
	void PEBNFPLMANL(bool HIJOHCLAKMG) { return method_call(PEBNFPLMANL, HIJOHCLAKMG); } // 0xCA2D40
	void KIBCADIKAFL(float NPHJCKDCKDD = 0) { return method_call(KIBCADIKAFL, NPHJCKDCKDD); } // 0xCA4F30
	void LDNFLGKGOOC() { return method_call(LDNFLGKGOOC, ); } // 0xCA52C0
	void ABIIHKKFDIC() { return method_call(ABIIHKKFDIC, ); } // 0xCA25B0
	void KBPACLAFBJE() { return method_call(KBPACLAFBJE, ); } // 0xCA4BA0
	void OAHCACPMPPF(std::uint32_t EPBONDIDGDF) { return method_call(OAHCACPMPPF, EPBONDIDGDF); } // 0xCA5920
	void FDENAFLAOJK(bool HIJOHCLAKMG) { return method_call(FDENAFLAOJK, HIJOHCLAKMG); } // 0xCA2C80
	void EBHGGCFDDDI() { return method_call(EBHGGCFDDDI, ); } // 0xCA2E50
	void EJHJELLCEHN() { return method_call(EJHJELLCEHN, ); } // 0xCA3030
	void EOHOMMHMBNF() { return method_call(EOHOMMHMBNF, ); } // 0xCA36B0
	void MHGNNIPECGD() { return method_call(MHGNNIPECGD, ); } // 0xCA5510
	void JAOMKLCFIKM() { return method_call(JAOMKLCFIKM, ); } // 0xCA4850
	void OJOLPDHDICK(float NPHJCKDCKDD = 0) { return method_call(OJOLPDHDICK, NPHJCKDCKDD); } // 0xCA5CF0
	void SetEnterVent() { return method_call(SetEnterVent, ); } // 0xCA6030
	void FCAONPLLGFE() { return method_call(FCAONPLLGFE, ); } // 0xCA37B0
	void PABDPBIFNFN(std::uint32_t EPBONDIDGDF) { return method_call(PABDPBIFNFN, EPBONDIDGDF); } // 0xCA5DD0
	void KJMCIDMKJLM() { return method_call(KJMCIDMKJLM, ); } // 0xCA5010
	void GLABANHFHLN(std::uint32_t EPBONDIDGDF) { return method_call(GLABANHFHLN, EPBONDIDGDF); } // 0xCA42D0
	void OGAKBJFFCJO(bool HIJOHCLAKMG) { return method_call(OGAKBJFFCJO, HIJOHCLAKMG); } // 0xCA2D40
	void _ctor() { return method_call(_ctor, ); } // 0x38A130
	void AGOALMMAFAA(std::uint32_t EPBONDIDGDF) { return method_call(AGOALMMAFAA, EPBONDIDGDF); } // 0xCA2870
	void CGFBLECAOHJ() { return method_call(CGFBLECAOHJ, ); } // 0xCA2BF0
	void OLJPMHMIGHB(bool HIJOHCLAKMG) { return method_call(OLJPMHMIGHB, HIJOHCLAKMG); } // 0xCA2D40
	void EMIHEKAOGJK() { return method_call(EMIHEKAOGJK, ); } // 0xCA3490
	void KHDLAAFLHOO(std::uint32_t EPBONDIDGDF) { return method_call(KHDLAAFLHOO, EPBONDIDGDF); } // 0xCA4ED0
	void MMIKLFGPMPK() { return method_call(MMIKLFGPMPK, ); } // 0xCA5650
	void BOGADHCIKEP() { return method_call(BOGADHCIKEP, ); } // 0xCA2B10
	void FCOMHBPDAJC(float NPHJCKDCKDD = 0) { return method_call(FCOMHBPDAJC, NPHJCKDCKDD); } // 0xCA38A0
	void DLGCKONIBHP(bool HIJOHCLAKMG) { return method_call(DLGCKONIBHP, HIJOHCLAKMG); } // 0xCA2D40
	void FNCCHEFPMEC() { return method_call(FNCCHEFPMEC, ); } // 0xCA3F70
	void FLFEEHDLBAG() { return method_call(FLFEEHDLBAG, ); } // 0xCA3DA0
	void FOLPLMOBIHE() { return method_call(FOLPLMOBIHE, ); } // 0xCA4050
	void AELMGAHCLEM() { return method_call(AELMGAHCLEM, ); } // 0xCA2770
	void LDEODIOMLEP(float NPHJCKDCKDD = 0) { return method_call(LDEODIOMLEP, NPHJCKDCKDD); } // 0xCA51E0
	void SetExitVent() { return method_call(SetExitVent, ); } // 0xCA6110
	void IHFJCIIEPJK() { return method_call(IHFJCIIEPJK, ); } // 0xCA46D0
	void BEPFPFPFOEM(float NPHJCKDCKDD = 0) { return method_call(BEPFPFPFOEM, NPHJCKDCKDD); } // 0xCA2A30
	void ELKLOFDJAED() { return method_call(ELKLOFDJAED, ); } // 0xCA31A0
	void BANBBLGECIG() { return method_call(BANBBLGECIG, ); } // 0xCA29A0
	void FLLHBPOFDEB() { return method_call(FLLHBPOFDEB, ); } // 0xCA3E90
	void FBNLGGEHMIA(bool HIJOHCLAKMG) { return method_call(FBNLGGEHMIA, HIJOHCLAKMG); } // 0xCA2C80
	void SetGhost() { return method_call(SetGhost, ); } // 0xCA61F0
	void ICCCGGJNMPP(bool HIJOHCLAKMG) { return method_call(ICCCGGJNMPP, HIJOHCLAKMG); } // 0xCA2D40
	void CNGNHDLIGFE() { return method_call(CNGNHDLIGFE, ); } // 0xCA2CB0
	void MGBPEANDMGF(bool HIJOHCLAKMG) { return method_call(MGBPEANDMGF, HIJOHCLAKMG); } // 0xCA2D40
	void EKHPHGLIPCA() { return method_call(EKHPHGLIPCA, ); } // 0xCA3110
	void KNEKHFHILOK(bool HIJOHCLAKMG) { return method_call(KNEKHFHILOK, HIJOHCLAKMG); } // 0xCA2D40
	void FEBHGHIHANM() { return method_call(FEBHGHIHANM, ); } // 0xCA3A60
	void KOLDHKPNFMI(bool HIJOHCLAKMG) { return method_call(KOLDHKPNFMI, HIJOHCLAKMG); } // 0xCA2D40
	void EMHLHFLNKKE() { return method_call(EMHLHFLNKKE, ); } // 0xCA3400
	void set_Visible(bool HIJOHCLAKMG) { return method_call(set_Visible, HIJOHCLAKMG); } // 0xCA2C80
	void NKBBEGCPFJJ() { return method_call(NKBBEGCPFJJ, ); } // 0xCA5740
	void GAMFBBEJILD() { return method_call(GAMFBBEJILD, ); } // 0xCA4150
};
namespace ark::method_info
{

	method_rva(ONBHCKMBBKI::SetSpawn, 0xCA6470)
	method_rva(ONBHCKMBBKI::DIIOCJOHACJ, 0xCA2D70)
	method_rva(ONBHCKMBBKI::FKHAFLNJILA, 0xCA2D40)
	method_rva(ONBHCKMBBKI::FIIAFGDJGKG, 0xCA3C70)
	method_rva(ONBHCKMBBKI::ONHKMLDNAIA, 0xCA2C80)
	method_rva(ONBHCKMBBKI::HCAEGGFGECL, 0xCA4330)
	method_rva(ONBHCKMBBKI::OCANCJMIKJB, 0xCA5980)
	method_rva(ONBHCKMBBKI::KGCMCMKIDNI, 0xCA4CC0)
	method_rva(ONBHCKMBBKI::KEENPLJKAJO, 0xCA4C30)
	method_rva(ONBHCKMBBKI::EMDOAGONNGJ, 0xCA3300)
	method_rva(ONBHCKMBBKI::LHDLGNBHGAH, 0xCA53A0)
	method_rva(ONBHCKMBBKI::ENEGLFDGBDH, 0xCA35D0)
	method_rva(ONBHCKMBBKI::PFGOOJHALCD, 0xCA5F30)
	method_rva(ONBHCKMBBKI::HFHOLIGCNEP, 0xCA4460)
	method_rva(ONBHCKMBBKI::SetIdle, 0xCA6280)
	method_rva(ONBHCKMBBKI::IEKHEAJLKHF, 0xCA4550)
	method_rva(ONBHCKMBBKI::NOBMCHGEGEM, 0xCA5840)
	method_rva(ONBHCKMBBKI::PFLLGLGKCLH, 0xCA2D40)
	method_rva(ONBHCKMBBKI::OHIKFOJKCKB, 0xCA5BC0)
	method_rva(ONBHCKMBBKI::FFNJKMMONDO, 0xCA3AF0)
	method_rva(ONBHCKMBBKI::EELDBFHLLML, 0xCA2F40)
	method_rva(ONBHCKMBBKI::JPAALFNIOLO, 0xCA4AC0)
	method_rva(ONBHCKMBBKI::OFMAHPDICPI, 0xCA5A60)
	method_rva(ONBHCKMBBKI::ACFGLOABJNK, 0xCA2690)
	method_rva(ONBHCKMBBKI::IHCCOANJPEH, 0xCA4640)
	method_rva(ONBHCKMBBKI::EMOCNLHCEGH, 0xCA3570)
	method_rva(ONBHCKMBBKI::KGLNLIFMIPK, 0xCA4D20)
	method_rva(ONBHCKMBBKI::JNBFJMDNEGL, 0xCA49E0)
	method_rva(ONBHCKMBBKI::CKKFDAHCDHL, 0xCA2C80)
	method_rva(ONBHCKMBBKI::LIADOGNBOEE, 0xCA2D40)
	method_rva(ONBHCKMBBKI::CONMFBFOHAC, 0xCA2D40)
	method_rva(ONBHCKMBBKI::MBLCOLPKAGD, 0xCA5480)
	method_rva(ONBHCKMBBKI::MKGCALLAMMF, 0xCA55F0)
	method_rva(ONBHCKMBBKI::NIADPGJOMAD, 0xCA2C80)
	method_rva(ONBHCKMBBKI::FDKKDDBDKMC, 0xCA3980)
	method_rva(ONBHCKMBBKI::PFEGGFJBGEK, 0xCA5E30)
	method_rva(ONBHCKMBBKI::HDEGMENCIAN, 0xCA2C80)
	method_rva(ONBHCKMBBKI::FIFGLNAAMCI, 0xCA3B80)
	method_rva(ONBHCKMBBKI::IJAIEKFNFEC, 0xCA4760)
	method_rva(ONBHCKMBBKI::SetRun, 0xCA6370)
	method_rva(ONBHCKMBBKI::set_Flipped, 0xCA2D40)
	method_rva(ONBHCKMBBKI::JAJFODLBDMF, 0xCA2D40)
	method_rva(ONBHCKMBBKI::KJPPENEKDID, 0xCA50F0)
	method_rva(ONBHCKMBBKI::JIOEFPEGPOI, 0xCA48E0)
	method_rva(ONBHCKMBBKI::PEBNFPLMANL, 0xCA2D40)
	method_rva(ONBHCKMBBKI::KIBCADIKAFL, 0xCA4F30)
	method_rva(ONBHCKMBBKI::LDNFLGKGOOC, 0xCA52C0)
	method_rva(ONBHCKMBBKI::ABIIHKKFDIC, 0xCA25B0)
	method_rva(ONBHCKMBBKI::KBPACLAFBJE, 0xCA4BA0)
	method_rva(ONBHCKMBBKI::OAHCACPMPPF, 0xCA5920)
	method_rva(ONBHCKMBBKI::FDENAFLAOJK, 0xCA2C80)
	method_rva(ONBHCKMBBKI::EBHGGCFDDDI, 0xCA2E50)
	method_rva(ONBHCKMBBKI::EJHJELLCEHN, 0xCA3030)
	method_rva(ONBHCKMBBKI::EOHOMMHMBNF, 0xCA36B0)
	method_rva(ONBHCKMBBKI::MHGNNIPECGD, 0xCA5510)
	method_rva(ONBHCKMBBKI::JAOMKLCFIKM, 0xCA4850)
	method_rva(ONBHCKMBBKI::OJOLPDHDICK, 0xCA5CF0)
	method_rva(ONBHCKMBBKI::SetEnterVent, 0xCA6030)
	method_rva(ONBHCKMBBKI::FCAONPLLGFE, 0xCA37B0)
	method_rva(ONBHCKMBBKI::PABDPBIFNFN, 0xCA5DD0)
	method_rva(ONBHCKMBBKI::KJMCIDMKJLM, 0xCA5010)
	method_rva(ONBHCKMBBKI::GLABANHFHLN, 0xCA42D0)
	method_rva(ONBHCKMBBKI::OGAKBJFFCJO, 0xCA2D40)
	method_rva(ONBHCKMBBKI::_ctor, 0x38A130)
	method_rva(ONBHCKMBBKI::AGOALMMAFAA, 0xCA2870)
	method_rva(ONBHCKMBBKI::CGFBLECAOHJ, 0xCA2BF0)
	method_rva(ONBHCKMBBKI::OLJPMHMIGHB, 0xCA2D40)
	method_rva(ONBHCKMBBKI::EMIHEKAOGJK, 0xCA3490)
	method_rva(ONBHCKMBBKI::KHDLAAFLHOO, 0xCA4ED0)
	method_rva(ONBHCKMBBKI::MMIKLFGPMPK, 0xCA5650)
	method_rva(ONBHCKMBBKI::BOGADHCIKEP, 0xCA2B10)
	method_rva(ONBHCKMBBKI::FCOMHBPDAJC, 0xCA38A0)
	method_rva(ONBHCKMBBKI::DLGCKONIBHP, 0xCA2D40)
	method_rva(ONBHCKMBBKI::FNCCHEFPMEC, 0xCA3F70)
	method_rva(ONBHCKMBBKI::FLFEEHDLBAG, 0xCA3DA0)
	method_rva(ONBHCKMBBKI::FOLPLMOBIHE, 0xCA4050)
	method_rva(ONBHCKMBBKI::AELMGAHCLEM, 0xCA2770)
	method_rva(ONBHCKMBBKI::LDEODIOMLEP, 0xCA51E0)
	method_rva(ONBHCKMBBKI::SetExitVent, 0xCA6110)
	method_rva(ONBHCKMBBKI::IHFJCIIEPJK, 0xCA46D0)
	method_rva(ONBHCKMBBKI::BEPFPFPFOEM, 0xCA2A30)
	method_rva(ONBHCKMBBKI::ELKLOFDJAED, 0xCA31A0)
	method_rva(ONBHCKMBBKI::BANBBLGECIG, 0xCA29A0)
	method_rva(ONBHCKMBBKI::FLLHBPOFDEB, 0xCA3E90)
	method_rva(ONBHCKMBBKI::FBNLGGEHMIA, 0xCA2C80)
	method_rva(ONBHCKMBBKI::SetGhost, 0xCA61F0)
	method_rva(ONBHCKMBBKI::ICCCGGJNMPP, 0xCA2D40)
	method_rva(ONBHCKMBBKI::CNGNHDLIGFE, 0xCA2CB0)
	method_rva(ONBHCKMBBKI::MGBPEANDMGF, 0xCA2D40)
	method_rva(ONBHCKMBBKI::EKHPHGLIPCA, 0xCA3110)
	method_rva(ONBHCKMBBKI::KNEKHFHILOK, 0xCA2D40)
	method_rva(ONBHCKMBBKI::FEBHGHIHANM, 0xCA3A60)
	method_rva(ONBHCKMBBKI::KOLDHKPNFMI, 0xCA2D40)
	method_rva(ONBHCKMBBKI::EMHLHFLNKKE, 0xCA3400)
	method_rva(ONBHCKMBBKI::set_Visible, 0xCA2C80)
	method_rva(ONBHCKMBBKI::NKBBEGCPFJJ, 0xCA5740)
	method_rva(ONBHCKMBBKI::GAMFBBEJILD, 0xCA4150)
}
 */
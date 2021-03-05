#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Button.hpp>

struct PassiveUiElement : ark::meta<PassiveUiElement, Unity::MonoBehaviour>
{
	ark_meta("", "DCHBCACCFGG", "DCHBCACCFGG, Assembly - CSharp");

	struct Collider2D* Colliders; // 0xC

	// virtual // bool get_HandleUp() { return method_call(get_HandleUp, ); } // 0x1D4510 // Slot: 4
	// virtual // bool get_HandleDown() { return method_call(get_HandleDown, ); } // 0x1D4510 // Slot: 5
	// virtual // bool get_HandleRepeat() { return method_call(get_HandleRepeat, ); } // 0x1D4510 // Slot: 6
	// virtual // bool get_HandleDrag() { return method_call(get_HandleDrag, ); } // 0x1D4510 // Slot: 7
	// virtual // bool get_HandleOverOut() { return method_call(get_HandleOverOut, ); } // 0x1D45C0 // Slot: 8
	void Start() { return method_call(Start, ); } // 0x101B470
	void OnDestroy() { return method_call(OnDestroy, ); } // 0x101B410
	// virtual // void ReceiveClickDown() { return method_call(ReceiveClickDown, ); } // 0x1D44E0 // Slot: 9
	// virtual // void ReceiveRepeatDown() { return method_call(ReceiveRepeatDown, ); } // 0x1D44E0 // Slot: 10
	// virtual // void ReceiveClickUp() { return method_call(ReceiveClickUp, ); } // 0x1D44E0 // Slot: 11
	// virtual // void ReceiveClickDrag(struct Vector2* IHNINMAIEEJ) { return method_call(ReceiveClickDrag, IHNINMAIEEJ); } // 0x1D44E0 // Slot: 12
	// virtual // void ReceiveMouseOver() { return method_call(ReceiveMouseOver, ); } // 0x1D44E0 // Slot: 13
	// virtual // void ReceiveMouseOut() { return method_call(ReceiveMouseOut, ); } // 0x1D44E0 // Slot: 14
	void _ctor() { return method_call(_ctor, ); } // 0x38A130
};
namespace ark::method_info
{

	// method_rva(PassiveUiElement::get_HandleUp, 0x1D4510)
	// method_rva(PassiveUiElement::get_HandleDown, 0x1D4510)
	// method_rva(PassiveUiElement::get_HandleRepeat, 0x1D4510)
	// method_rva(PassiveUiElement::get_HandleDrag, 0x1D4510)
	// method_rva(PassiveUiElement::get_HandleOverOut, 0x1D45C0)
	method_rva(PassiveUiElement::Start, 0x101B470)
	method_rva(PassiveUiElement::OnDestroy, 0x101B410)
	// method_rva(PassiveUiElement::ReceiveClickDown, 0x1D44E0)
	// method_rva(PassiveUiElement::ReceiveRepeatDown, 0x1D44E0)
	// method_rva(PassiveUiElement::ReceiveClickUp, 0x1D44E0)
	// method_rva(PassiveUiElement::ReceiveClickDrag, 0x1D44E0)
	// method_rva(PassiveUiElement::ReceiveMouseOver, 0x1D44E0)
	// method_rva(PassiveUiElement::ReceiveMouseOut, 0x1D44E0)
	method_rva(PassiveUiElement::_ctor, 0x38A130)
}


struct PassiveButton : ark::meta<PassiveButton, PassiveUiElement>
{
	ark_meta("", "HHMBANDDIOA", "HHMBANDDIOA, Assembly-CSharp");

	Button_ButtonClickedEvent* OnClick; // 0x10
	struct AudioClip* ClickSound; // 0x14
	bool OnUp; // 0x18
	bool OnDown; // 0x19
	bool OnRepeat; // 0x1A
	float RepeatDuration; // 0x1C
	struct UnityEvent* OnMouseOver; // 0x20
	struct UnityEvent* OnMouseOut; // 0x24
	float KINJIMICGFJ; // 0x28

	// virtual // bool JKIBEBDFIOL() { return method_call(JKIBEBDFIOL, ); } // 0x3C69A0 // Slot: 15
	// virtual // void HDCNNAFLEHH() { return method_call(HDCNNAFLEHH, ); } // 0xA31210 // Slot: 16
	// virtual // bool HGHOMKNIOIH() { return method_call(HGHOMKNIOIH, ); } // 0x3C69B0 // Slot: 17
	// virtual // void OGDBGDFPOEC() { return method_call(OGDBGDFPOEC, ); } // 0xA307B0 // Slot: 18
	// virtual // bool KAJANDKGOEM() { return method_call(KAJANDKGOEM, ); } // 0x3C69A0 // Slot: 19
	// virtual // void KCEGKONPDOO() { return method_call(KCEGKONPDOO, ); } // 0xA31890 // Slot: 20
	// virtual // void LHCIPDNOBMM() { return method_call(LHCIPDNOBMM, ); } // 0xA307B0 // Slot: 21
	// virtual // void MBOEOGDCHDL() { return method_call(MBOEOGDCHDL, ); } // 0x4D6A30 // Slot: 22
	// virtual // bool PCGJJBBACAL() { return method_call(PCGJJBBACAL, ); } // 0x3C69C0 // Slot: 23
	// virtual // bool ABIJIFILFIM() { return method_call(ABIJIFILFIM, ); } // 0x3C69A0 // Slot: 24
	// virtual // void LGKDABCMNLA() { return method_call(LGKDABCMNLA, ); } // 0xA31D10 // Slot: 25
	// virtual // void KAHNKAGGDAH() { return method_call(KAHNKAGGDAH, ); } // 0xA317D0 // Slot: 26
	// virtual // void ABBGKJBGNLD() { return method_call(ABBGKJBGNLD, ); } // 0xA305F0 // Slot: 27
	// virtual // void EDJLMKJEGIK() { return method_call(EDJLMKJEGIK, ); } // 0xA30A60 // Slot: 28
	// virtual // void LAJJAJONEDF() { return method_call(LAJJAJONEDF, ); } // 0xA31B10 // Slot: 29
	// virtual // void HKJNMGMCNOH() { return method_call(HKJNMGMCNOH, ); } // 0xA313D0 // Slot: 30
	// virtual // bool MFOKCCBMJIE() { return method_call(MFOKCCBMJIE, ); } // 0x3C69A0 // Slot: 31
	// virtual // void HEMOJNBFGGD() { return method_call(HEMOJNBFGGD, ); } // 0x4D6A30 // Slot: 32
	// virtual // bool get_HandleUp() { return method_call(get_HandleUp, ); } // 0x3C69A0 // Slot: 4
	// virtual // bool MNMCEICEMJN() { return method_call(MNMCEICEMJN, ); } // 0x3C69C0 // Slot: 33
	// virtual // void IMNAGFFJGAH() { return method_call(IMNAGFFJGAH, ); } // 0x4D6A30 // Slot: 34
	// virtual // void ReceiveMouseOut() { return method_call(ReceiveMouseOut, ); } // 0xA30A60 // Slot: 14
	// virtual // void DMHDBKPHKAF() { return method_call(DMHDBKPHKAF, ); } // 0xA30B50 // Slot: 35
	// virtual // void IHAOBCFIGNC() { return method_call(IHAOBCFIGNC, ); } // 0xA31550 // Slot: 36
	// virtual // void KFGKPEMNPKB() { return method_call(KFGKPEMNPKB, ); } // 0xA30A60 // Slot: 37
	// virtual // void DHGJKDMGNOE() { return method_call(DHGJKDMGNOE, ); } // 0xA307B0 // Slot: 38
	// virtual // bool PHIMHHHNCIK() { return method_call(PHIMHHHNCIK, ); } // 0x3C69A0 // Slot: 39
	// virtual // bool AJOKAELOOIA() { return method_call(AJOKAELOOIA, ); } // 0x3C69A0 // Slot: 40
	// virtual // bool LGHIMGJOPAD() { return method_call(LGHIMGJOPAD, ); } // 0x3C69A0 // Slot: 41
	// virtual // void ALIFMLPIAOC() { return method_call(ALIFMLPIAOC, ); } // 0x4D6A30 // Slot: 42
	// virtual // bool get_HandleRepeat() { return method_call(get_HandleRepeat, ); } // 0x3C69C0 // Slot: 6
	// virtual // bool ELKJFHPPALB() { return method_call(ELKJFHPPALB, ); } // 0x3C69A0 // Slot: 43
	// virtual // bool CAJMMDPCMBG() { return method_call(CAJMMDPCMBG, ); } // 0x3C69B0 // Slot: 44
	// virtual // void HNJPODMAKHN() { return method_call(HNJPODMAKHN, ); } // 0xA31490 // Slot: 45
	// virtual // bool GJOIGDKDCBO() { return method_call(GJOIGDKDCBO, ); } // 0x3C69A0 // Slot: 46
	// virtual // void AEOEOBLOILL() { return method_call(AEOEOBLOILL, ); } // 0xA306F0 // Slot: 47
	// virtual // void GKPOPJOFLGC() { return method_call(GKPOPJOFLGC, ); } // 0xA30FD0 // Slot: 48
	// virtual // void FFMFMOBNKAL() { return method_call(FFMFMOBNKAL, ); } // 0xA307B0 // Slot: 49
	// virtual // void DODKPOHDHDI() { return method_call(DODKPOHDHDI, ); } // 0xA30C50 // Slot: 50
	// virtual // void FCJDFKPLGNE() { return method_call(FCJDFKPLGNE, ); } // 0xA30A60 // Slot: 51
	// virtual // void DHFDPHMHGOA() { return method_call(DHFDPHMHGOA, ); } // 0xA30A90 // Slot: 52
	// virtual // bool EBGEBIOPMEA() { return method_call(EBGEBIOPMEA, ); } // 0x3C69B0 // Slot: 53
	// virtual // bool BOBDCIFFAFO() { return method_call(BOBDCIFFAFO, ); } // 0x3C69B0 // Slot: 54
	// virtual // void ANOGHAMICLF() { return method_call(ANOGHAMICLF, ); } // 0xA307B0 // Slot: 55
	// virtual // void ReceiveClickDown() { return method_call(ReceiveClickDown, ); } // 0xA32150 // Slot: 9
	// virtual // void PJLLEGHACDK() { return method_call(PJLLEGHACDK, ); } // 0xA307B0 // Slot: 56
	// virtual // bool DGCHGGFFGNL() { return method_call(DGCHGGFFGNL, ); } // 0x3C69A0 // Slot: 57
	// virtual // bool JMHBFBCEMGL() { return method_call(JMHBFBCEMGL, ); } // 0x3C69A0 // Slot: 58
	// virtual // bool CPEEHKKKGDD() { return method_call(CPEEHKKKGDD, ); } // 0x3C69A0 // Slot: 59
	// virtual // bool get_HandleDown() { return method_call(get_HandleDown, ); } // 0x3C69B0 // Slot: 5
	// virtual // void FJHAJOAFDNP() { return method_call(FJHAJOAFDNP, ); } // 0xA307B0 // Slot: 60
	// virtual // void CIKHDLNECFF() { return method_call(CIKHDLNECFF, ); } // 0xA30A60 // Slot: 61
	// virtual // void KIDAPBMEBLC() { return method_call(KIDAPBMEBLC, ); } // 0xA31A50 // Slot: 62
	// virtual // void DPPMIBCDBHI() { return method_call(DPPMIBCDBHI, ); } // 0xA30A60 // Slot: 63
	// virtual // void AFEGDMHICLA() { return method_call(AFEGDMHICLA, ); } // 0xA307B0 // Slot: 64
	// virtual // void ELLAHMHKALD() { return method_call(ELLAHMHKALD, ); } // 0xA307B0 // Slot: 65
	void _ctor() { return method_call(_ctor, ); } // 0xA32310
	// virtual // bool DIPNHGANKMF() { return method_call(DIPNHGANKMF, ); } // 0x3C69A0 // Slot: 66
	// virtual // void IEELHLCGBCK() { return method_call(IEELHLCGBCK, ); } // 0xA307B0 // Slot: 67
	// virtual // bool MPHELNLLIGF() { return method_call(MPHELNLLIGF, ); } // 0x3C69C0 // Slot: 68
	// virtual // void BBKANOFOPNL() { return method_call(BBKANOFOPNL, ); } // 0x4D6A30 // Slot: 69
	// virtual // bool NMNOLLOEMOJ() { return method_call(NMNOLLOEMOJ, ); } // 0x3C69B0 // Slot: 70
	// virtual // void HEJMNHCFGCM() { return method_call(HEJMNHCFGCM, ); } // 0xA31310 // Slot: 71
	// virtual // void FLHGOCHBOBM() { return method_call(FLHGOCHBOBM, ); } // 0x4D6A30 // Slot: 72
	// virtual // void GMGNPDIPNHI() { return method_call(GMGNPDIPNHI, ); } // 0xA30A60 // Slot: 73
	// virtual // bool LBJFIKKLIBH() { return method_call(LBJFIKKLIBH, ); } // 0x3C69A0 // Slot: 74
	// virtual // bool IKLFMEHNMBJ() { return method_call(IKLFMEHNMBJ, ); } // 0x3C69B0 // Slot: 75
	// virtual // void CPAJOLCPNJK() { return method_call(CPAJOLCPNJK, ); } // 0xA30A60 // Slot: 76
	// virtual // void OKALCPKMINE() { return method_call(OKALCPKMINE, ); } // 0xA32090 // Slot: 77
	// virtual // void JAIANIPMDAF() { return method_call(JAIANIPMDAF, ); } // 0xA31610 // Slot: 78
	// virtual // void KHJJKFGAOMM() { return method_call(KHJJKFGAOMM, ); } // 0xA30A60 // Slot: 79
	// virtual // void BAFNHGNLCMP() { return method_call(BAFNHGNLCMP, ); } // 0xA308A0 // Slot: 80
	// virtual // void AIGEDIHFIFC() { return method_call(AIGEDIHFIFC, ); } // 0xA307E0 // Slot: 81
	// virtual // void EHFLJOHNCBC() { return method_call(EHFLJOHNCBC, ); } // 0xA30D10 // Slot: 82
	// virtual // void MBKJGGEJAHO() { return method_call(MBKJGGEJAHO, ); } // 0xA307B0 // Slot: 83
	// virtual // bool OPHDCOBJONF() { return method_call(OPHDCOBJONF, ); } // 0x3C69A0 // Slot: 84
	// virtual // bool BKDEJDCPFOE() { return method_call(BKDEJDCPFOE, ); } // 0x3C69A0 // Slot: 85
	// virtual // void JJECHOJABDG() { return method_call(JJECHOJABDG, ); } // 0xA307B0 // Slot: 86
	// virtual // void GAIJDLDONHN() { return method_call(GAIJDLDONHN, ); } // 0x4D6A30 // Slot: 87
	// virtual // void CGMMOKGFCFI() { return method_call(CGMMOKGFCFI, ); } // 0xA307B0 // Slot: 88
	// virtual // void ReceiveClickUp() { return method_call(ReceiveClickUp, ); } // 0x4D6A30 // Slot: 11
	// virtual // void JGLPBEFKOKP() { return method_call(JGLPBEFKOKP, ); } // 0xA316D0 // Slot: 89
	// virtual // void GCLIOBFEKFH() { return method_call(GCLIOBFEKFH, ); } // 0xA30E10 // Slot: 90
	// virtual // bool JOONDIMMHOK() { return method_call(JOONDIMMHOK, ); } // 0x3C69B0 // Slot: 91
	// virtual // void MEGHCAPPJOC() { return method_call(MEGHCAPPJOC, ); } // 0xA30A60 // Slot: 92
	// virtual // void HMDJHIHLAFN() { return method_call(HMDJHIHLAFN, ); } // 0xA30A60 // Slot: 93
	// virtual // void FPFKHBDKMCO() { return method_call(FPFKHBDKMCO, ); } // 0xA30A60 // Slot: 94
	// virtual // void KANAJIGHHDJ() { return method_call(KANAJIGHHDJ, ); } // 0xA307B0 // Slot: 95
	// virtual // bool NJCBOLOOJOK() { return method_call(NJCBOLOOJOK, ); } // 0x3C69C0 // Slot: 96
	// virtual // void HADEEJOLHJG() { return method_call(HADEEJOLHJG, ); } // 0xA31150 // Slot: 97
	// virtual // void DMGNHNDICNB() { return method_call(DMGNHNDICNB, ); } // 0x4D6A30 // Slot: 98
	// virtual // void JKBIDMDKPMH() { return method_call(JKBIDMDKPMH, ); } // 0x4D6A30 // Slot: 99
	// virtual // void OAONCMLPNEE() { return method_call(OAONCMLPNEE, ); } // 0xA31FD0 // Slot: 100
	// virtual // bool IONDJJJMLKI() { return method_call(IONDJJJMLKI, ); } // 0x3C69C0 // Slot: 101
	// virtual // bool GNOHGDFGECG() { return method_call(GNOHGDFGECG, ); } // 0x3C69B0 // Slot: 102
	// virtual // void GDFECOMEFLH() { return method_call(GDFECOMEFLH, ); } // 0xA30ED0 // Slot: 103
	// virtual // void DEIHHKANMGM() { return method_call(DEIHHKANMGM, ); } // 0xA307B0 // Slot: 104
	// virtual // void DMGBJIAJHGM() { return method_call(DMGBJIAJHGM, ); } // 0xA307B0 // Slot: 105
	// virtual // bool LKBLHNMAEGF() { return method_call(LKBLHNMAEGF, ); } // 0x3C69C0 // Slot: 106
	// virtual // bool EIHCJIMPAJH() { return method_call(EIHCJIMPAJH, ); } // 0x3C69A0 // Slot: 107
	// virtual // bool HNJHCJMFKKL() { return method_call(HNJHCJMFKKL, ); } // 0x3C69A0 // Slot: 108
	// virtual // void KHHLLAELHPE() { return method_call(KHHLLAELHPE, ); } // 0xA31990 // Slot: 109
	// virtual // bool AKHDIMOECBJ() { return method_call(AKHDIMOECBJ, ); } // 0x3C69A0 // Slot: 110
	// virtual // bool IMCIJMANGAM() { return method_call(IMCIJMANGAM, ); } // 0x3C69B0 // Slot: 111
	// virtual // void BGMONBFAJLM() { return method_call(BGMONBFAJLM, ); } // 0xA30960 // Slot: 112
	// virtual // void KOEDNHELOAP() { return method_call(KOEDNHELOAP, ); } // 0x4D6A30 // Slot: 113
	// virtual // void LPIIAPGLIEP() { return method_call(LPIIAPGLIEP, ); } // 0xA30A60 // Slot: 114
	// virtual // void GMBLAFFPLLM() { return method_call(GMBLAFFPLLM, ); } // 0xA31090 // Slot: 115
	// virtual // bool AKNIGOJNCLH() { return method_call(AKNIGOJNCLH, ); } // 0x3C69C0 // Slot: 116
	// virtual // void OBCPHCFPAGJ() { return method_call(OBCPHCFPAGJ, ); } // 0xA307B0 // Slot: 117
	// virtual // bool GHIJPKHOAKN() { return method_call(GHIJPKHOAKN, ); } // 0x3C69C0 // Slot: 118
	// virtual // void MMFDKJBEFFG() { return method_call(MMFDKJBEFFG, ); } // 0xA31E10 // Slot: 119
	// virtual // void LDJJJAFBHKE() { return method_call(LDJJJAFBHKE, ); } // 0x4D6A30 // Slot: 120
	// virtual // void ReceiveRepeatDown() { return method_call(ReceiveRepeatDown, ); } // 0xA32210 // Slot: 10
	// virtual // void ReceiveMouseOver() { return method_call(ReceiveMouseOver, ); } // 0xA307B0 // Slot: 13
	// virtual // void JHNAHJNCIBM() { return method_call(JHNAHJNCIBM, ); } // 0xA307B0 // Slot: 121
	// virtual // void LCMBNFKAPKN() { return method_call(LCMBNFKAPKN, ); } // 0xA31C10 // Slot: 122
	// virtual // void DAKDOKPLBAH() { return method_call(DAKDOKPLBAH, ); } // 0xA307B0 // Slot: 123
	// virtual // bool KLAEAINMNPI() { return method_call(KLAEAINMNPI, ); } // 0x3C69B0 // Slot: 124
	// virtual // void NLAILPBGHMP() { return method_call(NLAILPBGHMP, ); } // 0xA31F10 // Slot: 125
};
namespace ark::method_info
{

	// method_rva(PassiveButton::JKIBEBDFIOL, 0x3C69A0)
	// method_rva(PassiveButton::HDCNNAFLEHH, 0xA31210)
	// method_rva(PassiveButton::HGHOMKNIOIH, 0x3C69B0)
	// method_rva(PassiveButton::OGDBGDFPOEC, 0xA307B0)
	// method_rva(PassiveButton::KAJANDKGOEM, 0x3C69A0)
	// method_rva(PassiveButton::KCEGKONPDOO, 0xA31890)
	// method_rva(PassiveButton::LHCIPDNOBMM, 0xA307B0)
	// method_rva(PassiveButton::MBOEOGDCHDL, 0x4D6A30)
	// method_rva(PassiveButton::PCGJJBBACAL, 0x3C69C0)
	// method_rva(PassiveButton::ABIJIFILFIM, 0x3C69A0)
	// method_rva(PassiveButton::LGKDABCMNLA, 0xA31D10)
	// method_rva(PassiveButton::KAHNKAGGDAH, 0xA317D0)
	// method_rva(PassiveButton::ABBGKJBGNLD, 0xA305F0)
	// method_rva(PassiveButton::EDJLMKJEGIK, 0xA30A60)
	// method_rva(PassiveButton::LAJJAJONEDF, 0xA31B10)
	// method_rva(PassiveButton::HKJNMGMCNOH, 0xA313D0)
	// method_rva(PassiveButton::MFOKCCBMJIE, 0x3C69A0)
	// method_rva(PassiveButton::HEMOJNBFGGD, 0x4D6A30)
	// method_rva(PassiveButton::get_HandleUp, 0x3C69A0)
	// method_rva(PassiveButton::MNMCEICEMJN, 0x3C69C0)
	// method_rva(PassiveButton::IMNAGFFJGAH, 0x4D6A30)
	// method_rva(PassiveButton::ReceiveMouseOut, 0xA30A60)
	// method_rva(PassiveButton::DMHDBKPHKAF, 0xA30B50)
	// method_rva(PassiveButton::IHAOBCFIGNC, 0xA31550)
	// method_rva(PassiveButton::KFGKPEMNPKB, 0xA30A60)
	// method_rva(PassiveButton::DHGJKDMGNOE, 0xA307B0)
	// method_rva(PassiveButton::PHIMHHHNCIK, 0x3C69A0)
	// method_rva(PassiveButton::AJOKAELOOIA, 0x3C69A0)
	// method_rva(PassiveButton::LGHIMGJOPAD, 0x3C69A0)
	// method_rva(PassiveButton::ALIFMLPIAOC, 0x4D6A30)
	// method_rva(PassiveButton::get_HandleRepeat, 0x3C69C0)
	// method_rva(PassiveButton::ELKJFHPPALB, 0x3C69A0)
	// method_rva(PassiveButton::CAJMMDPCMBG, 0x3C69B0)
	// method_rva(PassiveButton::HNJPODMAKHN, 0xA31490)
	// method_rva(PassiveButton::GJOIGDKDCBO, 0x3C69A0)
	// method_rva(PassiveButton::AEOEOBLOILL, 0xA306F0)
	// method_rva(PassiveButton::GKPOPJOFLGC, 0xA30FD0)
	// method_rva(PassiveButton::FFMFMOBNKAL, 0xA307B0)
	// method_rva(PassiveButton::DODKPOHDHDI, 0xA30C50)
	// method_rva(PassiveButton::FCJDFKPLGNE, 0xA30A60)
	// method_rva(PassiveButton::DHFDPHMHGOA, 0xA30A90)
	// method_rva(PassiveButton::EBGEBIOPMEA, 0x3C69B0)
	// method_rva(PassiveButton::BOBDCIFFAFO, 0x3C69B0)
	// method_rva(PassiveButton::ANOGHAMICLF, 0xA307B0)
	// method_rva(PassiveButton::ReceiveClickDown, 0xA32150)
	// method_rva(PassiveButton::PJLLEGHACDK, 0xA307B0)
	// method_rva(PassiveButton::DGCHGGFFGNL, 0x3C69A0)
	// method_rva(PassiveButton::JMHBFBCEMGL, 0x3C69A0)
	// method_rva(PassiveButton::CPEEHKKKGDD, 0x3C69A0)
	// method_rva(PassiveButton::get_HandleDown, 0x3C69B0)
	// method_rva(PassiveButton::FJHAJOAFDNP, 0xA307B0)
	// method_rva(PassiveButton::CIKHDLNECFF, 0xA30A60)
	// method_rva(PassiveButton::KIDAPBMEBLC, 0xA31A50)
	// method_rva(PassiveButton::DPPMIBCDBHI, 0xA30A60)
	// method_rva(PassiveButton::AFEGDMHICLA, 0xA307B0)
	// method_rva(PassiveButton::ELLAHMHKALD, 0xA307B0)
	method_rva(PassiveButton::_ctor, 0xA32310)
	// method_rva(PassiveButton::DIPNHGANKMF, 0x3C69A0)
	// method_rva(PassiveButton::IEELHLCGBCK, 0xA307B0)
	// method_rva(PassiveButton::MPHELNLLIGF, 0x3C69C0)
	// method_rva(PassiveButton::BBKANOFOPNL, 0x4D6A30)
	// method_rva(PassiveButton::NMNOLLOEMOJ, 0x3C69B0)
	// method_rva(PassiveButton::HEJMNHCFGCM, 0xA31310)
	// method_rva(PassiveButton::FLHGOCHBOBM, 0x4D6A30)
	// method_rva(PassiveButton::GMGNPDIPNHI, 0xA30A60)
	// method_rva(PassiveButton::LBJFIKKLIBH, 0x3C69A0)
	// method_rva(PassiveButton::IKLFMEHNMBJ, 0x3C69B0)
	// method_rva(PassiveButton::CPAJOLCPNJK, 0xA30A60)
	// method_rva(PassiveButton::OKALCPKMINE, 0xA32090)
	// method_rva(PassiveButton::JAIANIPMDAF, 0xA31610)
	// method_rva(PassiveButton::KHJJKFGAOMM, 0xA30A60)
	// method_rva(PassiveButton::BAFNHGNLCMP, 0xA308A0)
	// method_rva(PassiveButton::AIGEDIHFIFC, 0xA307E0)
	// method_rva(PassiveButton::EHFLJOHNCBC, 0xA30D10)
	// method_rva(PassiveButton::MBKJGGEJAHO, 0xA307B0)
	// method_rva(PassiveButton::OPHDCOBJONF, 0x3C69A0)
	// method_rva(PassiveButton::BKDEJDCPFOE, 0x3C69A0)
	// method_rva(PassiveButton::JJECHOJABDG, 0xA307B0)
	// method_rva(PassiveButton::GAIJDLDONHN, 0x4D6A30)
	// method_rva(PassiveButton::CGMMOKGFCFI, 0xA307B0)
	// method_rva(PassiveButton::ReceiveClickUp, 0x4D6A30)
	// method_rva(PassiveButton::JGLPBEFKOKP, 0xA316D0)
	// method_rva(PassiveButton::GCLIOBFEKFH, 0xA30E10)
	// method_rva(PassiveButton::JOONDIMMHOK, 0x3C69B0)
	// method_rva(PassiveButton::MEGHCAPPJOC, 0xA30A60)
	// method_rva(PassiveButton::HMDJHIHLAFN, 0xA30A60)
	// method_rva(PassiveButton::FPFKHBDKMCO, 0xA30A60)
	// method_rva(PassiveButton::KANAJIGHHDJ, 0xA307B0)
	// method_rva(PassiveButton::NJCBOLOOJOK, 0x3C69C0)
	// method_rva(PassiveButton::HADEEJOLHJG, 0xA31150)
	// method_rva(PassiveButton::DMGNHNDICNB, 0x4D6A30)
	// method_rva(PassiveButton::JKBIDMDKPMH, 0x4D6A30)
	// method_rva(PassiveButton::OAONCMLPNEE, 0xA31FD0)
	// method_rva(PassiveButton::IONDJJJMLKI, 0x3C69C0)
	// method_rva(PassiveButton::GNOHGDFGECG, 0x3C69B0)
	// method_rva(PassiveButton::GDFECOMEFLH, 0xA30ED0)
	// method_rva(PassiveButton::DEIHHKANMGM, 0xA307B0)
	// method_rva(PassiveButton::DMGBJIAJHGM, 0xA307B0)
	// method_rva(PassiveButton::LKBLHNMAEGF, 0x3C69C0)
	// method_rva(PassiveButton::EIHCJIMPAJH, 0x3C69A0)
	// method_rva(PassiveButton::HNJHCJMFKKL, 0x3C69A0)
	// method_rva(PassiveButton::KHHLLAELHPE, 0xA31990)
	// method_rva(PassiveButton::AKHDIMOECBJ, 0x3C69A0)
	// method_rva(PassiveButton::IMCIJMANGAM, 0x3C69B0)
	// method_rva(PassiveButton::BGMONBFAJLM, 0xA30960)
	// method_rva(PassiveButton::KOEDNHELOAP, 0x4D6A30)
	// method_rva(PassiveButton::LPIIAPGLIEP, 0xA30A60)
	// method_rva(PassiveButton::GMBLAFFPLLM, 0xA31090)
	// method_rva(PassiveButton::AKNIGOJNCLH, 0x3C69C0)
	// method_rva(PassiveButton::OBCPHCFPAGJ, 0xA307B0)
	// method_rva(PassiveButton::GHIJPKHOAKN, 0x3C69C0)
	// method_rva(PassiveButton::MMFDKJBEFFG, 0xA31E10)
	// method_rva(PassiveButton::LDJJJAFBHKE, 0x4D6A30)
	// method_rva(PassiveButton::ReceiveRepeatDown, 0xA32210)
	// method_rva(PassiveButton::ReceiveMouseOver, 0xA307B0)
	// method_rva(PassiveButton::JHNAHJNCIBM, 0xA307B0)
	// method_rva(PassiveButton::LCMBNFKAPKN, 0xA31C10)
	// method_rva(PassiveButton::DAKDOKPLBAH, 0xA307B0)
	// method_rva(PassiveButton::KLAEAINMNPI, 0x3C69B0)
	// method_rva(PassiveButton::NLAILPBGHMP, 0xA31F10)
}
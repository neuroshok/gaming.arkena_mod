#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Vector3.hpp>
#include <autogen/Unity/Sprite.hpp>
#include <autogen/Unity/SpriteRenderer.hpp>

// usable_object
struct Vent : ark::meta<Vent, Unity::MonoBehaviour>
{
    ark_meta("", "OPPMFCFACJB");

    std::int32_t Id;                     // 0xC
    Vent* Left;            // 0x10
    Vent* Right;           // 0x14
    Vent* Center;          // 0x18
    struct LMPPCHIGNOI* Buttons;         // 0x1C
    struct AnimationClip* EnterVentAnim; // 0x20
    struct AnimationClip* ExitVentAnim;  // 0x24
    Unity::SpriteRenderer* renderer;  // 0x28
    Unity::Vector3 Offset;               // 0x2C
        Unity::Sprite* CLDCGJAJCME() { return method_call(CLDCGJAJCME, ); } // 0x1F6B70 // Slot: 10
	void ENCPOOAFILD(PlayerControl* NMEAPOJFNKA) { return method_call(ENCPOOAFILD, NMEAPOJFNKA); } // 0xD6F470
	float get_PercentCool() { return method_call(get_PercentCool, ); } // 0x8BB130 // Slot: 5
	void KAANPAMAPPC(bool EHNJJAPKPMF, bool OPFNEGKJDLB) { return method_call(KAANPAMAPPC, EHNJJAPKPMF, OPFNEGKJDLB); } // 0xD70790 // Slot: 11
	float BFMGILLIAIO() { return method_call(BFMGILLIAIO, ); } // 0xD6E5B0 // Slot: 12
	void ANMBBGIBGEA() { return method_call(ANMBBGIBGEA, ); } // 0xD6E4B0 // Slot: 13
	void OPOCIHBFOFD() { return method_call(OPOCIHBFOFD, ); } // 0xD717F0
	void FOPIAGMFFII(struct Vector3* JNPBFGJCCLC) { return method_call(FOPIAGMFFII, JNPBFGJCCLC); } // 0xD6F620
	void KOCOPDIIMHI(bool EHNJJAPKPMF, bool OPFNEGKJDLB) { return method_call(KOCOPDIIMHI, EHNJJAPKPMF, OPFNEGKJDLB); } // 0xD70BC0 // Slot: 14

	float CNIPCPBFHDC() { return method_call(CNIPCPBFHDC, ); } // 0xD6EB00 // Slot: 17
	float OECKLIPPONO() { return method_call(OECKLIPPONO, ); } // 0xD717D0 // Slot: 18
	void HBCMLMDLBGH(bool IPEHDFCOEMM) { return method_call(HBCMLMDLBGH, IPEHDFCOEMM); } // 0xD6FB10
	float get_UsableDistance() { return method_call(get_UsableDistance, ); } // 0xD72170 // Slot: 4
	void _ctor() { return method_call(_ctor, ); } // 0xD72110
	float HKCDEKLPOGK() { return method_call(HKCDEKLPOGK, ); } // 0xD6FF50 // Slot: 19
	void IPOFMFAPKEK(struct Vector3* JNPBFGJCCLC) { return method_call(IPOFMFAPKEK, JNPBFGJCCLC); } // 0xD703A0
	float JLBJKBJDIFM() { return method_call(JLBJKBJDIFM, ); } // 0xD70780 // Slot: 20
	void Start() { return method_call(Start, ); } // 0xD71FC0
	void BHKPIPEDDJP(struct Vector3* JNPBFGJCCLC) { return method_call(BHKPIPEDDJP, JNPBFGJCCLC); } // 0xD6E5C0
	void GNGHIGMBKBB() { return method_call(GNGHIGMBKBB, ); } // 0xD6FA10
	void LHFMLJFBBED(bool EHNJJAPKPMF, bool OPFNEGKJDLB) { return method_call(LHFMLJFBBED, EHNJJAPKPMF, OPFNEGKJDLB); } // 0xD70DD0 // Slot: 21
	void GCMOGKMBPNE(PlayerControl* NMEAPOJFNKA) { return method_call(GCMOGKMBPNE, NMEAPOJFNKA); } // 0xD6F860
	void ClickRight() { return method_call(ClickRight, ); } // 0xD6EF30
	void SetButtons(bool IPEHDFCOEMM) { return method_call(SetButtons, IPEHDFCOEMM); } // 0xD71A70
	float PAHELOKOKHN(GameData::PlayerInfo* NMEAPOJFNKA, bool HPLJBLJOCKO, bool KBFCKGNGJED) { return method_call(PAHELOKOKHN, NMEAPOJFNKA, HPLJBLJOCKO, KBFCKGNGJED); } // 0xD71840 // Slot: 22
	void KLBOLGGKOEO() { return method_call(KLBOLGGKOEO, ); } // 0xD70AC0 // Slot: 23
	float CanUse(GameData::PlayerInfo* NMEAPOJFNKA, bool& HPLJBLJOCKO, bool& KBFCKGNGJED) { return method_call(CanUse, NMEAPOJFNKA, HPLJBLJOCKO, KBFCKGNGJED); } // 0xD6EB10 // Slot: 8
	float GHAMONLOEDO() { return method_call(GHAMONLOEDO, ); } // 0xD6FA00 // Slot: 24
	void ClickCenter() { return method_call(ClickCenter, ); } // 0xD6ED30
	void DCPFHKCCLGP(bool IPEHDFCOEMM) { return method_call(DCPFHKCCLGP, IPEHDFCOEMM); } // 0xD6F030
	void MNGKKJCJPEG() { return method_call(MNGKKJCJPEG, ); } // 0xD712B0
	void NPHLONLDKHN(bool IPEHDFCOEMM) { return method_call(NPHLONLDKHN, IPEHDFCOEMM); } // 0xD713B0
	void HLHFNPFGHMP(struct Vector3* JNPBFGJCCLC) { return method_call(HLHFNPFGHMP, JNPBFGJCCLC); } // 0xD6FF60
	void CMDNDDGKDDO() { return method_call(CMDNDDGKDDO, ); } // 0xD6EA00 // Slot: 25
	float OELGBMPLNJK() { return method_call(OELGBMPLNJK, ); } // 0xD717E0 // Slot: 26
	void CHACFBDONKJ() { return method_call(CHACFBDONKJ, ); } // 0xD6E900
	void JBNFMBNNPJB(PlayerControl* NMEAPOJFNKA) { return method_call(JBNFMBNNPJB, NMEAPOJFNKA); } // 0xD705E0
	void BJPMFMOCEOH() { return method_call(BJPMFMOCEOH, ); } // 0xD6E800
	void Use() { return method_call(Use, ); } // 0xD72010 // Slot: 9
	void SetOutline(bool EHNJJAPKPMF, bool OPFNEGKJDLB) { return method_call(SetOutline, EHNJJAPKPMF, OPFNEGKJDLB); } // 0xD71EB0 // Slot: 7
	void AFNMHBKDFKF() { return method_call(AFNMHBKDFKF, ); } // 0xD6E3B0 // Slot: 27
	void LHHGOOMCBML(struct Vector3* JNPBFGJCCLC) { return method_call(LHHGOOMCBML, JNPBFGJCCLC); } // 0xD70ED0
	void LEJKDMFPIGM() { return method_call(LEJKDMFPIGM, ); } // 0xD70CD0 // Slot: 28
	Unity::Sprite* get_UseIcon() { return method_call(get_UseIcon, ); } // 0x1F6B70 // Slot: 6
	void ClickLeft() { return method_call(ClickLeft, ); } // 0xD6EE30
	float FCNEFABBLKD() { return method_call(FCNEFABBLKD, ); } // 0xD6F610 // Slot: 29
	void HODKBMDOMHF() { return method_call(HODKBMDOMHF, ); } // 0xD701A0
	void IHDFELCBCPK(bool EHNJJAPKPMF, bool OPFNEGKJDLB) { return method_call(IHDFELCBCPK, EHNJJAPKPMF, OPFNEGKJDLB); } // 0xD702A0 // Slot: 30
	void MIIFCLJKIEC(PlayerControl* NMEAPOJFNKA) { return method_call(MIIFCLJKIEC, NMEAPOJFNKA); } // 0xD71110
	float KCLFHHFPFDH(GameData::PlayerInfo* NMEAPOJFNKA, bool HPLJBLJOCKO, bool KBFCKGNGJED) { return method_call(KCLFHHFPFDH, NMEAPOJFNKA, HPLJBLJOCKO, KBFCKGNGJED); } // 0xD708A0 // Slot: 31
};

namespace ark::method_info
{

	method_rva(Vent::CLDCGJAJCME, 0x1F6B70)
	method_rva(Vent::ENCPOOAFILD, 0xD6F470)
	method_rva(Vent::get_PercentCool, 0x8BB130)
	method_rva(Vent::KAANPAMAPPC, 0xD70790)
	method_rva(Vent::BFMGILLIAIO, 0xD6E5B0)
	method_rva(Vent::ANMBBGIBGEA, 0xD6E4B0)
	method_rva(Vent::OPOCIHBFOFD, 0xD717F0)
	method_rva(Vent::FOPIAGMFFII, 0xD6F620)
	method_rva(Vent::KOCOPDIIMHI, 0xD70BC0)
	//method_rva(Vent::DIKJHHCAOPH, 0x1F6B70)
	method_rva(Vent::CNIPCPBFHDC, 0xD6EB00)
	method_rva(Vent::OECKLIPPONO, 0xD717D0)
	method_rva(Vent::HBCMLMDLBGH, 0xD6FB10)
	method_rva(Vent::get_UsableDistance, 0xD72170)
	method_rva(Vent::_ctor, 0xD72110)
	method_rva(Vent::HKCDEKLPOGK, 0xD6FF50)
	method_rva(Vent::IPOFMFAPKEK, 0xD703A0)
	method_rva(Vent::JLBJKBJDIFM, 0xD70780)
	method_rva(Vent::Start, 0xD71FC0)
	method_rva(Vent::BHKPIPEDDJP, 0xD6E5C0)
	method_rva(Vent::GNGHIGMBKBB, 0xD6FA10)
	method_rva(Vent::LHFMLJFBBED, 0xD70DD0)
	method_rva(Vent::GCMOGKMBPNE, 0xD6F860)
	method_rva(Vent::ClickRight, 0xD6EF30)
	method_rva(Vent::SetButtons, 0xD71A70)
	method_rva(Vent::PAHELOKOKHN, 0xD71840)
	method_rva(Vent::KLBOLGGKOEO, 0xD70AC0)
	method_rva(Vent::CanUse, 0xD6EB10)
	method_rva(Vent::GHAMONLOEDO, 0xD6FA00)
	method_rva(Vent::ClickCenter, 0xD6ED30)
	method_rva(Vent::DCPFHKCCLGP, 0xD6F030)
	method_rva(Vent::MNGKKJCJPEG, 0xD712B0)
	method_rva(Vent::NPHLONLDKHN, 0xD713B0)
	method_rva(Vent::HLHFNPFGHMP, 0xD6FF60)
	method_rva(Vent::CMDNDDGKDDO, 0xD6EA00)
	method_rva(Vent::OELGBMPLNJK, 0xD717E0)
	method_rva(Vent::CHACFBDONKJ, 0xD6E900)
	method_rva(Vent::JBNFMBNNPJB, 0xD705E0)
	method_rva(Vent::BJPMFMOCEOH, 0xD6E800)
	method_rva(Vent::Use, 0xD72010)
	method_rva(Vent::SetOutline, 0xD71EB0)
	method_rva(Vent::AFNMHBKDFKF, 0xD6E3B0)
	method_rva(Vent::LHHGOOMCBML, 0xD70ED0)
	method_rva(Vent::LEJKDMFPIGM, 0xD70CD0)
	method_rva(Vent::get_UseIcon, 0x1F6B70)
	method_rva(Vent::ClickLeft, 0xD6EE30)
	method_rva(Vent::FCNEFABBLKD, 0xD6F610)
	method_rva(Vent::HODKBMDOMHF, 0xD701A0)
	method_rva(Vent::IHDFELCBCPK, 0xD702A0)
	method_rva(Vent::MIIFCLJKIEC, 0xD71110)
	method_rva(Vent::KCLFHHFPFDH, 0xD708A0)
}


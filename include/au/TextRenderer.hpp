//au//TextRenderer
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
namespace UnityEngine{ struct TextAsset; }
struct TextLink;
namespace UnityEngine{ struct Mesh; }
namespace UnityEngine{ struct MeshRenderer; }
#include <cs/string.hpp>
#include <au/UnityEngine/Color.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector3.hpp>
struct FontData;
namespace System::Collections::Generic{ template <class> struct List; }

struct TextRenderer : ark::meta<TextRenderer, UnityEngine::MonoBehaviour>
{
ark_meta("", "TextRenderer", "");

    // Fields

    UnityEngine::TextAsset* FontData; // 0xC
    float scale; // 0x10
    float TabWidth; // 0x14
    bool Centered; // 0x18
    bool RightAligned; // 0x19
    TextLink* textLinkPrefab; // 0x1C
    UnityEngine::Mesh* FMBGJDIJNDA; // 0x20
    UnityEngine::MeshRenderer* render; // 0x24
    cs::string* Text; // 0x28
    cs::string* AKDDOPOBPAF; // 0x2C
    UnityEngine::Color Color; // 0x30
    UnityEngine::Color LICAKMIPJGN; // 0x40
    UnityEngine::Color OutlineColor; // 0x50
    UnityEngine::Color EIIHJGDKMAK; // 0x60
    float maxWidth; // 0x70
    float minLineHeight; // 0x74
    bool scaleToFit; // 0x78
    float _CAFPKDJNJPC_k__BackingField; // 0x7C
    float _CODNIECANNC_k__BackingField; // 0x80
    bool paragraphSpacing; // 0x84
    bool trackCharacterPosition; // 0x85
    cs::array<UnityEngine::Vector4>* characterPosData; // 0x88
    UnityEngine::Vector2 IPPLICCIIGG; // 0x8C

    // Methods

    int ANAAEOEDJEN(int LNCGDHJHIIK); // 0x1727E60 // private 
    void ENJEDLHPFED(); // 0x172F700 // public 
    void PKJGEPEMDIC(); // 0x173F7A0 // public 
    bool FGLLOLJPIAG(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1732310 // public 
    void IOCOBDBPCND(); // 0x1736120 // private 
    void ABCPKNDCPJE(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void DMLGGDMLADM(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void BOGFCFGANID(); // 0x1729440 // private 
    bool OIPADNAFJOC(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1729730 // public 
    float MOOODELMNAD(); // 0x1729A20 // public 
    void OHHJDCHIAGH(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void HJNJLHCAOHF(); // 0x1734810 // public 
    float NBPPGPAIFBE(::FontData* MPKDKNHMDCA, cs::string* AKDDOPOBPAF); // 0x173A7A0 // private
    cs::string* HBMEIINGHIL(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x1732F70 // public static 
    void JCEJCNELBNK(); // 0x1736200 // public 
    void PPONCHBACOF(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x17421C0 // private 
    void JPFMHAOMBGP(); // 0x1737F60 // public 
    void CFDMBCNJLGO(float IKGGJMHPDGH); // 0x1727BD0 // private 
    UnityEngine::Vector3 get_CursorPos(); // 0x17441A0 // public 
    bool GetWordPosition(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1732BA0 // public 
    float LKOMDCBNKFB(); // 0x1727E80 // public 
    void ODJNCHEJMMF(float IKGGJMHPDGH); // 0x1727BD0 // private 
    bool HDHKPHAOEDC(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x17343C0 // public 
    float COOHIOPKIAF(); // 0x1729A20 // public 
    float ECICALNPNCE(); // 0x1729A20 // public 
    void LPINDDFLBEN(); // 0x173A2C0 // public 
    cs::string* WrapText(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x1743E10 // public static 
    void OLMPEJIEHGP(); // 0x173C670 // public 
    int PDJACAAADGE(int LNCGDHJHIIK); // 0x173CA40 // private 
    UnityEngine::Vector3 OJIFBDNPHKK(); // 0x173C620 // public 
    void NBFCPKMFIBN(); // 0x173A660 // public 
    float HIMEBEGHEJN(::FontData* MPKDKNHMDCA, cs::string* AKDDOPOBPAF); // 0x17346A0 // private 
    cs::string* NOLEKHMKONC(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x173C4E0 // public static 
    void RefreshMesh(); // 0x1742290 // public 
    bool PAGFELEEOMG(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x173C8D0 // public 
    void HKDEEPDIDFK(); // 0x1735CB0 // public 
    bool HIGGBOGOHLN(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1734530 // public 
    bool CFHGAOMLPNP(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1729730 // public 
    float CNCCOKKAFCE(::FontData* MPKDKNHMDCA, cs::string* AKDDOPOBPAF); // 0x17299C0 // private 
    void DDGKBMCOEOK(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x1729BA0 // private 
    void GPNCPHJILML(); // 0x1732750 // public 
    int MOGEMGBOFKH(int LNCGDHJHIIK); // 0x173A4D0 // private 
    void PDMKEALDKOM(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void POGDMBDFOMJ(); // 0x1740BF0 // public 
    void NGMHMOLJFED(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173AD10 // private 
    bool AJIKCPGCEEE(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1727BF0 // public 
    void PKHNBHHGFNE(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void NPHGEFMGFDM(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void MHGIGIBMFMM(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void GenerateMesh(); // 0x17329B0 // public 
    void OLCOCPHGENN(float IKGGJMHPDGH); // 0x172F6E0 // private 
    float KJACNFCNOBB(); // 0x1729A20 // public 
    void ALGNJOMKDEL(); // 0x1727D80 // private 
    void NLFFJJLEDKA(); // 0x173AEA0 // private 
    UnityEngine::Vector3 BFDANEBPFBC(); // 0x1727E90 // public 
    void ENDILCCCDAA(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void LHHJOFCKANC(); // 0x1738A90 // public 
    void PKFCLFGBIBE(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173F6E0 // private 
    UnityEngine::Vector3 CJCHKLNGOJP(); // 0x17298A0 // public 
    int AJNFCJJHBKO(int LNCGDHJHIIK); // 0x1727D60 // private 
    void FCDPJLGPJMD(); // 0x1730CE0 // public 
    void DDINFPEPPFC(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x1729C60 // private 
    void CMBLJGOPGPH(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x17298F0 // private 
    void LAKBOHKBKOD(); // 0x1738830 // public 
    void NJNOPONBDIK(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void MLCLJGAKIGN(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void HJCJOMIHMPB(); // 0x1734730 // private 
    bool NCMFDENLBOE(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x173A940 // public 
    bool DDALCFOEMMO(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1729A30 // public 
    bool KGLHPDOJKCN(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1738490 // public 
    void HAJKNLLNGPA(); // 0x1732D10 // public 
    void NLNDAAHCJJM(); // 0x173AF90 // public 
    float PEHFDBHHJCJ(); // 0x1729A20 // public 
    void Update(); // 0x1743D30 // private 
    void BKINAGJKANJ(); // 0x1727EE0 // public 
    void EEMNMEODBBM(); // 0x172DC40 // public 
    float MNBNHLDICCN(); // 0x1729A20 // public 
    UnityEngine::Vector3 PKLBEGIDEML(); // 0x1740B50 // public 
    void LFJLIMFPLKK(float IKGGJMHPDGH); // 0x1727BD0 // private 
    void HHNPPMEMLAA(float IKGGJMHPDGH); // 0x172F6E0 // private 
    cs::string* JLLCPPOINLO(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x1736650 // public static 
    float GGBFLLDJGNL(); // 0x1729A20 // public 
    void PEEMDINJPML(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void JLBNHJFCLBB(); // 0x17363F0 // public 
    void DFECPFCPJJD(); // 0x1729D30 // public 
    void NDJALHMHLBI(); // 0x173AAB0 // public 
    void FBGHGOPBDBC(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x1730C20 // private 
    void DOCGPPFPPAJ(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x172B1E0 // private 
    cs::string* KKCDICKOGMA(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x17387C0 // public static 
    bool EKHFECICPPI(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x172F430 // public 
    UnityEngine::Vector3 PLGDBCJOFFO(); // 0x1740BA0 // public 
    float MOOOBBLGLKC(); // 0x1727E80 // public 
    float get_Width(); // 0x1729A20 // public 
    void ctor(); // 0x1744120 // public 
    void NJDLJMGMAIG(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173ADD0 // private 
    void CDBODEDHEOB(float IKGGJMHPDGH); // 0x1727BD0 // private 
    float PFMELENNMGH(::FontData* MPKDKNHMDCA, cs::string* AKDDOPOBPAF); // 0x173DF10 // private 
    void NCLJBKGAIDM(); // 0x173A800 // public 
    void LLLJMNKEHCI(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173A1F0 // private 
    UnityEngine::Vector3 BPBCBPMKDGJ(); // 0x1729520 // public 
    void JPNMJKENJBP(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void DPGCNDPHGOJ(); // 0x172B2B0 // public 
    float get_Height(); // 0x1727E80 // public 
    void ICCLAPEBNKF(float IKGGJMHPDGH); // 0x1727BD0 // private 
    float HBLFAPHAHDA(); // 0x1729A20 // public 
    void Start(); // 0x1743AD0 // public 
    void MKAHADPLGNC(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173A400 // private 
    bool CAGGGGGAEHC(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1729570 // public 
    bool FMLNDODDDFM(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1732480 // public 
    cs::string* INNJHDNKIDM(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x1736080 // public static 
    float AONECNGHEBA(); // 0x1727E80 // public 
    void KJEBMDHECGH(); // 0x17386E0 // private 
    float NAJNACDFMEI(); // 0x1727E80 // public 
    void GBLJJACOLPO(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x17325F0 // private 
    void NPFHNBHPAEK(System::Collections::Generic::List<UnityEngine::Vector3>* LNDCPDECNOM, float PPBDFCAHANC, int ALHEDAFKOOL, float NOOKDONJGOG); // 0x173C550 // private 
    float GMDMHDNJDKN(::FontData* MPKDKNHMDCA, cs::string* AKDDOPOBPAF); // 0x17326C0 // private 
    void PFHMDLGBCFP(); // 0x173CA60 // public 
    void PIDPBBJOPNP(); // 0x173F600 // private 
    void HDANDDGJFKH(); // 0x1732FE0 // public 
    void KFDBNJNHGLK(float IKGGJMHPDGH); // 0x172F6E0 // private 
    void EGMKHAJONEN(); // 0x172DD80 // public 
    float PNCKKGMJGGP(); // 0x1727E80 // public 
    float DOMALLEFABE(); // 0x1729A20 // public 
    float LMPHCLHIDMJ(); // 0x1729A20 // public 
    void LLCIDJIGFPO(); // 0x1738C80 // public 
    void ENBJKGJIEAA(); // 0x172F5A0 // public 
    void LIADMMONPCE(float IKGGJMHPDGH); // 0x172F6E0 // private 
    bool IFDAEFEDGAJ(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x1735F10 // public 
    void IHOCEIIOJBI(float IKGGJMHPDGH); // 0x1727BD0 // private 
    float JEGNNDIIEIF(); // 0x1729A20 // public 
    void JNEEHBGJGPH(); // 0x17366C0 // public 
    float POCDAFPLJEJ(); // 0x1729A20 // public 
    cs::string* KDCDCFNEDJE(::FontData* MPKDKNHMDCA, cs::string* KGGMIHIKDKK, float HKNICGCIAEM); // 0x17381C0 // public static 
    void EECOPENCJFE(); // 0x172C7C0 // public 
    float GMJIAGAHBFO(); // 0x1727E80 // public 
    void PHKBJMAAILA(); // 0x173E1D0 // public 
    float LIMLJJOIELF(); // 0x1727E80 // public 
    void KILGEFFBNMN(); // 0x1738600 // private 
    bool MOLBIOFMDFA(cs::string* EOHDNHPDEMM, /*out*/ UnityEngine::Vector3 CCNJNECCMEJ, /*out*/ UnityEngine::Vector3 NIKICMCAGBJ); // 0x173A4F0 // public 
    UnityEngine::Vector3 CBOEHMPCPCJ(); // 0x17296E0 // public 

};


namespace ark
{
template<>
struct meta_statics<TextRenderer>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&TextRenderer::ANAAEOEDJEN> () { return 0x1727E60; }
    template<> inline uintptr_t rva<&TextRenderer::ENJEDLHPFED> () { return 0x172F700; }
    template<> inline uintptr_t rva<&TextRenderer::PKJGEPEMDIC> () { return 0x173F7A0; }
    template<> inline uintptr_t rva<&TextRenderer::FGLLOLJPIAG> () { return 0x1732310; }
    template<> inline uintptr_t rva<&TextRenderer::IOCOBDBPCND> () { return 0x1736120; }
    template<> inline uintptr_t rva<&TextRenderer::ABCPKNDCPJE> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::DMLGGDMLADM> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::BOGFCFGANID> () { return 0x1729440; }
    template<> inline uintptr_t rva<&TextRenderer::OIPADNAFJOC> () { return 0x1729730; }
    template<> inline uintptr_t rva<&TextRenderer::MOOODELMNAD> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::OHHJDCHIAGH> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::HJNJLHCAOHF> () { return 0x1734810; }
    template<> inline uintptr_t rva<&TextRenderer::NBPPGPAIFBE> () { return 0x173A7A0; }
    template<> inline uintptr_t rva<&TextRenderer::HBMEIINGHIL> () { return 0x1732F70; }
    template<> inline uintptr_t rva<&TextRenderer::JCEJCNELBNK> () { return 0x1736200; }
    template<> inline uintptr_t rva<&TextRenderer::PPONCHBACOF> () { return 0x17421C0; }
    template<> inline uintptr_t rva<&TextRenderer::JPFMHAOMBGP> () { return 0x1737F60; }
    template<> inline uintptr_t rva<&TextRenderer::CFDMBCNJLGO> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::get_CursorPos> () { return 0x17441A0; }
    template<> inline uintptr_t rva<&TextRenderer::GetWordPosition> () { return 0x1732BA0; }
    template<> inline uintptr_t rva<&TextRenderer::LKOMDCBNKFB> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::ODJNCHEJMMF> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::HDHKPHAOEDC> () { return 0x17343C0; }
    template<> inline uintptr_t rva<&TextRenderer::COOHIOPKIAF> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::ECICALNPNCE> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::LPINDDFLBEN> () { return 0x173A2C0; }
    template<> inline uintptr_t rva<&TextRenderer::WrapText> () { return 0x1743E10; }
    template<> inline uintptr_t rva<&TextRenderer::OLMPEJIEHGP> () { return 0x173C670; }
    template<> inline uintptr_t rva<&TextRenderer::PDJACAAADGE> () { return 0x173CA40; }
    template<> inline uintptr_t rva<&TextRenderer::OJIFBDNPHKK> () { return 0x173C620; }
    template<> inline uintptr_t rva<&TextRenderer::NBFCPKMFIBN> () { return 0x173A660; }
    template<> inline uintptr_t rva<&TextRenderer::HIMEBEGHEJN> () { return 0x17346A0; }
    template<> inline uintptr_t rva<&TextRenderer::NOLEKHMKONC> () { return 0x173C4E0; }
    template<> inline uintptr_t rva<&TextRenderer::RefreshMesh> () { return 0x1742290; }
    template<> inline uintptr_t rva<&TextRenderer::PAGFELEEOMG> () { return 0x173C8D0; }
    template<> inline uintptr_t rva<&TextRenderer::HKDEEPDIDFK> () { return 0x1735CB0; }
    template<> inline uintptr_t rva<&TextRenderer::HIGGBOGOHLN> () { return 0x1734530; }
    template<> inline uintptr_t rva<&TextRenderer::CFHGAOMLPNP> () { return 0x1729730; }
    template<> inline uintptr_t rva<&TextRenderer::CNCCOKKAFCE> () { return 0x17299C0; }
    template<> inline uintptr_t rva<&TextRenderer::DDGKBMCOEOK> () { return 0x1729BA0; }
    template<> inline uintptr_t rva<&TextRenderer::GPNCPHJILML> () { return 0x1732750; }
    template<> inline uintptr_t rva<&TextRenderer::MOGEMGBOFKH> () { return 0x173A4D0; }
    template<> inline uintptr_t rva<&TextRenderer::PDMKEALDKOM> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::POGDMBDFOMJ> () { return 0x1740BF0; }
    template<> inline uintptr_t rva<&TextRenderer::NGMHMOLJFED> () { return 0x173AD10; }
    template<> inline uintptr_t rva<&TextRenderer::AJIKCPGCEEE> () { return 0x1727BF0; }
    template<> inline uintptr_t rva<&TextRenderer::PKHNBHHGFNE> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::NPHGEFMGFDM> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::MHGIGIBMFMM> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::GenerateMesh> () { return 0x17329B0; }
    template<> inline uintptr_t rva<&TextRenderer::OLCOCPHGENN> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::KJACNFCNOBB> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::ALGNJOMKDEL> () { return 0x1727D80; }
    template<> inline uintptr_t rva<&TextRenderer::NLFFJJLEDKA> () { return 0x173AEA0; }
    template<> inline uintptr_t rva<&TextRenderer::BFDANEBPFBC> () { return 0x1727E90; }
    template<> inline uintptr_t rva<&TextRenderer::ENDILCCCDAA> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::LHHJOFCKANC> () { return 0x1738A90; }
    template<> inline uintptr_t rva<&TextRenderer::PKFCLFGBIBE> () { return 0x173F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::CJCHKLNGOJP> () { return 0x17298A0; }
    template<> inline uintptr_t rva<&TextRenderer::AJNFCJJHBKO> () { return 0x1727D60; }
    template<> inline uintptr_t rva<&TextRenderer::FCDPJLGPJMD> () { return 0x1730CE0; }
    template<> inline uintptr_t rva<&TextRenderer::DDINFPEPPFC> () { return 0x1729C60; }
    template<> inline uintptr_t rva<&TextRenderer::CMBLJGOPGPH> () { return 0x17298F0; }
    template<> inline uintptr_t rva<&TextRenderer::LAKBOHKBKOD> () { return 0x1738830; }
    template<> inline uintptr_t rva<&TextRenderer::NJNOPONBDIK> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::MLCLJGAKIGN> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::HJCJOMIHMPB> () { return 0x1734730; }
    template<> inline uintptr_t rva<&TextRenderer::NCMFDENLBOE> () { return 0x173A940; }
    template<> inline uintptr_t rva<&TextRenderer::DDALCFOEMMO> () { return 0x1729A30; }
    template<> inline uintptr_t rva<&TextRenderer::KGLHPDOJKCN> () { return 0x1738490; }
    template<> inline uintptr_t rva<&TextRenderer::HAJKNLLNGPA> () { return 0x1732D10; }
    template<> inline uintptr_t rva<&TextRenderer::NLNDAAHCJJM> () { return 0x173AF90; }
    template<> inline uintptr_t rva<&TextRenderer::PEHFDBHHJCJ> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::Update> () { return 0x1743D30; }
    template<> inline uintptr_t rva<&TextRenderer::BKINAGJKANJ> () { return 0x1727EE0; }
    template<> inline uintptr_t rva<&TextRenderer::EEMNMEODBBM> () { return 0x172DC40; }
    template<> inline uintptr_t rva<&TextRenderer::MNBNHLDICCN> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::PKLBEGIDEML> () { return 0x1740B50; }
    template<> inline uintptr_t rva<&TextRenderer::LFJLIMFPLKK> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::HHNPPMEMLAA> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::JLLCPPOINLO> () { return 0x1736650; }
    template<> inline uintptr_t rva<&TextRenderer::GGBFLLDJGNL> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::PEEMDINJPML> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::JLBNHJFCLBB> () { return 0x17363F0; }
    template<> inline uintptr_t rva<&TextRenderer::DFECPFCPJJD> () { return 0x1729D30; }
    template<> inline uintptr_t rva<&TextRenderer::NDJALHMHLBI> () { return 0x173AAB0; }
    template<> inline uintptr_t rva<&TextRenderer::FBGHGOPBDBC> () { return 0x1730C20; }
    template<> inline uintptr_t rva<&TextRenderer::DOCGPPFPPAJ> () { return 0x172B1E0; }
    template<> inline uintptr_t rva<&TextRenderer::KKCDICKOGMA> () { return 0x17387C0; }
    template<> inline uintptr_t rva<&TextRenderer::EKHFECICPPI> () { return 0x172F430; }
    template<> inline uintptr_t rva<&TextRenderer::PLGDBCJOFFO> () { return 0x1740BA0; }
    template<> inline uintptr_t rva<&TextRenderer::MOOOBBLGLKC> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::get_Width> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::ctor> () { return 0x1744120; }
    template<> inline uintptr_t rva<&TextRenderer::NJDLJMGMAIG> () { return 0x173ADD0; }
    template<> inline uintptr_t rva<&TextRenderer::CDBODEDHEOB> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::PFMELENNMGH> () { return 0x173DF10; }
    template<> inline uintptr_t rva<&TextRenderer::NCLJBKGAIDM> () { return 0x173A800; }
    template<> inline uintptr_t rva<&TextRenderer::LLLJMNKEHCI> () { return 0x173A1F0; }
    template<> inline uintptr_t rva<&TextRenderer::BPBCBPMKDGJ> () { return 0x1729520; }
    template<> inline uintptr_t rva<&TextRenderer::JPNMJKENJBP> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::DPGCNDPHGOJ> () { return 0x172B2B0; }
    template<> inline uintptr_t rva<&TextRenderer::get_Height> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::ICCLAPEBNKF> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::HBLFAPHAHDA> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::Start> () { return 0x1743AD0; }
    template<> inline uintptr_t rva<&TextRenderer::MKAHADPLGNC> () { return 0x173A400; }
    template<> inline uintptr_t rva<&TextRenderer::CAGGGGGAEHC> () { return 0x1729570; }
    template<> inline uintptr_t rva<&TextRenderer::FMLNDODDDFM> () { return 0x1732480; }
    template<> inline uintptr_t rva<&TextRenderer::INNJHDNKIDM> () { return 0x1736080; }
    template<> inline uintptr_t rva<&TextRenderer::AONECNGHEBA> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::KJEBMDHECGH> () { return 0x17386E0; }
    template<> inline uintptr_t rva<&TextRenderer::NAJNACDFMEI> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::GBLJJACOLPO> () { return 0x17325F0; }
    template<> inline uintptr_t rva<&TextRenderer::NPFHNBHPAEK> () { return 0x173C550; }
    template<> inline uintptr_t rva<&TextRenderer::GMDMHDNJDKN> () { return 0x17326C0; }
    template<> inline uintptr_t rva<&TextRenderer::PFHMDLGBCFP> () { return 0x173CA60; }
    template<> inline uintptr_t rva<&TextRenderer::PIDPBBJOPNP> () { return 0x173F600; }
    template<> inline uintptr_t rva<&TextRenderer::HDANDDGJFKH> () { return 0x1732FE0; }
    template<> inline uintptr_t rva<&TextRenderer::KFDBNJNHGLK> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::EGMKHAJONEN> () { return 0x172DD80; }
    template<> inline uintptr_t rva<&TextRenderer::PNCKKGMJGGP> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::DOMALLEFABE> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::LMPHCLHIDMJ> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::LLCIDJIGFPO> () { return 0x1738C80; }
    template<> inline uintptr_t rva<&TextRenderer::ENBJKGJIEAA> () { return 0x172F5A0; }
    template<> inline uintptr_t rva<&TextRenderer::LIADMMONPCE> () { return 0x172F6E0; }
    template<> inline uintptr_t rva<&TextRenderer::IFDAEFEDGAJ> () { return 0x1735F10; }
    template<> inline uintptr_t rva<&TextRenderer::IHOCEIIOJBI> () { return 0x1727BD0; }
    template<> inline uintptr_t rva<&TextRenderer::JEGNNDIIEIF> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::JNEEHBGJGPH> () { return 0x17366C0; }
    template<> inline uintptr_t rva<&TextRenderer::POCDAFPLJEJ> () { return 0x1729A20; }
    template<> inline uintptr_t rva<&TextRenderer::KDCDCFNEDJE> () { return 0x17381C0; }
    template<> inline uintptr_t rva<&TextRenderer::EECOPENCJFE> () { return 0x172C7C0; }
    template<> inline uintptr_t rva<&TextRenderer::GMJIAGAHBFO> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::PHKBJMAAILA> () { return 0x173E1D0; }
    template<> inline uintptr_t rva<&TextRenderer::LIMLJJOIELF> () { return 0x1727E80; }
    template<> inline uintptr_t rva<&TextRenderer::KILGEFFBNMN> () { return 0x1738600; }
    template<> inline uintptr_t rva<&TextRenderer::MOLBIOFMDFA> () { return 0x173A4F0; }
    template<> inline uintptr_t rva<&TextRenderer::CBOEHMPCPCJ> () { return 0x17296E0; }
} // ark::method_info
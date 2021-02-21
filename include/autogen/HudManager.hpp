#pragma once

#include <ark/class.hpp>

#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/PlayerTask.hpp>
#include <autogen/UseButton.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/Unity/TextRenderer.hpp>
#include <autogen/Unity/Renderer.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Vector2.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

struct HudManager : ark::meta<HudManager, Unity::MonoBehaviour> // TypeDefIndex: 8642
{
    ark_meta("", "PIEFJFEOGOL");

    bool b; // inerithed: PPAEIPHJPDH<HudManager>

    struct KGIKNCBGPFJ* PlayerCam; // 0x10
    struct OOCJALPKPEP* MeetingPrefab; // 0x14
    KillButtonManager* KillButton; // 0x18
    UseButton* UseButton; // 0x1C
    struct HFFEFDMADEK* ReportButton; // 0x20
    Unity::TextRenderer* GameSettings; // 0x24
    struct GameObject* TaskStuff; // 0x28
    struct GEHKHGLKFHE* Chat; // 0x2C
    struct HNKKBIFCNIF* Dialogue; // 0x30
    Unity::TextRenderer* TaskText; // 0x34
    struct Transform* TaskCompleteOverlay; // 0x38
    float LECNIAAAPFI; // 0x3C
    struct MeshRenderer* ShadowQuad; // 0x40
    struct SpriteRenderer* FullScreen; // 0x44
    struct Coroutine* AJGOENOJDNKk__BackingField; // 0x48
    struct Coroutine* HDIPNEFFAGKk__BackingField; // 0x4C
    struct SpriteRenderer* MapButton; // 0x50
    struct CFKDGHIEFFA* KillOverlay; // 0x54
    struct KHHOBDIMOLM* joystick; // 0x58
    struct MonoBehaviour* /* array */ Joysticks; // 0x5C
    struct MHFCOFCOKOO* discussEmblem; // 0x60
    struct KINKOIBEGCF* shhhEmblem; // 0x64
    struct PENEIDJGGAF* IntroPrefab; // 0x68
    struct BOMIGDLINBO* GameMenu; // 0x6C
    struct CBFHNKKKMKP* Notifier; // 0x70
    struct IJCMADIPDHJ* roomTracker; // 0x74
    struct AudioClip* SabotageSound; // 0x78
    struct AudioClip* TaskCompleteSound; // 0x7C
    struct AudioClip* TaskUpdateSound; // 0x80
    struct StringBuilder* KJOMHKIJKJP; // 0x84

    void BIIANGLMPJH() { return method_call(BIIANGLMPJH); } // 0x43ED70
    void ONIGNKDLJMI() { return method_call(ONIGNKDLJMI); } // 0x441850
    void OJNNLGAKONN() { return method_call(OJNNLGAKONN); } // 0x43F210
    void HPGCPNPGKDN(struct Coroutine* HIJOHCLAKMG) { return method_call(HPGCPNPGKDN, HIJOHCLAKMG); } // 0x1E63C0
    struct IEnumerator* FFICGKOHJBC() { return method_call(FFICGKOHJBC); } // 0x43F750
    void AIJAAOOHNME() { return method_call(AIJAAOOHNME); } // 0x43E690
    void PCBAGLDDAMA(struct ActionCBAGIJCCEGG* CCHJEBHHLAB) { return method_call(PCBAGLDDAMA, CCHJEBHHLAB); } // 0x441F80
    void _ctor() { return method_call(_ctor); } // 0x442D40
    void IKNIBOMCGII(bool KAGOIINIBKN) { return method_call(IKNIBOMCGII, KAGOIINIBKN); } // 0x440250
    void GEBLNBADHCA() { return method_call(GEBLNBADHCA); } // 0x43F990
    void LJJGAPPCBPE() { return method_call(LJJGAPPCBPE); } // 0x43ECA0
    struct IEnumerator* NBFPLAIFBBC(bool NOAHCIHCNBO) { return method_call(NBFPLAIFBBC, NOAHCIHCNBO); } // 0x4413D0
    void SetJoystickSize(float MCOMGMHOBDJ) { return method_call(SetJoystickSize, MCOMGMHOBDJ); } // 0x442290
    struct Coroutine* OLLMLIGKJFA() { return method_call(OLLMLIGKJFA); } // 0x1E7850
    void LFDKFBOIMDI(struct Coroutine* HIJOHCLAKMG) { return method_call(LFDKFBOIMDI, HIJOHCLAKMG); } // 0x1E63C0
    void SetTouchType(std::int32_t BJJLFKLPBEM) { return method_call(SetTouchType, BJJLFKLPBEM); } // 0x442470
    void MHPGJFAJLKK(std::int32_t BJJLFKLPBEM) { return method_call(MHPGJFAJLKK, BJJLFKLPBEM); } // 0x440FB0
    struct IEnumerator* CIGJOEJBJOC() { return method_call(CIGJOEJBJOC); } // 0x43F0F0
    void StopReactorFlash() { return method_call(StopReactorFlash); } // 0x4428B0
    void FPFANLELFAK(std::int32_t BJJLFKLPBEM) { return method_call(FPFANLELFAK, BJJLFKLPBEM); } // 0x43F7A0
    void OpenMeetingRoom(struct FFGALNAPKCD* CNJAHAOLBLI) { return method_call(OpenMeetingRoom, CNJAHAOLBLI); } // 0x441AA0
    void FFADEJBPEGP(struct Coroutine* HIJOHCLAKMG) { return method_call(FFADEJBPEGP, HIJOHCLAKMG); } // 0x1E7A40
    struct IEnumerator* BIHJPJAFOCO(struct Color* HLHMFLICGMB, struct Color* CAKODNGLPDF, float KNJBBEFMHBI = 0.2) { return method_call(BIHJPJAFOCO, HLHMFLICGMB, CAKODNGLPDF, KNJBBEFMHBI); } // 0x43ED00
    struct IEnumerator* DPDPAHFNEPC() { return method_call(DPDPAHFNEPC); } // 0x43F620
    void HINELPIOCLL() { return method_call(HINELPIOCLL); } // 0x43E690
    void BKOLIGPHBHH(struct ActionCBAGIJCCEGG* CCHJEBHHLAB) { return method_call(BKOLIGPHBHH, CCHJEBHHLAB); } // 0x43EEF0
    struct Coroutine* LBPCHDNIPNC() { return method_call(LBPCHDNIPNC); } // 0x1E7850
    void OMMIOGCNNLP(bool KAGOIINIBKN) { return method_call(OMMIOGCNNLP, KAGOIINIBKN); } // 0x441690
    void ONOAGIBGNBA() { return method_call(ONOAGIBGNBA); } // 0x440470
    struct IEnumerator* IFFCFHANFBK() { return method_call(IFFCFHANFBK); } // 0x440190
    void FGBAFLCABBG() { return method_call(FGBAFLCABBG); } // 0x43ECA0
    struct IEnumerator* EMBEPDDFHPP(bool NOAHCIHCNBO) { return method_call(EMBEPDDFHPP, NOAHCIHCNBO); } // 0x43F6C0
    void OMIIJJMJLGI() { return method_call(OMIIJJMJLGI); } // 0x441630
    void OGODANMOIFD(System::String* OLNAEHKDFFB) { return method_call(OGODANMOIFD, OLNAEHKDFFB); } // 0x441600
    struct IEnumerator* KAIADKNGNCB(bool NOAHCIHCNBO) { return method_call(KAIADKNGNCB, NOAHCIHCNBO); } // 0x4406F0
    void KCBGLCHPOCK() { return method_call(KCBGLCHPOCK); } // 0x440750
    void CAHDDOGFHLH() { return method_call(CAHDDOGFHLH); } // 0x43F090
    void MIHAEEKLIPL() { return method_call(MIHAEEKLIPL); } // 0x441150
    struct IEnumerator* IIDKJKIBNLM(struct Color* HLHMFLICGMB, struct Color* CAKODNGLPDF, float KNJBBEFMHBI = 0.2) { return method_call(IIDKJKIBNLM, HLHMFLICGMB, CAKODNGLPDF, KNJBBEFMHBI); } // 0x4401E0
    struct IEnumerator* CoShowIntro(List<FFGALNAPKCD>* KADFCNPGKLO) { return method_call(CoShowIntro, KADFCNPGKLO); } // 0x43F1B0
    void KKDOODKJDJP(bool KAGOIINIBKN) { return method_call(KKDOODKJDJP, KAGOIINIBKN); } // 0x440810
    void DGHHPIDPDFJ() { return method_call(DGHHPIDPDFJ); } // 0x43F090
    struct IEnumerator* AMJNOAJMJPH(bool NOAHCIHCNBO) { return method_call(AMJNOAJMJPH, NOAHCIHCNBO); } // 0x43EA00
    void IEJFOGBEPCD() { return method_call(IEJFOGBEPCD); } // 0x440130
    void HCGMMMMJBEI() { return method_call(HCGMMMMJBEI); } // 0x43FE70
    void PNNIOKMDIHF() { return method_call(PNNIOKMDIHF); } // 0x43F210
    void IFFGBKNCFDM(struct Coroutine* HIJOHCLAKMG) { return method_call(IFFGBKNCFDM, HIJOHCLAKMG); } // 0x1E7A40
    void AFHICELHEKC(float MCOMGMHOBDJ) { return method_call(AFHICELHEKC, MCOMGMHOBDJ); } // 0x43E4B0
    void Update() { return method_call(Update); } // 0x442A30
    void ShowTaskComplete() { return method_call(ShowTaskComplete); } // 0x441150
    void INBEHGMLFHG() { return method_call(INBEHGMLFHG); } // 0x440410
    struct IEnumerator* NBCOEPCIPKE() { return method_call(NBCOEPCIPKE); } // 0x441380
    void DGLHLPFJGHP(struct Coroutine* HIJOHCLAKMG) { return method_call(DGLHLPFJGHP, HIJOHCLAKMG); } // 0x1E7A40
    void KPADJJJCGBA() { return method_call(KPADJJJCGBA); } // 0x440A40
    void DMEBBBLDDCN() { return method_call(DMEBBBLDDCN); } // 0x43F310
    void JMCIAHBBHFL(float MCOMGMHOBDJ) { return method_call(JMCIAHBBHFL, MCOMGMHOBDJ); } // 0x440510
    struct IEnumerator* KMMCAKKPFNA(struct Color* HLHMFLICGMB, struct Color* CAKODNGLPDF, float KNJBBEFMHBI = 0.2) { return method_call(KMMCAKKPFNA, HLHMFLICGMB, CAKODNGLPDF, KNJBBEFMHBI); } // 0x4409D0
    void ShowPopUp(System::String* OLNAEHKDFFB) { return method_call(ShowPopUp, OLNAEHKDFFB); } // 0x4427C0
    struct Coroutine* JEFIGDFFBCE() { return method_call(JEFIGDFFBCE); } // 0x1E7850
    void IHNDHDGKKFG(struct Coroutine* HIJOHCLAKMG) { return method_call(IHNDHDGKKFG, HIJOHCLAKMG); } // 0x1E7A40
    void NCHDHEHGLAC() { return method_call(NCHDHEHGLAC); } // 0x43F090
    void Start() { return method_call(Start); } // 0x442850
    void MPKPMNJPDFB(struct Coroutine* HIJOHCLAKMG) { return method_call(MPKPMNJPDFB, HIJOHCLAKMG); } // 0x1E63C0
    struct IEnumerator* BMPMNPIKJHG() { return method_call(BMPMNPIKJHG); } // 0x43F040
    struct IEnumerator* EBEJCOMMBOB() { return method_call(EBEJCOMMBOB); } // 0x43F670
    struct IEnumerator* OGAPAJIMOIF() { return method_call(OGAPAJIMOIF); } // 0x4415B0
    void DJIDIKFHIMD() { return method_call(DJIDIKFHIMD); } // 0x43F250
    struct IEnumerator* CoFadeFullScreen(struct Color* HLHMFLICGMB, struct Color* CAKODNGLPDF, float KNJBBEFMHBI = 0.2) { return method_call(CoFadeFullScreen, HLHMFLICGMB, CAKODNGLPDF, KNJBBEFMHBI); } // 0x43F140
    void BHIBLLJMEKO() { return method_call(BHIBLLJMEKO); } // 0x43ECA0
    struct Coroutine* LKKDGJEABIN() { return method_call(LKKDGJEABIN); } // 0x1E7850
    void LLDOOPGNDBL() { return method_call(LLDOOPGNDBL); } // 0x43F210
    void StartOxyFlash() { return method_call(StartOxyFlash); } // 0x43F090
    struct IEnumerator* IAKEIFDLMGH(struct Color* HLHMFLICGMB, struct Color* CAKODNGLPDF, float KNJBBEFMHBI = 0.2) { return method_call(IAKEIFDLMGH, HLHMFLICGMB, CAKODNGLPDF, KNJBBEFMHBI); } // 0x4400C0
    void NEEMANBDACN(struct Coroutine* HIJOHCLAKMG) { return method_call(NEEMANBDACN, HIJOHCLAKMG); } // 0x1E63C0
    void BBLKFGBHDGA(struct FFGALNAPKCD* CNJAHAOLBLI) { return method_call(BBLKFGBHDGA, CNJAHAOLBLI); } // 0x43EA60
    void JDIJDCHKHJP() { return method_call(JDIJDCHKHJP); } // 0x4404B0
    void OpenMap() { return method_call(OpenMap); } // 0x4418B0
    struct Coroutine* get_ReactorFlash() { return method_call(get_ReactorFlash); } // 0x1E7850
    void MKKAEMMJOFM(struct FFGALNAPKCD* CNJAHAOLBLI) { return method_call(MKKAEMMJOFM, CNJAHAOLBLI); } // 0x4411B0
    void IPFIDFBCEON() { return method_call(IPFIDFBCEON); } // 0x440470
    struct IEnumerator* ShowEmblem(bool NOAHCIHCNBO) { return method_call(ShowEmblem, NOAHCIHCNBO); } // 0x442610
    void LNDDOLFDMCE(struct ActionCBAGIJCCEGG* CCHJEBHHLAB) { return method_call(LNDDOLFDMCE, CCHJEBHHLAB); } // 0x440E60
    void set_OxyFlash(struct Coroutine* HIJOHCLAKMG) { return method_call(set_OxyFlash, HIJOHCLAKMG); } // 0x1E7A40
    struct IEnumerator* GPPENGEAKFE() { return method_call(GPPENGEAKFE); } // 0x43FB10
    void DIBHCIJNFEN() { return method_call(DIBHCIJNFEN); } // 0x43F210
    void NKLJMDFDKFE() { return method_call(NKLJMDFDKFE); } // 0x441430
    void ShowMap(struct ActionCBAGIJCCEGG* CCHJEBHHLAB) { return method_call(ShowMap, CCHJEBHHLAB); } // 0x442670
    void CKNDPNJAMKF(struct Coroutine* HIJOHCLAKMG) { return method_call(CKNDPNJAMKF, HIJOHCLAKMG); } // 0x1E63C0
    struct IEnumerator* LBDLIDCOCKA(bool NOAHCIHCNBO) { return method_call(LBDLIDCOCKA, NOAHCIHCNBO); } // 0x440C30
    void StartReactorFlash() { return method_call(StartReactorFlash); } // 0x4427F0
    struct Coroutine* get_OxyFlash() { return method_call(get_OxyFlash); } // 0x1E78E0
    void AJKBPKHBIAF() { return method_call(AJKBPKHBIAF); } // 0x43E6F0
    struct Coroutine* JJLJNBDJADI() { return method_call(JJLJNBDJADI); } // 0x1E7850
    void StopOxyFlash() { return method_call(StopOxyFlash); } // 0x43F210
    void HBFEKOHHPKC() { return method_call(HBFEKOHHPKC); } // 0x43FB60
    struct Coroutine* AKKLMHLLCMC() { return method_call(AKKLMHLLCMC); } // 0x1E7850
    void HGLLNJNNFDD() { return method_call(HGLLNJNNFDD); } // 0x440000
    void BDFGFPKPJME() { return method_call(BDFGFPKPJME); } // 0x43EC40
    void LEHEHJDHGAM(struct FFGALNAPKCD* CNJAHAOLBLI) { return method_call(LEHEHJDHGAM, CNJAHAOLBLI); } // 0x440C90
    void set_ReactorFlash(struct Coroutine* HIJOHCLAKMG) { return method_call(set_ReactorFlash, HIJOHCLAKMG); } // 0x1E63C0
    void IDMOAGCIMKJ() { return method_call(IDMOAGCIMKJ); } // 0x43ECA0
    void PBAKFBLOGMB() { return method_call(PBAKFBLOGMB); } // 0x441C70
    void IJJMGEHJMDK(struct Coroutine* HIJOHCLAKMG) { return method_call(IJJMGEHJMDK, HIJOHCLAKMG); } // 0x1E63C0
    struct IEnumerator* GBFLDDHLKEM() { return method_call(GBFLDDHLKEM); } // 0x43F940
    void FDJDFACBHAO(System::String* OLNAEHKDFFB) { return method_call(FDJDFACBHAO, OLNAEHKDFFB); } // 0x43F720
    void FMPNHLJGJML() { return method_call(FMPNHLJGJML); } // 0x43F210
    void SetHudActive(bool KAGOIINIBKN) { return method_call(SetHudActive, KAGOIINIBKN); } // 0x4420D0
    void EFJFAKMMDMI(struct Coroutine* HIJOHCLAKMG) { return method_call(EFJFAKMMDMI, HIJOHCLAKMG); } // 0x1E63C0
};
namespace ark::method_info
{
    method_rva(HudManager::BIIANGLMPJH, 0x43ED70)
    method_rva(HudManager::ONIGNKDLJMI, 0x441850)
    method_rva(HudManager::OJNNLGAKONN, 0x43F210)
    method_rva(HudManager::HPGCPNPGKDN, 0x1E63C0)
    method_rva(HudManager::FFICGKOHJBC, 0x43F750)
    method_rva(HudManager::AIJAAOOHNME, 0x43E690)
    method_rva(HudManager::PCBAGLDDAMA, 0x441F80)
    method_rva(HudManager::_ctor, 0x442D40)
    method_rva(HudManager::IKNIBOMCGII, 0x440250)
    method_rva(HudManager::GEBLNBADHCA, 0x43F990)
    method_rva(HudManager::LJJGAPPCBPE, 0x43ECA0)
    method_rva(HudManager::NBFPLAIFBBC, 0x4413D0)
    method_rva(HudManager::SetJoystickSize, 0x442290)
    method_rva(HudManager::OLLMLIGKJFA, 0x1E7850)
    method_rva(HudManager::LFDKFBOIMDI, 0x1E63C0)
    method_rva(HudManager::SetTouchType, 0x442470)
    method_rva(HudManager::MHPGJFAJLKK, 0x440FB0)
    method_rva(HudManager::CIGJOEJBJOC, 0x43F0F0)
    method_rva(HudManager::StopReactorFlash, 0x4428B0)
    method_rva(HudManager::FPFANLELFAK, 0x43F7A0)
    method_rva(HudManager::OpenMeetingRoom, 0x441AA0)
    method_rva(HudManager::FFADEJBPEGP, 0x1E7A40)
    method_rva(HudManager::BIHJPJAFOCO, 0x43ED00)
    method_rva(HudManager::DPDPAHFNEPC, 0x43F620)
    method_rva(HudManager::HINELPIOCLL, 0x43E690)
    method_rva(HudManager::BKOLIGPHBHH, 0x43EEF0)
    method_rva(HudManager::LBPCHDNIPNC, 0x1E7850)
    method_rva(HudManager::OMMIOGCNNLP, 0x441690)
    method_rva(HudManager::ONOAGIBGNBA, 0x440470)
    method_rva(HudManager::IFFCFHANFBK, 0x440190)
    method_rva(HudManager::FGBAFLCABBG, 0x43ECA0)
    method_rva(HudManager::EMBEPDDFHPP, 0x43F6C0)
    method_rva(HudManager::OMIIJJMJLGI, 0x441630)
    method_rva(HudManager::OGODANMOIFD, 0x441600)
    method_rva(HudManager::KAIADKNGNCB, 0x4406F0)
    method_rva(HudManager::KCBGLCHPOCK, 0x440750)
    method_rva(HudManager::CAHDDOGFHLH, 0x43F090)
    method_rva(HudManager::MIHAEEKLIPL, 0x441150)
    method_rva(HudManager::IIDKJKIBNLM, 0x4401E0)
    method_rva(HudManager::CoShowIntro, 0x43F1B0)
    method_rva(HudManager::KKDOODKJDJP, 0x440810)
    method_rva(HudManager::DGHHPIDPDFJ, 0x43F090)
    method_rva(HudManager::AMJNOAJMJPH, 0x43EA00)
    method_rva(HudManager::IEJFOGBEPCD, 0x440130)
    method_rva(HudManager::HCGMMMMJBEI, 0x43FE70)
    method_rva(HudManager::PNNIOKMDIHF, 0x43F210)
    method_rva(HudManager::IFFGBKNCFDM, 0x1E7A40)
    method_rva(HudManager::AFHICELHEKC, 0x43E4B0)
    method_rva(HudManager::Update, 0x442A30)
    method_rva(HudManager::ShowTaskComplete, 0x441150)
    method_rva(HudManager::INBEHGMLFHG, 0x440410)
    method_rva(HudManager::NBCOEPCIPKE, 0x441380)
    method_rva(HudManager::DGLHLPFJGHP, 0x1E7A40)
    method_rva(HudManager::KPADJJJCGBA, 0x440A40)
    method_rva(HudManager::DMEBBBLDDCN, 0x43F310)
    method_rva(HudManager::JMCIAHBBHFL, 0x440510)
    method_rva(HudManager::KMMCAKKPFNA, 0x4409D0)
    method_rva(HudManager::ShowPopUp, 0x4427C0)
    method_rva(HudManager::JEFIGDFFBCE, 0x1E7850)
    method_rva(HudManager::IHNDHDGKKFG, 0x1E7A40)
    method_rva(HudManager::NCHDHEHGLAC, 0x43F090)
    method_rva(HudManager::Start, 0x442850)
    method_rva(HudManager::MPKPMNJPDFB, 0x1E63C0)
    method_rva(HudManager::BMPMNPIKJHG, 0x43F040)
    method_rva(HudManager::EBEJCOMMBOB, 0x43F670)
    method_rva(HudManager::OGAPAJIMOIF, 0x4415B0)
    method_rva(HudManager::DJIDIKFHIMD, 0x43F250)
    method_rva(HudManager::CoFadeFullScreen, 0x43F140)
    method_rva(HudManager::BHIBLLJMEKO, 0x43ECA0)
    method_rva(HudManager::LKKDGJEABIN, 0x1E7850)
    method_rva(HudManager::LLDOOPGNDBL, 0x43F210)
    method_rva(HudManager::StartOxyFlash, 0x43F090)
    method_rva(HudManager::IAKEIFDLMGH, 0x4400C0)
    method_rva(HudManager::NEEMANBDACN, 0x1E63C0)
    method_rva(HudManager::BBLKFGBHDGA, 0x43EA60)
    method_rva(HudManager::JDIJDCHKHJP, 0x4404B0)
    method_rva(HudManager::OpenMap, 0x4418B0)
    method_rva(HudManager::get_ReactorFlash, 0x1E7850)
    method_rva(HudManager::MKKAEMMJOFM, 0x4411B0)
    method_rva(HudManager::IPFIDFBCEON, 0x440470)
    method_rva(HudManager::ShowEmblem, 0x442610)
    method_rva(HudManager::LNDDOLFDMCE, 0x440E60)
    method_rva(HudManager::set_OxyFlash, 0x1E7A40)
    method_rva(HudManager::GPPENGEAKFE, 0x43FB10)
    method_rva(HudManager::DIBHCIJNFEN, 0x43F210)
    method_rva(HudManager::NKLJMDFDKFE, 0x441430)
    method_rva(HudManager::ShowMap, 0x442670)
    method_rva(HudManager::CKNDPNJAMKF, 0x1E63C0)
    method_rva(HudManager::LBDLIDCOCKA, 0x440C30)
    method_rva(HudManager::StartReactorFlash, 0x4427F0)
    method_rva(HudManager::get_OxyFlash, 0x1E78E0)
    method_rva(HudManager::AJKBPKHBIAF, 0x43E6F0)
    method_rva(HudManager::JJLJNBDJADI, 0x1E7850)
    method_rva(HudManager::StopOxyFlash, 0x43F210)
    method_rva(HudManager::HBFEKOHHPKC, 0x43FB60)
    method_rva(HudManager::AKKLMHLLCMC, 0x1E7850)
    method_rva(HudManager::HGLLNJNNFDD, 0x440000)
    method_rva(HudManager::BDFGFPKPJME, 0x43EC40)
    method_rva(HudManager::LEHEHJDHGAM, 0x440C90)
    method_rva(HudManager::set_ReactorFlash, 0x1E63C0)
    method_rva(HudManager::IDMOAGCIMKJ, 0x43ECA0)
    method_rva(HudManager::PBAKFBLOGMB, 0x441C70)
    method_rva(HudManager::IJJMGEHJMDK, 0x1E63C0)
    method_rva(HudManager::GBFLDDHLKEM, 0x43F940)
    method_rva(HudManager::FDJDFACBHAO, 0x43F720)
    method_rva(HudManager::FMPNHLJGJML, 0x43F210)
    method_rva(HudManager::SetHudActive, 0x4420D0)
    method_rva(HudManager::EFJFAKMMDMI, 0x1E63C0)
}
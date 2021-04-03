//au//HudManager
#pragma once
#include <ark/class.hpp>
#include <au/DestroyableSingleton.hpp>
struct FollowerCamera;
struct MeetingHud;
struct KillButtonManager;
struct UseButtonManager;
struct ReportButtonManager;
struct TextRenderer;
namespace UnityEngine{ struct GameObject; }
struct ChatController;
struct DialogueBox;
namespace UnityEngine{ struct Transform; }
namespace UnityEngine{ struct MeshRenderer; }
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct Coroutine; }
struct KillOverlay;
struct GGEGLGMGCEG;
#include <cs/array.hpp>
struct DiscussBehaviour;
struct ShhhBehaviour;
struct IntroCutscene;
struct OptionsMenuBehaviour;
struct NotificationPopper;
struct RoomTracker;
namespace UnityEngine{ struct AudioClip; }
namespace System::Text{ struct StringBuilder; }
struct DualshockLightManager_DBFBCOPOCHH;
#include <cs/string.hpp>
namespace System{ template <class...> struct Action; }
struct PlayerControl;
namespace System::Collections{ struct IEnumerator; }
#include <au/UnityEngine/Color.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
struct MapBehaviour;

struct HudManager : ark::meta<HudManager, DestroyableSingleton<HudManager>>
{
ark_meta("", "HudManager", "");

    // Fields

    FollowerCamera* PlayerCam; // 0x10
    MeetingHud* MeetingPrefab; // 0x14
    KillButtonManager* KillButton; // 0x18
    UseButtonManager* UseButton; // 0x1C
    ReportButtonManager* ReportButton; // 0x20
    TextRenderer* GameSettings; // 0x24
    UnityEngine::GameObject* TaskStuff; // 0x28
    ChatController* Chat; // 0x2C
    DialogueBox* Dialogue; // 0x30
    TextRenderer* TaskText; // 0x34
    UnityEngine::Transform* TaskCompleteOverlay; // 0x38
    float EHIABAFAFBJ; // 0x3C
    UnityEngine::MeshRenderer* ShadowQuad; // 0x40
    UnityEngine::SpriteRenderer* FullScreen; // 0x44
    UnityEngine::Coroutine* _NALKGMPDBJP_k__BackingField; // 0x48
    UnityEngine::Coroutine* _IFKFJDGLNLD_k__BackingField; // 0x4C
    UnityEngine::SpriteRenderer* MapButton; // 0x50
    KillOverlay* KillOverlay; // 0x54
    GGEGLGMGCEG* joystick; // 0x58
    cs::array<UnityEngine::MonoBehaviour*>* Joysticks; // 0x5C
    DiscussBehaviour* discussEmblem; // 0x60
    ShhhBehaviour* shhhEmblem; // 0x64
    IntroCutscene* IntroPrefab; // 0x68
    OptionsMenuBehaviour* GameMenu; // 0x6C
    NotificationPopper* Notifier; // 0x70
    RoomTracker* roomTracker; // 0x74
    UnityEngine::AudioClip* SabotageSound; // 0x78
    UnityEngine::AudioClip* TaskCompleteSound; // 0x7C
    UnityEngine::AudioClip* TaskUpdateSound; // 0x80
    cs::array<UnityEngine::GameObject*>* consoleUIObjects; // 0x84
    System::Text::StringBuilder* BBGEOCLMPEG; // 0x88
    bool NLAEGDNBAMK; // 0x8C
    DualshockLightManager_DBFBCOPOCHH* NBKPLEDOBPN; // 0x90

    // Methods

    void CNHNNDGOFAL(float HLHHJEFDHKA); // 0x1E7B970 // public 
    void HACJLJHJHMP(cs::string* AHPGACKDEIK); // 0x1E7C520 // public 
    void ShowPopUp(cs::string* AHPGACKDEIK); // 0x1E7FAF0 // public 
    void ShowMap(int /* System::Action<MapBehaviour>*/ MIPLKADBDGC); // 0x1E7F970 // public
    void EMCAEGJACOL(); // 0x1E7BF40 // public 
    void CKBPPOFCCEO(); // 0x1E7B620 // public 
    void SetTouchType(int CDLMBAHPJJJ); // 0x1E7F740 // public 
    void KLHKEFAICEA(int CDLMBAHPJJJ); // 0x1E7D610 // public 
    void KILEKMECOKD(bool EANIEDDICML); // 0x1E7D440 // public 
    void CJNGBIDHNBN(); // 0x1E7B5C0 // public override 
    void KBHHLOBCIEL(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void PCFGNBFKBGD(PlayerControl* CGCPOBCEOPN); // 0x1E7EC10 // public 
    void FKMGOEILNMF(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void GFDONJAELBJ(cs::string* AHPGACKDEIK); // 0x1E7C4A0 // public 
    void DPDGFJMMFMH(); // 0x1E7B560 // public 
    void IKFAPOLGOHE(); // 0x1E7C9F0 // public 
    void KMHFPGIGHLO(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void StartOxyFlash(); // 0x1E7BC30 // public 
    void IDDFMNODPPM(PlayerControl* CGCPOBCEOPN); // 0x1E7C7B0 // public 
    void ALBCJIJLALI(); // 0x1E7AF70 // public 
    void DEPMOPDCFLH(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C170 // public 
    void ODJDGIPADIJ(); // 0x1E7E5B0 // public 
    void DHOOCGOEIKH(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C170 // public 
    void ECNKKFJGICL(int CDLMBAHPJJJ); // 0x1E7BD70 // public 
    void OnDestroy(); // 0x1E7E840 // public override 
    void MDPIJJGNOJL(int /* System::Action<MapBehaviour>*/ MIPLKADBDGC); // 0x1E7DA00 // public
    void OpenMeetingRoom(PlayerControl* CGCPOBCEOPN); // 0x1E7EA60 // public 
    System::Collections::IEnumerator* CoFadeFullScreen(UnityEngine::Color KMMMAPHIMLH, UnityEngine::Color IGLDJOKKFJE, float IAABPAMEGNC = float(0.2)); // 0x1E7BB60 // public 
    void CIIFFJDGAPK(); // 0x1E7B590 // public 
    void SetHudActive(bool EANIEDDICML); // 0x1E7F3E0 // public 
    void set_ReactorFlash(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C170 // public 
    void StartReactorFlash(); // 0x1E7B4D0 // public 
    void BCKLFJAHIPB(); // 0x1E7B4D0 // public 
    void Update(); // 0x1E7FE50 // public 
    System::Collections::IEnumerator* AEEGEPBEELN(); // 0x1E7AF20 // private 
    void IFJKDJEIBOF(cs::string* AHPGACKDEIK); // 0x1E7C960 // public 
    System::Collections::IEnumerator* ShowEmblem(bool KKBJKKKKHNB); // 0x1E7F910 // public 
    void AEAPHOAMMOP(PlayerControl* CGCPOBCEOPN); // 0x1E7AD70 // public 
    void JNNGFCEAPKF(cs::string* AHPGACKDEIK); // 0x1E7CE90 // public 
    void HBGFKLJEPKM(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void NGJGEHDEIHB(PlayerControl* CGCPOBCEOPN); // 0x1E7DD60 // public 
    void PGBCGCEAOME(); // 0x1E7EDC0 // public 
    void KAOMFNFIOOL(int /* System::Action<MapBehaviour>*/ MIPLKADBDGC); // 0x1E7D040 // public
    void GCJECHDOIMK(); // 0x1E7C440 // public 
    UnityEngine::Coroutine* get_ReactorFlash(); // 0x36C090 // public 
    System::Collections::IEnumerator* CNPAKDNMNKN(bool KKBJKKKKHNB); // 0x1E7BB00 // public 
    void MKKHMAOPNPM(); // 0x1E7BC30 // public 
    void NGPJEOCPFGF(); // 0x1E7DF10 // public 
    void PLIMBJNCEPA(); // 0x1E7EFE0 // public 
    void StopReactorFlash(); // 0x1E7FC30 // public 
    void CCMMODDKMGD(); // 0x1E7B560 // public 
    void JPPHDNGICPP(int /* System::Action<MapBehaviour>*/ MIPLKADBDGC); // 0x1E7CEC0 // public
    void LLDBMFFMEMA(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    System::Collections::IEnumerator* KEMNKCHIADG(); // 0x1E7D1C0 // private 
    UnityEngine::Coroutine* get_OxyFlash(); // 0x36C0A0 // public 
    void KGPMLJAKAHM(int /* System::Action<MapBehaviour>*/ MIPLKADBDGC); // 0x1E7D2C0 // public
    void DBOOIHIENHA(); // 0x1E7BC30 // public 
    System::Collections::IEnumerator* BPCEMEDMKNJ(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1E7B500 // public 
    void JKKKCLEEOGO(); // 0x1E7CC70 // public 
    void BCEOBMPBHEE(); // 0x1E7B2B0 // public 
    void ECCJELPIGIB(); // 0x1E7BD10 // public 
    void KCHFBGMKOOC(); // 0x1E7B560 // public 
    System::Collections::IEnumerator* DCHLJJAGBLF(); // 0x1E7BC60 // private 
    void PNAHPEKDOID(); // 0x1E7F330 // public 
    System::Collections::IEnumerator* EPLGIAKHKKB(); // 0x1E7C160 // private 
    void NKBEIDOPKLA(); // 0x1E7E260 // public 
    UnityEngine::Coroutine* BIKGEDBALEB(); // 0x36C090 // public 
    void PBJPEFLIBKB(); // 0x1E7C3E0 // public 
    System::Collections::IEnumerator* IGEDOHHEIEB(bool KKBJKKKKHNB); // 0x1E7C990 // public 
    UnityEngine::Coroutine* FCHNKCBHOAH(); // 0x36C090 // public 
    void KGGHAMLANHC(); // 0x1E7D210 // public 
    void set_OxyFlash(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void StopOxyFlash(); // 0x1E7FBD0 // public 
    void FDIIDBNFMFO(bool EANIEDDICML); // 0x1E7C1B0 // public 
    void FGCAICNFCEB(); // 0x1E7C380 // public override 
    System::Collections::IEnumerator* CoShowIntro(System::Collections::Generic::List<PlayerControl>* IIIDKFCDNJB); // 0x1E7BBD0 // public 
    void OEABJHIAPBP(int CDLMBAHPJJJ); // 0x1E7E610 // public 
    void IMNOIJJOLFD(); // 0x1E7CA50 // public 
    void OGNDOEKOLEI(); // 0x1E7E7E0 // public 
    void FOABNONDHPD(); // 0x1E7C3E0 // public 
    void MMKCLJIDBDE(float HLHHJEFDHKA); // 0x1E7DB80 // public 
    void Start(); // 0x1E7FB20 // public 
    void ShowTaskComplete(); // 0x1E7C9F0 // public 
    void OpenMap(); // 0x1E7E8A0 // public 
    void MMCPKFKJBMA(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void ctor(); // 0x1E801A0 // public 
    void DFMODLBOBDJ(); // 0x1E7BCB0 // public 
    System::Collections::IEnumerator* NCCKPEMMNLA(); // 0x1E7DD10 // private 
    UnityEngine::Coroutine* JEPBHKMPBGC(); // 0x36C0A0 // public 
    System::Collections::IEnumerator* HCGGNHINFHO(); // 0x1E7C550 // private 
    void HPDBLCCPLHF(PlayerControl* CGCPOBCEOPN); // 0x1E7C600 // public 
    System::Collections::IEnumerator* GJNJOBGDHHH(); // 0x1E7C4D0 // private 
    void KLKHGAPDLLA(); // 0x1E7D7E0 // public 
    void BIHICDGHAPH(UnityEngine::Coroutine* IKGGJMHPDGH); // 0x36C180 // public 
    void SetJoystickSize(float HLHHJEFDHKA); // 0x1E7F5B0 // public 
    System::Collections::IEnumerator* HGKDDEHALKC(bool KKBJKKKKHNB); // 0x1E7C5A0 // public 
    UnityEngine::Coroutine* IBCNLGONPDC(); // 0x36C0A0 // public 

};


namespace ark
{
template<>
struct meta_statics<HudManager>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&HudManager::CNHNNDGOFAL> () { return 0x1E7B970; }
    template<> inline uintptr_t rva<&HudManager::HACJLJHJHMP> () { return 0x1E7C520; }
    template<> inline uintptr_t rva<&HudManager::ShowPopUp> () { return 0x1E7FAF0; }
    template<> inline uintptr_t rva<&HudManager::ShowMap> () { return 0x1E7F970; }
    template<> inline uintptr_t rva<&HudManager::EMCAEGJACOL> () { return 0x1E7BF40; }
    template<> inline uintptr_t rva<&HudManager::CKBPPOFCCEO> () { return 0x1E7B620; }
    template<> inline uintptr_t rva<&HudManager::SetTouchType> () { return 0x1E7F740; }
    template<> inline uintptr_t rva<&HudManager::KLHKEFAICEA> () { return 0x1E7D610; }
    template<> inline uintptr_t rva<&HudManager::KILEKMECOKD> () { return 0x1E7D440; }
    template<> inline uintptr_t rva<&HudManager::CJNGBIDHNBN> () { return 0x1E7B5C0; }
    template<> inline uintptr_t rva<&HudManager::KBHHLOBCIEL> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::PCFGNBFKBGD> () { return 0x1E7EC10; }
    template<> inline uintptr_t rva<&HudManager::FKMGOEILNMF> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::GFDONJAELBJ> () { return 0x1E7C4A0; }
    template<> inline uintptr_t rva<&HudManager::DPDGFJMMFMH> () { return 0x1E7B560; }
    template<> inline uintptr_t rva<&HudManager::IKFAPOLGOHE> () { return 0x1E7C9F0; }
    template<> inline uintptr_t rva<&HudManager::KMHFPGIGHLO> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::StartOxyFlash> () { return 0x1E7BC30; }
    template<> inline uintptr_t rva<&HudManager::IDDFMNODPPM> () { return 0x1E7C7B0; }
    template<> inline uintptr_t rva<&HudManager::ALBCJIJLALI> () { return 0x1E7AF70; }
    template<> inline uintptr_t rva<&HudManager::DEPMOPDCFLH> () { return 0x36C170; }
    template<> inline uintptr_t rva<&HudManager::ODJDGIPADIJ> () { return 0x1E7E5B0; }
    template<> inline uintptr_t rva<&HudManager::DHOOCGOEIKH> () { return 0x36C170; }
    template<> inline uintptr_t rva<&HudManager::ECNKKFJGICL> () { return 0x1E7BD70; }
    template<> inline uintptr_t rva<&HudManager::OnDestroy> () { return 0x1E7E840; }
    template<> inline uintptr_t rva<&HudManager::MDPIJJGNOJL> () { return 0x1E7DA00; }
    template<> inline uintptr_t rva<&HudManager::OpenMeetingRoom> () { return 0x1E7EA60; }
    template<> inline uintptr_t rva<&HudManager::CoFadeFullScreen> () { return 0x1E7BB60; }
    template<> inline uintptr_t rva<&HudManager::CIIFFJDGAPK> () { return 0x1E7B590; }
    template<> inline uintptr_t rva<&HudManager::SetHudActive> () { return 0x1E7F3E0; }
    template<> inline uintptr_t rva<&HudManager::set_ReactorFlash> () { return 0x36C170; }
    template<> inline uintptr_t rva<&HudManager::StartReactorFlash> () { return 0x1E7B4D0; }
    template<> inline uintptr_t rva<&HudManager::BCKLFJAHIPB> () { return 0x1E7B4D0; }
    template<> inline uintptr_t rva<&HudManager::Update> () { return 0x1E7FE50; }
    template<> inline uintptr_t rva<&HudManager::AEEGEPBEELN> () { return 0x1E7AF20; }
    template<> inline uintptr_t rva<&HudManager::IFJKDJEIBOF> () { return 0x1E7C960; }
    template<> inline uintptr_t rva<&HudManager::ShowEmblem> () { return 0x1E7F910; }
    template<> inline uintptr_t rva<&HudManager::AEAPHOAMMOP> () { return 0x1E7AD70; }
    template<> inline uintptr_t rva<&HudManager::JNNGFCEAPKF> () { return 0x1E7CE90; }
    template<> inline uintptr_t rva<&HudManager::HBGFKLJEPKM> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::NGJGEHDEIHB> () { return 0x1E7DD60; }
    template<> inline uintptr_t rva<&HudManager::PGBCGCEAOME> () { return 0x1E7EDC0; }
    template<> inline uintptr_t rva<&HudManager::KAOMFNFIOOL> () { return 0x1E7D040; }
    template<> inline uintptr_t rva<&HudManager::GCJECHDOIMK> () { return 0x1E7C440; }
    template<> inline uintptr_t rva<&HudManager::get_ReactorFlash> () { return 0x36C090; }
    template<> inline uintptr_t rva<&HudManager::CNPAKDNMNKN> () { return 0x1E7BB00; }
    template<> inline uintptr_t rva<&HudManager::MKKHMAOPNPM> () { return 0x1E7BC30; }
    template<> inline uintptr_t rva<&HudManager::NGPJEOCPFGF> () { return 0x1E7DF10; }
    template<> inline uintptr_t rva<&HudManager::PLIMBJNCEPA> () { return 0x1E7EFE0; }
    template<> inline uintptr_t rva<&HudManager::StopReactorFlash> () { return 0x1E7FC30; }
    template<> inline uintptr_t rva<&HudManager::CCMMODDKMGD> () { return 0x1E7B560; }
    template<> inline uintptr_t rva<&HudManager::JPPHDNGICPP> () { return 0x1E7CEC0; }
    template<> inline uintptr_t rva<&HudManager::LLDBMFFMEMA> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::KEMNKCHIADG> () { return 0x1E7D1C0; }
    template<> inline uintptr_t rva<&HudManager::get_OxyFlash> () { return 0x36C0A0; }
    template<> inline uintptr_t rva<&HudManager::KGPMLJAKAHM> () { return 0x1E7D2C0; }
    template<> inline uintptr_t rva<&HudManager::DBOOIHIENHA> () { return 0x1E7BC30; }
    template<> inline uintptr_t rva<&HudManager::BPCEMEDMKNJ> () { return 0x1E7B500; }
    template<> inline uintptr_t rva<&HudManager::JKKKCLEEOGO> () { return 0x1E7CC70; }
    template<> inline uintptr_t rva<&HudManager::BCEOBMPBHEE> () { return 0x1E7B2B0; }
    template<> inline uintptr_t rva<&HudManager::ECCJELPIGIB> () { return 0x1E7BD10; }
    template<> inline uintptr_t rva<&HudManager::KCHFBGMKOOC> () { return 0x1E7B560; }
    template<> inline uintptr_t rva<&HudManager::DCHLJJAGBLF> () { return 0x1E7BC60; }
    template<> inline uintptr_t rva<&HudManager::PNAHPEKDOID> () { return 0x1E7F330; }
    template<> inline uintptr_t rva<&HudManager::EPLGIAKHKKB> () { return 0x1E7C160; }
    template<> inline uintptr_t rva<&HudManager::NKBEIDOPKLA> () { return 0x1E7E260; }
    template<> inline uintptr_t rva<&HudManager::BIKGEDBALEB> () { return 0x36C090; }
    template<> inline uintptr_t rva<&HudManager::PBJPEFLIBKB> () { return 0x1E7C3E0; }
    template<> inline uintptr_t rva<&HudManager::IGEDOHHEIEB> () { return 0x1E7C990; }
    template<> inline uintptr_t rva<&HudManager::FCHNKCBHOAH> () { return 0x36C090; }
    template<> inline uintptr_t rva<&HudManager::KGGHAMLANHC> () { return 0x1E7D210; }
    template<> inline uintptr_t rva<&HudManager::set_OxyFlash> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::StopOxyFlash> () { return 0x1E7FBD0; }
    template<> inline uintptr_t rva<&HudManager::FDIIDBNFMFO> () { return 0x1E7C1B0; }
    template<> inline uintptr_t rva<&HudManager::FGCAICNFCEB> () { return 0x1E7C380; }
    template<> inline uintptr_t rva<&HudManager::CoShowIntro> () { return 0x1E7BBD0; }
    template<> inline uintptr_t rva<&HudManager::OEABJHIAPBP> () { return 0x1E7E610; }
    template<> inline uintptr_t rva<&HudManager::IMNOIJJOLFD> () { return 0x1E7CA50; }
    template<> inline uintptr_t rva<&HudManager::OGNDOEKOLEI> () { return 0x1E7E7E0; }
    template<> inline uintptr_t rva<&HudManager::FOABNONDHPD> () { return 0x1E7C3E0; }
    template<> inline uintptr_t rva<&HudManager::MMKCLJIDBDE> () { return 0x1E7DB80; }
    template<> inline uintptr_t rva<&HudManager::Start> () { return 0x1E7FB20; }
    template<> inline uintptr_t rva<&HudManager::ShowTaskComplete> () { return 0x1E7C9F0; }
    template<> inline uintptr_t rva<&HudManager::OpenMap> () { return 0x1E7E8A0; }
    template<> inline uintptr_t rva<&HudManager::MMCPKFKJBMA> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::ctor> () { return 0x1E801A0; }
    template<> inline uintptr_t rva<&HudManager::DFMODLBOBDJ> () { return 0x1E7BCB0; }
    template<> inline uintptr_t rva<&HudManager::NCCKPEMMNLA> () { return 0x1E7DD10; }
    template<> inline uintptr_t rva<&HudManager::JEPBHKMPBGC> () { return 0x36C0A0; }
    template<> inline uintptr_t rva<&HudManager::HCGGNHINFHO> () { return 0x1E7C550; }
    template<> inline uintptr_t rva<&HudManager::HPDBLCCPLHF> () { return 0x1E7C600; }
    template<> inline uintptr_t rva<&HudManager::GJNJOBGDHHH> () { return 0x1E7C4D0; }
    template<> inline uintptr_t rva<&HudManager::KLKHGAPDLLA> () { return 0x1E7D7E0; }
    template<> inline uintptr_t rva<&HudManager::BIHICDGHAPH> () { return 0x36C180; }
    template<> inline uintptr_t rva<&HudManager::SetJoystickSize> () { return 0x1E7F5B0; }
    template<> inline uintptr_t rva<&HudManager::HGKDDEHALKC> () { return 0x1E7C5A0; }
    template<> inline uintptr_t rva<&HudManager::IBCNLGONPDC> () { return 0x36C0A0; }
} // ark::method_info
//au//ButtonBehavior
#pragma once
#include <ark/class.hpp>
#include <au/UiElement.hpp>
namespace UnityEngine::UI{ struct Button_ButtonClickedEvent; }
struct MCAHPAHIBIF;
#include <cs/array.hpp>
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct Collider2D; }

struct ButtonBehavior : ark::meta<ButtonBehavior, UiElement>
{
ark_meta("", "ButtonBehavior", "");

    // Fields

    bool OnUp; // 0x14
    bool OnDown; // 0x15
    bool Repeat; // 0x16
    UnityEngine::UI::Button_ButtonClickedEvent* OnClick; // 0x18
    MCAHPAHIBIF* FEIJHHAOKMG; // 0x1C
    cs::array<UnityEngine::Collider2D>* MDHGHNLBGPO; // 0x20
    float EHHNADLIMMM; // 0x24
    UnityEngine::SpriteRenderer* spriteRenderer; // 0x28
    bool LKEMJPJPIDI; // 0x2C

    // Methods

    void OINPLOOJIPD(); // 0x1EC64F0 // public 
    void CKGFADMLHNN(); // 0x1EC3EA0 // public 
    void ReceiveClick(); // 0x1EC2D20 // public 
    void BJNJKFBKNKH(); // 0x1EC3690 // public 
    void FHCJLGBNLOA(); // 0x1EC2D20 // public 
    void CLKGLJBHEKO(); // 0x1EC40E0 // public 
    void BAIGNHGHGLF(); // 0x1EC3090 // public 
    void BMCLECDEJND(); // 0x1EC3AE0 // public 
    void FEFBAFBAPGI(); // 0x1EC48E0 // public 
    void LHPCBPBHKNM(); // 0x1EC5C50 // public 
    void IOCOBDBPCND(); // 0x1EC5170 // public 
    void CGNFIHNBOOM(); // 0x1EC3D20 // public 
    void ADIJMBKFAEL(); // 0x1EC2E70 // public 
    void OENCMCCLNJO(); // 0x1EC2D20 // public 
    void KLIEDGAFCDA(); // 0x1EC5A10 // public 
    void IDLGFGKBBNO(); // 0x1EC2D20 // public 
    void AFMCOHCDOKL(); // 0x1EC2F90 // public 
    void KHIAKECGCBN(); // 0x1EC2D20 // public 
    void CFJGIJBLBFP(); // 0x1EC2D20 // public 
    void JJJJFLIEOJA(); // 0x1EC54F0 // public 
    void KOMNDBKJMFF(); // 0x1EC5B30 // public 
    void MDGBKLKFFNN(); // 0x1EC6000 // public 
    void BGFELHECCLJ(); // 0x1EC3510 // public 
    void PBODIPEAJAN(); // 0x1EC2D20 // public 
    void OnEnable(); // 0x1EC6660 // public 
    void CNACMAENMHH(); // 0x1EC4250 // public 
    void LKPAKBJJPPD(); // 0x1EC2D20 // public 
    void ACCOPBMKJHJ(); // 0x1EC2D20 // public 
    void Update(); // 0x1EC68D0 // public 
    void OBLLKAGPCHK(); // 0x1EC2D20 // public 
    void FGGIMMKDDNM(); // 0x1EC4A50 // public 
    void PJOMIIGGAFM(); // 0x1EC67D0 // public 
    void BCLBPEKIIIG(); // 0x1EC3210 // public 
    void EBOHDJNIBID(); // 0x1EC2D20 // public 
    void GLAGBKJOBLB(); // 0x1EC4CF0 // public 
    void HMEPJLCIMHN(); // 0x1EC2D20 // public 
    void FMCCNPMPJOM(); // 0x1EC4B70 // public 
    void MCAEMMKAOOA(); // 0x1EC5EE0 // public 
    void BPBHPLHONAH(); // 0x1EC2D20 // public 
    void CDBJONBJNEL(); // 0x1EC3C00 // public 
    void MBKFKBLBKJD(); // 0x1EC2D20 // public 
    void HFLMHCHMOIB(); // 0x1EC4E70 // public 
    void NGLENOMNONO(); // 0x1EC6270 // public 
    void KILGEFFBNMN(); // 0x1EC58F0 // public 
    void ctor(); // 0x1EC69E0 // public 
    void HPFJIELNBLL(); // 0x1EC5000 // public 
    void JKNKKHMFFPE(); // 0x1EC5670 // public 
    void OCDOOPPEJJK(); // 0x1EC63E0 // public 
    void JFGGGOOGACC(); // 0x1EC53F0 // public 
    void JEIJIIKHKIC(); // 0x1EC5280 // public 
    void ACJFNJJGCOB(); // 0x1EC2D50 // public 
    void ECIOGIPBNLL(); // 0x1EC44E0 // public 
    void CIKMFLDCDDA(); // 0x1EC2D20 // public 
    void GAFIAOLNAFC(); // 0x1EC2D20 // public 
    void MGCCBJBABGF(); // 0x1EC6170 // public 
    void COLKDKJDCKF(); // 0x1EC2D20 // public 
    void FDGNCGMPHNF(); // 0x1EC4760 // public 
    void ELJIAALCEIC(); // 0x1EC2D20 // public 
    void BLLAMOAGDOG(); // 0x1EC3970 // public 
    void ENINNPGNKCO(); // 0x1EC2D20 // public 
    void BKCCCFFOPFE(); // 0x1EC3800 // public 
    void EJNEPAAPHKI(); // 0x1EC45E0 // public 
    void LPNDKFLLNOM(); // 0x1EC5DC0 // public 
    void BGECJBHKAAK(); // 0x1EC3390 // public 
    void DJIDANLAFHE(); // 0x1EC4360 // public 
    void CLEIFFBIFCL(); // 0x1EC3FC0 // public 
    void KHEKFPFIENE(); // 0x1EC57E0 // public 

};


namespace ark
{
template<>
struct meta_statics<ButtonBehavior>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&ButtonBehavior::OINPLOOJIPD> () { return 0x1EC64F0; }
    template<> inline uintptr_t rva<&ButtonBehavior::CKGFADMLHNN> () { return 0x1EC3EA0; }
    template<> inline uintptr_t rva<&ButtonBehavior::ReceiveClick> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::BJNJKFBKNKH> () { return 0x1EC3690; }
    template<> inline uintptr_t rva<&ButtonBehavior::FHCJLGBNLOA> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::CLKGLJBHEKO> () { return 0x1EC40E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::BAIGNHGHGLF> () { return 0x1EC3090; }
    template<> inline uintptr_t rva<&ButtonBehavior::BMCLECDEJND> () { return 0x1EC3AE0; }
    template<> inline uintptr_t rva<&ButtonBehavior::FEFBAFBAPGI> () { return 0x1EC48E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::LHPCBPBHKNM> () { return 0x1EC5C50; }
    template<> inline uintptr_t rva<&ButtonBehavior::IOCOBDBPCND> () { return 0x1EC5170; }
    template<> inline uintptr_t rva<&ButtonBehavior::CGNFIHNBOOM> () { return 0x1EC3D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::ADIJMBKFAEL> () { return 0x1EC2E70; }
    template<> inline uintptr_t rva<&ButtonBehavior::OENCMCCLNJO> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::KLIEDGAFCDA> () { return 0x1EC5A10; }
    template<> inline uintptr_t rva<&ButtonBehavior::IDLGFGKBBNO> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::AFMCOHCDOKL> () { return 0x1EC2F90; }
    template<> inline uintptr_t rva<&ButtonBehavior::KHIAKECGCBN> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::CFJGIJBLBFP> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::JJJJFLIEOJA> () { return 0x1EC54F0; }
    template<> inline uintptr_t rva<&ButtonBehavior::KOMNDBKJMFF> () { return 0x1EC5B30; }
    template<> inline uintptr_t rva<&ButtonBehavior::MDGBKLKFFNN> () { return 0x1EC6000; }
    template<> inline uintptr_t rva<&ButtonBehavior::BGFELHECCLJ> () { return 0x1EC3510; }
    template<> inline uintptr_t rva<&ButtonBehavior::PBODIPEAJAN> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::OnEnable> () { return 0x1EC6660; }
    template<> inline uintptr_t rva<&ButtonBehavior::CNACMAENMHH> () { return 0x1EC4250; }
    template<> inline uintptr_t rva<&ButtonBehavior::LKPAKBJJPPD> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::ACCOPBMKJHJ> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::Update> () { return 0x1EC68D0; }
    template<> inline uintptr_t rva<&ButtonBehavior::OBLLKAGPCHK> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::FGGIMMKDDNM> () { return 0x1EC4A50; }
    template<> inline uintptr_t rva<&ButtonBehavior::PJOMIIGGAFM> () { return 0x1EC67D0; }
    template<> inline uintptr_t rva<&ButtonBehavior::BCLBPEKIIIG> () { return 0x1EC3210; }
    template<> inline uintptr_t rva<&ButtonBehavior::EBOHDJNIBID> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::GLAGBKJOBLB> () { return 0x1EC4CF0; }
    template<> inline uintptr_t rva<&ButtonBehavior::HMEPJLCIMHN> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::FMCCNPMPJOM> () { return 0x1EC4B70; }
    template<> inline uintptr_t rva<&ButtonBehavior::MCAEMMKAOOA> () { return 0x1EC5EE0; }
    template<> inline uintptr_t rva<&ButtonBehavior::BPBHPLHONAH> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::CDBJONBJNEL> () { return 0x1EC3C00; }
    template<> inline uintptr_t rva<&ButtonBehavior::MBKFKBLBKJD> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::HFLMHCHMOIB> () { return 0x1EC4E70; }
    template<> inline uintptr_t rva<&ButtonBehavior::NGLENOMNONO> () { return 0x1EC6270; }
    template<> inline uintptr_t rva<&ButtonBehavior::KILGEFFBNMN> () { return 0x1EC58F0; }
    template<> inline uintptr_t rva<&ButtonBehavior::ctor> () { return 0x1EC69E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::HPFJIELNBLL> () { return 0x1EC5000; }
    template<> inline uintptr_t rva<&ButtonBehavior::JKNKKHMFFPE> () { return 0x1EC5670; }
    template<> inline uintptr_t rva<&ButtonBehavior::OCDOOPPEJJK> () { return 0x1EC63E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::JFGGGOOGACC> () { return 0x1EC53F0; }
    template<> inline uintptr_t rva<&ButtonBehavior::JEIJIIKHKIC> () { return 0x1EC5280; }
    template<> inline uintptr_t rva<&ButtonBehavior::ACJFNJJGCOB> () { return 0x1EC2D50; }
    template<> inline uintptr_t rva<&ButtonBehavior::ECIOGIPBNLL> () { return 0x1EC44E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::CIKMFLDCDDA> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::GAFIAOLNAFC> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::MGCCBJBABGF> () { return 0x1EC6170; }
    template<> inline uintptr_t rva<&ButtonBehavior::COLKDKJDCKF> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::FDGNCGMPHNF> () { return 0x1EC4760; }
    template<> inline uintptr_t rva<&ButtonBehavior::ELJIAALCEIC> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::BLLAMOAGDOG> () { return 0x1EC3970; }
    template<> inline uintptr_t rva<&ButtonBehavior::ENINNPGNKCO> () { return 0x1EC2D20; }
    template<> inline uintptr_t rva<&ButtonBehavior::BKCCCFFOPFE> () { return 0x1EC3800; }
    template<> inline uintptr_t rva<&ButtonBehavior::EJNEPAAPHKI> () { return 0x1EC45E0; }
    template<> inline uintptr_t rva<&ButtonBehavior::LPNDKFLLNOM> () { return 0x1EC5DC0; }
    template<> inline uintptr_t rva<&ButtonBehavior::BGECJBHKAAK> () { return 0x1EC3390; }
    template<> inline uintptr_t rva<&ButtonBehavior::DJIDANLAFHE> () { return 0x1EC4360; }
    template<> inline uintptr_t rva<&ButtonBehavior::CLEIFFBIFCL> () { return 0x1EC3FC0; }
    template<> inline uintptr_t rva<&ButtonBehavior::KHEKFPFIENE> () { return 0x1EC57E0; }
} // ark::method_info
//au//KillButtonManager
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
struct PlayerControl;
namespace UnityEngine{ struct SpriteRenderer; }
struct TextRenderer;
#include <au/UnityEngine/Vector2.hpp>

struct KillButtonManager : ark::meta<KillButtonManager, UnityEngine::MonoBehaviour>
{
ark_meta("", "KillButtonManager", "");

    // Fields

    PlayerControl* CurrentTarget; // 0xC
    UnityEngine::SpriteRenderer* renderer; // 0x10
    TextRenderer* TimerText; // 0x14
    bool isCoolingDown; // 0x18
    bool isActive; // 0x19
    UnityEngine::Vector2 EDKKADNAHNH; // 0x1C

    // Methods

    void Start(); // 0x1DC3350 // public 
    void ctor(); // 0x15572C0 // public 
    void GKKENPKLMDE(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC1770 // public 
    void PDPGIHODDLG(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC2C80 // public 
    void CLKMFECCOMP(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC0DB0 // public 
    void AFJLHPHFMHJ(); // 0x1DC0940 // public 
    void GPNCPHJILML(); // 0x1DC1A10 // public 
    void GMCJKHOBCHF(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC18C0 // public 
    void JJKJFDCLNGK(); // 0x1DC1D10 // public 
    void NHACAHJNAKG(); // 0x1DC25A0 // public 
    void NABEFNONMEF(PlayerControl* IGLDJOKKFJE); // 0x1DC22B0 // public 
    void LOPALBEHPPN(PlayerControl* IGLDJOKKFJE); // 0x1DC1FC0 // public 
    void EPEPIJHFMLI(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC11E0 // public 
    void BEEFMJCFPFP(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC0970 // public 
    void GADKKPJHHAG(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC1620 // public 
    void LEOFPAPMGKP(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC1E60 // public 
    void NJAFGJGMGIK(); // 0x1DC29E0 // public 
    void SetTarget(PlayerControl* IGLDJOKKFJE); // 0x1DC3080 // public 
    void LEKMHKDIEDE(); // 0x1DC1A10 // public 
    void CKLKDCKPAJE(PlayerControl* IGLDJOKKFJE); // 0x1DC0AC0 // public 
    void OCENEOKCEHA(); // 0x1DC2B30 // public 
    void HFPDMJDJBOM(); // 0x1DC1B90 // public 
    void PerformKill(); // 0x1DC2DD0 // public 
    void HBKCCBEOBPF(); // 0x1DC1A40 // public 
    void DDMKHLEGEMG(PlayerControl* IGLDJOKKFJE); // 0x1DC0F00 // public 
    void FGLJADHBBLC(PlayerControl* IGLDJOKKFJE); // 0x1DC1330 // public 
    void SetCoolDown(float HAHFHCCIEGH, float JPKMHEIJEJD); // 0x1DC2F20 // public 
    void JHJLGMHMOJJ(); // 0x1DC1BC0 // public 
    void NHPGHDIJLPP(PlayerControl* IGLDJOKKFJE); // 0x1DC26F0 // public 

};


namespace ark
{
template<>
struct meta_statics<KillButtonManager>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&KillButtonManager::Start> () { return 0x1DC3350; }
    template<> inline uintptr_t rva<&KillButtonManager::ctor> () { return 0x15572C0; }
    template<> inline uintptr_t rva<&KillButtonManager::GKKENPKLMDE> () { return 0x1DC1770; }
    template<> inline uintptr_t rva<&KillButtonManager::PDPGIHODDLG> () { return 0x1DC2C80; }
    template<> inline uintptr_t rva<&KillButtonManager::CLKMFECCOMP> () { return 0x1DC0DB0; }
    template<> inline uintptr_t rva<&KillButtonManager::AFJLHPHFMHJ> () { return 0x1DC0940; }
    template<> inline uintptr_t rva<&KillButtonManager::GPNCPHJILML> () { return 0x1DC1A10; }
    template<> inline uintptr_t rva<&KillButtonManager::GMCJKHOBCHF> () { return 0x1DC18C0; }
    template<> inline uintptr_t rva<&KillButtonManager::JJKJFDCLNGK> () { return 0x1DC1D10; }
    template<> inline uintptr_t rva<&KillButtonManager::NHACAHJNAKG> () { return 0x1DC25A0; }
    template<> inline uintptr_t rva<&KillButtonManager::NABEFNONMEF> () { return 0x1DC22B0; }
    template<> inline uintptr_t rva<&KillButtonManager::LOPALBEHPPN> () { return 0x1DC1FC0; }
    template<> inline uintptr_t rva<&KillButtonManager::EPEPIJHFMLI> () { return 0x1DC11E0; }
    template<> inline uintptr_t rva<&KillButtonManager::BEEFMJCFPFP> () { return 0x1DC0970; }
    template<> inline uintptr_t rva<&KillButtonManager::GADKKPJHHAG> () { return 0x1DC1620; }
    template<> inline uintptr_t rva<&KillButtonManager::LEOFPAPMGKP> () { return 0x1DC1E60; }
    template<> inline uintptr_t rva<&KillButtonManager::NJAFGJGMGIK> () { return 0x1DC29E0; }
    template<> inline uintptr_t rva<&KillButtonManager::SetTarget> () { return 0x1DC3080; }
    template<> inline uintptr_t rva<&KillButtonManager::LEKMHKDIEDE> () { return 0x1DC1A10; }
    template<> inline uintptr_t rva<&KillButtonManager::CKLKDCKPAJE> () { return 0x1DC0AC0; }
    template<> inline uintptr_t rva<&KillButtonManager::OCENEOKCEHA> () { return 0x1DC2B30; }
    template<> inline uintptr_t rva<&KillButtonManager::HFPDMJDJBOM> () { return 0x1DC1B90; }
    template<> inline uintptr_t rva<&KillButtonManager::PerformKill> () { return 0x1DC2DD0; }
    template<> inline uintptr_t rva<&KillButtonManager::HBKCCBEOBPF> () { return 0x1DC1A40; }
    template<> inline uintptr_t rva<&KillButtonManager::DDMKHLEGEMG> () { return 0x1DC0F00; }
    template<> inline uintptr_t rva<&KillButtonManager::FGLJADHBBLC> () { return 0x1DC1330; }
    template<> inline uintptr_t rva<&KillButtonManager::SetCoolDown> () { return 0x1DC2F20; }
    template<> inline uintptr_t rva<&KillButtonManager::JHJLGMHMOJJ> () { return 0x1DC1BC0; }
    template<> inline uintptr_t rva<&KillButtonManager::NHPGHDIJLPP> () { return 0x1DC26F0; }
} // ark::method_info
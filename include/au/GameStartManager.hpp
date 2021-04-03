//au//GameStartManager
#pragma once
#include <ark/class.hpp>
#include <au/DestroyableSingleton.hpp>
struct TextRenderer;
namespace UnityEngine{ struct GameObject; }
struct LobbyBehaviour;
namespace UnityEngine{ struct SpriteRenderer; }
namespace UnityEngine{ struct Sprite; }
#include <au/GameStartManager_Status.hpp>
struct ImageTranslator;
struct PlayerControl;
#include <au/MessageStatus.hpp>

struct GameStartManager : ark::meta<GameStartManager, DestroyableSingleton<GameStartManager>>
{
ark_meta("", "GameStartManager", "");

    // Fields

    inline static constexpr float JOHNOAHHDPA = 5.0001;

    int MinPlayers; // 0x10
    TextRenderer* PlayerCounter; // 0x14
    int CurrentPlayers;//GGIPHNCFKFH; // 0x18
    UnityEngine::GameObject* GameSizePopup; // 0x1C
    TextRenderer* GameRoomName; // 0x20
    LobbyBehaviour* LobbyPrefab; // 0x24
    TextRenderer* GameStartText; // 0x28
    UnityEngine::SpriteRenderer* StartButton; // 0x2C
    UnityEngine::SpriteRenderer* MakePublicButton; // 0x30
    UnityEngine::Sprite* PublicGameImage; // 0x34
    UnityEngine::Sprite* PrivateGameImage; // 0x38
    UnityEngine::GameObject* InviteFriendsButton; // 0x3C
    GameStartManager_Status IMLBLIGHCJF; // 0x40
    float MALGLHCCGLJ; // 0x44
    ImageTranslator* BKCDEACEABP; // 0x48

    // Methods

    void EBLKGCOLHHI(); // 0x2146B60 // public 
    void Start(); // 0x2149690 // public 
    void EFMFKJEJGEE(int8_t JIKEICMPALN); // 0x2146C10 // public 
    void Update(); // 0x2149AB0 // public 
    void DJBGFMIGHIO(); // 0x21469C0 // public 
    void LGCOAHLPMMH(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x2146B60 // public 
    void BMCLECDEJND(); // 0x2145D40 // public 
    void KILGEFFBNMN(); // 0x2147E40 // public 
    void BFPEFONNJEO(int8_t JIKEICMPALN); // 0x2145C40 // public 
    void KIHMNBPPBCI(bool DMFJDKKDEHH); // 0x2147D90 // public 
    void AFJLHPHFMHJ(); // 0x21450A0 // public 
    void BeginGame(); // 0x21462D0 // public 
    void BENNHPIEMMO(); // 0x2145AA0 // public 
    void FEHCGEDMDNL(); // 0x2146DC0 // public 
    void CGKJPELHNNI(); // 0x21469A0 // public 
    void MFGHMKGJADK(int8_t JIKEICMPALN); // 0x21491D0 // public 
    void CDBJONBJNEL(); // 0x2146410 // public 
    void FinallyBegin(); // 0x2146F60 // public 
    void LPNDKFLLNOM(); // 0x2148C40 // public 
    void LFBBKGKNMMF(); // 0x21486B0 // public 
    void BDALDHHHNGN(); // 0x2145670 // public 
    void GHJCLFDOBNO(); // 0x2147030 // public 
    void EHAFHHLFIIK(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x2146D10 // public 
    void ctor(); // 0x214A040 // public 
    void ReallyBegin(bool DMFJDKKDEHH); // 0x2149340 // public 
    void KKDDJMNFLHN(); // 0x21483D0 // public 
    void BAABCPFDJKK(); // 0x21454D0 // public 
    void ResetStartState(); // 0x21493F0 // public 
    void IOCOBDBPCND(); // 0x21477E0 // public 
    void ShowInviteMenu(); // 0x267200 // public 
    void SetStartCounter(int8_t JIKEICMPALN); // 0x2149590 // public 
    void IKJANJOKLIE(); // 0x2147770 // public 
    void MakePublic(); // 0x21492D0 // public 
    void HandleDisconnect(); // 0x21469A0 // public 
    void HandleDisconnect1(PlayerControl* FEJHFNNMDHA, MessageStatus HKOLMCHJICI); // 0x21476C0 // public 
    void KLPEMALELBO(); // 0x2148570 // public 
    void KFOKAIECKMJ(); // 0x2147D70 // public 
    void GKNIHJGFNHO(int8_t JIKEICMPALN); // 0x21475C0 // public 

};


namespace ark
{
template<>
struct meta_statics<GameStartManager>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&GameStartManager::EBLKGCOLHHI> () { return 0x2146B60; }
    template<> inline uintptr_t rva<&GameStartManager::Start> () { return 0x2149690; }
    template<> inline uintptr_t rva<&GameStartManager::EFMFKJEJGEE> () { return 0x2146C10; }
    template<> inline uintptr_t rva<&GameStartManager::Update> () { return 0x2149AB0; }
    template<> inline uintptr_t rva<&GameStartManager::DJBGFMIGHIO> () { return 0x21469C0; }
    template<> inline uintptr_t rva<&GameStartManager::LGCOAHLPMMH> () { return 0x2146B60; }
    template<> inline uintptr_t rva<&GameStartManager::BMCLECDEJND> () { return 0x2145D40; }
    template<> inline uintptr_t rva<&GameStartManager::KILGEFFBNMN> () { return 0x2147E40; }
    template<> inline uintptr_t rva<&GameStartManager::BFPEFONNJEO> () { return 0x2145C40; }
    template<> inline uintptr_t rva<&GameStartManager::KIHMNBPPBCI> () { return 0x2147D90; }
    template<> inline uintptr_t rva<&GameStartManager::AFJLHPHFMHJ> () { return 0x21450A0; }
    template<> inline uintptr_t rva<&GameStartManager::BeginGame> () { return 0x21462D0; }
    template<> inline uintptr_t rva<&GameStartManager::BENNHPIEMMO> () { return 0x2145AA0; }
    template<> inline uintptr_t rva<&GameStartManager::FEHCGEDMDNL> () { return 0x2146DC0; }
    template<> inline uintptr_t rva<&GameStartManager::CGKJPELHNNI> () { return 0x21469A0; }
    template<> inline uintptr_t rva<&GameStartManager::MFGHMKGJADK> () { return 0x21491D0; }
    template<> inline uintptr_t rva<&GameStartManager::CDBJONBJNEL> () { return 0x2146410; }
    template<> inline uintptr_t rva<&GameStartManager::FinallyBegin> () { return 0x2146F60; }
    template<> inline uintptr_t rva<&GameStartManager::LPNDKFLLNOM> () { return 0x2148C40; }
    template<> inline uintptr_t rva<&GameStartManager::LFBBKGKNMMF> () { return 0x21486B0; }
    template<> inline uintptr_t rva<&GameStartManager::BDALDHHHNGN> () { return 0x2145670; }
    template<> inline uintptr_t rva<&GameStartManager::GHJCLFDOBNO> () { return 0x2147030; }
    template<> inline uintptr_t rva<&GameStartManager::EHAFHHLFIIK> () { return 0x2146D10; }
    template<> inline uintptr_t rva<&GameStartManager::ctor> () { return 0x214A040; }
    template<> inline uintptr_t rva<&GameStartManager::ReallyBegin> () { return 0x2149340; }
    template<> inline uintptr_t rva<&GameStartManager::KKDDJMNFLHN> () { return 0x21483D0; }
    template<> inline uintptr_t rva<&GameStartManager::BAABCPFDJKK> () { return 0x21454D0; }
    template<> inline uintptr_t rva<&GameStartManager::ResetStartState> () { return 0x21493F0; }
    template<> inline uintptr_t rva<&GameStartManager::IOCOBDBPCND> () { return 0x21477E0; }
    template<> inline uintptr_t rva<&GameStartManager::ShowInviteMenu> () { return 0x267200; }
    template<> inline uintptr_t rva<&GameStartManager::SetStartCounter> () { return 0x2149590; }
    template<> inline uintptr_t rva<&GameStartManager::IKJANJOKLIE> () { return 0x2147770; }
    template<> inline uintptr_t rva<&GameStartManager::MakePublic> () { return 0x21492D0; }
    template<> inline uintptr_t rva<&GameStartManager::HandleDisconnect> () { return 0x21469A0; }
    template<> inline uintptr_t rva<&GameStartManager::HandleDisconnect1> () { return 0x21476C0; }
    template<> inline uintptr_t rva<&GameStartManager::KLPEMALELBO> () { return 0x2148570; }
    template<> inline uintptr_t rva<&GameStartManager::KFOKAIECKMJ> () { return 0x2147D70; }
    template<> inline uintptr_t rva<&GameStartManager::GKNIHJGFNHO> () { return 0x21475C0; }
} // ark::method_info
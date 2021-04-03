//au//AmongUsClient
#pragma once
#include <ark/class.hpp>
#include <au/InnerNet/InnerNetClient.hpp>
#include <cs/string.hpp>
struct GameData;
struct PlayerControl;
namespace System::Collections::Generic{ template <class> struct List; }

namespace InnerNet{ struct ClientData; }
namespace System::Collections{ struct IEnumerator; }
#include <cs/array.hpp>
#include <au/MessageStatus.hpp>
#include <au/RoomConnectionError.hpp>
#include <au/BanReason.hpp>
#include <au/EndGameReason.hpp>
namespace InnerNet{ struct InnerNetClient_CELKEACPFBL; }

struct AmongUsClient : ark::meta<AmongUsClient, InnerNet::InnerNetClient>
{
ark_meta("", "AmongUsClient", "");

    // Fields

    static AmongUsClient* Instance(); // 0x0
    cs::string* OnlineScene; // 0x7C
    cs::string* MainMenuScene; // 0x80
    GameData* GameDataPrefab; // 0x84
    PlayerControl* PlayerPrefab; // 0x88
    System::Collections::Generic::List<int/*UnityEngine::AddressableAssets::AssetReference*/>* ShipPrefabs; // 0x8C
    int TutorialMapId; // 0x90
    float SpawnRadius; // 0x94
    int discoverState; // 0x98
    System::Collections::Generic::List<int>* DisconnectHandlers; // 0x9C
    System::Collections::Generic::List<int>* GameListHandlers; // 0xA0

    // Methods

    void BHKHAKPFBBF(); // 0x18A5340 // public 
    void ctor(); // 0x18A8B00 // public 
    void CPLJDALJIKK(cs::string* EMOACECDFBJ); // 0x267200 // protected override 
    void NIOHGJPECJH(cs::string* EMOACECDFBJ); // 0x18A81D0 // protected override 
    void FDJNGKLBDKB(InnerNet::ClientData* MPKDKNHMDCA); // 0x18A6A50 // protected override 
    void NDEECHFMKHG(cs::string* EMOACECDFBJ); // 0x267200 // protected override 
    void EIPCNOOPLMO(); // 0x18A5CE0 // protected override 
    System::Collections::IEnumerator* AMLOLAKPBNF(); // 0x18A51C0 // protected override 
    System::Collections::IEnumerator* JOAAALBNOEL(); // 0x18A7450 // private 
    cs::array<uint8_t>* GGCOCFDNMIK(); // 0x18A6CF0 // protected override 
    void NBDIGLAODOA(InnerNet::ClientData* MPKDKNHMDCA, MessageStatus HKOLMCHJICI); // 0x18A7A30 // protected override 
    void BMEJCJGMJMO(InnerNet::ClientData* MLGPNAHIAKF); // 0x18A53C0 // private 
    System::Collections::IEnumerator* FMDJEMMCMPE(); // 0x18A6BA0 // protected override 
    void Awake(); // 0x18A5210 // public 
    void HIAEFMJIDFL(); // 0x18A6F50 // protected override 
    System::Collections::IEnumerator* ODHMCAAAPEA(); // 0x18A8430 // private 
    void ExitGame(MessageStatus HKOLMCHJICI = MessageStatus(0)); // 0x18A6190 // public 
    void StartGame(); // 0x18A74A0 // public 
    void PMPHIBPAMLI(cs::string* EMOACECDFBJ, InnerNet::ClientData* MPKDKNHMDCA); // 0x18A8A40 // protected override 
    void EJJOHCOOCDO(cs::string* EMOACECDFBJ); // 0x267200 // protected override 
    System::Collections::IEnumerator* BLJBLCJPLJF(InnerNet::ClientData* CBDAHDOJOPF, cs::string* IMKBDHAHPCB); // 0x18A5360 // protected override 
    void KCFEHJDDOBP(); // 0x18A74A0 // public 
    void OFDNNJFAHNN(InnerNet::ClientData* MLGPNAHIAKF); // 0x18A8480 // private 
    cs::array<uint8_t>* IEBOKDJDJEI(); // 0x18A71F0 // protected override 
    void DFOEMLBMHBN(InnerNet::ClientData* MLGPNAHIAKF); // 0x18A5870 // private 
    System::Collections::IEnumerator* GBPIMEAAMAO(); // 0x18A6BF0 // public 
    void FJHFJBOALOH(cs::string* EMOACECDFBJ, InnerNet::ClientData* MPKDKNHMDCA); // 0x18A6AE0 // protected override 
    void ExitCurrentGameToMoveToADifferentOne(MessageStatus HKOLMCHJICI = MessageStatus(0)); // 0x18A6070 // public 
    void EOFPDBLIJBB(); // 0x18A5F80 // protected override 
    void EPLIMCGAJOK(InnerNet::ClientData* MPKDKNHMDCA); // 0x18A5FE0 // protected override 
    void ALBMMMLPLAA(RoomConnectionError IDBEFABJBHE, int FCGFEOGMCBJ, cs::string* JAKEKEKGKOA, BanReason HKOLMCHJICI); // 0x267200 // protected override
    void GFIIFEIMBGD(cs::string* EMOACECDFBJ); // 0x18A6C30 // protected override 
    void EEMKDEBHKJB(); // 0x18A5340 // public 
    void FBJJGMOIHOI(InnerNet::ClientData* MPKDKNHMDCA, MessageStatus HKOLMCHJICI); // 0x18A62B0 // protected override 
    void PCBOPBMMCKM(InnerNet::ClientData* MPKDKNHMDCA); // 0x18A88F0 // protected override 
    void PCDMEILCNAG(cs::string* EMOACECDFBJ); // 0x18A8980 // protected override 
    void MDDLANONDOD(EndGameReason FCBGPMEMOJB, bool GKFHPFPIHGA); // 0x18A74C0 // protected override
    void OAEJJDIAKAA(InnerNet::InnerNetClient_CELKEACPFBL* MBBKNFCJKBP, System::Collections::Generic::List<int>* AEOMLCIGHOF); // 0x18A8290 // protected override
    System::Collections::IEnumerator* CoEndGame(); // 0x18A5830 // public 

};


namespace ark
{
template<>
struct meta_statics<AmongUsClient>
{
    AmongUsClient* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&AmongUsClient::BHKHAKPFBBF> () { return 0x18A5340; }
    template<> inline uintptr_t rva<&AmongUsClient::ctor> () { return 0x18A8B00; }
    template<> inline uintptr_t rva<&AmongUsClient::CPLJDALJIKK> () { return 0x267200; }
    template<> inline uintptr_t rva<&AmongUsClient::NIOHGJPECJH> () { return 0x18A81D0; }
    template<> inline uintptr_t rva<&AmongUsClient::FDJNGKLBDKB> () { return 0x18A6A50; }
    template<> inline uintptr_t rva<&AmongUsClient::NDEECHFMKHG> () { return 0x267200; }
    template<> inline uintptr_t rva<&AmongUsClient::EIPCNOOPLMO> () { return 0x18A5CE0; }
    template<> inline uintptr_t rva<&AmongUsClient::AMLOLAKPBNF> () { return 0x18A51C0; }
    template<> inline uintptr_t rva<&AmongUsClient::JOAAALBNOEL> () { return 0x18A7450; }
    template<> inline uintptr_t rva<&AmongUsClient::GGCOCFDNMIK> () { return 0x18A6CF0; }
    template<> inline uintptr_t rva<&AmongUsClient::NBDIGLAODOA> () { return 0x18A7A30; }
    template<> inline uintptr_t rva<&AmongUsClient::BMEJCJGMJMO> () { return 0x18A53C0; }
    template<> inline uintptr_t rva<&AmongUsClient::FMDJEMMCMPE> () { return 0x18A6BA0; }
    template<> inline uintptr_t rva<&AmongUsClient::Awake> () { return 0x18A5210; }
    template<> inline uintptr_t rva<&AmongUsClient::HIAEFMJIDFL> () { return 0x18A6F50; }
    template<> inline uintptr_t rva<&AmongUsClient::ODHMCAAAPEA> () { return 0x18A8430; }
    template<> inline uintptr_t rva<&AmongUsClient::ExitGame> () { return 0x18A6190; }
    template<> inline uintptr_t rva<&AmongUsClient::StartGame> () { return 0x18A74A0; }
    template<> inline uintptr_t rva<&AmongUsClient::PMPHIBPAMLI> () { return 0x18A8A40; }
    template<> inline uintptr_t rva<&AmongUsClient::EJJOHCOOCDO> () { return 0x267200; }
    template<> inline uintptr_t rva<&AmongUsClient::BLJBLCJPLJF> () { return 0x18A5360; }
    template<> inline uintptr_t rva<&AmongUsClient::KCFEHJDDOBP> () { return 0x18A74A0; }
    template<> inline uintptr_t rva<&AmongUsClient::OFDNNJFAHNN> () { return 0x18A8480; }
    template<> inline uintptr_t rva<&AmongUsClient::IEBOKDJDJEI> () { return 0x18A71F0; }
    template<> inline uintptr_t rva<&AmongUsClient::DFOEMLBMHBN> () { return 0x18A5870; }
    template<> inline uintptr_t rva<&AmongUsClient::GBPIMEAAMAO> () { return 0x18A6BF0; }
    template<> inline uintptr_t rva<&AmongUsClient::FJHFJBOALOH> () { return 0x18A6AE0; }
    template<> inline uintptr_t rva<&AmongUsClient::ExitCurrentGameToMoveToADifferentOne> () { return 0x18A6070; }
    template<> inline uintptr_t rva<&AmongUsClient::EOFPDBLIJBB> () { return 0x18A5F80; }
    template<> inline uintptr_t rva<&AmongUsClient::EPLIMCGAJOK> () { return 0x18A5FE0; }
    template<> inline uintptr_t rva<&AmongUsClient::ALBMMMLPLAA> () { return 0x267200; }
    template<> inline uintptr_t rva<&AmongUsClient::GFIIFEIMBGD> () { return 0x18A6C30; }
    template<> inline uintptr_t rva<&AmongUsClient::EEMKDEBHKJB> () { return 0x18A5340; }
    template<> inline uintptr_t rva<&AmongUsClient::FBJJGMOIHOI> () { return 0x18A62B0; }
    template<> inline uintptr_t rva<&AmongUsClient::PCBOPBMMCKM> () { return 0x18A88F0; }
    template<> inline uintptr_t rva<&AmongUsClient::PCDMEILCNAG> () { return 0x18A8980; }
    template<> inline uintptr_t rva<&AmongUsClient::MDDLANONDOD> () { return 0x18A74C0; }
    template<> inline uintptr_t rva<&AmongUsClient::OAEJJDIAKAA> () { return 0x18A8290; }
    template<> inline uintptr_t rva<&AmongUsClient::CoEndGame> () { return 0x18A5830; }
} // ark::method_info
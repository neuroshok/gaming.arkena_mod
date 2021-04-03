//au//GameData
#pragma once
#include <ark/class.hpp>
#include <au/InnerNet/InnerNetObject.hpp>
namespace System::Collections::Generic{ template <class> struct List; }
struct GameData_PlayerInfo;
namespace Hazel{ struct MessageReader; }
struct PlayerControl;
#include <au/MessageStatus.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
namespace Hazel{ struct MessageWriter; }

struct GameData : ark::meta<GameData, InnerNet::InnerNetObject>
{
ark_meta("", "GameData", "");

    // Fields

    static GameData* Instance(); // 0x0
    System::Collections::Generic::List<GameData_PlayerInfo>* AllPlayers; // 0x24
    int TotalTasks; // 0x28
    int CompletedTasks; // 0x2C
    inline static constexpr uint8_t InvalidPlayerId = 255;

    inline static constexpr uint8_t DisconnectedPlayerId = 254;


    // Methods

    void BJMNMAKEBPC(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E2F340 // public 
    void EMAJICFFACE(); // 0x1E31070 // public 
    void LBAGKBKFPGC(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E333F0 // public 
    unsigned int DGGMKELKDLF(uint8_t ABBBAKKPJED); // 0x1E300E0 // public 
    GameData_PlayerInfo* DNMEBCADDJA(uint8_t MKFNKGIBBHP); // 0x1E30580 // public
    GameData_PlayerInfo* GetHost(); // 0x1E31E60 // public
    int NKOFLPFGBPC(); // 0x1E34470 // public 
    void MIJJDFLALII(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E33ED0 // public 
    void LNHDPDFBDDN(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1E33750 // public override 
    void AFLCGBHNJNK(); // 0x1E2E9C0 // internal 
    GameData_PlayerInfo* MNIDBBNHLLC(PlayerControl* FEJHFNNMDHA); // 0x1E343E0 // public
    void HandleRpc(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1E32610 // public override 
    void CompleteTask(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E2FBC0 // public 
    void EINJEDKNLCK(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1E30F20 // public override 
    unsigned int MCNIIBOOJHA(uint8_t ABBBAKKPJED); // 0x1E33BD0 // public 
    void POECOPBKFJL(); // 0x1E34E20 // public 
    void AJLKELLADCA(PlayerControl* CJFDNCENCEM, MessageStatus HKOLMCHJICI); // 0x1E2EE80 // public 
    void KBKJCICAOKL(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E32F10 // public 
    void DCDODKJLPJI(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x267200 // public override 
    void KHAIJNHABMF(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E332C0 // public 
    void UpdateColor(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E35660 // public 
    void EFCJMNLELAB(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E309B0 // private 
    void RpcSetTasks(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E35240 // public 
    void DMCODNOENND(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1E30540 // public override 
    bool AKHDOFJAMNH(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E2F000 // public static 
    void UpdatePet(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E35730 // public 
    void DLPBHJHGDPF(uint8_t ABBBAKKPJED, unsigned int MCNFLABCAPI); // 0x1E304D0 // public 
    void OODCAMGALIG(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E34920 // public 
    void HFDBDGNKJHG(); // 0x1E2E9C0 // internal 
    void KDOEGJFNIOF(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E33000 // private 
    void TutOnlyRemoveTask(uint8_t ABBBAKKPJED, unsigned int MCNFLABCAPI); // 0x1E355F0 // public 
    void AAGNFHNOALD(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x267200 // public override 
    void KLNDBMOFKDP(uint8_t ABBBAKKPJED, cs::string* GKDDCDEKIBJ, bool KNEGLNPIFCE = bool(false)); // 0x1E333A0 // public 
    void Deserialize(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1E30660 // public override 
    void OJJKAHLEGPI(PlayerControl* CJFDNCENCEM, MessageStatus HKOLMCHJICI); // 0x1E345D0 // public 
    bool MCPPIGOLHOI(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E33D40 // public override 
    void IJIBIGHHNDK(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x267200 // public override 
    GameData_PlayerInfo* AddPlayer(PlayerControl* FEJHFNNMDHA); // 0x1E2F090 // public
    void MCKHICLOCBA(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E33950 // private 
    bool IPOJFBIOOLM(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E32D80 // public override 
    void FGCJNMFGEHB(uint8_t ABBBAKKPJED, unsigned int MCNFLABCAPI); // 0x1E31380 // public 
    void IGBECNLOCBF(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E32990 // public 
    void CBNKGAFFPDE(cs::string* JAKEKEKGKOA, MessageStatus HKOLMCHJICI); // 0x1E2F480 // private 
    void EGOEJJBBGNL(PlayerControl* CJFDNCENCEM, MessageStatus HKOLMCHJICI); // 0x1E30CC0 // public 
    void HBMHIEHBBMF(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E32280 // public 
    unsigned int MLJEFDGDPGP(uint8_t ABBBAKKPJED); // 0x1E34270 // public 
    void CEBPEJKGJNN(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E2F7E0 // public 
    bool OKFBLFFCBDK(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E347D0 // public override 
    int8_t LJNLCGJCCGN(); // 0x1E33680 // public 
    bool KCDHNMJCOGM(uint8_t ABBBAKKPJED); // 0x1E32F40 // public 
    void GOEOAIIHGLB(Hazel::MessageReader* DOOILGKLBBF, bool IHJEKEOFMGJ); // 0x1E31A40 // public override 
    void ctor(); // 0x1E357B0 // public 
    void UpdateName(uint8_t ABBBAKKPJED, cs::string* GKDDCDEKIBJ, bool KNEGLNPIFCE = bool(false)); // 0x1E356E0 // public 
    GameData_PlayerInfo* DGOJMGBNKKC(PlayerControl* FEJHFNNMDHA); // 0x1E30380 // public
    void DBNJHAPBAKA(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E2FD20 // public 
    void DCKBKPFLCAO(cs::string* JAKEKEKGKOA, MessageStatus HKOLMCHJICI); // 0x1E2FE00 // private 
    void CPLMDEDMBCK(); // 0x1E2FA40 // public 
    int8_t GDFBLCHBKLP(); // 0x1E31790 // public 
    GameData_PlayerInfo* LBDHAMBEFPK(); // 0x1E33420 // public
    int IODLAPDPLID(); // 0x1E32D40 // public 
    unsigned int IACDLECOGKG(uint8_t ABBBAKKPJED); // 0x1E32650 // public 
    bool FAIMEEIMOFL(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E31210 // public static 
    void HPHFEBMPFKI(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E2F7E0 // public 
    GameData_PlayerInfo* GetPlayerById(uint8_t MKFNKGIBBHP); // 0x1E31F00 // public
    void GAGEAANDMNB(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E31750 // public 
    GameData_PlayerInfo* EFKMBHOMGON(PlayerControl* FEJHFNNMDHA); // 0x1E30C30 // public
    bool HANLNNHFCNI(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E31FB0 // public static 
    void HandleDisconnect(PlayerControl* CJFDNCENCEM, MessageStatus HKOLMCHJICI); // 0x1E323C0 // public 
    void HNAEHHGEJDN(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E32310 // public 
    unsigned int TutOnlyAddTask(uint8_t ABBBAKKPJED); // 0x1E35470 // public 
    bool RemovePlayer(uint8_t ABBBAKKPJED); // 0x1E35170 // public 
    int ODIGNABAGBM(); // 0x1E344E0 // public 
    void AABDPLELEHF(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E2E850 // public 
    bool ContainsBadChars(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E2FCA0 // public static 
    void EHHPBOJEOGF(); // 0x1E30E10 // public 
    bool GHHFEMHMJOA(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E31890 // public override 
    void Awake(); // 0x1E2F120 // public 
    GameData_PlayerInfo* INIEIOAFPPH(PlayerControl* FEJHFNNMDHA); // 0x1E32CC0 // public
    void RecomputeTaskCounts(); // 0x1E34FC0 // public 
    bool DJCGBGJLNGN(uint8_t ABBBAKKPJED); // 0x1E30400 // public 
    GameData_PlayerInfo* PKKGDIOHPEA(PlayerControl* FEJHFNNMDHA); // 0x1E34DA0 // public
    void EJCEGOMBEGO(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E30F60 // public 
    GameData_PlayerInfo* FEKBKPHACJC(uint8_t MKFNKGIBBHP); // 0x1E31260 // public
    void CDOKDAECKKG(uint8_t ABBBAKKPJED, unsigned int HOGBKFIPNOC); // 0x1E2F7A0 // public 
    void BLPNHECDDCE(); // 0x1E2F370 // public 
    bool KEIBMJCDEPJ(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E33280 // public static 
    int DONPEEFGJHO(); // 0x1E30620 // public 
    void AFPIAOACKPA(); // 0x1E2E9C0 // internal 
    GameData_PlayerInfo* CNBMBPBLBHC(uint8_t MKFNKGIBBHP); // 0x1E2F810 // public
    void GMFCJCCHGFI(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E31A00 // public 
    GameData_PlayerInfo* MBIJEABLIHA(PlayerControl* FEJHFNNMDHA); // 0x1E338C0 // public
    void UpdateHat(uint8_t ABBBAKKPJED, unsigned int HOGBKFIPNOC); // 0x1E356A0 // public 
    void PCIOFLEEFFB(uint8_t ABBBAKKPJED, cs::string* GKDDCDEKIBJ, bool KNEGLNPIFCE = bool(false)); // 0x1E349D0 // public 
    void FLJCJBFGDDI(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E31710 // public 
    void AGAJNNLGMHH(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x1E2E9E0 // public override 
    void DGOFFBMPODG(PlayerControl* CJFDNCENCEM, MessageStatus HKOLMCHJICI); // 0x1E30250 // public 
    bool Serialize(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E352F0 // public override 
    void MOAFHJILDIA(uint8_t GIICFHKILOB, Hazel::MessageReader* DOOILGKLBBF); // 0x267200 // public override 
    void LICBKNEBAJL(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E335A0 // public 
    void MGNAOOGMCCC(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E33E90 // public 
    void MLGHKJDJGJF(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E33F10 // public 
    void HIMCLCNDNNC(uint8_t ABBBAKKPJED, cs::string* GKDDCDEKIBJ, bool KNEGLNPIFCE = bool(false)); // 0x1E322C0 // public 
    void EELDABNCIBK(); // 0x1E307E0 // public 
    void FIHNBMCJBEJ(cs::string* JAKEKEKGKOA, MessageStatus HKOLMCHJICI); // 0x1E313F0 // private 
    bool GGKFOPHCAPL(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E31860 // public static 
    void PECHNNJLGHN(); // 0x1E34A10 // public 
    void NOLEEKPDDPG(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E344B0 // public 
    int8_t GetAvailableId(); // 0x1E31D90 // public 
    bool ADCOKOCBGJN(uint8_t ABBBAKKPJED); // 0x1E2E900 // public 
    void LHDGJPFGCDP(PlayerControl* FEJHFNNMDHA, unsigned int MCNFLABCAPI); // 0x1E334C0 // public 
    void KAHCIHIBNIK(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E32ED0 // public 
    void UpdateSkin(uint8_t ABBBAKKPJED, unsigned int DGCIKAIFOCF); // 0x1E35770 // public 
    void HBLJBOAGOOG(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E32000 // private 
    void PJFOHHEGMPI(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E34B20 // private 
    void AKFBNGEOLPJ(uint8_t ABBBAKKPJED, int JBOMEMICJJM); // 0x1E2EFD0 // public 
    bool IICEMEPELCN(uint8_t ABBBAKKPJED); // 0x1E32A70 // public 
    int OHFIFPEJDFM(); // 0x1E34520 // public 
    bool COADKEIAKLP(Hazel::MessageWriter* KNDENLAEOCO, bool IHJEKEOFMGJ); // 0x1E2F8B0 // public override 
    void HandleDisconnect1(); // 0x1E324F0 // public 
    void OHHGPJLPIJH(uint8_t ABBBAKKPJED, unsigned int MCNFLABCAPI); // 0x1E34560 // public 
    void DFHBCNPJIEG(); // 0x1E2FFD0 // public 
    void OLIAEFOJBPH(); // 0x1E2E9C0 // internal 
    void GPNJAOOMFIG(); // 0x1E31BC0 // public 
    void NPFJHEJMFCO(); // 0x1E2E9C0 // internal 
    unsigned int ILDDGPGJFPF(uint8_t ABBBAKKPJED); // 0x1E32B40 // public 
    int get_PlayerCount(); // 0x1E35810 // public 
    void ICAPGLAENOI(); // 0x1E327C0 // public 
    void ALPNNCLDBKO(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E2F050 // public 
    void KKPGFPIPAKJ(); // 0x1E2E9C0 // internal 
    bool BBGICIMCKDP(cs::string* GKDDCDEKIBJ, bool CGHEDNCLAPL); // 0x1E2F2F0 // public static 
    GameData_PlayerInfo* FFDJICKKBEM(PlayerControl* FEJHFNNMDHA); // 0x1E31300 // public
    void EKCNECMEOCK(uint8_t ABBBAKKPJED, unsigned int CKAOPFHPEBG); // 0x1E31040 // public 
    void MLJBJOCBIOH(uint8_t ABBBAKKPJED, cs::array<uint8_t>* GMBDLENCEIP); // 0x1E33FF0 // private 
    void AIIDJKLEPJI(cs::string* JAKEKEKGKOA, MessageStatus HKOLMCHJICI); // 0x1E2EA20 // private 

};


namespace ark
{
template<>
struct meta_statics<GameData>
{
    GameData* Instance;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&GameData::BJMNMAKEBPC> () { return 0x1E2F340; }
    template<> inline uintptr_t rva<&GameData::EMAJICFFACE> () { return 0x1E31070; }
    template<> inline uintptr_t rva<&GameData::LBAGKBKFPGC> () { return 0x1E333F0; }
    template<> inline uintptr_t rva<&GameData::DGGMKELKDLF> () { return 0x1E300E0; }
    template<> inline uintptr_t rva<&GameData::DNMEBCADDJA> () { return 0x1E30580; }
    template<> inline uintptr_t rva<&GameData::GetHost> () { return 0x1E31E60; }
    template<> inline uintptr_t rva<&GameData::NKOFLPFGBPC> () { return 0x1E34470; }
    template<> inline uintptr_t rva<&GameData::MIJJDFLALII> () { return 0x1E33ED0; }
    template<> inline uintptr_t rva<&GameData::LNHDPDFBDDN> () { return 0x1E33750; }
    template<> inline uintptr_t rva<&GameData::AFLCGBHNJNK> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::MNIDBBNHLLC> () { return 0x1E343E0; }
    template<> inline uintptr_t rva<&GameData::HandleRpc> () { return 0x1E32610; }
    template<> inline uintptr_t rva<&GameData::CompleteTask> () { return 0x1E2FBC0; }
    template<> inline uintptr_t rva<&GameData::EINJEDKNLCK> () { return 0x1E30F20; }
    template<> inline uintptr_t rva<&GameData::MCNIIBOOJHA> () { return 0x1E33BD0; }
    template<> inline uintptr_t rva<&GameData::POECOPBKFJL> () { return 0x1E34E20; }
    template<> inline uintptr_t rva<&GameData::AJLKELLADCA> () { return 0x1E2EE80; }
    template<> inline uintptr_t rva<&GameData::KBKJCICAOKL> () { return 0x1E32F10; }
    template<> inline uintptr_t rva<&GameData::DCDODKJLPJI> () { return 0x267200; }
    template<> inline uintptr_t rva<&GameData::KHAIJNHABMF> () { return 0x1E332C0; }
    template<> inline uintptr_t rva<&GameData::UpdateColor> () { return 0x1E35660; }
    template<> inline uintptr_t rva<&GameData::EFCJMNLELAB> () { return 0x1E309B0; }
    template<> inline uintptr_t rva<&GameData::RpcSetTasks> () { return 0x1E35240; }
    template<> inline uintptr_t rva<&GameData::DMCODNOENND> () { return 0x1E30540; }
    template<> inline uintptr_t rva<&GameData::AKHDOFJAMNH> () { return 0x1E2F000; }
    template<> inline uintptr_t rva<&GameData::UpdatePet> () { return 0x1E35730; }
    template<> inline uintptr_t rva<&GameData::DLPBHJHGDPF> () { return 0x1E304D0; }
    template<> inline uintptr_t rva<&GameData::OODCAMGALIG> () { return 0x1E34920; }
    template<> inline uintptr_t rva<&GameData::HFDBDGNKJHG> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::KDOEGJFNIOF> () { return 0x1E33000; }
    template<> inline uintptr_t rva<&GameData::TutOnlyRemoveTask> () { return 0x1E355F0; }
    template<> inline uintptr_t rva<&GameData::AAGNFHNOALD> () { return 0x267200; }
    template<> inline uintptr_t rva<&GameData::KLNDBMOFKDP> () { return 0x1E333A0; }
    template<> inline uintptr_t rva<&GameData::Deserialize> () { return 0x1E30660; }
    template<> inline uintptr_t rva<&GameData::OJJKAHLEGPI> () { return 0x1E345D0; }
    template<> inline uintptr_t rva<&GameData::MCPPIGOLHOI> () { return 0x1E33D40; }
    template<> inline uintptr_t rva<&GameData::IJIBIGHHNDK> () { return 0x267200; }
    template<> inline uintptr_t rva<&GameData::AddPlayer> () { return 0x1E2F090; }
    template<> inline uintptr_t rva<&GameData::MCKHICLOCBA> () { return 0x1E33950; }
    template<> inline uintptr_t rva<&GameData::IPOJFBIOOLM> () { return 0x1E32D80; }
    template<> inline uintptr_t rva<&GameData::FGCJNMFGEHB> () { return 0x1E31380; }
    template<> inline uintptr_t rva<&GameData::IGBECNLOCBF> () { return 0x1E32990; }
    template<> inline uintptr_t rva<&GameData::CBNKGAFFPDE> () { return 0x1E2F480; }
    template<> inline uintptr_t rva<&GameData::EGOEJJBBGNL> () { return 0x1E30CC0; }
    template<> inline uintptr_t rva<&GameData::HBMHIEHBBMF> () { return 0x1E32280; }
    template<> inline uintptr_t rva<&GameData::MLJEFDGDPGP> () { return 0x1E34270; }
    template<> inline uintptr_t rva<&GameData::CEBPEJKGJNN> () { return 0x1E2F7E0; }
    template<> inline uintptr_t rva<&GameData::OKFBLFFCBDK> () { return 0x1E347D0; }
    template<> inline uintptr_t rva<&GameData::LJNLCGJCCGN> () { return 0x1E33680; }
    template<> inline uintptr_t rva<&GameData::KCDHNMJCOGM> () { return 0x1E32F40; }
    template<> inline uintptr_t rva<&GameData::GOEOAIIHGLB> () { return 0x1E31A40; }
    template<> inline uintptr_t rva<&GameData::ctor> () { return 0x1E357B0; }
    template<> inline uintptr_t rva<&GameData::UpdateName> () { return 0x1E356E0; }
    template<> inline uintptr_t rva<&GameData::DGOJMGBNKKC> () { return 0x1E30380; }
    template<> inline uintptr_t rva<&GameData::DBNJHAPBAKA> () { return 0x1E2FD20; }
    template<> inline uintptr_t rva<&GameData::DCKBKPFLCAO> () { return 0x1E2FE00; }
    template<> inline uintptr_t rva<&GameData::CPLMDEDMBCK> () { return 0x1E2FA40; }
    template<> inline uintptr_t rva<&GameData::GDFBLCHBKLP> () { return 0x1E31790; }
    template<> inline uintptr_t rva<&GameData::LBDHAMBEFPK> () { return 0x1E33420; }
    template<> inline uintptr_t rva<&GameData::IODLAPDPLID> () { return 0x1E32D40; }
    template<> inline uintptr_t rva<&GameData::IACDLECOGKG> () { return 0x1E32650; }
    template<> inline uintptr_t rva<&GameData::FAIMEEIMOFL> () { return 0x1E31210; }
    template<> inline uintptr_t rva<&GameData::HPHFEBMPFKI> () { return 0x1E2F7E0; }
    template<> inline uintptr_t rva<&GameData::GetPlayerById> () { return 0x1E31F00; }
    template<> inline uintptr_t rva<&GameData::GAGEAANDMNB> () { return 0x1E31750; }
    template<> inline uintptr_t rva<&GameData::EFKMBHOMGON> () { return 0x1E30C30; }
    template<> inline uintptr_t rva<&GameData::HANLNNHFCNI> () { return 0x1E31FB0; }
    template<> inline uintptr_t rva<&GameData::HandleDisconnect> () { return 0x1E323C0; }
    template<> inline uintptr_t rva<&GameData::HNAEHHGEJDN> () { return 0x1E32310; }
    template<> inline uintptr_t rva<&GameData::TutOnlyAddTask> () { return 0x1E35470; }
    template<> inline uintptr_t rva<&GameData::RemovePlayer> () { return 0x1E35170; }
    template<> inline uintptr_t rva<&GameData::ODIGNABAGBM> () { return 0x1E344E0; }
    template<> inline uintptr_t rva<&GameData::AABDPLELEHF> () { return 0x1E2E850; }
    template<> inline uintptr_t rva<&GameData::ContainsBadChars> () { return 0x1E2FCA0; }
    template<> inline uintptr_t rva<&GameData::EHHPBOJEOGF> () { return 0x1E30E10; }
    template<> inline uintptr_t rva<&GameData::GHHFEMHMJOA> () { return 0x1E31890; }
    template<> inline uintptr_t rva<&GameData::Awake> () { return 0x1E2F120; }
    template<> inline uintptr_t rva<&GameData::INIEIOAFPPH> () { return 0x1E32CC0; }
    template<> inline uintptr_t rva<&GameData::RecomputeTaskCounts> () { return 0x1E34FC0; }
    template<> inline uintptr_t rva<&GameData::DJCGBGJLNGN> () { return 0x1E30400; }
    template<> inline uintptr_t rva<&GameData::PKKGDIOHPEA> () { return 0x1E34DA0; }
    template<> inline uintptr_t rva<&GameData::EJCEGOMBEGO> () { return 0x1E30F60; }
    template<> inline uintptr_t rva<&GameData::FEKBKPHACJC> () { return 0x1E31260; }
    template<> inline uintptr_t rva<&GameData::CDOKDAECKKG> () { return 0x1E2F7A0; }
    template<> inline uintptr_t rva<&GameData::BLPNHECDDCE> () { return 0x1E2F370; }
    template<> inline uintptr_t rva<&GameData::KEIBMJCDEPJ> () { return 0x1E33280; }
    template<> inline uintptr_t rva<&GameData::DONPEEFGJHO> () { return 0x1E30620; }
    template<> inline uintptr_t rva<&GameData::AFPIAOACKPA> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::CNBMBPBLBHC> () { return 0x1E2F810; }
    template<> inline uintptr_t rva<&GameData::GMFCJCCHGFI> () { return 0x1E31A00; }
    template<> inline uintptr_t rva<&GameData::MBIJEABLIHA> () { return 0x1E338C0; }
    template<> inline uintptr_t rva<&GameData::UpdateHat> () { return 0x1E356A0; }
    template<> inline uintptr_t rva<&GameData::PCIOFLEEFFB> () { return 0x1E349D0; }
    template<> inline uintptr_t rva<&GameData::FLJCJBFGDDI> () { return 0x1E31710; }
    template<> inline uintptr_t rva<&GameData::AGAJNNLGMHH> () { return 0x1E2E9E0; }
    template<> inline uintptr_t rva<&GameData::DGOFFBMPODG> () { return 0x1E30250; }
    template<> inline uintptr_t rva<&GameData::Serialize> () { return 0x1E352F0; }
    template<> inline uintptr_t rva<&GameData::MOAFHJILDIA> () { return 0x267200; }
    template<> inline uintptr_t rva<&GameData::LICBKNEBAJL> () { return 0x1E335A0; }
    template<> inline uintptr_t rva<&GameData::MGNAOOGMCCC> () { return 0x1E33E90; }
    template<> inline uintptr_t rva<&GameData::MLGHKJDJGJF> () { return 0x1E33F10; }
    template<> inline uintptr_t rva<&GameData::HIMCLCNDNNC> () { return 0x1E322C0; }
    template<> inline uintptr_t rva<&GameData::EELDABNCIBK> () { return 0x1E307E0; }
    template<> inline uintptr_t rva<&GameData::FIHNBMCJBEJ> () { return 0x1E313F0; }
    template<> inline uintptr_t rva<&GameData::GGKFOPHCAPL> () { return 0x1E31860; }
    template<> inline uintptr_t rva<&GameData::PECHNNJLGHN> () { return 0x1E34A10; }
    template<> inline uintptr_t rva<&GameData::NOLEEKPDDPG> () { return 0x1E344B0; }
    template<> inline uintptr_t rva<&GameData::GetAvailableId> () { return 0x1E31D90; }
    template<> inline uintptr_t rva<&GameData::ADCOKOCBGJN> () { return 0x1E2E900; }
    template<> inline uintptr_t rva<&GameData::LHDGJPFGCDP> () { return 0x1E334C0; }
    template<> inline uintptr_t rva<&GameData::KAHCIHIBNIK> () { return 0x1E32ED0; }
    template<> inline uintptr_t rva<&GameData::UpdateSkin> () { return 0x1E35770; }
    template<> inline uintptr_t rva<&GameData::HBLJBOAGOOG> () { return 0x1E32000; }
    template<> inline uintptr_t rva<&GameData::PJFOHHEGMPI> () { return 0x1E34B20; }
    template<> inline uintptr_t rva<&GameData::AKFBNGEOLPJ> () { return 0x1E2EFD0; }
    template<> inline uintptr_t rva<&GameData::IICEMEPELCN> () { return 0x1E32A70; }
    template<> inline uintptr_t rva<&GameData::OHFIFPEJDFM> () { return 0x1E34520; }
    template<> inline uintptr_t rva<&GameData::COADKEIAKLP> () { return 0x1E2F8B0; }
    template<> inline uintptr_t rva<&GameData::HandleDisconnect1> () { return 0x1E324F0; }
    template<> inline uintptr_t rva<&GameData::OHHGPJLPIJH> () { return 0x1E34560; }
    template<> inline uintptr_t rva<&GameData::DFHBCNPJIEG> () { return 0x1E2FFD0; }
    template<> inline uintptr_t rva<&GameData::OLIAEFOJBPH> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::GPNJAOOMFIG> () { return 0x1E31BC0; }
    template<> inline uintptr_t rva<&GameData::NPFJHEJMFCO> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::ILDDGPGJFPF> () { return 0x1E32B40; }
    template<> inline uintptr_t rva<&GameData::get_PlayerCount> () { return 0x1E35810; }
    template<> inline uintptr_t rva<&GameData::ICAPGLAENOI> () { return 0x1E327C0; }
    template<> inline uintptr_t rva<&GameData::ALPNNCLDBKO> () { return 0x1E2F050; }
    template<> inline uintptr_t rva<&GameData::KKPGFPIPAKJ> () { return 0x1E2E9C0; }
    template<> inline uintptr_t rva<&GameData::BBGICIMCKDP> () { return 0x1E2F2F0; }
    template<> inline uintptr_t rva<&GameData::FFDJICKKBEM> () { return 0x1E31300; }
    template<> inline uintptr_t rva<&GameData::EKCNECMEOCK> () { return 0x1E31040; }
    template<> inline uintptr_t rva<&GameData::MLJBJOCBIOH> () { return 0x1E33FF0; }
    template<> inline uintptr_t rva<&GameData::AIIDJKLEPJI> () { return 0x1E2EA20; }
} // ark::method_info
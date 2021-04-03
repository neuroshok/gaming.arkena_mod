//au/InnerNet/InnerNetClient
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class...> struct HashSet; }
namespace System::Collections::Generic{ template <class> struct List; }
namespace System::Collections::Generic{ template <class...> struct Dictionary; }
#include <cs/string.hpp>
namespace Hazel::Udp{ struct UnityUdpClientConnection; }
#include <au/ConnectionMode.hpp>
#include <au/GameMode.hpp>
#include <au/MessageStatus.hpp>
#include <au/InnerNetClient_GameState.hpp>
namespace Hazel{ struct MessageWriter; }
#include <au/Hazel/SendOption.hpp>
namespace System::Collections{ struct IEnumerator; }
namespace InnerNet{ struct InnerNetObject; }
#include <au/ClientType.hpp>
namespace Hazel{ struct MessageReader; }
namespace InnerNet{ struct ClientData; }
namespace System{ template <class...> struct Func; }
struct object;
namespace Hazel{ struct DisconnectedEventArgs; }
struct IGDMNKLDEPI;
#include <au/BanReason.hpp>
#include <au/Hazel/DataReceivedEventArgs.hpp>
#include <au/EndGameReason.hpp>
#include <au/RoomConnectionError.hpp>
namespace InnerNet{ struct InnerNetClient_CELKEACPFBL; }
#include <au/UnityEngine/SceneManagement/Scene.hpp>


namespace InnerNet {
struct InnerNetClient : ark::meta<InnerNetClient, UnityEngine::MonoBehaviour>
{
ark_meta("InnerNet", "InnerNetClient", "");

    // Fields

    inline static constexpr int CurrentClient = -3;

    inline static constexpr int HostInherit = -2;

    inline static constexpr uint8_t JIIEDPDAPOH = 1;

    inline static constexpr uint8_t KADHNJECCBG = 2;

    inline static constexpr uint8_t MACMKONCCLG = 4;

    inline static constexpr uint8_t IJGDAGHDIIA = 5;

    inline static constexpr uint8_t PDIDHFEADGP = 6;

    inline static constexpr uint8_t POPHHCCBOOH = 7;

    inline static constexpr uint8_t LEFOKIFLICF = 8;

    inline static constexpr uint8_t AEKCOKHGLKH = 205;

    inline static constexpr uint8_t HOJJNHHLFEG = 206;

    inline static constexpr uint8_t ACDHLIGIAFC = 1;

    inline static constexpr uint8_t FGPFNFGPMBJ = 2;

    float MinSendInterval; // 0xC
    unsigned int GNBJACBFEAF; // 0x10
    float HAHFHCCIEGH; // 0x14
    cs::array<int/*UnityEngine::AddressableAssets::AssetReference**/>* SpawnableObjects; // 0x18
    cs::array<InnerNet::InnerNetObject*>* NonAddressableSpawnableObjects; // 0x1C
    bool HBIABLIEOGD; // 0x20
    System::Collections::Generic::HashSet<unsigned int>* HILDAEDFOCG; // 0x24
    System::Collections::Generic::List<InnerNet::InnerNetObject>* allObjects; // 0x28
    System::Collections::Generic::Dictionary<unsigned int, InnerNet::InnerNetObject>* JLGHPACDCEB; // 0x2C
    cs::array<Hazel::MessageWriter*>* KDEHEKPKJJE; // 0x30
    int NPCLLOEBHOB; // 0x34
    static cs::array<MessageStatus>* MOBIEHGMIIC(); // 0x0
    inline static constexpr int AHNGGDBGPNO = 30;

    inline static constexpr int NoClientId = -1;

    cs::string* HEHPPIDHBFE; // 0x38
    int BOLJMCBBDAO; // 0x3C
    Hazel::Udp::UnityUdpClientConnection* OOGLKIKOAAO; // 0x40
    ConnectionMode mode; // 0x44
    GameMode GameMode; // 0x48
    int GameId; // 0x4C
    int HostId; // 0x50
    int ClientId; // 0x54
    System::Collections::Generic::List<InnerNet::ClientData>* allClients; // 0x58
    MessageStatus LastDisconnectReason; // 0x5C
    cs::string* LastCustomDisconnect; // 0x60
    System::Collections::Generic::List<int /* System::Action*/>* DINJCOBLIHN; // 0x64
    System::Collections::Generic::List<int /* System::Action*/>* FIODLHJEDJA; // 0x68
    bool _ALCCOKAKJKH_k__BackingField; // 0x6C
    InnerNetClient_GameState GameState; // 0x70
    System::Collections::Generic::List<int /* System::Action*/>* BANNIIBMLAK; // 0x74
    bool EFFCGLKIIGP; // 0x78

    // Methods

    void FixedUpdate(); // 0x16B5C20 // private 
    // T FindObjectByNetId(unsigned int KEIIIAKDKLC); // 0x0 // public 
    Hazel::MessageWriter* StartRpcImmediately(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP, int LJIPNMCIBPN = int(-1)); // 0x16B9F70 // public 
    void FinishRpcImmediately(Hazel::MessageWriter* FIHNEEPAGBA); // 0x16B5BE0 // public 
    void SendSelfClientInfoToAll(); // 0x16B9D20 // public 
    void PS4_AskIfRoomExists(); // 0x16B9650 // public 
    void PS4_ReplyWithMyRoom(); // 0x267200 // public 
    void SendRpc(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP = Hazel::SendOption(1)); // 0x16B9CC0 // public 
    Hazel::MessageWriter* StartRpc(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP = Hazel::SendOption(1)); // 0x16BA040 // public 
    void MPOMKAADCEL(cs::string* ELKOMGKNMED); // 0x16B75F0 // private 
    System::Collections::IEnumerator* BMNFFPJDMDL(cs::string* ELKOMGKNMED); // 0x16B50B0 // private 
    void Spawn(InnerNet::InnerNetObject* LCIEFAJIACD, int DIGMPFBKDGM = int(-2), ClientType GLBNKFAHMHI = ClientType(0)); // 0x16B9E10 // public 
    void ABEDLPOLJND(InnerNet::InnerNetObject* LCIEFAJIACD, int DIGMPFBKDGM, ClientType GLBNKFAHMHI, Hazel::MessageWriter* FIHNEEPAGBA); // 0x16B4C40 // private 
    void Despawn(InnerNet::InnerNetObject* NBDPPECAPLA); // 0x16B55C0 // public 
    bool OOEHOCHBMDH(InnerNet::InnerNetObject* HHIOOCFOLOC); // 0x16B9300 // private 
    void RemoveNetObject(InnerNet::InnerNetObject* HHIOOCFOLOC); // 0x16B9750 // public 
    void RemoveUnownedObjects(); // 0x16B97F0 // public 
    void NBFPMLMKPOA(Hazel::MessageReader* OFJAFNPHNKK); // 0x16B8FA0 // private 
    System::Collections::IEnumerator* FPKMONGHLIC(Hazel::MessageReader* DOOILGKLBBF, int NPCLLOEBHOB); // 0x16B5B40 // private 
    System::Collections::IEnumerator* EDNLCLCPMHN(Hazel::MessageReader* DOOILGKLBBF); // 0x16B59B0 // private 
    void SetEndpoint(cs::string* APJHAOFKJFC, uint16_t BMODKMCACMM); // 0x16B9DF0 // public 
    bool get_AmConnected(); // 0xADDD00 // public 
    int get_Ping(); // 0x16BA8C0 // public 
    int get_BytesSent(); // 0x16BA870 // public 
    int get_BytesGot(); // 0x16BA840 // public 
    int get_Resends(); // 0x16BA8F0 // public 
    bool get_AmHost(); // 0x16BA820 // public 
    bool get_AmClient(); // 0x16BA810 // public 
    bool get_IsGamePublic(); // 0xDAFC10 // public 
    void LOOFEFHAKOF(bool IKGGJMHPDGH); // 0x47BFA0 // private 
    bool get_IsGameStarted(); // 0x16BA8B0 // public 
    bool get_IsGameOver(); // 0x16BA8A0 // public 
    void Start(); // 0x16BA0A0 // public virtual 
    void OPNOBIONPDF(Hazel::MessageWriter* FIHNEEPAGBA); // 0x16B93B0 // private 
    InnerNet::ClientData* GetHost(); // 0x16B62F0 // public 
    int GetClientIdFromCharacter(InnerNet::InnerNetObject* OHABAMMFCPN); // 0x16B5FD0 // public 
    void OnDestroy(); // 0x16B9630 // public virtual 
    System::Collections::IEnumerator* CoConnect(); // 0x16B5290 // public 
    void DDGADCBDGEJ(cs::array<uint8_t>* MPKDKNHMDCA); // 0x16B5340 // private 
    void IKDIIKGOEKN(cs::array<uint8_t>* MPKDKNHMDCA, int GLKAFNGNBOO); // 0x16B6AF0 // private 
    void Connect(ConnectionMode BAPGNLCHIJK); // 0x16B52E0 // public
    System::Collections::IEnumerator* HJCMLFJOIHD(ConnectionMode BAPGNLCHIJK); // 0x16B64C0 // private
    System::Collections::IEnumerator* WaitForConnectionOrFail(); // 0x16BA5D0 // public 
    System::Collections::IEnumerator* OACCMCMIHDF(System::Func<bool>* ODKFKDMCGOK, cs::string* BGDABAAMHIO, int CGMGODCILHJ = int(15)); // 0x16B90B0 // private 
    void Update(); // 0x16BA140 // public 
    void MBPHKHFHOFF(InnerNetClient* BAJEGFLOPNH, Hazel::DisconnectedEventArgs* LKFKDOPBHJF); // 0x16B7020 // private 
    void HandleDisconnect(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII); // 0x16B6940 // public 
    void OAKEFMHJNKH(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII); // 0x16B9120 // protected 
    void HOJJOCONAMJ(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII); // 0x16B6520 // protected 
    void HostGame(IGDMNKLDEPI* DFBAIPDAMJN); // 0x16B69C0 // public 
    void ReportPlayer(int FCGFEOGMCBJ, BanReason HKOLMCHJICI); // 0x16B9B10 // public
    void JoinGame(); // 0x16B6C60 // public 
    bool CanBan(); // 0x16B5190 // public 
    bool CanKick(); // 0x16B51B0 // public 
    void KickPlayer(int FCGFEOGMCBJ, bool KCFMDNHBKPK); // 0x16B6F70 // public 
    Hazel::MessageWriter* StartEndGame(); // 0x16B9EF0 // public 
    void FinishEndGame(Hazel::MessageWriter* FIHNEEPAGBA); // 0x16B5BA0 // public 
    void GAOECJJIDAL(int IPAJLIHDLEG, MessageStatus HKOLMCHJICI); // 0x16B5F10 // protected 
    void DFCGPHAOPHI(); // 0x16B5490 // protected 
    void OFMEGDEDGOK(); // 0x16B9270 // protected 
    void RequestGameList(bool LLOKMJILIOH, IGDMNKLDEPI* DFBAIPDAMJN); // 0x16B9BD0 // public 
    void ChangeGamePublic(bool JJPKJIFLLCO); // 0x16B51D0 // public 
    void EBAFICDANFE(Hazel::DataReceivedEventArgs LKFKDOPBHJF); // 0x16B56C0 // private 
    void NAKNMDEBPAB(Hazel::MessageReader* DOOILGKLBBF, Hazel::SendOption HMKAEOCLHJB); // 0x16B76E0 // private 
    cs::string* AddressToString(unsigned int GHDMNKBBNIC); // 0x16B4DD0 // public static 
    InnerNet::ClientData* MMPOMGAMAFM(int FCGFEOGMCBJ); // 0x16B7420 // private 
    InnerNet::ClientData* GetClient(int FCGFEOGMCBJ); // 0x16B6190 // public 
    void EDAFNBKAAMC(int MIHLABCMNFB, MessageStatus HKOLMCHJICI); // 0x16B5770 // private 
    void OnApplicationPause(bool NANMFNIODCN); // 0x16B9520 // protected virtual 
    void CLDOHKOGLOO(InnerNetClient* MJMOOPLLNPO); // 0x16B5110 // private 
    void MMIABEJADOF(int FCGFEOGMCBJ); // 0x16B71E0 // protected 


    InnerNet::ClientData* ENBMACAGLNK(int MKFNKGIBBHP); // 0x16B5A10 // protected 
    void ctor(); // 0x16BA680 // protected 
    void cctor(); // 0x16BA620 // private static 
    void BGEGKALKAJI(UnityEngine::SceneManagement::Scene KJFAFHFPDCF, UnityEngine::SceneManagement::Scene AGBFGMLELNI); // 0x16B4FB0 // private 
    bool OEGKCLOCODA(); // 0x16B5180 // private 
    bool DOBPHKLDFNF(); // 0x6361E0 // private 
    bool CLKEEBGICHB(); // 0x16B5180 // private 
    void KEJDDODCCNM(); // 0x16B6F00 // private 
    void AIFCBGADBOP(); // 0x7F8E40 // private 
    void HCDAJFAPGPH(); // 0x16B6450 // private 
    void CKJOIPIMDDG(); // 0x7F8E40 // private 
    void DHFLOBOCLDP(); // 0x16B5590 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<InnerNet::InnerNetClient>
{
    cs::array<MessageStatus>* MOBIEHGMIIC;
};
} // ark


namespace ark::method_info
{
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::FixedUpdate>() { return 0x16B5C20; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::StartRpcImmediately> () { return 0x16B9F70; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::FinishRpcImmediately> () { return 0x16B5BE0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::SendSelfClientInfoToAll> () { return 0x16B9D20; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::PS4_AskIfRoomExists > () { return 0x16B9650; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::PS4_ReplyWithMyRoom> () { return 0x267200; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::SendRpc> () { return 0x16B9CC0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::StartRpc> () { return 0x16BA040; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::MPOMKAADCEL> () { return 0x16B75F0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::BMNFFPJDMDL> () { return 0x16B50B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::Spawn> () { return 0x16B9E10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::ABEDLPOLJND> () { return 0x16B4C40; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::Despawn> () { return 0x16B55C0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OOEHOCHBMDH> () { return 0x16B9300; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::RemoveNetObject> () { return 0x16B9750; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::RemoveUnownedObjects> () { return 0x16B97F0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::NBFPMLMKPOA> () { return 0x16B8FA0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::FPKMONGHLIC> () { return 0x16B5B40; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::EDNLCLCPMHN> () { return 0x16B59B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::SetEndpoint> () { return 0x16B9DF0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_AmConnected> () { return 0xADDD00; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_Ping> () { return 0x16BA8C0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_BytesSent> () { return 0x16BA870; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_BytesGot> () { return 0x16BA840; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_Resends> () { return 0x16BA8F0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_AmHost> () { return 0x16BA820; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_AmClient> () { return 0x16BA810; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_IsGamePublic> () { return 0xDAFC10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::LOOFEFHAKOF> () { return 0x47BFA0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_IsGameStarted> () { return 0x16BA8B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::get_IsGameOver> () { return 0x16BA8A0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::Start> () { return 0x16BA0A0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OPNOBIONPDF> () { return 0x16B93B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::GetHost> () { return 0x16B62F0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::GetClientIdFromCharacter> () { return 0x16B5FD0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OnDestroy> () { return 0x16B9630; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CoConnect> () { return 0x16B5290; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::DDGADCBDGEJ> () { return 0x16B5340; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::IKDIIKGOEKN> () { return 0x16B6AF0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::Connect> () { return 0x16B52E0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::HJCMLFJOIHD> () { return 0x16B64C0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::WaitForConnectionOrFail> () { return 0x16BA5D0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OACCMCMIHDF> () { return 0x16B90B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::Update> () { return 0x16BA140; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::MBPHKHFHOFF> () { return 0x16B7020; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::HandleDisconnect> () { return 0x16B6940; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OAKEFMHJNKH> () { return 0x16B9120; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::HOJJOCONAMJ> () { return 0x16B6520; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::HostGame> () { return 0x16B69C0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::ReportPlayer> () { return 0x16B9B10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::JoinGame> () { return 0x16B6C60; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CanBan> () { return 0x16B5190; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CanKick> () { return 0x16B51B0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::KickPlayer> () { return 0x16B6F70; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::StartEndGame> () { return 0x16B9EF0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::FinishEndGame> () { return 0x16B5BA0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::GAOECJJIDAL> () { return 0x16B5F10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::DFCGPHAOPHI> () { return 0x16B5490; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OFMEGDEDGOK> () { return 0x16B9270; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::RequestGameList> () { return 0x16B9BD0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::ChangeGamePublic> () { return 0x16B51D0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::EBAFICDANFE> () { return 0x16B56C0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::NAKNMDEBPAB> () { return 0x16B76E0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::AddressToString> () { return 0x16B4DD0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::MMPOMGAMAFM> () { return 0x16B7420; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::GetClient> () { return 0x16B6190; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::EDAFNBKAAMC> () { return 0x16B5770; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OnApplicationPause> () { return 0x16B9520; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CLDOHKOGLOO> () { return 0x16B5110; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::MMIABEJADOF> () { return 0x16B71E0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::ENBMACAGLNK> () { return 0x16B5A10; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::ctor> () { return 0x16BA680; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::cctor> () { return 0x16BA620; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::BGEGKALKAJI> () { return 0x16B4FB0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::OEGKCLOCODA> () { return 0x16B5180; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::DOBPHKLDFNF> () { return 0x6361E0; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CLKEEBGICHB> () { return 0x16B5180; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::KEJDDODCCNM> () { return 0x16B6F00; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::AIFCBGADBOP> () { return 0x7F8E40; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::HCDAJFAPGPH> () { return 0x16B6450; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::CKJOIPIMDDG> () { return 0x7F8E40; }
    template<> inline uintptr_t rva<&InnerNet::InnerNetClient::DHFLOBOCLDP> () { return 0x16B5590; }
} // ark::method_info
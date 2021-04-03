#include <au/InnerNet/InnerNetClient.hpp>

namespace InnerNet {

    // Methods

    void InnerNetClient::FixedUpdate() { return method_call(FixedUpdate); }  // 0x16B5C20 // 
    // T InnerNetClient::FindObjectByNetId(unsigned int KEIIIAKDKLC) { return method_call(FindObjectByNetId, KEIIIAKDKLC); }  // 0x0 // 
    Hazel::MessageWriter* InnerNetClient::StartRpcImmediately(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP, int LJIPNMCIBPN) { return method_call(StartRpcImmediately, BGNMAPHKNDC, GIICFHKILOB, BAGOJEGCEDP, LJIPNMCIBPN); }  // 0x16B9F70 // 
    void InnerNetClient::FinishRpcImmediately(Hazel::MessageWriter* FIHNEEPAGBA) { return method_call(FinishRpcImmediately, FIHNEEPAGBA); }  // 0x16B5BE0 // 
    void InnerNetClient::SendSelfClientInfoToAll() { return method_call(SendSelfClientInfoToAll); }  // 0x16B9D20 // 
    void InnerNetClient::PS4_AskIfRoomExists() { return method_call(PS4_AskIfRoomExists); }  // 0x16B9650 // 
    void InnerNetClient::PS4_ReplyWithMyRoom() { return method_call(PS4_ReplyWithMyRoom); }  // 0x267200 // 
    void InnerNetClient::SendRpc(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP) { return method_call(SendRpc, BGNMAPHKNDC, GIICFHKILOB, BAGOJEGCEDP); }  // 0x16B9CC0 // 
    Hazel::MessageWriter* InnerNetClient::StartRpc(unsigned int BGNMAPHKNDC, uint8_t GIICFHKILOB, Hazel::SendOption BAGOJEGCEDP) { return method_call(StartRpc, BGNMAPHKNDC, GIICFHKILOB, BAGOJEGCEDP); }  // 0x16BA040 // 
    void InnerNetClient::MPOMKAADCEL(cs::string* ELKOMGKNMED) { return method_call(MPOMKAADCEL, ELKOMGKNMED); }  // 0x16B75F0 // 
    System::Collections::IEnumerator* InnerNetClient::BMNFFPJDMDL(cs::string* ELKOMGKNMED) { return method_call(BMNFFPJDMDL, ELKOMGKNMED); }  // 0x16B50B0 // 
    void InnerNetClient::Spawn(InnerNet::InnerNetObject* LCIEFAJIACD, int DIGMPFBKDGM, ClientType GLBNKFAHMHI) { return method_call(Spawn, LCIEFAJIACD, DIGMPFBKDGM, GLBNKFAHMHI); }  // 0x16B9E10 // 
    void InnerNetClient::ABEDLPOLJND(InnerNet::InnerNetObject* LCIEFAJIACD, int DIGMPFBKDGM, ClientType GLBNKFAHMHI, Hazel::MessageWriter* FIHNEEPAGBA) { return method_call(ABEDLPOLJND, LCIEFAJIACD, DIGMPFBKDGM, GLBNKFAHMHI, FIHNEEPAGBA); }  // 0x16B4C40 // 
    void InnerNetClient::Despawn(InnerNet::InnerNetObject* NBDPPECAPLA) { return method_call(Despawn, NBDPPECAPLA); }  // 0x16B55C0 // 
    bool InnerNetClient::OOEHOCHBMDH(InnerNet::InnerNetObject* HHIOOCFOLOC) { return method_call(OOEHOCHBMDH, HHIOOCFOLOC); }  // 0x16B9300 // 
    void InnerNetClient::RemoveNetObject(InnerNet::InnerNetObject* HHIOOCFOLOC) { return method_call(RemoveNetObject, HHIOOCFOLOC); }  // 0x16B9750 // 
    void InnerNetClient::RemoveUnownedObjects() { return method_call(RemoveUnownedObjects); }  // 0x16B97F0 // 
    void InnerNetClient::NBFPMLMKPOA(Hazel::MessageReader* OFJAFNPHNKK) { return method_call(NBFPMLMKPOA, OFJAFNPHNKK); }  // 0x16B8FA0 // 
    System::Collections::IEnumerator* InnerNetClient::FPKMONGHLIC(Hazel::MessageReader* DOOILGKLBBF, int NPCLLOEBHOB) { return method_call(FPKMONGHLIC, DOOILGKLBBF, NPCLLOEBHOB); }  // 0x16B5B40 // 
    System::Collections::IEnumerator* InnerNetClient::EDNLCLCPMHN(Hazel::MessageReader* DOOILGKLBBF) { return method_call(EDNLCLCPMHN, DOOILGKLBBF); }  // 0x16B59B0 // 
    void InnerNetClient::SetEndpoint(cs::string* APJHAOFKJFC, uint16_t BMODKMCACMM) { return method_call(SetEndpoint, APJHAOFKJFC, BMODKMCACMM); }  // 0x16B9DF0 // 
    bool InnerNetClient::get_AmConnected() { return method_call(get_AmConnected); }  // 0xADDD00 // 
    int InnerNetClient::get_Ping() { return method_call(get_Ping); }  // 0x16BA8C0 // 
    int InnerNetClient::get_BytesSent() { return method_call(get_BytesSent); }  // 0x16BA870 // 
    int InnerNetClient::get_BytesGot() { return method_call(get_BytesGot); }  // 0x16BA840 // 
    int InnerNetClient::get_Resends() { return method_call(get_Resends); }  // 0x16BA8F0 // 
    bool InnerNetClient::get_AmHost() { return method_call(get_AmHost); }  // 0x16BA820 // 
    bool InnerNetClient::get_AmClient() { return method_call(get_AmClient); }  // 0x16BA810 // 
    bool InnerNetClient::get_IsGamePublic() { return method_call(get_IsGamePublic); }  // 0xDAFC10 // 
    void InnerNetClient::LOOFEFHAKOF(bool IKGGJMHPDGH) { return method_call(LOOFEFHAKOF, IKGGJMHPDGH); }  // 0x47BFA0 // 
    bool InnerNetClient::get_IsGameStarted() { return method_call(get_IsGameStarted); }  // 0x16BA8B0 // 
    bool InnerNetClient::get_IsGameOver() { return method_call(get_IsGameOver); }  // 0x16BA8A0 // 
    void InnerNetClient::Start() { return method_call(Start); }  // 0x16BA0A0 // 
    void InnerNetClient::OPNOBIONPDF(Hazel::MessageWriter* FIHNEEPAGBA) { return method_call(OPNOBIONPDF, FIHNEEPAGBA); }  // 0x16B93B0 // 
    InnerNet::ClientData* InnerNetClient::GetHost() { return method_call(GetHost); }  // 0x16B62F0 // 
    int InnerNetClient::GetClientIdFromCharacter(InnerNet::InnerNetObject* OHABAMMFCPN) { return method_call(GetClientIdFromCharacter, OHABAMMFCPN); }  // 0x16B5FD0 // 
    void InnerNetClient::OnDestroy() { return method_call(OnDestroy); }  // 0x16B9630 // 
    System::Collections::IEnumerator* InnerNetClient::CoConnect() { return method_call(CoConnect); }  // 0x16B5290 // 
    void InnerNetClient::DDGADCBDGEJ(cs::array<uint8_t>* MPKDKNHMDCA) { return method_call(DDGADCBDGEJ, MPKDKNHMDCA); }  // 0x16B5340 // 
    void InnerNetClient::IKDIIKGOEKN(cs::array<uint8_t>* MPKDKNHMDCA, int GLKAFNGNBOO) { return method_call(IKDIIKGOEKN, MPKDKNHMDCA, GLKAFNGNBOO); }  // 0x16B6AF0 // 
    void InnerNetClient::Connect(ConnectionMode BAPGNLCHIJK) { return method_call(Connect, BAPGNLCHIJK); }  // 0x16B52E0 //
    System::Collections::IEnumerator* InnerNetClient::HJCMLFJOIHD(ConnectionMode BAPGNLCHIJK) { return method_call(HJCMLFJOIHD, BAPGNLCHIJK); }  // 0x16B64C0 //
    System::Collections::IEnumerator* InnerNetClient::WaitForConnectionOrFail() { return method_call(WaitForConnectionOrFail); }  // 0x16BA5D0 // 
    System::Collections::IEnumerator* InnerNetClient::OACCMCMIHDF(System::Func<bool>* ODKFKDMCGOK, cs::string* BGDABAAMHIO, int CGMGODCILHJ) { return method_call(OACCMCMIHDF, ODKFKDMCGOK, BGDABAAMHIO, CGMGODCILHJ); }  // 0x16B90B0 // 
    void InnerNetClient::Update() { return method_call(Update); }  // 0x16BA140 // 
    void InnerNetClient::MBPHKHFHOFF(InnerNetClient* BAJEGFLOPNH, Hazel::DisconnectedEventArgs* LKFKDOPBHJF) { return method_call(MBPHKHFHOFF, BAJEGFLOPNH, LKFKDOPBHJF); }  // 0x16B7020 // 
    void InnerNetClient::HandleDisconnect(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII) { return method_call(HandleDisconnect, HKOLMCHJICI, PPONDKHKCII); }  // 0x16B6940 // 
    void InnerNetClient::OAKEFMHJNKH(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII) { return method_call(OAKEFMHJNKH, HKOLMCHJICI, PPONDKHKCII); }  // 0x16B9120 // 
    void InnerNetClient::HOJJOCONAMJ(MessageStatus HKOLMCHJICI, cs::string* PPONDKHKCII) { return method_call(HOJJOCONAMJ, HKOLMCHJICI, PPONDKHKCII); }  // 0x16B6520 // 
    void InnerNetClient::HostGame(IGDMNKLDEPI* DFBAIPDAMJN) { return method_call(HostGame, DFBAIPDAMJN); }  // 0x16B69C0 // 
    void InnerNetClient::ReportPlayer(int FCGFEOGMCBJ, BanReason HKOLMCHJICI) { return method_call(ReportPlayer, FCGFEOGMCBJ, HKOLMCHJICI); }  // 0x16B9B10 //
    void InnerNetClient::JoinGame() { return method_call(JoinGame); }  // 0x16B6C60 // 
    bool InnerNetClient::CanBan() { return method_call(CanBan); }  // 0x16B5190 // 
    bool InnerNetClient::CanKick() { return method_call(CanKick); }  // 0x16B51B0 // 
    void InnerNetClient::KickPlayer(int FCGFEOGMCBJ, bool KCFMDNHBKPK) { return method_call(KickPlayer, FCGFEOGMCBJ, KCFMDNHBKPK); }  // 0x16B6F70 // 
    Hazel::MessageWriter* InnerNetClient::StartEndGame() { return method_call(StartEndGame); }  // 0x16B9EF0 // 
    void InnerNetClient::FinishEndGame(Hazel::MessageWriter* FIHNEEPAGBA) { return method_call(FinishEndGame, FIHNEEPAGBA); }  // 0x16B5BA0 // 
    void InnerNetClient::GAOECJJIDAL(int IPAJLIHDLEG, MessageStatus HKOLMCHJICI) { return method_call(GAOECJJIDAL, IPAJLIHDLEG, HKOLMCHJICI); }  // 0x16B5F10 // 
    void InnerNetClient::DFCGPHAOPHI() { return method_call(DFCGPHAOPHI); }  // 0x16B5490 // 
    void InnerNetClient::OFMEGDEDGOK() { return method_call(OFMEGDEDGOK); }  // 0x16B9270 // 
    void InnerNetClient::RequestGameList(bool LLOKMJILIOH, IGDMNKLDEPI* DFBAIPDAMJN) { return method_call(RequestGameList, LLOKMJILIOH, DFBAIPDAMJN); }  // 0x16B9BD0 // 
    void InnerNetClient::ChangeGamePublic(bool JJPKJIFLLCO) { return method_call(ChangeGamePublic, JJPKJIFLLCO); }  // 0x16B51D0 // 
    void InnerNetClient::EBAFICDANFE(Hazel::DataReceivedEventArgs LKFKDOPBHJF) { return method_call(EBAFICDANFE, LKFKDOPBHJF); }  // 0x16B56C0 // 
    void InnerNetClient::NAKNMDEBPAB(Hazel::MessageReader* DOOILGKLBBF, Hazel::SendOption HMKAEOCLHJB) { return method_call(NAKNMDEBPAB, DOOILGKLBBF, HMKAEOCLHJB); }  // 0x16B76E0 // 
    cs::string* InnerNetClient::AddressToString(unsigned int GHDMNKBBNIC) { return method_call(AddressToString, GHDMNKBBNIC); }  // 0x16B4DD0 // 
    InnerNet::ClientData* InnerNetClient::MMPOMGAMAFM(int FCGFEOGMCBJ) { return method_call(MMPOMGAMAFM, FCGFEOGMCBJ); }  // 0x16B7420 // 
    InnerNet::ClientData* InnerNetClient::GetClient(int FCGFEOGMCBJ) { return method_call(GetClient, FCGFEOGMCBJ); }  // 0x16B6190 // 
    void InnerNetClient::EDAFNBKAAMC(int MIHLABCMNFB, MessageStatus HKOLMCHJICI) { return method_call(EDAFNBKAAMC, MIHLABCMNFB, HKOLMCHJICI); }  // 0x16B5770 // 
    void InnerNetClient::OnApplicationPause(bool NANMFNIODCN) { return method_call(OnApplicationPause, NANMFNIODCN); }  // 0x16B9520 // 
    void InnerNetClient::CLDOHKOGLOO(InnerNetClient* MJMOOPLLNPO) { return method_call(CLDOHKOGLOO, MJMOOPLLNPO); }  // 0x16B5110 // 
    void InnerNetClient::MMIABEJADOF(int FCGFEOGMCBJ) { return method_call(MMIABEJADOF, FCGFEOGMCBJ); }  // 0x16B71E0 // 



    InnerNet::ClientData* InnerNetClient::ENBMACAGLNK(int MKFNKGIBBHP) { return method_call(ENBMACAGLNK, MKFNKGIBBHP); }  // 0x16B5A10 // 
    void InnerNetClient::ctor() { return method_call(ctor); }  // 0x16BA680 // 
    void InnerNetClient::cctor() { return method_call(cctor); }  // 0x16BA620 // 
    void InnerNetClient::BGEGKALKAJI(UnityEngine::SceneManagement::Scene KJFAFHFPDCF, UnityEngine::SceneManagement::Scene AGBFGMLELNI) { return method_call(BGEGKALKAJI, KJFAFHFPDCF, AGBFGMLELNI); }  // 0x16B4FB0 // 
    bool InnerNetClient::OEGKCLOCODA() { return method_call(OEGKCLOCODA); }  // 0x16B5180 // 
    bool InnerNetClient::DOBPHKLDFNF() { return method_call(DOBPHKLDFNF); }  // 0x6361E0 // 
    bool InnerNetClient::CLKEEBGICHB() { return method_call(CLKEEBGICHB); }  // 0x16B5180 // 
    void InnerNetClient::KEJDDODCCNM() { return method_call(KEJDDODCCNM); }  // 0x16B6F00 // 
    void InnerNetClient::AIFCBGADBOP() { return method_call(AIFCBGADBOP); }  // 0x7F8E40 // 
    void InnerNetClient::HCDAJFAPGPH() { return method_call(HCDAJFAPGPH); }  // 0x16B6450 // 
    void InnerNetClient::CKJOIPIMDDG() { return method_call(CKJOIPIMDDG); }  // 0x7F8E40 // 
    void InnerNetClient::DHFLOBOCLDP() { return method_call(DHFLOBOCLDP); }  // 0x16B5590 // 

};


cs::array<MessageStatus>* InnerNet::InnerNetClient::MOBIEHGMIIC() { return statics()->MOBIEHGMIIC; }
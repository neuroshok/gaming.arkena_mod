#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>

namespace InnerNet {

// InnerNetClient in 2020.12.9s
struct InnerNetClient : ark::meta<InnerNetClient, Unity::MonoBehaviour> {
    ark_meta("", "KHNHJFFECBP", "");

    // InnerNetClient.KGEKNMMAKKN in 2020.12.9s
    enum class GameStates : std::int32_t {
        NotJoined = 0, // [marker]
        Joined = 1,
        Started = 2,
        Ended = 3,
    };

    float MinSendInterval; // [marker]
    std::uint32_t NetIdCnt;
    float timer;
    struct InnerNet_InnerNetObject_array* SpawnableObjects;
    bool InOnlineScene;
    struct System_Collections_Generic_HashSet_uint__o* DestroyedObjects;
    struct System_Collections_Generic_List_InnerNetObject__o* allObjects;
    struct System_Collections_Generic_Dictionary_uint__InnerNetObject__o* allObjectsFast;
    struct Hazel_MessageWriter_array* Streams;
    struct System_String_o* networkAddress;
    std::int32_t networkPort;
    struct Hazel_Udp_UnityUdpClientConnection_o* connection;
    std::int32_t mode;
    std::int32_t GameId;
    std::int32_t HostId;
    std::int32_t ClientId;
    struct System_Collections_Generic_List_ClientData__o* allClients;
    std::int32_t LastDisconnectReason;
    struct System_String_o* LastCustomDisconnect;
    struct System_Collections_Generic_List_Action__o* PreSpawnDispatcher;
    struct System_Collections_Generic_List_Action__o* Dispatcher;
    bool _IsGamePublic_k__BackingField;
    GameStates GameState;
    struct System_Collections_Generic_List_Action__o *TempQueue;
    bool appPaused;


void FixedUpdate() { return method_call(FixedUpdate, ); } // 0xCF3310
	// RVA: -1 Offset: -1	struct T* FindObjectByNetId<T>(std::uint32_t FJEJGMHNLDD) { return method_call(FindObjectByNetId<T>, FJEJGMHNLDD); } // 0xCF3310
	/* GenericInstMethod :
	|
	|-RVA: 0x241050 Offset: 0x23F850 VA: 0x10241050
	*/
	void SendRpcImmediately(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, struct SendOption* ACCPPOGBCHA) { return method_call(SendRpcImmediately, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF5F40
	MessageWriter* StartRpcImmediately(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, struct SendOption* ACCPPOGBCHA, std::int32_t DBKDPNAODFH = -1) { return method_call(StartRpcImmediately, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA, DBKDPNAODFH); } // 0xCF61C0
	void FinishRpcImmediately(MessageWriter* HOGCHJCFDFO) { return method_call(FinishRpcImmediately, HOGCHJCFDFO); } // 0xCF32D0
	//void SendRpc(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, struct SendOption* ACCPPOGBCHA = 1) { return method_call(SendRpc, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF6010
	//MessageWriter* StartRpc(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, struct SendOption* ACCPPOGBCHA = 1) { return method_call(StartRpc, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF6290
	void EJPNADKABHD(cs::string* ONJOPMMPHEF) { return method_call(EJPNADKABHD, ONJOPMMPHEF); } // 0xCF2D50
	struct IEnumerator* JCFDHINLMDK(cs::string* ONJOPMMPHEF) { return method_call(JCFDHINLMDK, ONJOPMMPHEF); } // 0xCF3F10
	void Spawn(struct NJAHILONGKN* ELJOFHKOOIN, std::int32_t INIALGICMPP = -2, struct IDDHILANHLG* AENFDLALMMG = 0) { return method_call(Spawn, ELJOFHKOOIN, INIALGICMPP, AENFDLALMMG); } // 0xCF6090
	void ANGLABNJGOD(struct NJAHILONGKN* ELJOFHKOOIN, std::int32_t INIALGICMPP, struct IDDHILANHLG* AENFDLALMMG, MessageWriter* HOGCHJCFDFO) { return method_call(ANGLABNJGOD, ELJOFHKOOIN, INIALGICMPP, AENFDLALMMG, HOGCHJCFDFO); } // 0xCF0B10
	void Despawn(struct NJAHILONGKN* AANKPCAIONC) { return method_call(Despawn, AANKPCAIONC); } // 0xCF2C80
	bool DBGLMJPFANF(struct NJAHILONGKN* ABKMBGEIPKL) { return method_call(DBGLMJPFANF, ABKMBGEIPKL); } // 0xCF2BE0
	void RemoveNetObject(struct NJAHILONGKN* ABKMBGEIPKL) { return method_call(RemoveNetObject, ABKMBGEIPKL); } // 0xCF5AC0
	void RemoveUnownedObjects() { return method_call(RemoveUnownedObjects, ); } // 0xCF5B50
	void OHOPANBHGGP(struct MessageReader* AHEDNGCMJFF, std::int32_t PFDMDIMFBFI = 0) { return method_call(OHOPANBHGGP, AHEDNGCMJFF, PFDMDIMFBFI); } // 0xCF5510
	void LMFMFBMONOO(struct MessageReader* ALMCIJKELCP, std::int32_t PFDMDIMFBFI) { return method_call(LMFMFBMONOO, ALMCIJKELCP, PFDMDIMFBFI); } // 0xCF4240
	void MDJALECPFEH(std::int32_t PFDMDIMFBFI, struct MessageReader* ALMCIJKELCP, cs::string* PDJFFNFFDBC) { return method_call(MDJALECPFEH, PFDMDIMFBFI, ALMCIJKELCP, PDJFFNFFDBC); } // 0xCF4E70
	void SetEndpoint(cs::string* PEMEGPOGMDD, std::uint16_t JGJNMHAIKMB) { return method_call(SetEndpoint, PEMEGPOGMDD, JGJNMHAIKMB); } // 0xCF6070
	bool LIHJLOJIACK() { return method_call(LIHJLOJIACK, ); } // 0xCF4230
	std::int32_t get_Ping() { return method_call(get_Ping, ); } // 0xCF6A10
	std::int32_t get_BytesSent() { return method_call(get_BytesSent, ); } // 0xCF69C0
	std::int32_t get_BytesGot() { return method_call(get_BytesGot, ); } // 0xCF6990
	std::int32_t get_Resends() { return method_call(get_Resends, ); } // 0xCF6A40
	bool get_AmHost() { return method_call(get_AmHost, ); } // 0xCF6970
	bool get_AmClient() { return method_call(get_AmClient, ); } // 0xCF6960
	bool get_IsGamePublic() { return method_call(get_IsGamePublic, ); } // 0x265140
	void GIOFDCNIPJH(bool HIJOHCLAKMG) { return method_call(GIOFDCNIPJH, HIJOHCLAKMG); } // 0x2652F0
	bool get_IsGameStarted() { return method_call(get_IsGameStarted, ); } // 0xCF6A00
	bool get_IsGameOver() { return method_call(get_IsGameOver, ); } // 0xCF69F0
	// virtual // void Start() { return method_call(Start, ); } // 0xCF62F0 // Slot: 4
	void NMLCCIJBKOJ(MessageWriter* HOGCHJCFDFO) { return method_call(NMLCCIJBKOJ, HOGCHJCFDFO); } // 0xCF53B0
	struct ClientData* GetHost() { return method_call(GetHost, ); } // 0xCF3A20
	std::int32_t GetClientIdFromCharacter(struct NJAHILONGKN* ALHCAFBCKPH) { return method_call(GetClientIdFromCharacter, ALHCAFBCKPH); } // 0xCF3840
	// virtual // void OnDestroy() { return method_call(OnDestroy, ); } // 0xCF5910 // Slot: 5
	struct IEnumerator* CoConnect() { return method_call(CoConnect, ); } // 0xCF2AA0
	void OJKOCAGLAAC(std::int8_t* NJJBJMCBDCJ) { return method_call(OJKOCAGLAAC, NJJBJMCBDCJ); } // 0xCF5710
	void OIBNNHLMFEG(std::int8_t* NJJBJMCBDCJ, std::int32_t LENMPPHLMOF) { return method_call(OIBNNHLMFEG, NJJBJMCBDCJ, LENMPPHLMOF); } // 0xCF55F0
	void Connect(struct GPCADAELKBA* NCMHPMFCNFA) { return method_call(Connect, NCMHPMFCNFA); } // 0xCF2AF0
	void Update() { return method_call(Update, ); } // 0xCF6360
	void PNNKOGIPHBA(struct object* JAMOJLPPGEH, struct DisconnectedEventArgs* MGJNFEHIICO) { return method_call(PNNKOGIPHBA, JAMOJLPPGEH, MGJNFEHIICO); } // 0xCF5930
	void HandleDisconnect(struct GHMBCKNECJF* OECOPGMHMKC, cs::string* NIHDHDJJIOK) { return method_call(HandleDisconnect, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF3DF0
	void GJDEPEPMEGI(struct GHMBCKNECJF* OECOPGMHMKC, cs::string* NIHDHDJJIOK) { return method_call(GJDEPEPMEGI, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF36E0
	void AMKMODDAFOO(struct GHMBCKNECJF* OECOPGMHMKC, cs::string* NIHDHDJJIOK) { return method_call(AMKMODDAFOO, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF0720
	void HostGame(struct EKABJOOFLML* JPEEBIPCGCO) { return method_call(HostGame, JPEEBIPCGCO); } // 0xCF3E30
	void JoinGame() { return method_call(JoinGame, ); } // 0xCF3F70
	bool CanBan() { return method_call(CanBan, ); } // 0xCF29A0
	bool CanKick() { return method_call(CanKick, ); } // 0xCF29C0
	void KickPlayer(std::int32_t GKLCLMNGEHC, bool BLJAPOPFHEI) { return method_call(KickPlayer, GKLCLMNGEHC, BLJAPOPFHEI); } // 0xCF4100
	MessageWriter* StartEndGame() { return method_call(StartEndGame, ); } // 0xCF6140
	void FinishEndGame(MessageWriter* HOGCHJCFDFO) { return method_call(FinishEndGame, HOGCHJCFDFO); } // 0xCF3290
	void GFFCNEJAOFO(std::int32_t ADBBCEEHNIH, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(GFFCNEJAOFO, ADBBCEEHNIH, OECOPGMHMKC); } // 0xCF3630
	void MGJKDBFKHDD() { return method_call(MGJKDBFKHDD, ); } // 0xCF5080
	void DBFLAJLNBBN() { return method_call(DBFLAJLNBBN, ); } // 0xCF2B50
	void RequestGameList(bool LIHLFPLIJBB, struct EKABJOOFLML* JPEEBIPCGCO) { return method_call(RequestGameList, LIHLFPLIJBB, JPEEBIPCGCO); } // 0xCF5E90
	void ChangeGamePublic(bool JKJKFOOKPCD) { return method_call(ChangeGamePublic, JKJKFOOKPCD); } // 0xCF29E0
	void CKOCCBEAHHH(struct DataReceivedEventArgs* MGJNFEHIICO) { return method_call(CKOCCBEAHHH, MGJNFEHIICO); } // 0xCF0ED0
	void CNCLKHELHLI(struct MessageReader* ALMCIJKELCP, struct SendOption* GLLMNHCBIOC) { return method_call(CNCLKHELHLI, ALMCIJKELCP, GLLMNHCBIOC); } // 0xCF10A0
	cs::string* AddressToString(std::uint32_t NECADMOIIPC) { return method_call(AddressToString, NECADMOIIPC); } // 0xCF0C90
	struct ClientData* NCJFIOLJALM(std::int32_t GKLCLMNGEHC) { return method_call(NCJFIOLJALM, GKLCLMNGEHC); } // 0xCF5200
	void FFNOBLLHAAI(std::int32_t ONHIPGAPODC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(FFNOBLLHAAI, ONHIPGAPODC, OECOPGMHMKC); } // 0xCF2E30
	// virtual // void OnApplicationPause(bool OAAGHGHDOKP) { return method_call(OnApplicationPause, OAAGHGHDOKP); } // 0xCF5820 // Slot: 6
	void LGENDNJEJEP(struct object* DCCFKHIPIOF) { return method_call(LGENDNJEJEP, DCCFKHIPIOF); } // 0xCF41C0
	void HOAEOAPDMDD(std::int32_t GKLCLMNGEHC) { return method_call(HOAEOAPDMDD, GKLCLMNGEHC); } // 0xCF3BA0

	struct ClientData* FHOPGBFNLJN(std::int32_t HKOIECMDOKL) { return method_call(FHOPGBFNLJN, HKOIECMDOKL); } // 0xCF30D0
	void _ctor() { return method_call(_ctor, ); } // 0xCF6840
	void _cctor() { return method_call(_cctor, ); } // 0xCF67F0
	void CLNLDJNCCFP(struct Scene* JLLCCMLIPCD, struct Scene* NDIDGHDKEHF) { return method_call(CLNLDJNCCFP, JLLCCMLIPCD, NDIDGHDKEHF); } // 0xCF0FB0
	bool BAOCOJMNKNH() { return method_call(BAOCOJMNKNH, ); } // 0xCF0E50
	bool NMGMLLCNFCC() { return method_call(NMGMLLCNFCC, ); } // 0x6F1490
	bool GLMMAJAKCBN() { return method_call(GLMMAJAKCBN, ); } // 0xCF0E50
	void CJGEOPBJBDF() { return method_call(CJGEOPBJBDF, ); } // 0xCF0E60
	void OGNLKBHNCBH() { return method_call(OGNLKBHNCBH, ); } // 0x1F9DC0
	void MJKKECFCCON() { return method_call(MJKKECFCCON, ); } // 0xCF5190
	void GCLEDNOMEMF() { return method_call(GCLEDNOMEMF, ); } // 0x1F9DC0
	void KDMJIFJLNOI() { return method_call(KDMJIFJLNOI, ); } // 0x1F8400
};

} // namespace InnerNet

namespace ark::method_info
{

	//method_rva(InnerNet::InnerNetClient::FixedUpdate, 0xCF3310)
	//method_rva(InnerNet::InnerNetClient::FindObjectByNetId<T>, 0xCF3310)
	//method_rva(InnerNet::InnerNetClient::SendRpcImmediately, 0xCF5F40)
	//method_rva(InnerNet::InnerNetClient::StartRpcImmediately, 0xCF61C0)
	//method_rva(InnerNet::InnerNetClient::FinishRpcImmediately, 0xCF32D0)
	//method_rva(InnerNet::InnerNetClient::SendRpc, 0xCF6010)
	//method_rva(InnerNet::InnerNetClient::StartRpc, 0xCF6290)
	//method_rva(InnerNet::InnerNetClient::EJPNADKABHD, 0xCF2D50)
	//method_rva(InnerNet::InnerNetClient::JCFDHINLMDK, 0xCF3F10)
	method_rva(InnerNet::InnerNetClient::Spawn, 0xCF6090)
	method_rva(InnerNet::InnerNetClient::ANGLABNJGOD, 0xCF0B10)
	method_rva(InnerNet::InnerNetClient::Despawn, 0xCF2C80)
	method_rva(InnerNet::InnerNetClient::DBGLMJPFANF, 0xCF2BE0)
	method_rva(InnerNet::InnerNetClient::RemoveNetObject, 0xCF5AC0)
	method_rva(InnerNet::InnerNetClient::RemoveUnownedObjects, 0xCF5B50)
	method_rva(InnerNet::InnerNetClient::OHOPANBHGGP, 0xCF5510)
	method_rva(InnerNet::InnerNetClient::LMFMFBMONOO, 0xCF4240)
	method_rva(InnerNet::InnerNetClient::MDJALECPFEH, 0xCF4E70)
	method_rva(InnerNet::InnerNetClient::SetEndpoint, 0xCF6070)
	method_rva(InnerNet::InnerNetClient::LIHJLOJIACK, 0xCF4230)
	method_rva(InnerNet::InnerNetClient::get_Ping, 0xCF6A10)
	method_rva(InnerNet::InnerNetClient::get_BytesSent, 0xCF69C0)
	method_rva(InnerNet::InnerNetClient::get_BytesGot, 0xCF6990)
	method_rva(InnerNet::InnerNetClient::get_Resends, 0xCF6A40)
	method_rva(InnerNet::InnerNetClient::get_AmHost, 0xCF6970)
	method_rva(InnerNet::InnerNetClient::get_AmClient, 0xCF6960)
	method_rva(InnerNet::InnerNetClient::get_IsGamePublic, 0x265140)
	method_rva(InnerNet::InnerNetClient::GIOFDCNIPJH, 0x2652F0)
	method_rva(InnerNet::InnerNetClient::get_IsGameStarted, 0xCF6A00)
	method_rva(InnerNet::InnerNetClient::get_IsGameOver, 0xCF69F0)
	// method_rva(InnerNet::InnerNetClient::Start, 0xCF62F0)
	method_rva(InnerNet::InnerNetClient::NMLCCIJBKOJ, 0xCF53B0)
	method_rva(InnerNet::InnerNetClient::GetHost, 0xCF3A20)
	method_rva(InnerNet::InnerNetClient::GetClientIdFromCharacter, 0xCF3840)
	// method_rva(InnerNet::InnerNetClient::OnDestroy, 0xCF5910)
	method_rva(InnerNet::InnerNetClient::CoConnect, 0xCF2AA0)
	method_rva(InnerNet::InnerNetClient::OJKOCAGLAAC, 0xCF5710)
	method_rva(InnerNet::InnerNetClient::OIBNNHLMFEG, 0xCF55F0)
	method_rva(InnerNet::InnerNetClient::Connect, 0xCF2AF0)

	method_rva(InnerNet::InnerNetClient::Update, 0xCF6360)
	method_rva(InnerNet::InnerNetClient::PNNKOGIPHBA, 0xCF5930)
	method_rva(InnerNet::InnerNetClient::HandleDisconnect, 0xCF3DF0)
	method_rva(InnerNet::InnerNetClient::GJDEPEPMEGI, 0xCF36E0)
	method_rva(InnerNet::InnerNetClient::AMKMODDAFOO, 0xCF0720)
	method_rva(InnerNet::InnerNetClient::HostGame, 0xCF3E30)
	method_rva(InnerNet::InnerNetClient::JoinGame, 0xCF3F70)
	method_rva(InnerNet::InnerNetClient::CanBan, 0xCF29A0)
	method_rva(InnerNet::InnerNetClient::CanKick, 0xCF29C0)
	method_rva(InnerNet::InnerNetClient::KickPlayer, 0xCF4100)
	method_rva(InnerNet::InnerNetClient::StartEndGame, 0xCF6140)
	method_rva(InnerNet::InnerNetClient::FinishEndGame, 0xCF3290)
	method_rva(InnerNet::InnerNetClient::GFFCNEJAOFO, 0xCF3630)
	method_rva(InnerNet::InnerNetClient::MGJKDBFKHDD, 0xCF5080)
	method_rva(InnerNet::InnerNetClient::DBFLAJLNBBN, 0xCF2B50)
	method_rva(InnerNet::InnerNetClient::RequestGameList, 0xCF5E90)
	method_rva(InnerNet::InnerNetClient::ChangeGamePublic, 0xCF29E0)
	method_rva(InnerNet::InnerNetClient::CKOCCBEAHHH, 0xCF0ED0)
	method_rva(InnerNet::InnerNetClient::CNCLKHELHLI, 0xCF10A0)
	method_rva(InnerNet::InnerNetClient::AddressToString, 0xCF0C90)
	method_rva(InnerNet::InnerNetClient::NCJFIOLJALM, 0xCF5200)
	method_rva(InnerNet::InnerNetClient::FFNOBLLHAAI, 0xCF2E30)
	// method_rva(InnerNet::InnerNetClient::OnApplicationPause, 0xCF5820)
	method_rva(InnerNet::InnerNetClient::LGENDNJEJEP, 0xCF41C0)
	method_rva(InnerNet::InnerNetClient::HOAEOAPDMDD, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::DBKCBALIBFB, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::MOBACGECFMB, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::LHPAENKNLNO, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::KNCEGCPIBFN, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::JBHBAGLEFHE, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::DCDHCPKMBBC, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::KMNHJIJNAEG, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::PGJNGPIAANB, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::JCEGBHAKDPI, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::JFGDBNFFPLJ, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::FCFMNGIPPBC, 0xCF3BA0)
	// method_rva(InnerNet::InnerNetClient::APHGMDGLCFJ, 0xCF3BA0)
	method_rva(InnerNet::InnerNetClient::FHOPGBFNLJN, 0xCF30D0)
	method_rva(InnerNet::InnerNetClient::_ctor, 0xCF6840)
	method_rva(InnerNet::InnerNetClient::_cctor, 0xCF67F0)
	method_rva(InnerNet::InnerNetClient::CLNLDJNCCFP, 0xCF0FB0)
	method_rva(InnerNet::InnerNetClient::BAOCOJMNKNH, 0xCF0E50)
	method_rva(InnerNet::InnerNetClient::NMGMLLCNFCC, 0x6F1490)
	method_rva(InnerNet::InnerNetClient::GLMMAJAKCBN, 0xCF0E50)
	method_rva(InnerNet::InnerNetClient::CJGEOPBJBDF, 0xCF0E60)
	method_rva(InnerNet::InnerNetClient::OGNLKBHNCBH, 0x1F9DC0)
	method_rva(InnerNet::InnerNetClient::MJKKECFCCON, 0xCF5190)
	method_rva(InnerNet::InnerNetClient::GCLEDNOMEMF, 0x1F9DC0)
	method_rva(InnerNet::InnerNetClient::KDMJIFJLNOI, 0x1F8400)
}

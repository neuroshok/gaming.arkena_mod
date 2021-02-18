#pragma once

#include <ark/class.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/Hazel/MessageWriter.hpp>
#include <autogen/System/Collections/Generic/List.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

// AmongUsClient in 2020.12.9s
struct AmongUsClient : ark::meta<AmongUsClient, InnerNet::InnerNetClient> // TypeDefIndex: 8776
{
	ark_meta("", "FMLLKEACGIO");

    struct internal_statics
    {
        AmongUsClient* instance;
    };

	std::int32_t CurrentClient;
	std::int32_t HostInherit;
	std::int8_t CFEFLNOJOLO;
	std::int8_t GDPAJIBEJPC;
	std::int8_t CPLCKBCFLNI;
	std::int8_t JPLJIDLJLMD;
	std::int8_t ONEHPGPBKBH;
	std::int8_t DBGDHMBOLFP;
	std::int8_t CCMNIGHCFIP;
	float MinSendInterval; // 0xC
	std::uint32_t NKGLFOLJKKE; // 0x10
	float JECMPCICNEB; // 0x14
	struct NJAHILONGKN* SpawnableObjects; // 0x18
	bool NFLNJLJDLLN; // 0x1C
	void* /*struct HashSet<std::uint32_t>**/ FNLAIBNGLAM; // 0x20
	List<struct NJAHILONGKN>* allObjects; // 0x24
	void* /*struct Dictionary<std::uint32_t, NJAHILONGKN>* */ HLNGNNDACBE; // 0x28
	MessageWriter* AAIFNLNOLCD; // 0x2C
	struct GHMBCKNECJF* LLGNDONJOBE; // 0x0
	std::int32_t HJJFFJGJIAH;
	std::int32_t NoClientId;
	struct string* OMCIBILGCMH; // 0x30
	std::int32_t FLMEIAODHGB; // 0x34
	struct UnityUdpClientConnection* CLCOFAMGGHN; // 0x38
	struct GPCADAELKBA* mode; // 0x3C
	std::int32_t GameId; // 0x40
	std::int32_t HostId; // 0x44
	std::int32_t ClientId; // 0x48
	List<struct ClientData>* allClients; // 0x4C
	struct GHMBCKNECJF* LastDisconnectReason; // 0x50
	struct string* LastCustomDisconnect; // 0x54
	List<struct Action>* JCOJNLEPKKF; // 0x58
	List<struct Action>* LNOFPJHFDKK; // 0x5C

	bool k__BackingField; // 0x60
	struct AmongUsClient_KGEKNMMAKKN* GameState; // 0x64
	List<struct Action>* CBDKCPLFEDE; // 0x68
	bool CCEMAPKHBIJ; // 0x6C

	void FixedUpdate() { method_call(FixedUpdate); } // 0xCF3310

	void SendRpcImmediately(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, /*SendOption*/ std::uint8_t ACCPPOGBCHA) { method_call(SendRpcImmediately, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF5F40 
	MessageWriter* StartRpcImmediately(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, /*SendOption*/ std::uint8_t ACCPPOGBCHA = 1, std::int32_t DBKDPNAODFH = -1) { return method_call(StartRpcImmediately, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA, DBKDPNAODFH); } // 0xCF61C0
	void FinishRpcImmediately(MessageWriter* HOGCHJCFDFO) { method_call(FinishRpcImmediately, HOGCHJCFDFO); } // 0xCF32D0
	void SendRpc(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, /*SendOption*/ std::uint8_t ACCPPOGBCHA = 1) { method_call(SendRpc, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF6010 
	MessageWriter* StartRpc(std::uint32_t JLOPKLFIIPJ, std::int8_t HKHMBLJFLMC, /*SendOption*/ std::uint8_t ACCPPOGBCHA = 1) { return method_call(StartRpc, JLOPKLFIIPJ, HKHMBLJFLMC, ACCPPOGBCHA); } // 0xCF6290
	void EJPNADKABHD(struct string* ONJOPMMPHEF) { method_call(EJPNADKABHD, ONJOPMMPHEF); } // 0xCF2D50 
	//IEnumerator JCFDHINLMDK(struct string* ONJOPMMPHEF) { method_call(JCFDHINLMDK, ONJOPMMPHEF); } // 0xCF3F10 
	void Spawn(struct NJAHILONGKN* ELJOFHKOOIN, std::int32_t INIALGICMPP = -2, struct IDDHILANHLG* AENFDLALMMG = nullptr) { method_call(Spawn, ELJOFHKOOIN, INIALGICMPP, AENFDLALMMG); } // 0xCF6090
	void ANGLABNJGOD(struct NJAHILONGKN* ELJOFHKOOIN, std::int32_t INIALGICMPP, struct IDDHILANHLG* AENFDLALMMG, MessageWriter* HOGCHJCFDFO) { method_call(ANGLABNJGOD, ELJOFHKOOIN, INIALGICMPP, AENFDLALMMG, HOGCHJCFDFO); } // 0xCF0B10
	void Despawn(struct NJAHILONGKN* AANKPCAIONC) { method_call(Despawn, AANKPCAIONC); } // 0xCF2C80
	bool DBGLMJPFANF(struct NJAHILONGKN* ABKMBGEIPKL) { method_call(DBGLMJPFANF, ABKMBGEIPKL); } // 0xCF2BE0
	void RemoveNetObject(struct NJAHILONGKN* ABKMBGEIPKL) { method_call(RemoveNetObject, ABKMBGEIPKL); } // 0xCF5AC0
	void RemoveUnownedObjects() { method_call(RemoveUnownedObjects); } // 0xCF5B50
	void OHOPANBHGGP(struct MessageReader* AHEDNGCMJFF, std::int32_t PFDMDIMFBFI = 0) { method_call(OHOPANBHGGP, AHEDNGCMJFF, PFDMDIMFBFI); } // 0xCF5510
	void LMFMFBMONOO(struct MessageReader* ALMCIJKELCP, std::int32_t PFDMDIMFBFI) { method_call(LMFMFBMONOO, ALMCIJKELCP, PFDMDIMFBFI); } // 0xCF4240 
	void MDJALECPFEH(std::int32_t PFDMDIMFBFI, struct MessageReader* ALMCIJKELCP, struct string* PDJFFNFFDBC) { method_call(MDJALECPFEH, PFDMDIMFBFI, ALMCIJKELCP, PDJFFNFFDBC); } // 0xCF4E70 
	void SetEndpoint(struct string* PEMEGPOGMDD, struct ushort* JGJNMHAIKMB) { method_call(SetEndpoint, PEMEGPOGMDD, JGJNMHAIKMB); } // 0xCF6070 
	bool LIHJLOJIACK() { method_call(LIHJLOJIACK); } // 0xCF4230
	int get_Ping() { method_call(get_Ping); } // 0xCF6A10
	int get_BytesSent() { method_call(get_BytesSent); } // 0xCF69C0
	int get_BytesGot() { method_call(get_BytesGot); } // 0xCF6990
	int get_Resends() { method_call(get_Resends); } // 0xCF6A40
	bool get_AmHost() { method_call(get_AmHost); } // 0xCF6970
	bool get_AmClient() { method_call(get_AmClient); } // 0xCF6960
	bool get_IsGamePublic() { method_call(get_IsGamePublic); } // 0x265140
	void GIOFDCNIPJH(bool HIJOHCLAKMG) { method_call(GIOFDCNIPJH, HIJOHCLAKMG); } // 0x2652F0 
	bool get_IsGameStarted() { method_call(get_IsGameStarted); } // 0xCF6A00
	bool get_IsGameOver() { method_call(get_IsGameOver); } // 0xCF69F0
	void Start() { method_call(Start); } // 0xCF62F0
	void NMLCCIJBKOJ(MessageWriter* HOGCHJCFDFO) { method_call(NMLCCIJBKOJ, HOGCHJCFDFO); } // 0xCF53B0
	struct ClientData* GetHost() { method_call(GetHost); } // 0xCF3A20
	int GetClientIdFromCharacter(struct NJAHILONGKN* ALHCAFBCKPH) { method_call(GetClientIdFromCharacter, ALHCAFBCKPH); } // 0xCF3840 
	void OnDestroy() { method_call(OnDestroy); } // 0xCF5910
	//IEnumerator CoConnect() { method_call(CoConnect); } // 0xCF2AA0
	void OJKOCAGLAAC(std::uint8_t* NJJBJMCBDCJ) { method_call(OJKOCAGLAAC, NJJBJMCBDCJ); } // 0xCF5710 
	void OIBNNHLMFEG(std::uint8_t* NJJBJMCBDCJ, std::int32_t LENMPPHLMOF) { method_call(OIBNNHLMFEG, NJJBJMCBDCJ, LENMPPHLMOF); } // 0xCF55F0 
	void Connect(struct GPCADAELKBA* NCMHPMFCNFA) { method_call(Connect, NCMHPMFCNFA); } // 0xCF2AF0 
	//IEnumerator FOJHHGDMKLD(struct GPCADAELKBA* NCMHPMFCNFA) { method_call(FOJHHGDMKLD, NCMHPMFCNFA); } // 0xCF3230 
	//IEnumerator WaitForConnectionOrFail() { method_call(WaitForConnectionOrFail); } // 0xCF67A0
	//IEnumerator LNBDBLHJGKG(struct Func<bool>* AOEEKHMFIAK, struct string* PMGBGLFJHLG, std::int32_t DALANBMCLCN = nullptr5) { method_call(LNBDBLHJGKG, AOEEKHMFIAK, PMGBGLFJHLG, DALANBMCLCN); } // 0xCF4E10 
	void Update() { method_call(Update); } // 0xCF6360
	void PNNKOGIPHBA(struct object* JAMOJLPPGEH, struct DisconnectedEventArgs* MGJNFEHIICO) { method_call(PNNKOGIPHBA, JAMOJLPPGEH, MGJNFEHIICO); } // 0xCF5930 
	void HandleDisconnect(struct GHMBCKNECJF* OECOPGMHMKC, struct string* NIHDHDJJIOK) { method_call(HandleDisconnect, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF3DF0 
	void GJDEPEPMEGI(struct GHMBCKNECJF* OECOPGMHMKC, struct string* NIHDHDJJIOK) { method_call(GJDEPEPMEGI, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF36E0 
	void AMKMODDAFOO(struct GHMBCKNECJF* OECOPGMHMKC, struct string* NIHDHDJJIOK) { method_call(AMKMODDAFOO, OECOPGMHMKC, NIHDHDJJIOK); } // 0xCF0720 
	void HostGame(struct EKABJOOFLML* JPEEBIPCGCO) { method_call(HostGame, JPEEBIPCGCO); } // 0xCF3E30 
	void JoinGame() { method_call(JoinGame); } // 0xCF3F70
	bool CanBan() { method_call(CanBan); } // 0xCF29A0
	bool CanKick() { method_call(CanKick); } // 0xCF29C0
	void KickPlayer(std::int32_t GKLCLMNGEHC, bool BLJAPOPFHEI) { method_call(KickPlayer, GKLCLMNGEHC, BLJAPOPFHEI); } // 0xCF4100 
	MessageWriter* StartEndGame() { method_call(StartEndGame); } // 0xCF6140
	void FinishEndGame(MessageWriter* HOGCHJCFDFO) { method_call(FinishEndGame, HOGCHJCFDFO); } // 0xCF3290
	void GFFCNEJAOFO(std::int32_t ADBBCEEHNIH, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(GFFCNEJAOFO, ADBBCEEHNIH, OECOPGMHMKC); } // 0xCF3630 
	void MGJKDBFKHDD() { method_call(MGJKDBFKHDD); } // 0xCF5080
	void DBFLAJLNBBN() { method_call(DBFLAJLNBBN); } // 0xCF2B50
	void RequestGameList(bool LIHLFPLIJBB, struct EKABJOOFLML* JPEEBIPCGCO) { method_call(RequestGameList, LIHLFPLIJBB, JPEEBIPCGCO); } // 0xCF5E90 
	void ChangeGamePublic(bool JKJKFOOKPCD) { method_call(ChangeGamePublic, JKJKFOOKPCD); } // 0xCF29E0 
	void CKOCCBEAHHH(struct DataReceivedEventArgs* MGJNFEHIICO) { method_call(CKOCCBEAHHH, MGJNFEHIICO); } // 0xCF0ED0 
	void CNCLKHELHLI(struct MessageReader* ALMCIJKELCP, /*SendOption*/ std::uint8_t GLLMNHCBIOC) { method_call(CNCLKHELHLI, ALMCIJKELCP, GLLMNHCBIOC); } // 0xCF10A0 
	struct string* AddressToString(std::uint32_t NECADMOIIPC) { method_call(AddressToString, NECADMOIIPC); } // 0xCF0C90 
	struct ClientData* NCJFIOLJALM(std::int32_t GKLCLMNGEHC) { method_call(NCJFIOLJALM, GKLCLMNGEHC); } // 0xCF5200 
	void FFNOBLLHAAI(std::int32_t ONHIPGAPODC, struct GHMBCKNECJF* OECOPGMHMKC) { method_call(FFNOBLLHAAI, ONHIPGAPODC, OECOPGMHMKC); } // 0xCF2E30 
	void OnApplicationPause(bool OAAGHGHDOKP) { method_call(OnApplicationPause, OAAGHGHDOKP); } // 0xCF5820 
	void LGENDNJEJEP(struct object* DCCFKHIPIOF) { method_call(LGENDNJEJEP, DCCFKHIPIOF); } // 0xCF41C0 
	void HOAEOAPDMDD(std::int32_t GKLCLMNGEHC) { method_call(HOAEOAPDMDD, GKLCLMNGEHC); } // 0xCF3BA0 

	struct ClientData* FHOPGBFNLJN(std::int32_t HKOIECMDOKL) { method_call(FHOPGBFNLJN, HKOIECMDOKL); } // 0xCF30D0 
	void _ctor() { method_call(_ctor); } // 0xCF6840
	void _cctor() { method_call(_cctor); } // 0xCF67F0
	void CLNLDJNCCFP(struct Scene* JLLCCMLIPCD, struct Scene* NDIDGHDKEHF) { method_call(CLNLDJNCCFP, JLLCCMLIPCD, NDIDGHDKEHF); } // 0xCF0FB0 
	bool BAOCOJMNKNH() { method_call(BAOCOJMNKNH); } // 0xCF0E50
	bool NMGMLLCNFCC() { method_call(NMGMLLCNFCC); } // 0x6F1490
	bool GLMMAJAKCBN() { method_call(GLMMAJAKCBN); } // 0xCF0E50
	void CJGEOPBJBDF() { method_call(CJGEOPBJBDF); } // 0xCF0E60
	void OGNLKBHNCBH() { method_call(OGNLKBHNCBH); } // 0x1F9DC0
	void MJKKECFCCON() { method_call(MJKKECFCCON); } // 0xCF5190
	void GCLEDNOMEMF() { method_call(GCLEDNOMEMF); } // 0x1F9DC0
	void KDMJIFJLNOI() { method_call(KDMJIFJLNOI); } // 0x1F8400
};
namespace ark::method_info
{

	method_rva(AmongUsClient::FixedUpdate, 0xCF3310)
	//method_rva(AmongUsClient::FindObjectByNetId<T>, 0xCF3310)
	method_rva(AmongUsClient::SendRpcImmediately, 0xCF5F40)
	method_rva(AmongUsClient::StartRpcImmediately, 0xCF61C0)
	method_rva(AmongUsClient::FinishRpcImmediately, 0xCF32D0)
	method_rva(AmongUsClient::SendRpc, 0xCF6010)
	method_rva(AmongUsClient::StartRpc, 0xCF6290)
	method_rva(AmongUsClient::EJPNADKABHD, 0xCF2D50)
	//method_rva(AmongUsClient::JCFDHINLMDK, 0xCF3F10)
	method_rva(AmongUsClient::Spawn, 0xCF6090)
	method_rva(AmongUsClient::ANGLABNJGOD, 0xCF0B10)
	method_rva(AmongUsClient::Despawn, 0xCF2C80)
	method_rva(AmongUsClient::DBGLMJPFANF, 0xCF2BE0)
	method_rva(AmongUsClient::RemoveNetObject, 0xCF5AC0)
	method_rva(AmongUsClient::RemoveUnownedObjects, 0xCF5B50)
	method_rva(AmongUsClient::OHOPANBHGGP, 0xCF5510)
	method_rva(AmongUsClient::LMFMFBMONOO, 0xCF4240)
	method_rva(AmongUsClient::MDJALECPFEH, 0xCF4E70)
	method_rva(AmongUsClient::SetEndpoint, 0xCF6070)
	method_rva(AmongUsClient::LIHJLOJIACK, 0xCF4230)
	method_rva(AmongUsClient::get_Ping, 0xCF6A10)
	method_rva(AmongUsClient::get_BytesSent, 0xCF69C0)
	method_rva(AmongUsClient::get_BytesGot, 0xCF6990)
	method_rva(AmongUsClient::get_Resends, 0xCF6A40)
	method_rva(AmongUsClient::get_AmHost, 0xCF6970)
	method_rva(AmongUsClient::get_AmClient, 0xCF6960)
	method_rva(AmongUsClient::get_IsGamePublic, 0x265140)
	method_rva(AmongUsClient::GIOFDCNIPJH, 0x2652F0)
	method_rva(AmongUsClient::get_IsGameStarted, 0xCF6A00)
	method_rva(AmongUsClient::get_IsGameOver, 0xCF69F0)
	method_rva(AmongUsClient::Start, 0xCF62F0)
	method_rva(AmongUsClient::NMLCCIJBKOJ, 0xCF53B0)
	method_rva(AmongUsClient::GetHost, 0xCF3A20)
	method_rva(AmongUsClient::GetClientIdFromCharacter, 0xCF3840)
	method_rva(AmongUsClient::OnDestroy, 0xCF5910)
	//method_rva(AmongUsClient::CoConnect, 0xCF2AA0)
	method_rva(AmongUsClient::OJKOCAGLAAC, 0xCF5710)
	method_rva(AmongUsClient::OIBNNHLMFEG, 0xCF55F0)
	method_rva(AmongUsClient::Connect, 0xCF2AF0)
	//method_rva(AmongUsClient::FOJHHGDMKLD, 0xCF3230)
	//method_rva(AmongUsClient::WaitForConnectionOrFail, 0xCF67A0)
	//method_rva(AmongUsClient::LNBDBLHJGKG, 0xCF4E10)
	method_rva(AmongUsClient::Update, 0xCF6360)
	method_rva(AmongUsClient::PNNKOGIPHBA, 0xCF5930)
	method_rva(AmongUsClient::HandleDisconnect, 0xCF3DF0)
	method_rva(AmongUsClient::GJDEPEPMEGI, 0xCF36E0)
	method_rva(AmongUsClient::AMKMODDAFOO, 0xCF0720)
	method_rva(AmongUsClient::HostGame, 0xCF3E30)
	method_rva(AmongUsClient::JoinGame, 0xCF3F70)
	method_rva(AmongUsClient::CanBan, 0xCF29A0)
	method_rva(AmongUsClient::CanKick, 0xCF29C0)
	method_rva(AmongUsClient::KickPlayer, 0xCF4100)
	method_rva(AmongUsClient::StartEndGame, 0xCF6140)
	method_rva(AmongUsClient::FinishEndGame, 0xCF3290)
	method_rva(AmongUsClient::GFFCNEJAOFO, 0xCF3630)
	method_rva(AmongUsClient::MGJKDBFKHDD, 0xCF5080)
	method_rva(AmongUsClient::DBFLAJLNBBN, 0xCF2B50)
	method_rva(AmongUsClient::RequestGameList, 0xCF5E90)
	method_rva(AmongUsClient::ChangeGamePublic, 0xCF29E0)
	method_rva(AmongUsClient::CKOCCBEAHHH, 0xCF0ED0)
	method_rva(AmongUsClient::CNCLKHELHLI, 0xCF10A0)
	method_rva(AmongUsClient::AddressToString, 0xCF0C90)
	method_rva(AmongUsClient::NCJFIOLJALM, 0xCF5200)
	method_rva(AmongUsClient::FFNOBLLHAAI, 0xCF2E30)
	method_rva(AmongUsClient::OnApplicationPause, 0xCF5820)
	method_rva(AmongUsClient::LGENDNJEJEP, 0xCF41C0)
	method_rva(AmongUsClient::HOAEOAPDMDD, 0xCF3BA0)
	//method_rva(AmongUsClient::DBKCBALIBFB, 0xCF3BA0)
	//method_rva(AmongUsClient::MOBACGECFMB, 0xCF3BA0)
	//method_rva(AmongUsClient::LHPAENKNLNO, 0xCF3BA0)
	//method_rva(AmongUsClient::KNCEGCPIBFN, 0xCF3BA0)
	//method_rva(AmongUsClient::JBHBAGLEFHE, 0xCF3BA0)
	//method_rva(AmongUsClient::DCDHCPKMBBC, 0xCF3BA0)
	//method_rva(AmongUsClient::KMNHJIJNAEG, 0xCF3BA0)
	//method_rva(AmongUsClient::PGJNGPIAANB, 0xCF3BA0)
	//method_rva(AmongUsClient::JCEGBHAKDPI, 0xCF3BA0)
	//method_rva(AmongUsClient::JFGDBNFFPLJ, 0xCF3BA0)
	//method_rva(AmongUsClient::FCFMNGIPPBC, 0xCF3BA0)
	//method_rva(AmongUsClient::APHGMDGLCFJ, 0xCF3BA0)
	method_rva(AmongUsClient::FHOPGBFNLJN, 0xCF30D0)
	method_rva(AmongUsClient::_ctor, 0xCF6840)
	method_rva(AmongUsClient::_cctor, 0xCF67F0)
	method_rva(AmongUsClient::CLNLDJNCCFP, 0xCF0FB0)
	method_rva(AmongUsClient::BAOCOJMNKNH, 0xCF0E50)
	method_rva(AmongUsClient::NMGMLLCNFCC, 0x6F1490)
	method_rva(AmongUsClient::GLMMAJAKCBN, 0xCF0E50)
	method_rva(AmongUsClient::CJGEOPBJBDF, 0xCF0E60)
	method_rva(AmongUsClient::OGNLKBHNCBH, 0x1F9DC0)
	method_rva(AmongUsClient::MJKKECFCCON, 0xCF5190)
	method_rva(AmongUsClient::GCLEDNOMEMF, 0x1F9DC0)
	method_rva(AmongUsClient::KDMJIFJLNOI, 0x1F8400)
}
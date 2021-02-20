#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>

namespace InnerNet {

// KHNHJFFECBP in 2020.12.9s
struct InnerNetClient : ark::meta<InnerNetClient, Unity::MonoBehaviour> {
    ark_meta("", "KHNHJFFECBP");

    // KHNHJFFECBP.KGEKNMMAKKN in 2020.12.9s
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


    // No [marker], name shouldn't change
    void Update();
};

} // namespace InnerNet

using namespace InnerNet;
namespace ark::method_info
{
    template<> method_rva(InnerNetClient::Update, 0xCF6360)
}

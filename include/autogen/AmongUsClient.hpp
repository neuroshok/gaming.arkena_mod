#pragma once

#include <autogen/InnerNet/InnerNetClient.hpp>

// KIIHPMJOOGI in 2020.10.8i
// JNFEHNLGIFF in 2020.10.22s
// HJNEPPHDLBA in 2020.11.4s
// MMMGPAPEEBJ in 2020.11.17s
// FMLLKEACGIO in 2020.12.9s
struct AmongUsClient : InnerNet::InnerNetClient {
    std::int32_t AutoOpenStore; // [marker]
    std::int32_t GameMode;
    struct System_String_o* OnlineScene;
    struct System_String_o* MainMenuScene;
    struct GameData_o* GameDataPrefab;
    struct PlayerControl_o* PlayerPrefab;
    struct System_Collections_Generic_List_ShipStatus__o* ShipPrefabs;
    std::int32_t TutorialMapId;
    float SpawnRadius;
    std::int32_t discoverState;
    struct System_Collections_Generic_List_IDisconnectHandler__o* DisconnectHandlers;
    struct System_Collections_Generic_List_IGameListHandler__o* GameListHandlers;

    struct StaticFields {
        AmongUsClient* Instance;
    };

    static Class<AmongUsClient>* get_class() {  return Class<AmongUsClient>::find("FMLLKEACGIO"); }

    static AmongUsClient* Instance() {
        return get_class()->statics()->Instance;
    }
};
CHECK_TYPE(AmongUsClient, 0x98);

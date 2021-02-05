#pragma once

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>
#include <ark/utility/mod_info.hpp>

struct PlayerTask;
struct CustomNetworkTransform;
struct MessageWriter;

// IHFJHCCJLKB in 2020.10.8i
// GLHCHLEDNBA in 2020.10.22s
// APNNOJFGDGP in 2020.11.4s
// JENJGDMOEOC in 2020.11.17s
// FFGALNAPKCD in 2020.12.9s
struct PlayerControl : InnerNet::InnerNetObject {
    std::int32_t LastStartCounter;
    std::uint8_t PlayerId;
    float MaxReportDistance; // [marker]
    bool moveable;
    bool inVent;
    struct GameData_PlayerInfo_o *_cachedData;
    struct UnityEngine_AudioSource_o *FootSteps;
    struct UnityEngine_AudioClip_o *KillSfx;
    struct KillAnimation_array *KillAnimations;
    float killTimer;
    std::int32_t RemainingEmergencies;
    struct TextRenderer_o *nameText;
    struct LightSource_o *LightPrefab;
    struct LightSource_o *myLight;
    struct UnityEngine_Collider2D_o *Collider;
    struct PlayerPhysics_o *MyPhysics;
    CustomNetworkTransform *NetTransform;
    struct PetBehaviour_o *CurrentPet;
    struct HatParent_o *HatRenderer;
    struct UnityEngine_SpriteRenderer_o *myRend;
    struct UnityEngine_Collider2D_array *hitBuffer;
    int b;
    System::Collections::Generic::List<PlayerTask>* myTasks;
    struct PowerTools_SpriteAnim_array *ScannerAnims;
    struct UnityEngine_SpriteRenderer_array *ScannersImages;
    struct IUsable_o *closest;
    bool isNew;
    struct System_Collections_Generic_Dictionary_Collider2D__IUsable__o *cache;
    struct System_Collections_Generic_List_IUsable__o *itemsInRange;
    struct System_Collections_Generic_List_IUsable__o *newItemsInRange;
    std::uint8_t scannerCount;
    bool infectedSet;

    struct StaticFields {
        PlayerControl* instance;
    };

    static PlayerControl* instance() {
        return get_class()->statics()->instance;
    }

    static Class<PlayerControl>* get_class() {
        switch (mod_info::get_game_version()) {
            case game_version::v2020_6_9s:   return Class<PlayerControl>::find("PlayerControl");
            case game_version::v2020_9_22s:  return Class<PlayerControl>::find("PlayerControl");
            case game_version::v2020_10_8i:  return Class<PlayerControl>::find("IHFJHCCJLKB");
            case game_version::v2020_10_22s: return Class<PlayerControl>::find("GLHCHLEDNBA");
            case game_version::v2020_11_4s:  return Class<PlayerControl>::find("APNNOJFGDGP");
            case game_version::v2020_11_17s: return Class<PlayerControl>::find("JENJGDMOEOC");
            case game_version::v2020_12_9s:  return Class<PlayerControl>::find("FFGALNAPKCD");
        }
        return nullptr;
    }

    void SetTasks(void*);
    void SetColor(std::uint8_t);
    void SetKillTimer(float value)
    {
        get_method<void (*)(PlayerControl*, float)>("SetKillTimer")(this, value);
    }
    void MurderPlayer(PlayerControl* pc)
    {
        get_method<void (*)(PlayerControl*, PlayerControl*)>("MurderPlayer")(this, pc);
    }

    // [marker] SetTasks in dump.cs

    void HandleRpc(std::uint8_t, MessageReader*);
    void RpcEnterVent(std::uint32_t, int);
    void RpcSetColor(std::uint8_t v)
    {
        get_method<void (*)(PlayerControl*, std::uint8_t)>("RpcSetColor")(this, v);
    }
    void RpcSetHat(std::uint32_t);
    void RpcMurderPlayer(PlayerControl*);

    // RpcMurderPlayer
};
CHECK_TYPE(PlayerControl, 0x94);

template <>
const inline char* get_method_name<&PlayerControl::SetTasks>() {
    switch (mod_info::get_game_version()) {
        case game_version::v2020_6_9s:   return "SetTasks";
        case game_version::v2020_9_22s:  return "SetTasks";
        case game_version::v2020_10_8i:  return "SetTasks";
        case game_version::v2020_10_22s: return "SetTasks";
        case game_version::v2020_11_4s:  return "SetTasks";
        case game_version::v2020_11_17s: return "SetTasks";
        case game_version::v2020_12_9s:  return "SetTasks";
    }
    return nullptr;
}

template<> inline const char* get_method_name<&PlayerControl::RpcSetHat>() { return "RpcSetHat"; }
template<> inline const char* get_method_name<&PlayerControl::SetColor>() { return "SetColor"; }
template<> inline const char* get_method_name<&PlayerControl::RpcSetColor>() { return "RpcSetColor"; }
template<> inline const char* get_method_name<&PlayerControl::RpcMurderPlayer>() { return "RpcMurderPlayer"; }
template<> inline const char* get_method_name<&PlayerControl::HandleRpc>() { return "HandleRpc"; }
template<> inline const char* get_method_name<&PlayerControl::RpcEnterVent>() { return "RpcEnterVent"; }
template<> inline const char* get_method_name<&PlayerControl::MurderPlayer>() { return "MurderPlayer"; }
template<> inline const char* get_method_name<&PlayerControl::SetKillTimer>() { return "SetKillTimer"; }


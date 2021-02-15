#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>

#include <autogen/GameData.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>
#include <autogen/UnityEngine/Vector2.hpp>
#include <autogen/UnityEngine/Color.hpp>

struct PlayerTask;
struct CustomNetworkTransform;
struct MessageWriter;

struct PlayerControl;

// FFGALNAPKCD in 2020.12.9s
struct PlayerControl : InnerNet::InnerNetObject, ark::meta<PlayerControl> {
    static inline auto internal_name = "FFGALNAPKCD";

    std::int32_t LastStartCounter;
    std::uint8_t PlayerId;
    float MaxReportDistance; // [marker]
    bool moveable;
    bool inVent;
    struct GameData::PlayerInfo *_cachedData;
    struct UnityEngine_AudioSource_o *FootSteps;
    struct UnityEngine_AudioClip_o *KillSfx;
    struct KillAnimation_array *KillAnimations;
    float killTimer;
    std::int32_t RemainingEmergencies;
    struct UnityEngine::TextRenderer *nameText;
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


    UnityEngine::Vector2 GetTruePosition() { return get_method<UnityEngine::Vector2 (*)(PlayerControl*)>("GetTruePosition")(this); }

    void SetTasks(void*);


    void SetColor(std::uint8_t v) { method_call(SetColor, v); }


    void SetHat(std::uint32_t id, std::int32_t n = 1) { get_method<void (*)(PlayerControl*, std::uint32_t, std::int32_t)>("SetHat")(this, id, n); }
    void SetKillTimer(float value)
    {
        get_method<void (*)(PlayerControl*, float)>("SetKillTimer")(this, value);
    }
    void MurderPlayer(PlayerControl* pc)
    {
        get_method<void (*)(PlayerControl*, PlayerControl*)>("MurderPlayer")(this, pc);
    }

    void RpcSetInfected(::Array<GameData::PlayerInfo>* players) { method_call(RpcSetInfected, players); }

    void HandleRpc(std::uint8_t, MessageReader*);
    void RpcEnterVent(std::uint32_t, int);
    void RpcSetColor(std::uint8_t v)
    {
        get_method<void (*)(PlayerControl*, std::uint8_t)>("RpcSetColor")(this, v);
    }
    void RpcSetHat(std::uint32_t v) { get_method<void (*)(PlayerControl*, std::uint32_t)>("RpcSetHat")(this, v); }
    void RpcMurderPlayer(PlayerControl*);

	void HEJHHOBBOBI(bool HIJOHCLAKMG);
	void OMPDACJGDIJ(bool HIJOHCLAKMG);

    // RpcMurderPlayer

    /*
    struct DCJMABDDJCF : ark::meta<PlayerControl, DCJMABDDJCF>
    {

    };*/
};

namespace ark::method_info
{
    //method_address(PlayerControl::SetColor, 0x8F0AE0);
    inline uintptr_t rva<&PlayerControl::SetColor>() { return 0x8F0AE0 ; }
}

template<> inline const char* get_method_name<&PlayerControl::HEJHHOBBOBI>() { return "HEJHHOBBOBI"; }
template<> inline const char* get_method_name<&PlayerControl::OMPDACJGDIJ>() { return "OMPDACJGDIJ"; }
template<> inline const char* get_method_name<&PlayerControl::GetTruePosition>() { return "GetTruePosition"; }
template<> inline const char* get_method_name<&PlayerControl::RpcSetHat>() { return "RpcSetHat"; }
template<> inline const char* get_method_name<&PlayerControl::SetHat>() { return "SetHat"; }
template<> inline const char* get_method_name<&PlayerControl::SetColor>() { return "SetColor"; }
template<> inline const char* get_method_name<&PlayerControl::RpcSetColor>() { return "RpcSetColor"; }
template<> inline const char* get_method_name<&PlayerControl::RpcMurderPlayer>() { return "RpcMurderPlayer"; }
template<> inline const char* get_method_name<&PlayerControl::HandleRpc>() { return "HandleRpc"; }
template<> inline const char* get_method_name<&PlayerControl::RpcEnterVent>() { return "RpcEnterVent"; }
template<> inline const char* get_method_name<&PlayerControl::RpcSetInfected>() { return "RpcSetInfected"; }
template<> inline const char* get_method_name<&PlayerControl::MurderPlayer>() { return "MurderPlayer"; }
template<> inline const char* get_method_name<&PlayerControl::SetKillTimer>() { return "SetKillTimer"; }
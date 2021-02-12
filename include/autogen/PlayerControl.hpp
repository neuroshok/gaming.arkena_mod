#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>

#define method_call(Name, ...) get_method<ark::function_trait<decltype(&PlayerControl::Name)>::flat_method_type>(#Name)(this, __VA_ARGS__)
#define method_str(Name, Str_name) template<> inline const char* get_method_name<&PlayerControl::Name>() { return Str_name; }

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <autogen/UnityEngine/MessageReader.hpp>
#include <ark/utility/mod_info.hpp>

#include <autogen/GameData.hpp>
#include <autogen/UnityEngine/Vector2.hpp>
#include <autogen/UnityEngine/Color.hpp>

namespace UnityEngine
{
    struct TextRenderer : UnityEngine::MonoBehaviour
    {
        void* TextAsset;// FontData; // 0xC
        float scale; // 0x10
        float TabWidth; // 0x14
        bool Centered; // 0x18
        bool RightAligned; // 0x19
        void* textLinkPrefab; // 0x1C
        void* JAKKLJIKCCB; // 0x20
        void* render; // 0x24
        void* Text; // 0x28
        void* LAHIBHEEDMH; // 0x2C
        Color color; // 0x30
        Color BHOFIDCCIGG; // 0x40
        Color OutlineColor; // 0x50
        Color OOAFCPMNNJD; // 0x60
        float maxWidth; // 0x70

            struct StaticFields {
        TextRenderer* instance = nullptr;
        };

        static TextRenderer* instance() {
            if (get_class()->static_fields == nullptr) return nullptr;
            return get_class()->statics()->instance;
        }
        static Class<TextRenderer>* get_class() { return Class<TextRenderer>::find("AELDHKGBIFD"); }
    };
}

struct PlayerTask;
struct CustomNetworkTransform;
struct MessageWriter;

// IHFJHCCJLKB in 2020.10.8i
// GLHCHLEDNBA in 2020.10.22s
// APNNOJFGDGP in 2020.11.4s
// JENJGDMOEOC in 2020.11.17s
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

    // [marker] SetTasks in dump.cs

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
};


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
template<> inline const char* get_method_name<&PlayerControl::MurderPlayer>() { return "MurderPlayer"; }
template<> inline const char* get_method_name<&PlayerControl::SetKillTimer>() { return "SetKillTimer"; }


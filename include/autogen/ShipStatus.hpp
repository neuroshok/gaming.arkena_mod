#pragma once

#include <ark/class.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/Unity/Vector2.hpp>
#include <autogen/Unity/Color.hpp>

// HLBNNHFCNAJ in 2020.12.9s
struct ShipStatus : ark::meta<ShipStatus, InnerNet::InnerNetObject> {
    static inline auto internal_name = "HLBNNHFCNAJ";

    enum class MapType : std::int32_t {
        Ship = 0,
        Hq = 1,
        Pb = 2,
    };

    Unity::Color CameraColor;
    float MaxLightRadius; // [marker]
    float MinLightRadius;
    float MapScale;
    struct MapBehaviour_o* MapPrefab;
    struct ExileController_o* ExileCutscenePrefab;
    Unity::Vector2 InitialSpawnCenter;
    Unity::Vector2 MeetingSpawnCenter;
    Unity::Vector2 MeetingSpawnCenter2;
    float SpawnRadius;
    struct NormalPlayerTask_array* CommonTasks;
    struct NormalPlayerTask_array* LongTasks;
    struct NormalPlayerTask_array* NormalTasks;
    struct PlayerTask_array* SpecialTasks;
    struct Unity_Transform_array* DummyLocations;
    struct SurvCamera_array* AllCameras;
    struct PlainDoor_array* AllDoors;
    struct Console_array* AllConsoles;
    struct System_Collections_Generic_Dictionary_HBKFJKIHEFM__GCEKFCICMHL__o* Systems;
    struct AKPFLLKKOBN_array* _HMALBFKGHFE_k__BackingField;
    struct PlainShipRoom_array* _PDBPIILBHAE_k__BackingField;
    struct System_Collections_Generic_Dictionary_HBKFJKIHEFM__PlainShipRoom__o* _FNFHCOHJDBK_k__BackingField;
    struct Vent_array* _LFOLHNDFOLH_k__BackingField;
    struct Unity_AnimationClip_array* WeaponFires;
    struct PowerTools_SpriteAnim_o* WeaponsImage;
    struct Unity_AudioClip_array* VentMoveSounds;
    struct Unity_AudioClip_o* VentEnterSound;
    struct Unity_AnimationClip_o* HatchActive;
    struct PowerTools_SpriteAnim_o* Hatch;
    struct Unity_ParticleSystem_o* HatchParticles;
    struct Unity_AnimationClip_o* ShieldsActive;
    struct PowerTools_SpriteAnim_array* ShieldsImages;
    struct Unity_SpriteRenderer_o* ShieldBorder;
    struct Unity_Sprite_o* ShieldBorderOn;
    struct MedScannerBehaviour_o* MedScanner;
    std::int32_t WeaponFireIdx;
    float Timer;
    float EmergencyCooldown;
    MapType Type;
    std::int32_t HBFNNGCEGNI;


    // No [marker], name shouldn't change
    void Begin();
};

namespace ark::method_info
{
    template<> method_rva(ShipStatus::Begin, 0x979B20)
}
#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/TMPro/TextMeshPro.hpp>
#include <au/HatParent.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/SkinLayer.hpp>
#include <au/VisorLayer.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/PlayerMaterial/Properties.hpp>
#include <au/PlayerBodySprite.hpp>
#include <au/PetBehaviour.hpp>
#include <au/PlayerMaterial/MaskType.hpp>
#include <au/PlayerBodyTypes.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <cs/string.hpp>
#include <au/HatData.hpp>
#include <au/UnityEngine/Color.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/PetData.hpp>
#include <au/PetBehaviour.hpp>
#include <au/PlayerControl.hpp>
#include <cs/string.hpp>
#include <au/SkinData.hpp>
#include <au/SkinViewData.hpp>
#include <au/VisorData.hpp>
#include <au/PetData.hpp>
#include <au/PlayerBodySprite.hpp>

namespace 
{
    struct CosmeticsLayer : ark::meta<CosmeticsLayer, UnityEngine::MonoBehaviour>
    {
        bool alwaysDrawNormalPlayer; // 0xc
        bool uiPet; // 0xd
        float zIndexSpacing; // 0x10
        bool showColorBlindText; // 0x14
        System::Collections::Generic::List<au::PlayerBodySprite>* bodySprites; // 0x18
        TMPro::TextMeshPro* colorBlindText; // 0x1c
        au::HatParent* hat; // 0x20
        TMPro::TextMeshPro* nameText; // 0x24
        UnityEngine::GameObject* nameTextContainer; // 0x28
        UnityEngine::Transform* petParent; // 0x2c
        au::SkinLayer* skin; // 0x30
        au::VisorLayer* visor; // 0x34
        au::PlayerBodyTypes bodyType; // 0x38
        PlayerMaterial+Properties bodyMatProperties; // 0x3c
        au::PlayerBodySprite* currentBodySprite; // 0x48
        au::PetBehaviour* currentPet; // 0x4c
        au::PlayerBodySprite* normalBodySprite; // 0x50
        bool initialized; // 0x54
        bool visible; // 0x55
        bool isNameVisible; // 0x56
        bool lockVisible; // 0x57

        au::PetBehaviour* get_CurrentPet() { return il2cpp::call<au::PetBehaviour*(*)(CosmeticsLayer*)>(0x372c60)(this); } // 0x372c60
        au::PlayerPettingHand* get_PettingHand() { return il2cpp::call<au::PlayerPettingHand*(*)(CosmeticsLayer*)>(0x8fe6b0)(this); } // 0x8fe6b0
        UnityEngine::SpriteRenderer* get_HatHand() { return il2cpp::call<UnityEngine::SpriteRenderer*(*)(CosmeticsLayer*)>(0x8fe690)(this); } // 0x8fe690
        au::PlayerBodyTypes get_CurrentBodyType() { return il2cpp::call<au::PlayerBodyTypes(*)(CosmeticsLayer*)>(0x8fe610)(this); } // 0x8fe610
        UnityEngine::Vector3 get_FlippedCosmeticOffset() { return il2cpp::call<UnityEngine::Vector3(*)(CosmeticsLayer*)>(0x8fe660)(this); } // 0x8fe660
        bool get_FlipX() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x8fe630)(this); } // 0x8fe630
        bool get_Visible() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x6aba30)(this); } // 0x6aba30
        void set_Visible(bool value) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fe6d0)(this, value); } // 0x8fe6d0
        void SetBodyCosmeticsVisible(bool b) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fbfc0)(this, b); } // 0x8fbfc0
        void UpdateVisibility() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fe4e0)(this); } // 0x8fe4e0
        void ToggleHat(bool b) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fde40)(this, b); } // 0x8fde40
        void SetForcedVisible(bool isVisible) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fca50)(this, isVisible); } // 0x8fca50
        UnityEngine::Material* GetBodyMaterial(PlayerMaterial+MaskType type) { return il2cpp::call<UnityEngine::Material*(*)(CosmeticsLayer*, PlayerMaterial+MaskType)>(0x8fb6d0)(this, type); } // 0x8fb6d0
        void EnsureInitialized(au::PlayerBodyTypes bt) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PlayerBodyTypes)>(0x8fb2a0)(this, bt); } // 0x8fb2a0
        void FixSkinSprite(UnityEngine::Sprite* skinSprite) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Sprite*)>(0x8fb680)(this, skinSprite); } // 0x8fb680
        au::PetBehaviour* GetPet() { return il2cpp::call<au::PetBehaviour*(*)(CosmeticsLayer*)>(0x372c60)(this); } // 0x372c60
        PowerTools::SpriteAnim* GetSkinSpriteAnim() { return il2cpp::call<PowerTools::SpriteAnim*(*)(CosmeticsLayer*)>(0x8fb8a0)(this); } // 0x8fb8a0
        void ReplacePetParent(UnityEngine::Transform* newParent, UnityEngine::Vector3 newPosition) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Transform*, UnityEngine::Vector3)>(0x8fbca0)(this, newParent, newPosition); } // 0x8fbca0
        void ResetCosmetics() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fbd90)(this); } // 0x8fbd90
        void SetBodyAsGhost() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fbef0)(this); } // 0x8fbef0
        void SetBodyColor(int32_t bodyColor) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fbf20)(this, bodyColor); } // 0x8fbf20
        void SetColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fc0c0)(this, color); } // 0x8fc0c0
        void SetDeadFlipX(bool flipped) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fc410)(this, flipped); } // 0x8fc410
        void SetEnabledColorblind(bool isEnabled) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fc740)(this, isEnabled); } // 0x8fc740
        void SetFlipX(bool flipped) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fca30)(this, flipped); } // 0x8fca30
        void SetFlipXWithoutPet(bool flipped) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fc780)(this, flipped); } // 0x8fc780
        void SetGhost() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fca90)(this); } // 0x8fca90
        void SetHat(cs::string* hatId, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*, int32_t)>(0x8fcc80)(this, hatId, color); } // 0x8fcc80
        void SetHat(au::HatData* hatData, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::HatData*, int32_t)>(0x8fcca0)(this, hatData, color); } // 0x8fcca0
        void SetHat(au::HatData* hatData, au::HatViewData* hatViewData, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::HatData*, au::HatViewData*, int32_t)>(0x8fcc60)(this, hatData, hatViewData, color); } // 0x8fcc60
        bool HasHat() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x8fb8e0)(this); } // 0x8fb8e0
        void SetHatAndVisorIdle(int32_t colorId) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fcac0)(this, colorId); } // 0x8fcac0
        void SetHatAndVisorOnFloor() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fcb10)(this); } // 0x8fcb10
        void SetHatColor(UnityEngine::Color color) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Color)>(0x8fcb70)(this, color); } // 0x8fcb70
        void SetHatColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fcb50)(this, color); } // 0x8fcb50
        void SetVisorColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fdce0)(this, color); } // 0x8fdce0
        void SetHatWithoutChangingColor(au::HatData* hatData) { return il2cpp::call<void(*)(CosmeticsLayer*, au::HatData*)>(0x8fcbf0)(this, hatData); } // 0x8fcbf0
        void SetMaskLayer(int32_t layer) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fccc0)(this, layer); } // 0x8fccc0
        void SetMaskType(PlayerMaterial+MaskType type) { return il2cpp::call<void(*)(CosmeticsLayer*, PlayerMaterial+MaskType)>(0x8fcda0)(this, type); } // 0x8fcda0
        void SetName(cs::string* nameStr, UnityEngine::Vector3 scale, UnityEngine::Color color, float zPosition) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*, UnityEngine::Vector3, UnityEngine::Color, float)>(0x8fcf70)(this, nameStr, scale, color, zPosition); } // 0x8fcf70
        void SetName(cs::string* nameStr) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*)>(0x8fd0c0)(this, nameStr); } // 0x8fd0c0
        void SetNameColor(UnityEngine::Color color) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Color)>(0x8fce00)(this, color); } // 0x8fce00
        void SetNameMask(bool alive) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fce40)(this, alive); } // 0x8fce40
        void SetNamePosition(UnityEngine::Vector3 newPosition) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Vector3)>(0x8fcec0)(this, newPosition); } // 0x8fcec0
        void SetNameScale(UnityEngine::Vector3 scale) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Vector3)>(0x8fcf10)(this, scale); } // 0x8fcf10
        void SetOutline(bool active, System::Nullable<UnityEngine::Color>* color) { return il2cpp::call<void(*)(CosmeticsLayer*, bool, System::Nullable<UnityEngine::Color>*)>(0x8fd180)(this, active, color); } // 0x8fd180
        void SetPetFlipX(bool flipped) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fd2f0)(this, flipped); } // 0x8fd2f0
        void SetPetIdle(cs::string* petId, int32_t colorId, System::Action* onComplete) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*, int32_t, System::Action*)>(0x8fd5c0)(this, petId, colorId, onComplete); } // 0x8fd5c0
        void SetPetIdle(au::PetData* petData, int32_t colorId, System::Action* onComplete) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PetData*, int32_t, System::Action*)>(0x8fd490)(this, petData, colorId, onComplete); } // 0x8fd490
        void SetPetIdle(au::PetBehaviour* petBehaviour, int32_t colorId, System::Action* onComplete) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PetBehaviour*, int32_t, System::Action*)>(0x8fd730)(this, petBehaviour, colorId, onComplete); } // 0x8fd730
        void SetPetPosition(UnityEngine::Vector3 newPosition) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Vector3)>(0x8fd780)(this, newPosition); } // 0x8fd780
        void SetPetScared(au::PetBehaviour* petBehaviour, int32_t colorId) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PetBehaviour*, int32_t)>(0x8fd820)(this, petBehaviour, colorId); } // 0x8fd820
        void SetPetSource(au::PlayerControl* playerControl) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PlayerControl*)>(0x8fd860)(this, playerControl); } // 0x8fd860
        void SetScale(UnityEngine::Vector3 scale) { return il2cpp::call<void(*)(CosmeticsLayer*, UnityEngine::Vector3)>(0x8fd8d0)(this, scale); } // 0x8fd8d0
        void SetSkin(cs::string* skinId, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*, int32_t)>(0x8fdb50)(this, skinId, color); } // 0x8fdb50
        void SetSkin(au::SkinData* skin, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::SkinData*, int32_t)>(0x8fda80)(this, skin, color); } // 0x8fda80
        void SetSkin(au::SkinViewData* skin, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::SkinViewData*, int32_t)>(0x8fd9b0)(this, skin, color); } // 0x8fd9b0
        void SetSkinColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fd990)(this, color); } // 0x8fd990
        void SetVisor(cs::string* visorId, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, cs::string*, int32_t)>(0x8fdda0)(this, visorId, color); } // 0x8fdda0
        void SetVisor(au::VisorData* visorData, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::VisorData*, int32_t)>(0x8fde20)(this, visorData, color); } // 0x8fde20
        void SetVisor(au::VisorData* visorData, au::VisorViewData* visorViewData, int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, au::VisorData*, au::VisorViewData*, int32_t)>(0x8fdd00)(this, visorData, visorViewData, color); } // 0x8fdd00
        void SetVisorAlpha(float alpha) { return il2cpp::call<void(*)(CosmeticsLayer*, float)>(0x8fdc60)(this, alpha); } // 0x8fdc60
        void ToggleName(bool active) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fde90)(this, active); } // 0x8fde90
        void TogglePet(bool active) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fdf50)(this, active); } // 0x8fdf50
        void TogglePetVisible(bool visible) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fded0)(this, visible); } // 0x8fded0
        void ToggleVisor(bool active) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fdfe0)(this, active); } // 0x8fdfe0
        void ToggleNameVisible(bool visible) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fde70)(this, visible); } // 0x8fde70
        void UpdateNameVisibility() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fe3f0)(this); } // 0x8fe3f0
        UnityEngine::SpriteMaskInteraction GetBodySpriteMaskInteraction(PlayerMaterial+MaskType type) { return il2cpp::call<UnityEngine::SpriteMaskInteraction(*)(CosmeticsLayer*, PlayerMaterial+MaskType)>(0x8fb730)(this, type); } // 0x8fb730
        System::Collections::IEnumerator* CoLoadAndSetPetIdle(au::PetData* petData, int32_t colorId, System::Action* onComplete) { return il2cpp::call<System::Collections::IEnumerator*(*)(CosmeticsLayer*, au::PetData*, int32_t, System::Action*)>(0x8fb230)(this, petData, colorId, onComplete); } // 0x8fb230
        void InstantiatePetCopy(au::PetBehaviour* petBehaviour, int32_t colorId) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PetBehaviour*, int32_t)>(0x8fba20)(this, petBehaviour, colorId); } // 0x8fba20
        void OnDestroy() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fbba0)(this); } // 0x8fbba0
        void SetColorBlindColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fc030)(this, color); } // 0x8fc030
        cs::string* GetColorBlindText() { return il2cpp::call<cs::string*(*)(CosmeticsLayer*)>(0x8fb760)(this); } // 0x8fb760
        void SetCosmeticZIndices() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fc200)(this); } // 0x8fc200
        void SetPetColor(int32_t color) { return il2cpp::call<void(*)(CosmeticsLayer*, int32_t)>(0x8fd270)(this, color); } // 0x8fd270
        void UpdateBodyMaterial() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fe080)(this); } // 0x8fe080
        void HideHatAndVisor() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb9e0)(this); } // 0x8fb9e0
        void AnimateClimb(bool down) { return il2cpp::call<void(*)(CosmeticsLayer*, bool)>(0x8fafe0)(this, down); } // 0x8fafe0
        void AnimatePetMourning() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb020)(this); } // 0x8fb020
        void AnimateSkinEnterVent() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb0a0)(this); } // 0x8fb0a0
        void AnimateSkinExitVent() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb0f0)(this); } // 0x8fb0f0
        void AnimateSkinIdle() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb140)(this); } // 0x8fb140
        void AnimateSkinRun() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fb190)(this); } // 0x8fb190
        void AnimateSkinSpawn(float time) { return il2cpp::call<void(*)(CosmeticsLayer*, float)>(0x8fb1e0)(this, time); } // 0x8fb1e0
        bool HasSkinLoaded() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x8fb920)(this); } // 0x8fb920
        bool HasVisorLoaded() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x8fb950)(this); } // 0x8fb950
        bool HaveAllCosmeticsLoaded() { return il2cpp::call<bool(*)(CosmeticsLayer*)>(0x8fb980)(this); } // 0x8fb980
        void ctor() { return il2cpp::call<void(*)(CosmeticsLayer*)>(0x8fe5e0)(this); } // 0x8fe5e0
        void _EnsureInitialized_b__41_0(au::PlayerBodySprite* s) { return il2cpp::call<void(*)(CosmeticsLayer*, au::PlayerBodySprite*)>(0x8fe020)(this, s); } // 0x8fe020

    };

}
namespace ark {

        template<> struct meta_statics<::CosmeticsLayer> {
        };

}


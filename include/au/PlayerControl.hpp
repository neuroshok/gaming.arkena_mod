#pragma once
#include <ark/class.hpp>

#include <au/InnerNet/InnerNetObject.hpp>
#include <cs/string.hpp>
#include <au/CosmeticsLayer.hpp>
#include <au/PlayerOutfitType.hpp>
#include <au/GameData/PlayerInfo.hpp>
#include <au/UnityEngine/AudioSource.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <cs/array.hpp>
#include <au/LightSource.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/PlayerPhysics.hpp>
#include <au/CustomNetworkTransform.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/Logger.hpp>
#include <cs/array.hpp>
#include <au/IUsable.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <cs/string.hpp>
#include <au/GameData/PlayerInfo.hpp>
#include <au/PlayerControl.hpp>
#include <cs/array.hpp>
#include <au/PlayerOutfitType.hpp>
#include <au/UnityEngine/AnimationClip.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/SystemTypes.hpp>
#include <au/PlayerTask.hpp>
#include <au/DeathReason.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/PetData.hpp>
#include <au/PetBehaviour.hpp>
#include <au/SkinData.hpp>
#include <au/GameData/PlayerInfo.hpp>
#include <au/PlayerControl.hpp>
#include <au/UnityEngine/Renderer.hpp>

namespace 
{
    struct PlayerControl : ark::meta<PlayerControl, InnerNet::InnerNetObject>
    {
        static au::PlayerControl* LocalPlayer(); // 0x0
        static System::Collections::Generic::List<au::PlayerControl>* AllPlayerControls(); // 0x4
        int32_t LastStartCounter; // 0x24
        uint8_t PlayerId; // 0x28
        cs::string* FriendCode; // 0x2c
        cs::string* Puid; // 0x30
        float MaxReportDistance; // 0x34
        bool moveable; // 0x38
        au::CosmeticsLayer* cosmetics; // 0x3c
        bool ForceKillTimerContinue; // 0x40
        au::PlayerOutfitType _CurrentOutfitType_k__BackingField; // 0x44
        bool inVent; // 0x48
        bool walkingToVent; // 0x49
        bool petting; // 0x4a
        bool inMovingPlat; // 0x4b
        bool onLadder; // 0x4c
        bool protectedByGuardianThisRound; // 0x4d
        bool shapeshifting; // 0x4e
        GameData+PlayerInfo*NESTEDTYPE _cachedData; // 0x50
        bool protectedByGuardian; // 0x54
        float flashlightAngle; // 0x58
        UnityEngine::AudioSource* FootSteps; // 0x5c
        UnityEngine::AudioClip* KillSfx; // 0x60
        cs::array<au::KillAnimation>* KillAnimations; // 0x64
        float killTimer; // 0x68
        int32_t RemainingEmergencies; // 0x6c
        au::LightSource* LightPrefab; // 0x70
        au::LightSource* lightSource; // 0x74
        UnityEngine::Collider2D* Collider; // 0x78
        au::PlayerPhysics* MyPhysics; // 0x7c
        au::CustomNetworkTransform* NetTransform; // 0x80
        UnityEngine::Collider2D* clickKillCollider; // 0x84
        System::Collections::Generic::List<au::PlayerTask>* myTasks; // 0x88
        UnityEngine::Vector3 defaultPlayerScale; // 0x8c
        System::Collections::Generic::List<au::RoleEffectAnimation>* currentRoleAnimations; // 0x98
        UnityEngine::GameObject* TargetFlashlight; // 0x9c
        bool isDummy; // 0xa0
        bool notRealPlayer; // 0xa1
        au::Logger* logger; // 0xa4
        cs::array<UnityEngine::Collider2D>* hitBuffer; // 0xa8
        au::IUsable* closest; // 0xac
        bool isNew; // 0xb0
        System::Collections::Generic::Dictionary<UnityEngine::Collider2D, cs::array<au::IUsable>*>* cache; // 0xb4
        System::Collections::Generic::List<au::IUsable>* itemsInRange; // 0xb8
        System::Collections::Generic::List<au::IUsable>* newItemsInRange; // 0xbc
        uint8_t scannerCount; // 0xc0
        bool roleAssigned; // 0xc1

        void RpcSetScanner(bool value) { return il2cpp::call<void(*)(PlayerControl*, bool)>(0x6be620)(this, value); } // 0x6be620
        void RpcUsePlatform() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bec00)(this); } // 0x6bec00
        void RpcPlayAnimation(uint8_t animType) { return il2cpp::call<void(*)(PlayerControl*, uint8_t)>(0x6bda80)(this, animType); } // 0x6bda80
        void RpcSetStartCounter(int32_t secondsLeft) { return il2cpp::call<void(*)(PlayerControl*, int32_t)>(0x6be830)(this, secondsLeft); } // 0x6be830
        void RpcCompleteTask(uint32_t idx) { return il2cpp::call<void(*)(PlayerControl*, uint32_t)>(0x6bd930)(this, idx); } // 0x6bd930
        void RpcSetRole(AmongUs::GameOptions::RoleTypes roleType) { return il2cpp::call<void(*)(PlayerControl*, AmongUs::GameOptions::RoleTypes)>(0x6be580)(this, roleType); } // 0x6be580
        void CmdCheckName(cs::string* name) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6b8a50)(this, name); } // 0x6b8a50
        void RpcSetLevel(uint32_t level) { return il2cpp::call<void(*)(PlayerControl*, uint32_t)>(0x6be300)(this, level); } // 0x6be300
        void RpcSetVisor(cs::string* visorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be8b0)(this, visorId); } // 0x6be8b0
        void RpcSetNamePlate(cs::string* namePlateId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be3a0)(this, namePlateId); } // 0x6be3a0
        void RpcSetSkin(cs::string* skinId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be730)(this, skinId); } // 0x6be730
        void RpcSetHat(cs::string* hatId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be200)(this, hatId); } // 0x6be200
        void RpcSetPet(cs::string* petId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be4e0)(this, petId); } // 0x6be4e0
        void RpcSetName(cs::string* name) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6be440)(this, name); } // 0x6be440
        void CmdCheckColor(uint8_t bodyColor) { return il2cpp::call<void(*)(PlayerControl*, uint8_t)>(0x6b88f0)(this, bodyColor); } // 0x6b88f0
        void RpcSetColor(uint8_t bodyColor) { return il2cpp::call<void(*)(PlayerControl*, uint8_t)>(0x6be160)(this, bodyColor); } // 0x6be160
        bool RpcSendChat(cs::string* chatText) { return il2cpp::call<bool(*)(PlayerControl*, cs::string*)>(0x6bde00)(this, chatText); } // 0x6bde00
        bool RpcSendQuickChat(cs::string* chatText, au::QuickChatNetData* chatData) { return il2cpp::call<bool(*)(PlayerControl*, cs::string*, au::QuickChatNetData*)>(0x6bdfd0)(this, chatText, chatData); } // 0x6bdfd0
        void RpcSendChatNote(uint8_t srcPlayerId, au::ChatNoteTypes noteType) { return il2cpp::call<void(*)(PlayerControl*, uint8_t, au::ChatNoteTypes)>(0x6bdcf0)(this, srcPlayerId, noteType); } // 0x6bdcf0
        void CmdReportDeadBody(GameData+PlayerInfo*NESTEDTYPE target) { return il2cpp::call<void(*)(PlayerControl*, GameData+PlayerInfo*NESTEDTYPE)>(0x6b8bb0)(this, target); } // 0x6b8bb0
        void RpcStartMeeting(GameData+PlayerInfo*NESTEDTYPE info) { return il2cpp::call<void(*)(PlayerControl*, GameData+PlayerInfo*NESTEDTYPE)>(0x6bea70)(this, info); } // 0x6bea70
        void CmdCheckMurder(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6b89a0)(this, target); } // 0x6b89a0
        void CmdCheckProtect(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6b8b00)(this, target); } // 0x6b8b00
        void RpcMurderPlayer(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6bd9d0)(this, target); } // 0x6bd9d0
        void RpcProtectPlayer(au::PlayerControl* target, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*, int32_t)>(0x6bdb70)(this, target, colorId); } // 0x6bdb70
        void RpcShapeshift(au::PlayerControl* target, bool shouldAnimate) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*, bool)>(0x6be9b0)(this, target, shouldAnimate); } // 0x6be9b0
        void RpcSyncSettings(cs::array<uint8_t>* optionsByteArray) { return il2cpp::call<void(*)(PlayerControl*, cs::array<uint8_t>*)>(0x6beb40)(this, optionsByteArray); } // 0x6beb40
        bool get_CanMove() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6c1bf0)(this); } // 0x6c1bf0
        bool get_IsKillTimerEnabled() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6c20f0)(this); } // 0x6c20f0
        GameData+PlayerOutfit*NESTEDTYPE get_CurrentOutfit() { return il2cpp::call<GameData+PlayerOutfit*NESTEDTYPE(*)(PlayerControl*)>(0x6c1f90)(this); } // 0x6c1f90
        au::PlayerOutfitType get_CurrentOutfitType() { return il2cpp::call<au::PlayerOutfitType(*)(PlayerControl*)>(0x2cc4d0)(this); } // 0x2cc4d0
        void set_CurrentOutfitType(au::PlayerOutfitType value) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerOutfitType)>(0x2cc4e0)(this, value); } // 0x2cc4e0
        float get_FlashlightAngle() { return il2cpp::call<float(*)(PlayerControl*)>(0x6c20e0)(this); } // 0x6c20e0
        void set_FlashlightAngle(float value) { return il2cpp::call<void(*)(PlayerControl*, float)>(0x6c22f0)(this, value); } // 0x6c22f0
        GameData+PlayerInfo*NESTEDTYPE get_Data() { return il2cpp::call<GameData+PlayerInfo*NESTEDTYPE(*)(PlayerControl*)>(0x6c2000)(this); } // 0x6c2000
        void SetKillTimer(float time) { return il2cpp::call<void(*)(PlayerControl*, float)>(0x6bf6e0)(this, time); } // 0x6bf6e0
        bool get_Visible() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6c22d0)(this); } // 0x6c22d0
        void set_Visible(bool value) { return il2cpp::call<void(*)(PlayerControl*, bool)>(0x6c2310)(this, value); } // 0x6c2310
        au::PlayerBodyTypes get_BodyType() { return il2cpp::call<au::PlayerBodyTypes(*)(PlayerControl*)>(0x6c1ba0)(this); } // 0x6c1ba0
        void Awake() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b78e0)(this); } // 0x6b78e0
        void OnEnable() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bc010)(this); } // 0x6bc010
        void OnDisable() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bbf20)(this); } // 0x6bbf20
        System::Collections::IEnumerator* Start() { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*)>(0x6c1110)(this); } // 0x6c1110
        System::Collections::IEnumerator* ClientInitialize() { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*)>(0x6b88a0)(this); } // 0x6b88a0
        void FixedUpdate() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b94b0)(this); } // 0x6b94b0
        void AnimateCustom(UnityEngine::AnimationClip* anim) { return il2cpp::call<void(*)(PlayerControl*, UnityEngine::AnimationClip*)>(0x6b78b0)(this, anim); } // 0x6b78b0
        void OnGameStart() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bc140)(this); } // 0x6bc140
        void OnGameEnd() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bc110)(this); } // 0x6bc110
        void UseClosest() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c1910)(this); } // 0x6c1910
        void TryPet() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c1280)(this); } // 0x6c1280
        void ReportClosest() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bcda0)(this); } // 0x6bcda0
        void PlayStepSound() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bc320)(this); } // 0x6bc320
        void SetScanner(bool on, uint8_t cnt) { return il2cpp::call<void(*)(PlayerControl*, bool, uint8_t)>(0x6c0610)(this, on, cnt); } // 0x6c0610
        UnityEngine::Vector2 GetTruePosition() { return il2cpp::call<UnityEngine::Vector2(*)(PlayerControl*)>(0x6ba4b0)(this); } // 0x6ba4b0
        void SetTasks(System::Collections::Generic::List<GameData+TaskInfoNESTEDTYPE>* tasks) { return il2cpp::call<void(*)(PlayerControl*, System::Collections::Generic::List<GameData+TaskInfoNESTEDTYPE>*)>(0x6c08d0)(this, tasks); } // 0x6c08d0
        System::Collections::IEnumerator* CoSetTasks(System::Collections::Generic::List<GameData+TaskInfoNESTEDTYPE>* tasks) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*, System::Collections::Generic::List<GameData+TaskInfoNESTEDTYPE>*)>(0x6b8c60)(this, tasks); } // 0x6b8c60
        void AddSystemTask(au::SystemTypes system) { return il2cpp::call<void(*)(PlayerControl*, au::SystemTypes)>(0x6b7380)(this, system); } // 0x6b7380
        void RemoveTask(au::PlayerTask* task) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerTask*)>(0x6bcc80)(this, task); } // 0x6bcc80
        void ClearTasks() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b8790)(this); } // 0x6b8790
        void Die(au::DeathReason reason, bool assignGhostRole) { return il2cpp::call<void(*)(PlayerControl*, au::DeathReason, bool)>(0x6b90b0)(this, reason, assignGhostRole); } // 0x6b90b0
        void Revive() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bd670)(this); } // 0x6bd670
        void OnClick() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bbd70)(this); } // 0x6bbd70
        void CheckSeekerHand_AnimEvent() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b8720)(this); } // 0x6b8720
        void PlayAnimation(uint8_t animType) { return il2cpp::call<void(*)(PlayerControl*, uint8_t)>(0x6bc290)(this, animType); } // 0x6bc290
        void CompleteTask(uint32_t idx) { return il2cpp::call<void(*)(PlayerControl*, uint32_t)>(0x6b8cc0)(this, idx); } // 0x6b8cc0
        bool AllTasksCompleted() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6b77c0)(this); } // 0x6b77c0
        bool MustCleanVent(int32_t ventId) { return il2cpp::call<bool(*)(PlayerControl*, int32_t)>(0x6bbb90)(this, ventId); } // 0x6bbb90
        void SetRole(AmongUs::GameOptions::RoleTypes role) { return il2cpp::call<void(*)(PlayerControl*, AmongUs::GameOptions::RoleTypes)>(0x6bfff0)(this, role); } // 0x6bfff0
        void Exiled() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b93f0)(this); } // 0x6b93f0
        void CheckName(cs::string* name) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6b80f0)(this, name); } // 0x6b80f0
        void SetName(cs::string* name, bool dontCensor) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, bool)>(0x6bf9b0)(this, name, dontCensor); } // 0x6bf9b0
        void CheckColor(uint8_t bodyColor) { return il2cpp::call<void(*)(PlayerControl*, uint8_t)>(0x6b7ae0)(this, bodyColor); } // 0x6b7ae0
        void SetHatAndVisorAlpha(float a) { return il2cpp::call<void(*)(PlayerControl*, float)>(0x6bf520)(this, a); } // 0x6bf520
        void SetColor(int32_t bodyColor) { return il2cpp::call<void(*)(PlayerControl*, int32_t)>(0x6bf2a0)(this, bodyColor); } // 0x6bf2a0
        void SetNamePlate(cs::string* namePlateId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6bf8e0)(this, namePlateId); } // 0x6bf8e0
        void SetVisor(cs::string* visorId, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6c0930)(this, visorId, colorId); } // 0x6c0930
        void SetLevel(uint32_t level) { return il2cpp::call<void(*)(PlayerControl*, uint32_t)>(0x6bf810)(this, level); } // 0x6bf810
        void SetSkin(cs::string* skinId, int32_t color) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6c07f0)(this, skinId, color); } // 0x6c07f0
        void SetHat(cs::string* hatId, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bf590)(this, hatId, colorId); } // 0x6bf590
        void SetPet(cs::string* petId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6bfe00)(this, petId); } // 0x6bfe00
        void SetPet(cs::string* petId, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bfd20)(this, petId, colorId); } // 0x6bfd20
        void SetPetPosition(UnityEngine::Vector3 newPosition) { return il2cpp::call<void(*)(PlayerControl*, UnityEngine::Vector3)>(0x6bfce0)(this, newPosition); } // 0x6bfce0
        au::PetBehaviour* GetPet() { return il2cpp::call<au::PetBehaviour*(*)(PlayerControl*)>(0x6ba490)(this); } // 0x6ba490
        System::Collections::IEnumerator* SetPetImage(au::PetData* pet, int32_t colorId, UnityEngine::SpriteRenderer* target) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*, au::PetData*, int32_t, UnityEngine::SpriteRenderer*)>(0x6bfc80)(this, pet, colorId, target); } // 0x6bfc80
        void SetPetImage(au::PetBehaviour* petPrefab, int32_t colorId, UnityEngine::SpriteRenderer* target) { return il2cpp::call<void(*)(PlayerControl*, au::PetBehaviour*, int32_t, UnityEngine::SpriteRenderer*)>(0x6bfac0)(this, petPrefab, colorId, target); } // 0x6bfac0
        System::Collections::IEnumerator* SetSkinImage(au::SkinData* skin, int32_t colorId, UnityEngine::SpriteRenderer* target) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*, au::SkinData*, int32_t, UnityEngine::SpriteRenderer*)>(0x6c0790)(this, skin, colorId, target); } // 0x6c0790
        void ReportDeadBody(GameData+PlayerInfo*NESTEDTYPE target) { return il2cpp::call<void(*)(PlayerControl*, GameData+PlayerInfo*NESTEDTYPE)>(0x6bcfc0)(this, target); } // 0x6bcfc0
        void StartMeeting(GameData+PlayerInfo*NESTEDTYPE target) { return il2cpp::call<void(*)(PlayerControl*, GameData+PlayerInfo*NESTEDTYPE)>(0x6c0fe0)(this, target); } // 0x6c0fe0
        void ResetForMeeting() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bd310)(this); } // 0x6bd310
        void CheckMurder(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6b7d20)(this, target); } // 0x6b7d20
        void MurderPlayer(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6bb180)(this, target); } // 0x6bb180
        void CheckProtect(au::PlayerControl* target) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*)>(0x6b83a0)(this, target); } // 0x6b83a0
        void ProtectPlayer(au::PlayerControl* target, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*, int32_t)>(0x6bc6e0)(this, target, colorId); } // 0x6bc6e0
        void SetPlayerMaterialColors(UnityEngine::Renderer* rend) { return il2cpp::call<void(*)(PlayerControl*, UnityEngine::Renderer*)>(0x6bff30)(this, rend); } // 0x6bff30
        void HideCursorTemporarily() { return il2cpp::call<void(*)(PlayerControl*)>(0x6baef0)(this); } // 0x6baef0
        void SetAppearanceFromSaveData() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bee00)(this); } // 0x6bee00
        void ToggleHighlight(bool active, au::RoleTeamTypes targeterTeam) { return il2cpp::call<void(*)(PlayerControl*, bool, au::RoleTeamTypes)>(0x6c1160)(this, active, targeterTeam); } // 0x6c1160
        void Shapeshift(au::PlayerControl* targetPlayer, bool animate) { return il2cpp::call<void(*)(PlayerControl*, au::PlayerControl*, bool)>(0x6c0a10)(this, targetPlayer, animate); } // 0x6c0a10
        System::Collections::IEnumerator* ScalePlayer(float targetScale, float duration) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*, float, float)>(0x6bed40)(this, targetScale, duration); } // 0x6bed40
        void RpcRevertShapeshift(bool shouldAnimate) { return il2cpp::call<void(*)(PlayerControl*, bool)>(0x6bdc30)(this, shouldAnimate); } // 0x6bdc30
        void RawSetName(cs::string* name) { return il2cpp::call<void(*)(PlayerControl*, cs::string*)>(0x6bc9b0)(this, name); } // 0x6bc9b0
        void RawSetColor(int32_t bodyColor) { return il2cpp::call<void(*)(PlayerControl*, int32_t)>(0x6bc8f0)(this, bodyColor); } // 0x6bc8f0
        void RawSetVisor(cs::string* visorId, int32_t color) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bcac0)(this, visorId, color); } // 0x6bcac0
        void RawSetSkin(cs::string* skinId, int32_t color) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bca90)(this, skinId, color); } // 0x6bca90
        void RawSetHat(cs::string* hatId, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bc920)(this, hatId, colorId); } // 0x6bc920
        void RawSetPet(cs::string* petId, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, cs::string*, int32_t)>(0x6bca10)(this, petId, colorId); } // 0x6bca10
        void ShowFailedMurder() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c0ef0)(this); } // 0x6c0ef0
        void RemoveProtection() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bcaf0)(this); } // 0x6bcaf0
        void TurnOnProtection(bool visible, int32_t colorId) { return il2cpp::call<void(*)(PlayerControl*, bool, int32_t)>(0x6c15d0)(this, visible, colorId); } // 0x6c15d0
        void SetColorBlindTag() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bf1a0)(this); } // 0x6bf1a0
        bool CanPet() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6b79f0)(this); } // 0x6b79f0
        void AdjustLighting() { return il2cpp::call<void(*)(PlayerControl*)>(0x6b75e0)(this); } // 0x6b75e0
        bool IsFlashlightEnabled() { return il2cpp::call<bool(*)(PlayerControl*)>(0x6bafa0)(this); } // 0x6bafa0
        void SetFlashlightInputMethod() { return il2cpp::call<void(*)(PlayerControl*)>(0x6bf380)(this); } // 0x6bf380
        System::Collections::IEnumerator* EnableRightJoystick(bool enabled) { return il2cpp::call<System::Collections::IEnumerator*(*)(PlayerControl*, bool)>(0x6b93a0)(this, enabled); } // 0x6b93a0
        void ctor() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c19f0)(this); } // 0x6c19f0
        void cctor() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c1990)(this); } // 0x6c1990
        void _RawSetPet_b__164_0() { return il2cpp::call<void(*)(PlayerControl*)>(0x6c18f0)(this); } // 0x6c18f0

    };

}
namespace ark {

        template<> struct meta_statics<::PlayerControl> {
        au::PlayerControl* LocalPlayer; // 0x0
        System::Collections::Generic::List<au::PlayerControl>* AllPlayerControls; // 0x4
        };

}



au::PlayerControl* ::PlayerControl::LocalPlayer() { return statics()->LocalPlayer; }; // 0x0

System::Collections::Generic::List<au::PlayerControl>* ::PlayerControl::AllPlayerControls() { return statics()->AllPlayerControls; }; // 0x4
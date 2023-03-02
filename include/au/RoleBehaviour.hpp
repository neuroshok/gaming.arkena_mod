#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <au/StringNames.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/RoleTeamTypes.hpp>
#include <au/AbilityButtonSettings.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/PlayerControl.hpp>
#include <au/AbilityButton.hpp>
#include <au/System/Collections/Generic/List.hpp>

namespace 
{
    struct RoleBehaviour : ark::meta<RoleBehaviour, UnityEngine::MonoBehaviour>
    {
        static System::Collections::Generic::List<au::PlayerControl>* tempPlayerList(); // 0x0
        AmongUs::GameOptions::RoleTypes Role; // 0xc
        au::StringNames StringName; // 0x10
        au::StringNames BlurbName; // 0x14
        au::StringNames BlurbNameMed; // 0x18
        au::StringNames BlurbNameLong; // 0x1c
        UnityEngine::Color NameColor; // 0x20
        bool TasksCountTowardProgress; // 0x30
        bool CanUseKillButton; // 0x31
        bool CanBeKilled; // 0x32
        bool CanVent; // 0x33
        bool AffectedByLightAffectors; // 0x34
        int32_t MaxCount; // 0x38
        au::RoleTeamTypes TeamType; // 0x3c
        au::AbilityButtonSettings* Ability; // 0x40
        AmongUs::GameOptions::RoleTypes DefaultGhostRole; // 0x44
        UnityEngine::AudioClip* UseSound; // 0x48
        UnityEngine::AudioClip* IntroSound; // 0x4c
        au::PlayerControl* Player; // 0x50
        au::AbilityButton* buttonManager; // 0x54

        bool get_IsImpostor() { return il2cpp::call<bool(*)(RoleBehaviour*)>(0x573590)(this); } // 0x573590
        cs::string* get_NiceName() { return il2cpp::call<cs::string*(*)(RoleBehaviour*)>(0x5735c0)(this); } // 0x5735c0
        cs::string* get_Blurb() { return il2cpp::call<cs::string*(*)(RoleBehaviour*)>(0x5733f0)(this); } // 0x5733f0
        cs::string* get_BlurbMed() { return il2cpp::call<cs::string*(*)(RoleBehaviour*)>(0x573380)(this); } // 0x573380
        cs::string* get_BlurbLong() { return il2cpp::call<cs::string*(*)(RoleBehaviour*)>(0x573310)(this); } // 0x573310
        bool get_IsSimpleRole() { return il2cpp::call<bool(*)(RoleBehaviour*)>(0x5735a0)(this); } // 0x5735a0
        UnityEngine::Color get_TeamColor() { return il2cpp::call<UnityEngine::Color(*)(RoleBehaviour*)>(0x573630)(this); } // 0x573630
        bool get_CommsSabotaged() { return il2cpp::call<bool(*)(RoleBehaviour*)>(0x573460)(this); } // 0x573460
        void InitializeAbilityButton() { return il2cpp::call<void(*)(RoleBehaviour*)>(0x572c30)(this); } // 0x572c30
        void SetAbilityUsesRemaining(int32_t num) { return il2cpp::call<void(*)(RoleBehaviour*, int32_t)>(0x573220)(this, num); } // 0x573220
        System::Collections::Generic::List<au::PlayerControl>* GetTempPlayerList() { return il2cpp::call<System::Collections::Generic::List<au::PlayerControl>*(*)(RoleBehaviour*)>(0x572be0)(this); } // 0x572be0
        System::Collections::Generic::List<au::PlayerControl>* GetPlayersInAbilityRangeSorted(System::Collections::Generic::List<au::PlayerControl>* outputList) { return il2cpp::call<System::Collections::Generic::List<au::PlayerControl>*(*)(RoleBehaviour*, System::Collections::Generic::List<au::PlayerControl>*)>(0x572bc0)(this, outputList); } // 0x572bc0
        System::Collections::Generic::List<au::PlayerControl>* GetPlayersInAbilityRangeSorted(System::Collections::Generic::List<au::PlayerControl>* outputList, bool ignoreColliders) { return il2cpp::call<System::Collections::Generic::List<au::PlayerControl>*(*)(RoleBehaviour*, System::Collections::Generic::List<au::PlayerControl>*, bool)>(0x572830)(this, outputList, ignoreColliders); } // 0x572830
        void ctor() { return il2cpp::call<void(*)(RoleBehaviour*)>(0x5732b0)(this); } // 0x5732b0
        void cctor() { return il2cpp::call<void(*)(RoleBehaviour*)>(0x573250)(this); } // 0x573250

    };

}
namespace ark {

        template<> struct meta_statics<::RoleBehaviour> {
        System::Collections::Generic::List<au::PlayerControl>* tempPlayerList; // 0x0
        };

}



System::Collections::Generic::List<au::PlayerControl>* ::RoleBehaviour::tempPlayerList() { return statics()->tempPlayerList; }; // 0x0
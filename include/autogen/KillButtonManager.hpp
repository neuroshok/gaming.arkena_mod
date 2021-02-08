#pragma once

#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Vector2.hpp>

// MLPJGKEACMM
struct KillButtonManager : ::UnityEngine::MonoBehaviour
{
    PlayerControl* CurrentTarget; // 0xC
	void* /*SpriteRenderer*/ renderer; // 0x10
	void* TimerText; // 0x14
	bool isCoolingDown; // 0x18
	bool isActive; // 0x19
	UnityEngine::Vector2 FFHAJFJBHHN; // 0x1C

    struct StaticFields { KillButtonManager* instance; };
    static KillButtonManager* instance() { return get_class()->statics()->instance; }

    static Class<KillButtonManager>* get_class() { return Class<KillButtonManager>::find("MLPJGKEACMM"); }

    void PerformKill() { get_method<void (*)(KillButtonManager*)>("PerformKill")(this); }

    void SetCoolDown(float a, float b) { get_method<void (*)(KillButtonManager*, float, float)>("SetCoolDown")(this, a, b); }


    //void SetTarget(PlayerControl* playerControl) { get_method<void (*)(KillButtonManager*, PlayerControl*)>("SetTarget")(this, playerControl); }
};

template<> inline const char* get_method_name<&KillButtonManager::PerformKill>() { return "PerformKill"; }
template<> inline const char* get_method_name<&KillButtonManager::SetCoolDown>() { return "SetCoolDown"; }
#pragma once

#include <autogen/UnityEngine/MonoBehaviour.hpp>

struct KillButtonManager : ::UnityEngine::MonoBehaviour
{
    PlayerControl* CurrentTarget; // 0xC

    struct StaticFields { PlayerControl* instance; };
    static PlayerControl* instance() { return get_class()->statics()->instance; }

    static Class<PlayerControl>* get_class() { return Class<PlayerControl>::find("MLPJGKEACMM"); }

    void PerformKill() { get_method<void (*)(KillButtonManager*)>("PerformKill")(this); }

    void SetCoolDown(float a, float b) { get_method<void (*)(KillButtonManager*, float, float)>("SetCoolDown")(this, a, b); }


    //void SetTarget(PlayerControl* playerControl) { get_method<void (*)(KillButtonManager*, PlayerControl*)>("SetTarget")(this, playerControl); }
};

template<> inline const char* get_method_name<&KillButtonManager::PerformKill>() { return "PerformKill"; }
template<> inline const char* get_method_name<&KillButtonManager::SetCoolDown>() { return "SetCoolDown"; }
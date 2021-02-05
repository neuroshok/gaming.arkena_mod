#pragma once

#include <autogen/UnityEngine/MonoBehaviour.hpp>

struct KillButtonManager : ::UnityEngine::MonoBehaviour {

    static Class<PlayerControl>* get_class() { return Class<PlayerControl>::find("MLPJGKEACMM"); }

    void PerformKill()
    {
        get_method<void (*)(KillButtonManager*)>("PerformKill")(this);
    }

    void SetTarget(PlayerControl* playerControl) { get_method<void (*)(KillButtonManager*, PlayerControl*)>("SetTarget")(this, playerControl); }
};

template<> inline const char* get_method_name<&KillButtonManager::PerformKill>() { return "PerformKill"; }
template<> inline const char* get_method_name<&KillButtonManager::SetTarget>() { return "SetTarget"; }
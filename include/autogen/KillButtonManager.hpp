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

    void PerformKill() {}

    void SetCoolDown(float a, float b) {  }


    //void SetTarget(PlayerControl* playerControl) { get_method<void (*)(KillButtonManager*, PlayerControl*)>("SetTarget")(this, playerControl); }
};

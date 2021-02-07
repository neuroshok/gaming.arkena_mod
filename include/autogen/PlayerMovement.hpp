#pragma once

#include <autogen/InnerNet/InnerNetClient.hpp>
#include <autogen/UnityEngine/Vector2.hpp>

#include <autogen/PlayerControl.hpp>

struct PlayerMovement : InnerNet::InnerNetObject {
    float Speed; // 0x24
	float GhostSpeed; // 0x28
	//Rigidbody2D OAGKHBAFDDE; // 0x2C
	//SpriteAnim ECJLEFOJLGI; // 0x30
	//SpriteRenderer CNJAHEAJNAO; // 0x34
	//PlayerControl* GLPINCNEBDJ; // 0x38
    /*
	AnimationClip RunAnim; // 0x3C
	public AnimationClip IdleAnim; // 0x40
	public AnimationClip GhostIdleAnim; // 0x44
	public AnimationClip EnterVentAnim; // 0x48
	public AnimationClip ExitVentAnim; // 0x4C
	public AnimationClip SpawnAnim; // 0x50
	public ONBHCKMBBKI Skin; // 0x54
     */

    struct StaticFields { PlayerMovement* instance; };
    static PlayerMovement* instance() { return get_class()->statics()->instance; }

    static Class<PlayerMovement>* get_class() { return Class<PlayerMovement>::find("LIMNONMAAFA"); }


    void WalkPlayerTo(UnityEngine::Vector2 worldPos, float tolerance)
    {
        get_method<void(*)(PlayerMovement*, UnityEngine::Vector2, float)>("WalkPlayerTo")(this, worldPos, tolerance);
    }

};

template<> inline const char* get_method_name<&PlayerMovement::WalkPlayerTo>() { return "WalkPlayerTo"; }


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/PetData.hpp>
#include <au/PlayerControl.hpp>
#include <au/PowerTools/SpriteAnim.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Rigidbody2D.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/AnimationClip.hpp>

namespace 
{
    struct PetBehaviour : ark::meta<PetBehaviour, UnityEngine::MonoBehaviour>
    {
        au::PetData* Data; // 0xc
        au::PlayerControl* Source; // 0x10
        float YOffset; // 0x14
        PowerTools::SpriteAnim* animator; // 0x18
        UnityEngine::SpriteRenderer* rend; // 0x1c
        UnityEngine::SpriteRenderer* shadowRend; // 0x20
        UnityEngine::Rigidbody2D* body; // 0x24
        UnityEngine::Collider2D* Collider; // 0x28
        UnityEngine::Transform* PettingHandPosition; // 0x2c
        UnityEngine::AnimationClip* idleClip; // 0x30
        UnityEngine::AnimationClip* sadClip; // 0x34
        UnityEngine::AnimationClip* scaredClip; // 0x38
        UnityEngine::AnimationClip* walkClip; // 0x3c
        UnityEngine::AnimationClip* petClip; // 0x40
        bool beingPet; // 0x44

        UnityEngine::Vector3 get_PettingPosition() { return il2cpp::call<UnityEngine::Vector3(*)(PetBehaviour*)>(0x6ae5c0)(this); } // 0x6ae5c0
        void set_Visible(bool value) { return il2cpp::call<void(*)(PetBehaviour*, bool)>(0x6ae680)(this, value); } // 0x6ae680
        bool get_FlipX() { return il2cpp::call<bool(*)(PetBehaviour*)>(0x6ae590)(this); } // 0x6ae590
        void set_FlipX(bool value) { return il2cpp::call<void(*)(PetBehaviour*, bool)>(0x6ae650)(this, value); } // 0x6ae650
        void SetColor(int32_t colorId) { return il2cpp::call<void(*)(PetBehaviour*, int32_t)>(0x6adf10)(this, colorId); } // 0x6adf10
        void SetMourning() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae040)(this); } // 0x6ae040
        void SetIdle() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae010)(this); } // 0x6ae010
        void SetScared() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae0a0)(this); } // 0x6ae0a0
        void PrepareForUI() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6adea0)(this); } // 0x6adea0
        void Start() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae100)(this); } // 0x6ae100
        void Update() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae130)(this); } // 0x6ae130
        void LateUpdate() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ade10)(this); } // 0x6ade10
        void SetGettingPet(bool petting, UnityEngine::Vector2 petPos) { return il2cpp::call<void(*)(PetBehaviour*, bool, UnityEngine::Vector2)>(0x6adf70)(this, petting, petPos); } // 0x6adf70
        void StartPetAnim() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae0d0)(this); } // 0x6ae0d0
        UnityEngine::Vector2 GetTruePosition() { return il2cpp::call<UnityEngine::Vector2(*)(PetBehaviour*)>(0x6add70)(this); } // 0x6add70
        void ctor() { return il2cpp::call<void(*)(PetBehaviour*)>(0x6ae570)(this); } // 0x6ae570

    };

}
namespace ark {

        template<> struct meta_statics<::PetBehaviour> {
        };

}


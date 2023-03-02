#pragma once
#include <ark/class.hpp>

#include <au/InnerNet/InnerNetObject.hpp>
#include <au/PlayerControl.hpp>
#include <au/UnityEngine/Rigidbody2D.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace 
{
    struct CustomNetworkTransform : ark::meta<CustomNetworkTransform, InnerNet::InnerNetObject>
    {
        float sendInterval; // 0x24
        float snapThreshold; // 0x28
        float interpolateMovement; // 0x2c
        au::PlayerControl* myPlayer; // 0x30
        UnityEngine::Rigidbody2D* body; // 0x34
        UnityEngine::Vector2 targetSyncPosition; // 0x38
        UnityEngine::Vector2 targetSyncVelocity; // 0x40
        uint16_t lastSequenceId; // 0x48
        UnityEngine::Vector2 prevPosSent; // 0x4c
        UnityEngine::Vector2 prevVelSent; // 0x54

        void Awake() { return il2cpp::call<void(*)(CustomNetworkTransform*)>(0x5bb670)(this); } // 0x5bb670
        void OnEnable() { return il2cpp::call<void(*)(CustomNetworkTransform*)>(0x5bc1a0)(this); } // 0x5bc1a0
        void Halt() { return il2cpp::call<void(*)(CustomNetworkTransform*)>(0x5bbed0)(this); } // 0x5bbed0
        void RpcSnapTo(UnityEngine::Vector2 position) { return il2cpp::call<void(*)(CustomNetworkTransform*, UnityEngine::Vector2)>(0x5bc250)(this, position); } // 0x5bc250
        void SnapTo(UnityEngine::Vector2 position) { return il2cpp::call<void(*)(CustomNetworkTransform*, UnityEngine::Vector2)>(0x5bc510)(this, position); } // 0x5bc510
        void SnapTo(UnityEngine::Vector2 position, uint16_t minSid) { return il2cpp::call<void(*)(CustomNetworkTransform*, UnityEngine::Vector2, uint16_t)>(0x5bc540)(this, position, minSid); } // 0x5bc540
        void FixedUpdate() { return il2cpp::call<void(*)(CustomNetworkTransform*)>(0x5bbaf0)(this); } // 0x5bbaf0
        bool HasMoved() { return il2cpp::call<bool(*)(CustomNetworkTransform*)>(0x5bbff0)(this); } // 0x5bbff0
        void ctor() { return il2cpp::call<void(*)(CustomNetworkTransform*)>(0x5bc690)(this); } // 0x5bc690

    };

}
namespace ark {

        template<> struct meta_statics<::CustomNetworkTransform> {
        };

}


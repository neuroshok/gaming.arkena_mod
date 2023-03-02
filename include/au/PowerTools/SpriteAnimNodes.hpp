#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>

namespace PowerTools
{
    struct SpriteAnimNodes : ark::meta<SpriteAnimNodes, UnityEngine::MonoBehaviour>
    {
        static int32_t NUM_NODES(); // 0x0
        UnityEngine::Vector2 m_node0; // 0xc
        UnityEngine::Vector2 m_node1; // 0x14
        UnityEngine::Vector2 m_node2; // 0x1c
        UnityEngine::Vector2 m_node3; // 0x24
        UnityEngine::Vector2 m_node4; // 0x2c
        UnityEngine::Vector2 m_node5; // 0x34
        UnityEngine::Vector2 m_node6; // 0x3c
        UnityEngine::Vector2 m_node7; // 0x44
        UnityEngine::Vector2 m_node8; // 0x4c
        UnityEngine::Vector2 m_node9; // 0x54
        float m_ang0; // 0x5c
        float m_ang1; // 0x60
        float m_ang2; // 0x64
        float m_ang3; // 0x68
        float m_ang4; // 0x6c
        float m_ang5; // 0x70
        float m_ang6; // 0x74
        float m_ang7; // 0x78
        float m_ang8; // 0x7c
        float m_ang9; // 0x80
        UnityEngine::SpriteRenderer* m_spriteRenderer; // 0x84

        UnityEngine::Vector3 GetPosition(int32_t nodeId, bool ignoredPivot) { return il2cpp::call<UnityEngine::Vector3(*)(SpriteAnimNodes*, int32_t, bool)>(0x6cb590)(this, nodeId, ignoredPivot); } // 0x6cb590
        UnityEngine::Vector3 GetLocalPosition(int32_t nodeId, bool ignoredPivot) { return il2cpp::call<UnityEngine::Vector3(*)(SpriteAnimNodes*, int32_t, bool)>(0x6cafe0)(this, nodeId, ignoredPivot); } // 0x6cafe0
        float GetAngle(int32_t nodeId) { return il2cpp::call<float(*)(SpriteAnimNodes*, int32_t)>(0x6cadd0)(this, nodeId); } // 0x6cadd0
        UnityEngine::Vector2 GetPositionRaw(int32_t nodeId) { return il2cpp::call<UnityEngine::Vector2(*)(SpriteAnimNodes*, int32_t)>(0x6cb3f0)(this, nodeId); } // 0x6cb3f0
        float GetAngleRaw(int32_t nodeId) { return il2cpp::call<float(*)(SpriteAnimNodes*, int32_t)>(0x6cad30)(this, nodeId); } // 0x6cad30
        void Reset() { return il2cpp::call<void(*)(SpriteAnimNodes*)>(0x6cb840)(this); } // 0x6cb840
        void ctor() { return il2cpp::call<void(*)(SpriteAnimNodes*)>(0x6cba20)(this); } // 0x6cba20
        void cctor() { return il2cpp::call<void(*)(SpriteAnimNodes*)>(0x6cb9f0)(this); } // 0x6cb9f0

    };

}
namespace ark {

        template<> struct meta_statics<PowerTools::SpriteAnimNodes> {
        int32_t NUM_NODES; // 0x0
        };

}



int32_t PowerTools::SpriteAnimNodes::NUM_NODES() { return statics()->NUM_NODES; }; // 0x0
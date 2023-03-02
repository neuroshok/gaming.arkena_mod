#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/LayerMask.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>

namespace UnityEngine
{
    struct ContactFilter2D : ark::meta<ContactFilter2D>
    {
        bool useTriggers; // 0x8
        bool useLayerMask; // 0x9
        bool useDepth; // 0xa
        bool useOutsideDepth; // 0xb
        bool useNormalAngle; // 0xc
        bool useOutsideNormalAngle; // 0xd
        UnityEngine::LayerMask layerMask; // 0x10
        float minDepth; // 0x14
        float maxDepth; // 0x18
        float minNormalAngle; // 0x1c
        float maxNormalAngle; // 0x20

        UnityEngine::ContactFilter2D NoFilter() { return il2cpp::call<UnityEngine::ContactFilter2D(*)(ContactFilter2D*)>(0x1b93a0)(this); } // 0x1b93a0
        void CheckConsistency() { return il2cpp::call<void(*)(ContactFilter2D*)>(0x1b9370)(this); } // 0x1b9370
        void SetLayerMask(UnityEngine::LayerMask layerMask) { return il2cpp::call<void(*)(ContactFilter2D*, UnityEngine::LayerMask)>(0x1b9430)(this, layerMask); } // 0x1b9430
        void SetDepth(float minDepth, float maxDepth) { return il2cpp::call<void(*)(ContactFilter2D*, float, float)>(0x1b93e0)(this, minDepth, maxDepth); } // 0x1b93e0
        UnityEngine::ContactFilter2D CreateLegacyFilter(int32_t layerMask, float minDepth, float maxDepth) { return il2cpp::call<UnityEngine::ContactFilter2D(*)(ContactFilter2D*, int32_t, float, float)>(0x1aabb70)(this, layerMask, minDepth, maxDepth); } // 0x1aabb70
        void CheckConsistency_Injected(UnityEngine::ContactFilter2D _unity_self) { return il2cpp::call<void(*)(ContactFilter2D*, UnityEngine::ContactFilter2D)>(0x1aabb40)(this, _unity_self); } // 0x1aabb40

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::ContactFilter2D> {
        };

}


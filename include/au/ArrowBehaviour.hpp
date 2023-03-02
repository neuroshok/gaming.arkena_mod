#pragma once
#include <ark/class.hpp>

#include <au/PoolableBehavior.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Vector2.hpp>

namespace 
{
    struct ArrowBehaviour : ark::meta<ArrowBehaviour, au::PoolableBehavior>
    {
        UnityEngine::Vector3 target; // 0x14
        float perc; // 0x20
        float MaxScale; // 0x24
        float minDistanceToShowArrow; // 0x28
        UnityEngine::SpriteRenderer* image; // 0x2c

        void Update() { return il2cpp::call<void(*)(ArrowBehaviour*)>(0x71e280)(this); } // 0x71e280
        bool Between(float value, float min, float max) { return il2cpp::call<bool(*)(ArrowBehaviour*, float, float, float)>(0x71daf0)(this, value, min, max); } // 0x71daf0
        void DistancedBehaviour(UnityEngine::Vector2 vpPoint, UnityEngine::Vector2 del, float delLen, UnityEngine::Camera* cam) { return il2cpp::call<void(*)(ArrowBehaviour*, UnityEngine::Vector2, UnityEngine::Vector2, float, UnityEngine::Camera*)>(0x71dc30)(this, vpPoint, del, delLen, cam); } // 0x71dc30
        void ctor() { return il2cpp::call<void(*)(ArrowBehaviour*)>(0x71e2a0)(this); } // 0x71e2a0

    };

}
namespace ark {

        template<> struct meta_statics<::ArrowBehaviour> {
        };

}


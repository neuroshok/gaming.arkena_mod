#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/TrackedReference.hpp>

namespace UnityEngine
{
    struct AnimationState : ark::meta<AnimationState, UnityEngine::TrackedReference>
    {


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimationState> {
        };

}


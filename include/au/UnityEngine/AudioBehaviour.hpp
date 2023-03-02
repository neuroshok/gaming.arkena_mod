#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>

namespace UnityEngine
{
    struct AudioBehaviour : ark::meta<AudioBehaviour, UnityEngine::Behaviour>
    {

        void ctor() { return il2cpp::call<void(*)(AudioBehaviour*)>(0xee3f90)(this); } // 0xee3f90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AudioBehaviour> {
        };

}


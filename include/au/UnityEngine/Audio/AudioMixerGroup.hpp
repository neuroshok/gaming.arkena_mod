#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>

namespace UnityEngine::Audio
{
    struct AudioMixerGroup : ark::meta<AudioMixerGroup, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(AudioMixerGroup*)>(0x1ac94a0)(this); } // 0x1ac94a0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Audio::AudioMixerGroup> {
        };

}


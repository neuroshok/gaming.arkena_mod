#pragma once
#include <ark/class.hpp>

#include <cs/string.hpp>

namespace UnityEngine
{
    struct AnimatorStateInfo : ark::meta<AnimatorStateInfo>
    {
        int32_t m_Name; // 0x8
        int32_t m_Path; // 0xc
        int32_t m_FullPath; // 0x10
        float m_NormalizedTime; // 0x14
        float m_Length; // 0x18
        float m_Speed; // 0x1c
        float m_SpeedMultiplier; // 0x20
        int32_t m_Tag; // 0x24
        int32_t m_Loop; // 0x28

        bool IsName(cs::string* name) { return il2cpp::call<bool(*)(AnimatorStateInfo*, cs::string*)>(0x1b75f0)(this, name); } // 0x1b75f0
        float get_normalizedTime() { return il2cpp::call<float(*)(AnimatorStateInfo*)>(0x50d50)(this); } // 0x50d50

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimatorStateInfo> {
        };

}


#pragma once
#include <ark/class.hpp>


namespace UnityEngine
{
    struct AnimatorClipInfo : ark::meta<AnimatorClipInfo>
    {
        int32_t m_ClipInstanceID; // 0x8
        float m_Weight; // 0xc


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AnimatorClipInfo> {
        };

}


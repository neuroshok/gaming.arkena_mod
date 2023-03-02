#pragma once
#include <ark/class.hpp>


namespace UnityEngine::Playables
{
    struct PlayableGraph : ark::meta<PlayableGraph>
    {
        int m_Handle; // 0x8
        uint32_t m_Version; // 0xc


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Playables::PlayableGraph> {
        };

}


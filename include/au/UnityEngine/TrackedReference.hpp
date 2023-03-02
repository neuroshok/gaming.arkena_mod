#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>

namespace UnityEngine
{
    struct TrackedReference : ark::meta<TrackedReference, il2cpp::Il2CppObject>
    {
        int m_Ptr; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::TrackedReference> {
        };

}


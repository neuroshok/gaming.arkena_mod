#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/YieldInstruction.hpp>

namespace UnityEngine
{
    struct Coroutine : ark::meta<Coroutine, UnityEngine::YieldInstruction>
    {
        int m_Ptr; // 0x8

        void ctor() { return il2cpp::call<void(*)(Coroutine*)>(0x2cdfc0)(this); } // 0x2cdfc0
        void ReleaseCoroutine(int ptr) { return il2cpp::call<void(*)(Coroutine*, int)>(0xf56410)(this, ptr); } // 0xf56410

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Coroutine> {
        };

}


#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector2.hpp>

namespace TMPro
{
    struct Extents : ark::meta<Extents>
    {
        static TMPro::Extents zero(); // 0x0
        static TMPro::Extents uninitialized(); // 0x10
        UnityEngine::Vector2 min; // 0x8
        UnityEngine::Vector2 max; // 0x10

        void ctor(UnityEngine::Vector2 min, UnityEngine::Vector2 max) { return il2cpp::call<void(*)(Extents*, UnityEngine::Vector2, UnityEngine::Vector2)>(0xbd010)(this, min, max); } // 0xbd010
        void cctor() { return il2cpp::call<void(*)(Extents*)>(0xa3a140)(this); } // 0xa3a140

    };

}
namespace ark {

        template<> struct meta_statics<TMPro::Extents> {
        TMPro::Extents zero; // 0x0
        TMPro::Extents uninitialized; // 0x10
        };

}



TMPro::Extents TMPro::Extents::zero() { return statics()->zero; }; // 0x0

TMPro::Extents TMPro::Extents::uninitialized() { return statics()->uninitialized; }; // 0x10
#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Bounds.hpp>

namespace UnityEngine
{
    struct Bounds : ark::meta<Bounds>
    {
        UnityEngine::Vector3 m_Center; // 0x8
        UnityEngine::Vector3 m_Extents; // 0x14

        void ctor(UnityEngine::Vector3 center, UnityEngine::Vector3 size) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x14e650)(this, center, size); } // 0x14e650
        UnityEngine::Vector3 get_center() { return il2cpp::call<UnityEngine::Vector3(*)(Bounds*)>(0x86cb0)(this); } // 0x86cb0
        void set_center(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3)>(0xb5aa0)(this, value); } // 0xb5aa0
        UnityEngine::Vector3 get_size() { return il2cpp::call<UnityEngine::Vector3(*)(Bounds*)>(0x14e7c0)(this); } // 0x14e7c0
        void set_size(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3)>(0x14e850)(this, value); } // 0x14e850
        UnityEngine::Vector3 get_extents() { return il2cpp::call<UnityEngine::Vector3(*)(Bounds*)>(0x1009e0)(this); } // 0x1009e0
        void set_extents(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3)>(0x14e830)(this, value); } // 0x14e830
        UnityEngine::Vector3 get_min() { return il2cpp::call<UnityEngine::Vector3(*)(Bounds*)>(0x14e730)(this); } // 0x14e730
        UnityEngine::Vector3 get_max() { return il2cpp::call<UnityEngine::Vector3(*)(Bounds*)>(0x14e6a0)(this); } // 0x14e6a0
        bool op_Equality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) { return il2cpp::call<bool(*)(Bounds*, UnityEngine::Bounds, UnityEngine::Bounds)>(0xf4f210)(this, lhs, rhs); } // 0xf4f210
        bool op_Inequality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) { return il2cpp::call<bool(*)(Bounds*, UnityEngine::Bounds, UnityEngine::Bounds)>(0xf4f280)(this, lhs, rhs); } // 0xf4f280
        void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3, UnityEngine::Vector3)>(0x14e540)(this, min, max); } // 0x14e540
        void Encapsulate(UnityEngine::Vector3 point) { return il2cpp::call<void(*)(Bounds*, UnityEngine::Vector3)>(0x14e2b0)(this, point); } // 0x14e2b0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Bounds> {
        };

}


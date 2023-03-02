#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Bounds.hpp>

namespace UnityEngine
{
    struct Collider2D : ark::meta<Collider2D, UnityEngine::Behaviour>
    {

        bool get_isTrigger() { return il2cpp::call<bool(*)(Collider2D*)>(0x1aaba10)(this); } // 0x1aaba10
        void set_isTrigger(bool value) { return il2cpp::call<void(*)(Collider2D*, bool)>(0x1aabab0)(this, value); } // 0x1aabab0
        UnityEngine::Vector2 get_offset() { return il2cpp::call<UnityEngine::Vector2(*)(Collider2D*)>(0x1aaba70)(this); } // 0x1aaba70
        void set_offset(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Collider2D*, UnityEngine::Vector2)>(0x1aabb10)(this, value); } // 0x1aabb10
        UnityEngine::Rigidbody2D* get_attachedRigidbody() { return il2cpp::call<UnityEngine::Rigidbody2D*(*)(Collider2D*)>(0x1aab970)(this); } // 0x1aab970
        UnityEngine::Bounds get_bounds() { return il2cpp::call<UnityEngine::Bounds(*)(Collider2D*)>(0x1aab9d0)(this); } // 0x1aab9d0
        bool IsTouching(UnityEngine::Collider2D* collider) { return il2cpp::call<bool(*)(Collider2D*, UnityEngine::Collider2D*)>(0x1aab890)(this, collider); } // 0x1aab890
        bool OverlapPoint(UnityEngine::Vector2 point) { return il2cpp::call<bool(*)(Collider2D*, UnityEngine::Vector2)>(0x1aab940)(this, point); } // 0x1aab940
        int32_t OverlapCollider(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Collider2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::Collider2D>*)>(0x1aab8c0)(this, contactFilter, results); } // 0x1aab8c0
        int32_t Cast(UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::RaycastHit2D>* results, float distance) { return il2cpp::call<int32_t(*)(Collider2D*, UnityEngine::Vector2, UnityEngine::ContactFilter2D, cs::array<UnityEngine::RaycastHit2D>*, float)>(0x1aab820)(this, direction, contactFilter, results, distance); } // 0x1aab820
        int32_t CastArray_Internal(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, bool ignoreSiblingColliders, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Collider2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, bool, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aab7d0)(this, direction, distance, contactFilter, ignoreSiblingColliders, results); } // 0x1aab7d0
        void ctor() { return il2cpp::call<void(*)(Collider2D*)>(0xee3f90)(this); } // 0xee3f90
        void get_offset_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Collider2D*, UnityEngine::Vector2)>(0x1aaba40)(this, ret); } // 0x1aaba40
        void set_offset_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Collider2D*, UnityEngine::Vector2)>(0x1aabae0)(this, value); } // 0x1aabae0
        void get_bounds_Injected(UnityEngine::Bounds ret) { return il2cpp::call<void(*)(Collider2D*, UnityEngine::Bounds)>(0x1aab9a0)(this, ret); } // 0x1aab9a0
        bool OverlapPoint_Injected(UnityEngine::Vector2 point) { return il2cpp::call<bool(*)(Collider2D*, UnityEngine::Vector2)>(0x1aab910)(this, point); } // 0x1aab910
        int32_t CastArray_Internal_Injected(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, bool ignoreSiblingColliders, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Collider2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, bool, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aab790)(this, direction, distance, contactFilter, ignoreSiblingColliders, results); } // 0x1aab790

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Collider2D> {
        };

}


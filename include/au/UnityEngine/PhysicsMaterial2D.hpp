#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/PhysicsMaterial2D.hpp>

namespace UnityEngine
{
    struct PhysicsMaterial2D : ark::meta<PhysicsMaterial2D, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(PhysicsMaterial2D*)>(0x1aadae0)(this); } // 0x1aadae0
        void ctor(cs::string* name) { return il2cpp::call<void(*)(PhysicsMaterial2D*, cs::string*)>(0x1aadb50)(this, name); } // 0x1aadb50
        void Create_Internal(UnityEngine::PhysicsMaterial2D* scriptMaterial, cs::string* name) { return il2cpp::call<void(*)(PhysicsMaterial2D*, UnityEngine::PhysicsMaterial2D*, cs::string*)>(0x1aadab0)(this, scriptMaterial, name); } // 0x1aadab0
        float get_bounciness() { return il2cpp::call<float(*)(PhysicsMaterial2D*)>(0x1aadbd0)(this); } // 0x1aadbd0
        void set_bounciness(float value) { return il2cpp::call<void(*)(PhysicsMaterial2D*, float)>(0x1aadc30)(this, value); } // 0x1aadc30
        float get_friction() { return il2cpp::call<float(*)(PhysicsMaterial2D*)>(0x1aadc00)(this); } // 0x1aadc00
        void set_friction(float value) { return il2cpp::call<void(*)(PhysicsMaterial2D*, float)>(0x1aadc70)(this, value); } // 0x1aadc70

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::PhysicsMaterial2D> {
        };

}


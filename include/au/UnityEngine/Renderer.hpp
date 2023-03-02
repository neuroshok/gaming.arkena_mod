#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/MaterialPropertyBlock.hpp>
#include <au/UnityEngine/Rendering/ShadowCastingMode.hpp>
#include <au/UnityEngine/Bounds.hpp>

namespace UnityEngine
{
    struct Renderer : ark::meta<Renderer, UnityEngine::Component>
    {

        UnityEngine::Bounds get_bounds() { return il2cpp::call<UnityEngine::Bounds(*)(Renderer*)>(0xee3fd0)(this); } // 0xee3fd0
        UnityEngine::Material* GetMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Renderer*)>(0xee3ea0)(this); } // 0xee3ea0
        UnityEngine::Material* GetSharedMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Renderer*)>(0xee3f00)(this); } // 0xee3f00
        void SetMaterial(UnityEngine::Material* m) { return il2cpp::call<void(*)(Renderer*, UnityEngine::Material*)>(0xee3f60)(this, m); } // 0xee3f60
        void Internal_SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return il2cpp::call<void(*)(Renderer*, UnityEngine::MaterialPropertyBlock*)>(0xee3f30)(this, properties); } // 0xee3f30
        void Internal_GetPropertyBlock(UnityEngine::MaterialPropertyBlock* dest) { return il2cpp::call<void(*)(Renderer*, UnityEngine::MaterialPropertyBlock*)>(0xee3ed0)(this, dest); } // 0xee3ed0
        void SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return il2cpp::call<void(*)(Renderer*, UnityEngine::MaterialPropertyBlock*)>(0xee3f30)(this, properties); } // 0xee3f30
        void GetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return il2cpp::call<void(*)(Renderer*, UnityEngine::MaterialPropertyBlock*)>(0xee3ed0)(this, properties); } // 0xee3ed0
        bool get_enabled() { return il2cpp::call<bool(*)(Renderer*)>(0xee4010)(this); } // 0xee4010
        void set_enabled(bool value) { return il2cpp::call<void(*)(Renderer*, bool)>(0xee40a0)(this, value); } // 0xee40a0
        void set_shadowCastingMode(UnityEngine::Rendering::ShadowCastingMode value) { return il2cpp::call<void(*)(Renderer*, UnityEngine::Rendering::ShadowCastingMode)>(0xee4100)(this, value); } // 0xee4100
        void set_receiveShadows(bool value) { return il2cpp::call<void(*)(Renderer*, bool)>(0xee40d0)(this, value); } // 0xee40d0
        int32_t get_sortingLayerID() { return il2cpp::call<int32_t(*)(Renderer*)>(0xee4040)(this); } // 0xee4040
        void set_sortingLayerID(int32_t value) { return il2cpp::call<void(*)(Renderer*, int32_t)>(0xee4130)(this, value); } // 0xee4130
        int32_t get_sortingOrder() { return il2cpp::call<int32_t(*)(Renderer*)>(0xee4070)(this); } // 0xee4070
        void set_sortingOrder(int32_t value) { return il2cpp::call<void(*)(Renderer*, int32_t)>(0xee4160)(this, value); } // 0xee4160
        UnityEngine::Material* get_material() { return il2cpp::call<UnityEngine::Material*(*)(Renderer*)>(0xee3ea0)(this); } // 0xee3ea0
        void set_material(UnityEngine::Material* value) { return il2cpp::call<void(*)(Renderer*, UnityEngine::Material*)>(0xee3f60)(this, value); } // 0xee3f60
        UnityEngine::Material* get_sharedMaterial() { return il2cpp::call<UnityEngine::Material*(*)(Renderer*)>(0xee3f00)(this); } // 0xee3f00
        void set_sharedMaterial(UnityEngine::Material* value) { return il2cpp::call<void(*)(Renderer*, UnityEngine::Material*)>(0xee3f60)(this, value); } // 0xee3f60
        void ctor() { return il2cpp::call<void(*)(Renderer*)>(0xee3f90)(this); } // 0xee3f90
        void get_bounds_Injected(UnityEngine::Bounds ret) { return il2cpp::call<void(*)(Renderer*, UnityEngine::Bounds)>(0xee3fa0)(this, ret); } // 0xee3fa0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Renderer> {
        };

}


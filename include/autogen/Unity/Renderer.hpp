#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/Material.hpp>

namespace Unity
{
    struct Renderer : ark::meta<Renderer, Unity::Component> // TypeDefIndex: 5331
    {
        ark_meta("UnityEngine", "Renderer");

        struct Bounds* get_bounds() { return method_call(get_bounds); } // 0xB8A4D0
        Unity::Material* GetMaterial() { return method_call(GetMaterial); } // 0xB8A410
        Unity::Material* GetSharedMaterial() { return method_call(GetSharedMaterial); } // 0xB8A440
        void SetMaterial(Unity::Material* m) { return method_call(SetMaterial, m); } // 0xB8A470
        bool get_enabled() { return method_call(get_enabled); } // 0xB8A510
        void set_enabled(bool value) { return method_call(set_enabled, value); } // 0xB8A5A0
        std::int32_t get_sortingLayerID() { return method_call(get_sortingLayerID); } // 0xB8A540
        std::int32_t get_sortingOrder() { return method_call(get_sortingOrder); } // 0xB8A570
        Unity::Material* get_material() { return method_call(get_material); } // 0xB8A410
        void set_material(Unity::Material* value) { return method_call(set_material, value); } // 0xB8A470
        Unity::Material* get_sharedMaterial() { return method_call(get_sharedMaterial); } // 0xB8A440
        void set_sharedMaterial(Unity::Material* value) { return method_call(set_sharedMaterial, value); } // 0xB8A470
        void get_bounds_Injected(struct Bounds* ret) { return method_call(get_bounds_Injected, ret); }     // 0xB8A4A0
    };
}


namespace ark::method_info
{
	method_rva(Unity::Renderer::get_bounds, 0xB8A4D0)
	method_rva(Unity::Renderer::GetMaterial, 0xB8A410)
	method_rva(Unity::Renderer::GetSharedMaterial, 0xB8A440)
	method_rva(Unity::Renderer::SetMaterial, 0xB8A470)
	method_rva(Unity::Renderer::get_enabled, 0xB8A510)
	method_rva(Unity::Renderer::set_enabled, 0xB8A5A0)
	method_rva(Unity::Renderer::get_sortingLayerID, 0xB8A540)
	method_rva(Unity::Renderer::get_sortingOrder, 0xB8A570)
	method_rva(Unity::Renderer::get_material, 0xB8A410)
	method_rva(Unity::Renderer::set_material, 0xB8A470)
	method_rva(Unity::Renderer::get_sharedMaterial, 0xB8A440)
	method_rva(Unity::Renderer::set_sharedMaterial, 0xB8A470)
	method_rva(Unity::Renderer::get_bounds_Injected, 0xB8A4A0)
}
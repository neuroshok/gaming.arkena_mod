//au/UnityEngine/Renderer
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Bounds.hpp>
namespace UnityEngine{ struct Material; }
namespace UnityEngine{ struct MaterialPropertyBlock; }
#include <au/UnityEngine/Rendering/ShadowCastingMode.hpp>


namespace UnityEngine {
struct Renderer : ark::meta<Renderer, UnityEngine::Component>
{
ark_meta("UnityEngine", "Renderer", "");

    // Methods

    UnityEngine::Bounds get_bounds(); // 0x68CB40 // public 
    UnityEngine::Material* GetMaterial(); // 0x68CA20 // private 
    UnityEngine::Material* GetSharedMaterial(); // 0x68CA80 // private 
    void SetMaterial(UnityEngine::Material* m); // 0x68CAE0 // private 
    void Internal_SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties); // 0x68CAB0 // internal 
    void Internal_GetPropertyBlock(UnityEngine::MaterialPropertyBlock* dest); // 0x68CA50 // internal 
    void SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties); // 0x68CAB0 // public 
    void GetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties); // 0x68CA50 // public 
    bool get_enabled(); // 0x68CB80 // public 
    void set_enabled(bool value); // 0x68CC10 // public 
    void set_shadowCastingMode(UnityEngine::Rendering::ShadowCastingMode value); // 0x68CC70 // public 
    void set_receiveShadows(bool value); // 0x68CC40 // public 
    int get_sortingLayerID(); // 0x68CBB0 // public 
    void set_sortingLayerID(int value); // 0x68CCA0 // public 
    int get_sortingOrder(); // 0x68CBE0 // public 
    void set_sortingOrder(int value); // 0x68CCD0 // public 
    UnityEngine::Material* get_material(); // 0x68CA20 // public 
    void set_material(UnityEngine::Material* value); // 0x68CAE0 // public 
    UnityEngine::Material* get_sharedMaterial(); // 0x68CA80 // public 
    void set_sharedMaterial(UnityEngine::Material* value); // 0x68CAE0 // public 
    void ctor(); // 0x678390 // public 
    void get_bounds_Injected(/*out*/ UnityEngine::Bounds ret); // 0x68CB10 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Renderer>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_bounds> () { return 0x68CB40; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::GetMaterial> () { return 0x68CA20; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::GetSharedMaterial> () { return 0x68CA80; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::SetMaterial> () { return 0x68CAE0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::Internal_SetPropertyBlock> () { return 0x68CAB0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::Internal_GetPropertyBlock> () { return 0x68CA50; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::SetPropertyBlock> () { return 0x68CAB0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::GetPropertyBlock> () { return 0x68CA50; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_enabled> () { return 0x68CB80; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_enabled> () { return 0x68CC10; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_shadowCastingMode> () { return 0x68CC70; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_receiveShadows> () { return 0x68CC40; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_sortingLayerID> () { return 0x68CBB0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_sortingLayerID> () { return 0x68CCA0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_sortingOrder> () { return 0x68CBE0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_sortingOrder> () { return 0x68CCD0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_material> () { return 0x68CA20; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_material> () { return 0x68CAE0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_sharedMaterial> () { return 0x68CA80; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::set_sharedMaterial> () { return 0x68CAE0; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::ctor> () { return 0x678390; }
    template<> inline uintptr_t rva<&UnityEngine::Renderer::get_bounds_Injected> () { return 0x68CB10; }
} // ark::method_info
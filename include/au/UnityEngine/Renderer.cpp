#include <au/UnityEngine/Renderer.hpp>

namespace UnityEngine {

    // Methods

    UnityEngine::Bounds Renderer::get_bounds() { return method_call(get_bounds); }  // 0x68CB40 // 
    UnityEngine::Material* Renderer::GetMaterial() { return method_call(GetMaterial); }  // 0x68CA20 // 
    UnityEngine::Material* Renderer::GetSharedMaterial() { return method_call(GetSharedMaterial); }  // 0x68CA80 // 
    void Renderer::SetMaterial(UnityEngine::Material* m) { return method_call(SetMaterial, m); }  // 0x68CAE0 // 
    void Renderer::Internal_SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return method_call(Internal_SetPropertyBlock, properties); }  // 0x68CAB0 // 
    void Renderer::Internal_GetPropertyBlock(UnityEngine::MaterialPropertyBlock* dest) { return method_call(Internal_GetPropertyBlock, dest); }  // 0x68CA50 // 
    void Renderer::SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return method_call(SetPropertyBlock, properties); }  // 0x68CAB0 // 
    void Renderer::GetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties) { return method_call(GetPropertyBlock, properties); }  // 0x68CA50 // 
    bool Renderer::get_enabled() { return method_call(get_enabled); }  // 0x68CB80 // 
    void Renderer::set_enabled(bool value) { return method_call(set_enabled, value); }  // 0x68CC10 // 
    void Renderer::set_shadowCastingMode(UnityEngine::Rendering::ShadowCastingMode value) { return method_call(set_shadowCastingMode, value); }  // 0x68CC70 // 
    void Renderer::set_receiveShadows(bool value) { return method_call(set_receiveShadows, value); }  // 0x68CC40 // 
    int Renderer::get_sortingLayerID() { return method_call(get_sortingLayerID); }  // 0x68CBB0 // 
    void Renderer::set_sortingLayerID(int value) { return method_call(set_sortingLayerID, value); }  // 0x68CCA0 // 
    int Renderer::get_sortingOrder() { return method_call(get_sortingOrder); }  // 0x68CBE0 // 
    void Renderer::set_sortingOrder(int value) { return method_call(set_sortingOrder, value); }  // 0x68CCD0 // 
    UnityEngine::Material* Renderer::get_material() { return method_call(get_material); }  // 0x68CA20 // 
    void Renderer::set_material(UnityEngine::Material* value) { return method_call(set_material, value); }  // 0x68CAE0 // 
    UnityEngine::Material* Renderer::get_sharedMaterial() { return method_call(get_sharedMaterial); }  // 0x68CA80 // 
    void Renderer::set_sharedMaterial(UnityEngine::Material* value) { return method_call(set_sharedMaterial, value); }  // 0x68CAE0 // 
    void Renderer::ctor() { return method_call(ctor); }  // 0x678390 // 
    void Renderer::get_bounds_Injected(/*out*/ UnityEngine::Bounds ret) { return method_call(get_bounds_Injected, ret); }  // 0x68CB10 // 

};


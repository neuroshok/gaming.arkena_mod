#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>

namespace UnityEngine
{
    struct MaterialPropertyBlock : ark::meta<MaterialPropertyBlock, il2cpp::Il2CppObject>
    {
        int m_Ptr; // 0x8

        void SetFloatImpl(int32_t name, float value) { return il2cpp::call<void(*)(MaterialPropertyBlock*, int32_t, float)>(0xf5f090)(this, name, value); } // 0xf5f090
        void SetTextureImpl(int32_t name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(MaterialPropertyBlock*, int32_t, UnityEngine::Texture*)>(0xf5f120)(this, name, value); } // 0xf5f120
        int CreateImpl() { return il2cpp::call<int(*)(MaterialPropertyBlock*)>(0xf5ee90)(this); } // 0xf5ee90
        void DestroyImpl(int mpb) { return il2cpp::call<void(*)(MaterialPropertyBlock*, int)>(0xf5eeb0)(this, mpb); } // 0xf5eeb0
        void ctor() { return il2cpp::call<void(*)(MaterialPropertyBlock*)>(0xf5f190)(this); } // 0xf5f190
        void Dispose() { return il2cpp::call<void(*)(MaterialPropertyBlock*)>(0xf5eee0)(this); } // 0xf5eee0
        void SetInt(cs::string* name, int32_t value) { return il2cpp::call<void(*)(MaterialPropertyBlock*, cs::string*, int32_t)>(0xf5f0d0)(this, name, value); } // 0xf5f0d0
        void SetTexture(cs::string* name, UnityEngine::Texture* value) { return il2cpp::call<void(*)(MaterialPropertyBlock*, cs::string*, UnityEngine::Texture*)>(0xf5f150)(this, name, value); } // 0xf5f150

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::MaterialPropertyBlock> {
        };

}


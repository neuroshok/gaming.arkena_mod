#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/LayerMask.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>

namespace UnityEngine
{
    struct LayerMask : ark::meta<LayerMask>
    {
        int32_t m_Mask; // 0x8

        int32_t op_Implicit(UnityEngine::LayerMask mask) { return il2cpp::call<int32_t(*)(LayerMask*, UnityEngine::LayerMask)>(0x2d0720)(this, mask); } // 0x2d0720
        UnityEngine::LayerMask op_Implicit(int32_t intVal) { return il2cpp::call<UnityEngine::LayerMask(*)(LayerMask*, int32_t)>(0x2d0720)(this, intVal); } // 0x2d0720
        int32_t NameToLayer(cs::string* layerName) { return il2cpp::call<int32_t(*)(LayerMask*, cs::string*)>(0xf5b600)(this, layerName); } // 0xf5b600
        int32_t GetMask(cs::array<cs::string*>* layerNames) { return il2cpp::call<int32_t(*)(LayerMask*, cs::array<cs::string*>*)>(0xf5b540)(this, layerNames); } // 0xf5b540

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::LayerMask> {
        };

}


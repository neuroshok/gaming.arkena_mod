#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/VisorData.hpp>
#include <au/VisorViewData.hpp>
#include <au/PlayerMaterial/Properties.hpp>
#include <au/VisorOptions.hpp>
#include <cs/string.hpp>
#include <au/VisorOptions.hpp>
#include <au/PlayerMaterial/MaskType.hpp>

namespace 
{
    struct VisorLayer : ark::meta<VisorLayer, UnityEngine::MonoBehaviour>
    {
        UnityEngine::SpriteRenderer* Image; // 0xc
        au::VisorData* currentVisor; // 0x10
        au::VisorViewData* viewData; // 0x14
        PlayerMaterial+Properties matProperties; // 0x18
        au::VisorOptions options; // 0x24
        float _ZIndexSpacing_k__BackingField; // 0x28

        bool get_IsLoaded() { return il2cpp::call<bool(*)(VisorLayer*)>(0x7cf8f0)(this); } // 0x7cf8f0
        void set_Visible(bool value) { return il2cpp::call<void(*)(VisorLayer*, bool)>(0x3cb1b0)(this, value); } // 0x3cb1b0
        void set_Alpha(float value) { return il2cpp::call<void(*)(VisorLayer*, float)>(0x7cf950)(this, value); } // 0x7cf950
        float get_ZIndexSpacing() { return il2cpp::call<float(*)(VisorLayer*)>(0x355b50)(this); } // 0x355b50
        void set_ZIndexSpacing(float value) { return il2cpp::call<void(*)(VisorLayer*, float)>(0x355ba0)(this, value); } // 0x355ba0
        void SetVisor(cs::string* visorId, int32_t colorId) { return il2cpp::call<void(*)(VisorLayer*, cs::string*, int32_t)>(0x7cf5f0)(this, visorId, colorId); } // 0x7cf5f0
        void SetVisor(au::VisorData* data, int32_t colorId) { return il2cpp::call<void(*)(VisorLayer*, au::VisorData*, int32_t)>(0x7cf4f0)(this, data, colorId); } // 0x7cf4f0
        void SetVisor(au::VisorData* data, au::VisorViewData* visorView, int32_t colorId) { return il2cpp::call<void(*)(VisorLayer*, au::VisorData*, au::VisorViewData*, int32_t)>(0x7cf390)(this, data, visorView, colorId); } // 0x7cf390
        void SetOptions(au::VisorOptions options) { return il2cpp::call<void(*)(VisorLayer*, au::VisorOptions)>(0x7cf320)(this, options); } // 0x7cf320
        void SetFlipX(bool flipX) { return il2cpp::call<void(*)(VisorLayer*, bool)>(0x7cf170)(this, flipX); } // 0x7cf170
        void SetFloorAnim() { return il2cpp::call<void(*)(VisorLayer*)>(0x7cf260)(this); } // 0x7cf260
        void SetMaskType(PlayerMaterial+MaskType maskType) { return il2cpp::call<void(*)(VisorLayer*, PlayerMaterial+MaskType)>(0x7cf2e0)(this, maskType); } // 0x7cf2e0
        void SetMaterialColor(int32_t color) { return il2cpp::call<void(*)(VisorLayer*, int32_t)>(0x7cf300)(this, color); } // 0x7cf300
        void UpdateMaterial() { return il2cpp::call<void(*)(VisorLayer*)>(0x7cf750)(this); } // 0x7cf750
        void ctor() { return il2cpp::call<void(*)(VisorLayer*)>(0x7cf8d0)(this); } // 0x7cf8d0

    };

}
namespace ark {

        template<> struct meta_statics<::VisorLayer> {
        };

}


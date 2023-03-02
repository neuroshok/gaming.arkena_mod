#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/PowerTools/SpriteAnimNodeSync.hpp>
#include <au/HatViewData.hpp>
#include <au/PlayerMaterial/Properties.hpp>
#include <au/HatOptions.hpp>
#include <au/HatData.hpp>
#include <au/UnityEngine/Color.hpp>
#include <au/HatData.hpp>
#include <cs/string.hpp>
#include <au/PlayerMaterial/MaskType.hpp>
#include <au/HatOptions.hpp>

namespace 
{
    struct HatParent : ark::meta<HatParent, UnityEngine::MonoBehaviour>
    {
        UnityEngine::SpriteRenderer* BackLayer; // 0xc
        UnityEngine::SpriteRenderer* FrontLayer; // 0x10
        UnityEngine::SpriteRenderer* Parent; // 0x14
        PowerTools::SpriteAnimNodeSync* SpriteSyncNode; // 0x18
        au::HatViewData* hatView; // 0x1c
        PlayerMaterial+Properties matProperties; // 0x20
        au::HatOptions options; // 0x2c
        au::HatData* _Hat_k__BackingField; // 0x30

        bool get_IsLoaded() { return il2cpp::call<bool(*)(HatParent*)>(0x50b7f0)(this); } // 0x50b7f0
        au::HatData* get_Hat() { return il2cpp::call<au::HatData*(*)(HatParent*)>(0x2ea100)(this); } // 0x2ea100
        void set_Hat(au::HatData* value) { return il2cpp::call<void(*)(HatParent*, au::HatData*)>(0x2ea8f0)(this, value); } // 0x2ea8f0
        void set_Visible(bool value) { return il2cpp::call<void(*)(HatParent*, bool)>(0x50b8e0)(this, value); } // 0x50b8e0
        void set_SpriteColor(UnityEngine::Color value) { return il2cpp::call<void(*)(HatParent*, UnityEngine::Color)>(0x50b890)(this, value); } // 0x50b890
        void set_FlipX(bool value) { return il2cpp::call<void(*)(HatParent*, bool)>(0x50b850)(this, value); } // 0x50b850
        void SetHat(au::HatData* hat, int32_t color) { return il2cpp::call<void(*)(HatParent*, au::HatData*, int32_t)>(0x50b170)(this, hat, color); } // 0x50b170
        void SetHat(au::HatData* hat, au::HatViewData* hatViewData, int32_t color) { return il2cpp::call<void(*)(HatParent*, au::HatData*, au::HatViewData*, int32_t)>(0x50b140)(this, hat, hatViewData, color); } // 0x50b140
        void SetIdleAnim(int32_t colorId) { return il2cpp::call<void(*)(HatParent*, int32_t)>(0x50b190)(this, colorId); } // 0x50b190
        void SetHat(cs::string* hatId, int32_t color) { return il2cpp::call<void(*)(HatParent*, cs::string*, int32_t)>(0x50b0c0)(this, hatId, color); } // 0x50b0c0
        void SetFloorAnim() { return il2cpp::call<void(*)(HatParent*)>(0x50af50)(this); } // 0x50af50
        void SetClimbAnim() { return il2cpp::call<void(*)(HatParent*)>(0x50aef0)(this); } // 0x50aef0
        void SetMaterialColor(int32_t color) { return il2cpp::call<void(*)(HatParent*, int32_t)>(0x50b2d0)(this, color); } // 0x50b2d0
        void SetMaskType(PlayerMaterial+MaskType maskType) { return il2cpp::call<void(*)(HatParent*, PlayerMaterial+MaskType)>(0x50b2b0)(this, maskType); } // 0x50b2b0
        void SetMaskLayer(int32_t layer) { return il2cpp::call<void(*)(HatParent*, int32_t)>(0x50b290)(this, layer); } // 0x50b290
        void SetOptions(au::HatOptions b) { return il2cpp::call<void(*)(HatParent*, au::HatOptions)>(0x50b2f0)(this, b); } // 0x50b2f0
        void UpdateMaterial() { return il2cpp::call<void(*)(HatParent*)>(0x50b310)(this); } // 0x50b310
        void PopulateFromHatViewData() { return il2cpp::call<void(*)(HatParent*)>(0x50acd0)(this); } // 0x50acd0
        bool HideHat() { return il2cpp::call<bool(*)(HatParent*)>(0x50a7b0)(this); } // 0x50a7b0
        void LateUpdate() { return il2cpp::call<void(*)(HatParent*)>(0x50a7e0)(this); } // 0x50a7e0
        void SetHat(int32_t color) { return il2cpp::call<void(*)(HatParent*, int32_t)>(0x50afc0)(this, color); } // 0x50afc0
        bool HasHat() { return il2cpp::call<bool(*)(HatParent*)>(0x50a760)(this); } // 0x50a760
        void ctor() { return il2cpp::call<void(*)(HatParent*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::HatParent> {
        };

}


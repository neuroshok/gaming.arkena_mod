#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/PowerTools/SpriteAnim.hpp>
#include <au/SkinViewData.hpp>
#include <au/PlayerMaterial/Properties.hpp>
#include <au/PlayerMaterial/MaskType.hpp>
#include <cs/string.hpp>
#include <au/SkinData.hpp>

namespace 
{
    struct SkinLayer : ark::meta<SkinLayer, UnityEngine::MonoBehaviour>
    {
        UnityEngine::SpriteRenderer* layer; // 0xc
        PowerTools::SpriteAnim* animator; // 0x10
        au::SkinViewData* skin; // 0x14
        PlayerMaterial+Properties matProperties; // 0x18

        bool get_IsLoaded() { return il2cpp::call<bool(*)(SkinLayer*)>(0x42fb00)(this); } // 0x42fb00
        void set_Flipped(bool value) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42fb60)(this, value); } // 0x42fb60
        void set_Visible(bool value) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x3cb1b0)(this, value); } // 0x3cb1b0
        void SetMaskType(PlayerMaterial+MaskType maskType) { return il2cpp::call<void(*)(SkinLayer*, PlayerMaterial+MaskType)>(0x42f4d0)(this, maskType); } // 0x42f4d0
        void SetMaskLayer(int32_t layer) { return il2cpp::call<void(*)(SkinLayer*, int32_t)>(0x42f4b0)(this, layer); } // 0x42f4b0
        void SetRun(bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42f4f0)(this, isLeft); } // 0x42f4f0
        void SetSpawn(bool isLeft, float time) { return il2cpp::call<void(*)(SkinLayer*, bool, float)>(0x42f770)(this, isLeft, time); } // 0x42f770
        void SetClimb(bool down) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42eee0)(this, down); } // 0x42eee0
        void SetExitVent(bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42f150)(this, isLeft); } // 0x42f150
        void SetEnterVent(bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42f000)(this, isLeft); } // 0x42f000
        void SetIdle(bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, bool)>(0x42f330)(this, isLeft); } // 0x42f330
        void SetGhost() { return il2cpp::call<void(*)(SkinLayer*)>(0x42f2a0)(this); } // 0x42f2a0
        void SetSkin(cs::string* skinId, int32_t color, bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, cs::string*, int32_t, bool)>(0x42f6a0)(this, skinId, color, isLeft); } // 0x42f6a0
        void SetSkin(au::SkinData* skinData, int32_t color, bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, au::SkinData*, int32_t, bool)>(0x42f710)(this, skinData, color, isLeft); } // 0x42f710
        void SetSkin(au::SkinViewData* skin, int32_t color, bool isLeft) { return il2cpp::call<void(*)(SkinLayer*, au::SkinViewData*, int32_t, bool)>(0x42f740)(this, skin, color, isLeft); } // 0x42f740
        void SetColor(int32_t color) { return il2cpp::call<void(*)(SkinLayer*, int32_t)>(0x42efd0)(this, color); } // 0x42efd0
        System::Collections::IEnumerator* CoLoadSkinViewData(au::SkinData* skinData, int32_t color, bool isLeft) { return il2cpp::call<System::Collections::IEnumerator*(*)(SkinLayer*, au::SkinData*, int32_t, bool)>(0x42ee70)(this, skinData, color, isLeft); } // 0x42ee70
        void UpdateMaterial() { return il2cpp::call<void(*)(SkinLayer*)>(0x42f8c0)(this); } // 0x42f8c0
        void ctor() { return il2cpp::call<void(*)(SkinLayer*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::SkinLayer> {
        };

}


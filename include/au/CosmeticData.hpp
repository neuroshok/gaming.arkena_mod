#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/ScriptableObject.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/LimitedTimeStartEnd.hpp>

namespace 
{
    struct CosmeticData : ark::meta<CosmeticData, UnityEngine::ScriptableObject>
    {
        System::Collections::Generic::List<au::Platforms>* unlockOnSelectPlatforms; // 0xc
        bool freeRedeemableCosmetic; // 0x10
        int32_t redeemPopUpColor; // 0x14
        cs::string* epicId; // 0x18
        cs::string* BundleId; // 0x1c
        cs::string* ProductId; // 0x20
        UnityEngine::Vector2 ChipOffset; // 0x24
        int32_t beanCost; // 0x2c
        int32_t starCost; // 0x30
        bool paidOnMobile; // 0x34
        au::LimitedTimeStartEnd limitedTime; // 0x38
        int32_t displayOrder; // 0x60
        bool NotInStore; // 0x64
        bool Free; // 0x65

        cs::string* get_EpicId() { return il2cpp::call<cs::string*(*)(CosmeticData*)>(0x2c8c80)(this); } // 0x2c8c80
        cs::string* GetItemName() { return il2cpp::call<cs::string*(*)(CosmeticData*)>(0x8fa250)(this); } // 0x8fa250
        void ctor() { return il2cpp::call<void(*)(CosmeticData*)>(0x8fa300)(this); } // 0x8fa300

    };

}
namespace ark {

        template<> struct meta_statics<::CosmeticData> {
        };

}


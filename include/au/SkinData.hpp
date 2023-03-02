#pragma once
#include <ark/class.hpp>

#include <au/CosmeticData.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/AddressableAssets/AssetReference.hpp>
#include <au/AddressableLoadWrapper.hpp>
#include <au/System/Action.hpp>

namespace 
{
    struct SkinData : ark::meta<SkinData, au::CosmeticData>
    {
        UnityEngine::AddressableAssets::AssetReference* ViewDataRef; // 0x68
        cs::string* StoreName; // 0x6c
        au::AddressableLoadWrapper<au::SkinViewData>* viewData; // 0x70

        bool get_IsEmpty() { return il2cpp::call<bool(*)(SkinData*)>(0x42ee30)(this); } // 0x42ee30
        System::Collections::IEnumerator* CoLoadViewData(System::Action<au::SkinViewData>* onLoaded) { return il2cpp::call<System::Collections::IEnumerator*(*)(SkinData*, System::Action<au::SkinViewData>*)>(0x42ecd0)(this, onLoaded); } // 0x42ecd0
        void ctor() { return il2cpp::call<void(*)(SkinData*)>(0x42edd0)(this); } // 0x42edd0

    };

}
namespace ark {

        template<> struct meta_statics<::SkinData> {
        };

}


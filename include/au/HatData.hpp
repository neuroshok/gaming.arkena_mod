#pragma once
#include <ark/class.hpp>

#include <au/CosmeticData.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/AddressableAssets/AssetReference.hpp>
#include <au/SkinData.hpp>
#include <au/AddressableLoadWrapper.hpp>
#include <au/System/Action.hpp>

namespace 
{
    struct HatData : ark::meta<HatData, au::CosmeticData>
    {
        UnityEngine::AddressableAssets::AssetReference* ViewDataRef; // 0x68
        bool InFront; // 0x6c
        bool NoBounce; // 0x6d
        bool BlocksVisors; // 0x6e
        cs::string* StoreName; // 0x70
        au::SkinData* RelatedSkin; // 0x74
        au::AddressableLoadWrapper<au::HatViewData>* hatViewData; // 0x78

        bool get_IsEmpty() { return il2cpp::call<bool(*)(HatData*)>(0x509b80)(this); } // 0x509b80
        System::Collections::IEnumerator* CoLoadViewData(System::Action<au::HatViewData>* onLoaded) { return il2cpp::call<System::Collections::IEnumerator*(*)(HatData*, System::Action<au::HatViewData>*)>(0x509a20)(this, onLoaded); } // 0x509a20
        void ctor() { return il2cpp::call<void(*)(HatData*)>(0x509b20)(this); } // 0x509b20

    };

}
namespace ark {

        template<> struct meta_statics<::HatData> {
        };

}


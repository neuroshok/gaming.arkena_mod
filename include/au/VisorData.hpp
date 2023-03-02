#pragma once
#include <ark/class.hpp>

#include <au/CosmeticData.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/AddressableAssets/AssetReference.hpp>
#include <au/AddressableLoadWrapper.hpp>
#include <au/System/Action.hpp>

namespace 
{
    struct VisorData : ark::meta<VisorData, au::CosmeticData>
    {
        UnityEngine::AddressableAssets::AssetReference* ViewDataRef; // 0x68
        au::AddressableLoadWrapper<au::VisorViewData>* viewData; // 0x6c

        bool get_IsEmpty() { return il2cpp::call<bool(*)(VisorData*)>(0x7cf130)(this); } // 0x7cf130
        System::Collections::IEnumerator* CoLoadViewData(System::Action<au::VisorViewData>* onLoaded) { return il2cpp::call<System::Collections::IEnumerator*(*)(VisorData*, System::Action<au::VisorViewData>*)>(0x7cefd0)(this, onLoaded); } // 0x7cefd0
        void ctor() { return il2cpp::call<void(*)(VisorData*)>(0x7cf0d0)(this); } // 0x7cf0d0

    };

}
namespace ark {

        template<> struct meta_statics<::VisorData> {
        };

}


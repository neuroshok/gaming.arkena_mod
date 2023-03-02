#pragma once
#include <ark/class.hpp>

#include <au/CosmeticData.hpp>
#include <cs/string.hpp>
#include <au/StringNames.hpp>
#include <au/UnityEngine/AddressableAssets/AssetReference.hpp>
#include <au/AddressableLoadWrapper.hpp>
#include <au/System/Action.hpp>

namespace 
{
    struct PetData : ark::meta<PetData, au::CosmeticData>
    {
        au::StringNames StoreName; // 0x68
        UnityEngine::AddressableAssets::AssetReference* PetPrefabRef; // 0x6c
        au::AddressableLoadWrapper<au::PetBehaviour>* viewData; // 0x70

        bool get_IsEmpty() { return il2cpp::call<bool(*)(PetData*)>(0x6aea00)(this); } // 0x6aea00
        System::Collections::IEnumerator* CoLoadViewData(System::Action<au::PetBehaviour>* onLoaded) { return il2cpp::call<System::Collections::IEnumerator*(*)(PetData*, System::Action<au::PetBehaviour>*)>(0x6ae8a0)(this, onLoaded); } // 0x6ae8a0
        void ctor() { return il2cpp::call<void(*)(PetData*)>(0x6ae9a0)(this); } // 0x6ae9a0

    };

}
namespace ark {

        template<> struct meta_statics<::PetData> {
        };

}


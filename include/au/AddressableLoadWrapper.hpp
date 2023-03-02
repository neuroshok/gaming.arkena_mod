#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/SkinViewData.hpp>
#include <au/UnityEngine/AddressableAssets/AssetReference.hpp>

namespace 
{
    template<class... Ts>
struct AddressableLoadWrapper : ark::meta<AddressableLoadWrapper<Ts...>, il2cpp::Il2CppObject>
    {
        au::SkinViewData* viewData; // 0x8

        System::Collections::IEnumerator* CoLoadViewData(UnityEngine::AddressableAssets::AssetReference* viewDataRef, System::Action<au::SkinViewData>* onLoaded) { return il2cpp::call<System::Collections::IEnumerator*(*)(AddressableLoadWrapper*, UnityEngine::AddressableAssets::AssetReference*, System::Action<au::SkinViewData>*)>(0xc96070)(this, viewDataRef, onLoaded); } // 0xc96070
        System::Collections::IEnumerator* LoadNonGameObject(UnityEngine::AddressableAssets::AssetReference* viewDataRef) { return il2cpp::call<System::Collections::IEnumerator*(*)(AddressableLoadWrapper*, UnityEngine::AddressableAssets::AssetReference*)>(0xc96130)(this, viewDataRef); } // 0xc96130
        System::Collections::IEnumerator* LoadGameObject(UnityEngine::AddressableAssets::AssetReference* viewDataRef) { return il2cpp::call<System::Collections::IEnumerator*(*)(AddressableLoadWrapper*, UnityEngine::AddressableAssets::AssetReference*)>(0xc960d0)(this, viewDataRef); } // 0xc960d0
        void ctor() { return il2cpp::call<void(*)(AddressableLoadWrapper*)>(0x2b7380)(this); } // 0x2b7380

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<::AddressableLoadWrapper<Ts...>> {
        };

}


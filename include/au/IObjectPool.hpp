#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>

namespace 
{
    struct IObjectPool : ark::meta<IObjectPool, UnityEngine::MonoBehaviour>
    {

        void ctor() { return il2cpp::call<void(*)(IObjectPool*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<::IObjectPool> {
        };

}


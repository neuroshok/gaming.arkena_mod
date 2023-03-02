#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>

namespace UnityEngine
{
    struct Avatar : ark::meta<Avatar, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(Avatar*)>(0x1a9b770)(this); } // 0x1a9b770

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Avatar> {
        };

}


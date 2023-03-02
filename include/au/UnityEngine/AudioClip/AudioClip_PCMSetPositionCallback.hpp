#pragma once
#include <ark/class.hpp>

#include <au/System/MulticastDelegate.hpp>
#include <il2cpp/core.hpp>

namespace 
{
    struct AudioClip_PCMSetPositionCallback : ark::meta<AudioClip_PCMSetPositionCallback, System::MulticastDelegate>
    {

        void ctor(il2cpp::Il2CppObject* object, int method) { return il2cpp::call<void(*)(AudioClip_PCMSetPositionCallback*, il2cpp::Il2CppObject*, int)>(0x2b80c0)(this, object, method); } // 0x2b80c0

    };

}
namespace ark {

        template<> struct meta_statics<::AudioClip_PCMSetPositionCallback> {
        };

}


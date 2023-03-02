#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Events/UnityEvent.hpp>

namespace 
{
    struct MaskableGraphic_CullStateChangedEvent : ark::meta<MaskableGraphic_CullStateChangedEvent, UnityEngine::Events::UnityEvent<bool>>
    {

        void ctor() { return il2cpp::call<void(*)(MaskableGraphic_CullStateChangedEvent*)>(0x1805240)(this); } // 0x1805240

    };

}
namespace ark {

        template<> struct meta_statics<::MaskableGraphic_CullStateChangedEvent> {
        };

}


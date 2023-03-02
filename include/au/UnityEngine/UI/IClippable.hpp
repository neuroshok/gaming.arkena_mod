#pragma once
#include <ark/class.hpp>


namespace UnityEngine::UI
{
    struct IClippable : ark::meta<IClippable>
    {


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::UI::IClippable> {
        };

}


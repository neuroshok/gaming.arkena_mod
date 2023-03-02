#pragma once
#include <ark/class.hpp>


namespace System::Reflection
{
    struct BindingFlags : ark::meta<BindingFlags>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::BindingFlags> {
        };

}


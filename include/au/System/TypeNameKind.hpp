#pragma once
#include <ark/class.hpp>


namespace System
{
    struct TypeNameKind : ark::meta<TypeNameKind>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<System::TypeNameKind> {
        };

}


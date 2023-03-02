#pragma once
#include <ark/class.hpp>

#include <au/System/Type.hpp>

namespace System::Reflection
{
    struct TypeInfo : ark::meta<TypeInfo, System::Type>
    {

        void ctor() { return il2cpp::call<void(*)(TypeInfo*)>(0xf02c50)(this); } // 0xf02c50

    };

}
namespace ark {

        template<> struct meta_statics<System::Reflection::TypeInfo> {
        };

}


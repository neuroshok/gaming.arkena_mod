#pragma once
#include <ark/class.hpp>

#include <au/System/MulticastDelegate.hpp>
#include <il2cpp/core.hpp>

namespace 
{
    struct RectTransform_ReapplyDrivenProperties : ark::meta<RectTransform_ReapplyDrivenProperties, System::MulticastDelegate>
    {

        void ctor(il2cpp::Il2CppObject* object, int method) { return il2cpp::call<void(*)(RectTransform_ReapplyDrivenProperties*, il2cpp::Il2CppObject*, int)>(0x2b80c0)(this, object, method); } // 0x2b80c0

    };

}
namespace ark {

        template<> struct meta_statics<::RectTransform_ReapplyDrivenProperties> {
        };

}


#pragma once

namespace ark
{
    template<class Signature>
    struct function_trait;

    template<class Class, class Return, class... Args>
    struct function_trait<Return(Class::*)(Args...)> {
        using class_type = Class;
        using method_type = std::function<Return(Class*, Args...)>;
        using flat_method_type = Return(*)(Class*, Args...);
    };

    template<class Class, class Return, class... Args>
    struct function_trait<Return(Class::*)(Args...) const> : function_trait<Return(Class::*)(Args...)>{};
} // ark
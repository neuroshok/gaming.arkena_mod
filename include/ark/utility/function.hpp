#pragma once

#include <functional>

namespace ark
{
    template<class T>
    struct function_trait : public function_trait<decltype(&std::decay_t<T>::operator())> {};

    template<class Class, class Return, class... Args>
    struct function_trait<Return(Class::*)(Args...) const> : function_trait<Return(Class::*)(Args...)>{};

    template<class Class, class Return, class... Args>
    struct function_trait<Return(Class::*)(Args...)> {
        using class_type = Class;
        using return_type = Return;
        using method_type = std::function<Return(Class*, Args...)>;
        using noret_method_type = std::function<void(Class*, Args...)>;
        using flat_method_type = Return(*)(Class*, Args...);
        using functional_type = Return(Args...);
        using overwrite_method_type = std::function<Return(flat_method_type, Class*, Args...)>;
    };

    template<class T>
    struct noret_function_trait : public function_trait<decltype(&std::decay_t<T>::operator())> {};

    template<class Class, class Return, class... Args>
    struct noret_function_trait<Return(Class::*)(Args...) const> : noret_function_trait<Return(Class::*)(Args...)>{};

    template<class Class, class Return, class... Args>
    struct noret_function_trait<Return(Class::*)(Args...)> {
        using class_type = Class;
        using return_type = void;
        using method_type = std::function<void(Class*, Args...)>;
        using flat_method_type = void(*)(Class*, Args...);
        using functional_type = void(Args...);
        using overwrite_method_type = std::function<void(flat_method_type, Class*, Args...)>;
    };
} // ark
#pragma once

#define method_call(Method, ...) il2cpp::call<ark::function_trait<decltype(&std::remove_pointer_t<decltype(this)>::Method)>::flat_method_type>(ark::method_info::rva<&std::remove_pointer_t<decltype(this)>::Method>())(this, __VA_ARGS__)
#define static_method_call(Class, Method, ...) il2cpp::call<decltype(&Class::Method)>(ark::method_info::rva<&Class::Method>())(__VA_ARGS__)
#define method_rva(Method, RVA) inline uintptr_t ark::method_info::rva<&Method>() { return RVA; }
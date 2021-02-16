#pragma once

#define method_call(Method, ...) il2cpp::call<ark::function_trait<decltype(&std::remove_pointer_t<decltype(this)>::Method)>::flat_method_type>(ark::method_info::rva<&std::remove_pointer_t<decltype(this)>::Method>())(this, __VA_ARGS__)
#define method_rva(Method, RVA) inline uintptr_t rva<&Method>() { return RVA; }
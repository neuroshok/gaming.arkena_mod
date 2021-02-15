#pragma once

#define method_call(Method, ...) direct_call<ark::function_trait<decltype(&std::remove_pointer_t<decltype(this)>::Method)>::flat_method_type>(ark::method_info::rva<&std::remove_pointer_t<decltype(this)>::Method>())(this, __VA_ARGS__)

#define method_info(Method, Str_name) template<> inline const char* get_method_name<&Method>() { return Str_name; }
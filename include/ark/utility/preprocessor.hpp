#pragma once


#define method_call(MethodName, ...) \
il2cpp::call<ark::function_trait<decltype(&std::remove_pointer_t<decltype(this)>::MethodName)>::flat_method_type>(ark::method_info::rva<&std::remove_pointer_t<decltype(this)>::MethodName>())(this, __VA_ARGS__)
#define static_method_call(Class, Method, ...) il2cpp::call<decltype(&Class::Method)>(ark::method_info::rva<&Class::Method>())(__VA_ARGS__)
#define method_rva(RVA, Klass, ReturnType, FunctionName, ...) \
template<> uintptr_t rva<static_cast<ReturnType(Klass::*)(__VA_ARGS__)>( &Klass::FunctionName)>() { return RVA; }

#define field_static(Klass, Type, Field) inline static Type Field() { return reinterpret_cast<internal_statics*>(il2cpp::api::template get_class<Klass>()->static_fields)->Field; }
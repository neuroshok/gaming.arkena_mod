#pragma once

#define method_call(Klass, ReturnType, ArgTypes, Args) il2cpp::call<ReturnType(Klass::*)ArgTypes>Args
#define static_method_call(Klass, ReturnType, ArgTypes, Args) il2cpp::call<ReturnType(*)ArgTypes>Args
#define method_rva(RVA, Klass, ReturnType, FunctionName, ...) \
template<> inline uintptr_t rva<static_cast<ReturnType(Klass::*)(__VA_ARGS__)>( &Klass::FunctionName)>() { return RVA; }
#define method_static_rva(RVA, Klass, ReturnType, FunctionName, ...) \
template<> inline uintptr_t rva<static_cast<ReturnType(*)(__VA_ARGS__)>( &Klass::FunctionName)>() { return RVA; }

#define field_static(Klass, Type, Field) static Type Field();
#define field_static_impl(Klass, Type, Field) Type Klass::Field() { return reinterpret_cast<internal_statics*>(il2cpp::api::template get_class<Klass>()->static_fields)->Field; }
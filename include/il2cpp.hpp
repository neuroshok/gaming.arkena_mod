#pragma once

#include <il2cpp_core.hpp>
#include <ark/utility/dynamic_proc.hpp>

#include <rcmp/low_level.hpp>
#include <ark/log.hpp>

inline uintptr_t GetBaseAddress() {
    return (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");
}

inline const auto il2cpp_object_get_virtual_method = dynamic_proc<const il2cpp::MethodInfo*(il2cpp::Il2CppObject*, const il2cpp::MethodInfo*)>("GameAssembly.dll", "il2cpp_object_get_virtual_method");
inline const auto il2cpp_class_get_method_from_name = dynamic_proc<const il2cpp::MethodInfo*(il2cpp::Il2CppClass*, const char*, int)>("GameAssembly.dll", "il2cpp_class_get_method_from_name");
inline const auto il2cpp_class_from_name = dynamic_proc<il2cpp::Il2CppClass*(const il2cpp::Il2CppImage*, const char*, const char*)>("GameAssembly.dll", "il2cpp_class_from_name");
inline const auto il2cpp_domain_get = dynamic_proc<il2cpp::Il2CppDomain*()>("GameAssembly.dll", "il2cpp_domain_get");
inline const auto il2cpp_domain_get_assemblies = dynamic_proc<const il2cpp::Il2CppAssembly**(const il2cpp::Il2CppDomain*, size_t*)>("GameAssembly.dll", "il2cpp_domain_get_assemblies");
inline const auto il2cpp_assembly_get_image = dynamic_proc<const il2cpp::Il2CppImage*(const il2cpp::Il2CppAssembly*)>("GameAssembly.dll", "il2cpp_assembly_get_image");
inline const auto il2cpp_method_get_param_count = dynamic_proc<uint32_t(const il2cpp::MethodInfo*)>("GameAssembly.dll", "il2cpp_method_get_param_count");
inline const auto il2cpp_method_get_name = dynamic_proc<const char*(const il2cpp::MethodInfo*)>("GameAssembly.dll", "il2cpp_method_get_name");

template <class Signature>
Signature direct_call(uintptr_t rva)
{
    auto address = GetBaseAddress() + rva;
    ark_trace("address {}", address);

    return rcmp::bit_cast<Signature>(reinterpret_cast<il2cpp::Il2CppMethodPointer>(address));
}

inline il2cpp::Il2CppClass* find_class(const char* namespace_, const char* class_) {
    ark_trace("looking for class {} in namespace {}", class_, namespace_[0] ? namespace_ : "(none)");

    auto dom = il2cpp_domain_get();

    std::size_t assembly_count = 0;
    const auto assemblies = il2cpp_domain_get_assemblies(dom, &assembly_count);

    for (auto it = assemblies; it != assemblies + assembly_count; ++it) {
        auto img = il2cpp_assembly_get_image(*it);
        if (!img) {
            ark_trace("null assembly..");
            continue;
        }

        auto cls = il2cpp_class_from_name(img, namespace_, class_);
        if (!cls) {
            continue;
        }

        //spdlog::info("class found!");
        return cls;
    }

    spdlog::error("class not found {}:{}", class_, namespace_[0] ? namespace_ : "(none)");
    return nullptr;
}

inline void dump_methods(il2cpp::Il2CppClass* class_) {

    if (class_->_2.method_count && !(class_->_1.methods)) {
        spdlog::error("Class is valid and claims to have methods but ->methods is null! class name: {}", class_->_1.name);
        return;
    }

    for (uint16_t i = 0; i < 20; i++) {
        auto method = ((il2cpp::MethodInfo**)class_->_1.methods)[i];
        if (!method) {
            spdlog::error("#{} is null", i);
            continue;
        }

        spdlog::info("#{} -> {} ({} args)", i, il2cpp_method_get_name(method), il2cpp_method_get_param_count(method));
    }
}

namespace detail {
    template <class Signature>
    constexpr std::size_t arg_count_v = std::size_t(-1);

    template <class Ret, class... Args>
    constexpr std::size_t arg_count_v<Ret(*)(Args...)> = sizeof...(Args);
}

template <class Signature>
Signature find_method(il2cpp::Il2CppClass* class_, const char* method) {
    constexpr auto args_count = detail::arg_count_v<Signature>;
    static_assert(args_count != std::size_t(-1), "invalid signature");
    static_assert(args_count != std::size_t(0), "missing self type");

    //ark_trace("looking for method {} with {} arg(s) in class {}", method, args_count - 1, class_->_1.name);
    auto method_ptr = il2cpp_class_get_method_from_name(class_, method, static_cast<int>(args_count) - 1);

    if (!method_ptr) {
        spdlog::error("method not found {}:{}", class_->_1.name, method);
        dump_methods(class_);
        return nullptr;
    }

    ark_trace("ptr {}", (uintptr_t)(method_ptr->methodPointer));

    return rcmp::bit_cast<Signature>(method_ptr->methodPointer);
}

template <class Signature>
Signature find_static_method(il2cpp::Il2CppClass* class_, const char* method) {
    constexpr auto args_count = detail::arg_count_v<Signature>;
    static_assert(args_count != std::size_t(-1), "invalid signature");

    //ark_trace("looking for static method {} with {} arg(s) in class {}", method, args_count, class_->_1.name);
    auto method_ptr = il2cpp_class_get_method_from_name(class_, method, static_cast<int>(args_count));

    if (!method_ptr) {
        spdlog::error("static method not found..");
        dump_methods(class_);
        return nullptr;
    }

    return rcmp::bit_cast<Signature>(method_ptr->methodPointer);
}

template <class Signature>
Signature find_virtual_method(il2cpp::Il2CppObject* obj_, const char* method) {
    constexpr auto args_count = detail::arg_count_v<Signature>;
    static_assert(args_count != std::size_t(-1), "invalid signature");
    static_assert(args_count != std::size_t(0), "missing self type");

    auto base_method_info = il2cpp_class_get_method_from_name(obj_->klass->_1.parent, method, static_cast<int>(args_count) - 1);
    auto method_ptr = il2cpp_object_get_virtual_method(obj_, base_method_info);

    if (!method_ptr) {
        spdlog::error("virtual method not found..");
        dump_methods(obj_->klass);
        return nullptr;
    }

    return rcmp::bit_cast<Signature>(method_ptr->methodPointer);
}

template <class Signature>
Signature find_method(const char* namespace_, const char* class_, const char* method) {
    auto cls = find_class(namespace_, class_);
    if (!cls) {
        return nullptr;
    }

    return find_method<Signature>(cls, method);
}
template <class Signature>
Signature find_virtual_method(const char* namespace_, const char* class_, const char* method) {
    auto cls = find_class(namespace_, class_);
    if (!cls) {
        return nullptr;
    }

    return find_virual_method<Signature>(cls, method);
}

template <class Signature>
Signature find_static_method(const char* namespace_, const char* class_, const char* method) {
    auto cls = find_class(namespace_, class_);
    if (!cls) {
        return nullptr;
    }

    return find_static_method<Signature>(cls, method);
}

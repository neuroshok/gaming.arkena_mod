#pragma once

#include <ark/module.hpp>
#include <il2cpp/core.hpp>
#include <il2cpp/type.hpp>

namespace il2cpp
{
    class api;

    template<class T>
    auto make() { return il2cpp::api::template object_new<T>(api::template get_class<T>()); }

    template<class T>
    auto make_array(int size) { return il2cpp::api::template array_new<T>(api::template get_class<T>(), size); }

    class api
    {
    public:
        static il2cpp::Il2CppDomain* domain_get() { return process<il2cpp::Il2CppDomain*(*)()>(il2cpp_domain_get_ptr); }

        static const il2cpp::Il2CppAssembly** domain_get_assemblies(const il2cpp::Il2CppDomain* d, size_t* s)
        { return process<const il2cpp::Il2CppAssembly**(*)(const il2cpp::Il2CppDomain*, size_t*)>(il2cpp_domain_get_assemblies_ptr, d, s); }

        static const il2cpp::Il2CppImage* assembly_get_image(const il2cpp::Il2CppAssembly* as)
        { return process<const il2cpp::Il2CppImage*(*)(const il2cpp::Il2CppAssembly*)>(il2cpp_assembly_get_image_ptr, as); }

        static il2cpp::Il2CppClass* class_from_name(const il2cpp::Il2CppImage* image, const char* namespaze, const char* name)
        { return process<il2cpp::Il2CppClass*(*)(const il2cpp::Il2CppImage*, const char*, const char*)>(il2cpp_class_from_name_ptr, image, namespaze, name); }

        template<class T>
        static T* object_new(const il2cpp::Il2CppClass* k)
        { return reinterpret_cast<T*>(process<il2cpp::Il2CppObject*(*)(const il2cpp::Il2CppClass*)>(il2cpp_object_new_ptr, k)); }

        template<class T>
        static il2cpp::array<T>* array_new(il2cpp::Il2CppClass* k, uintptr_t l)
        { return process<il2cpp::array<T>*(*)(il2cpp::Il2CppClass*, uintptr_t len)>(il2cpp_array_new_ptr, k,  l); }

        static il2cpp::string* string_new_utf16(const Il2CppChar* text, int32_t len)
        { return process<il2cpp::string*(*)(const Il2CppChar* text, int32_t)>(il2cpp_string_new_utf16_ptr, text, len); }

        static il2cpp::string* string_new_len(const char* text, int32_t len)
        { return process<il2cpp::string*(*)(const char* text, int32_t)>(il2cpp_string_new_len_ptr, text, len); }

        template<class T>
        static inline il2cpp::Il2CppClass* get_class()
        {
            auto namespace_ = T::internal_ns;
            auto class_ = T::internal_name;

            auto dom = domain_get();

            std::size_t assembly_count = 0;
            const auto assemblies = domain_get_assemblies(dom, &assembly_count);

            Il2CppClass* cls = nullptr;

            for (auto it = assemblies; it != assemblies + assembly_count; ++it) {
                auto img = assembly_get_image(*it);
                if (!img) {
                    ark_trace("null assembly..");
                    continue;
                }

                cls = class_from_name(img, namespace_, class_);
                if (!cls) {
                    continue;
                }
            }

            static auto klass = cls;
            return klass;

            spdlog::error("class not found {}:{}", class_, namespace_[0] ? namespace_ : "(none)");
            return nullptr;
        }

    private:

        template<class T, class... Args>
        static  decltype(auto) process(FARPROC function_address, Args&&... args)
        {
            return reinterpret_cast<T>(function_address)(std::forward<Args>(args)...);
        }

        static inline FARPROC il2cpp_domain_get_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_domain_get");
        static inline FARPROC il2cpp_domain_get_assemblies_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_domain_get_assemblies");
        static inline FARPROC il2cpp_assembly_get_image_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_assembly_get_image");
        static inline FARPROC il2cpp_class_from_name_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_class_from_name");


        //static inline FARPROC il2cpp_runtime_class_init_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_runtime_class_init");
        static inline FARPROC il2cpp_object_new_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_object_new");

        static inline FARPROC il2cpp_array_new_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_array_new");
        static inline FARPROC il2cpp_string_new_len_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_string_new_len");
        static inline FARPROC il2cpp_string_new_utf16_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_string_new_utf16");
    };
} // il2cpp
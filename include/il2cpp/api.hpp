#pragma once

#include <ark/module.hpp>
#include <il2cpp/core.hpp>
#include <il2cpp/type.hpp>

namespace il2cpp
{
    class api
    {
    public:
        template<class T>
        static il2cpp::array<T>* il2cpp_array_new(il2cpp::Il2CppClass* k, uintptr_t l)
        { return process<il2cpp::array<T>*(*)(il2cpp::Il2CppClass*, uintptr_t len)>(il2cpp_array_new_ptr, k,  l); }

        static il2cpp::string* il2cpp_string_new_utf16(const Il2CppChar* text, int32_t len)
        { return process<il2cpp::string*(*)(const Il2CppChar* text, int32_t)>(il2cpp_string_new_utf16_ptr, text, len); }

        static il2cpp::string* il2cpp_string_new_len(const char* text, int32_t len)
        { return process<il2cpp::string*(*)(const char* text, int32_t)>(il2cpp_string_new_len_ptr, text, len); }

    private:

        template<class T, class... Args>
        static  decltype(auto) process(FARPROC function_address, Args&&... args)
        {
            return reinterpret_cast<T>(function_address)(std::forward<Args>(args)...);
        }

        static inline FARPROC il2cpp_array_new_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_array_new");
        static inline FARPROC il2cpp_string_new_len_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_string_new");
        static inline FARPROC il2cpp_string_new_utf16_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_string_new_utf16");
    };
} // il2cpp
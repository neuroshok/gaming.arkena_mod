#pragma once

#include <il2cpp/core.hpp>

namespace ark
{
    namespace method_info
    {
        template<auto Method>
        inline const char* name();

        template<auto Method>
        inline uintptr_t rva();
    } // method_info

    // sizeof(meta) == 0
    template<class K>
    struct meta
    {
        struct StaticFields { K* instance = nullptr; };

        static K* instance() {
            return nullptr;
            /*
            if (K::get_class()->static_fields == nullptr) return nullptr;
            return K::get_class()->statics()->instance;*/
        }
    };
} // ark
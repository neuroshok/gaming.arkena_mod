#pragma once

namespace ark
{
    namespace method_info
    {
        template<auto Method>
        inline const char* name();

        template<auto Method>
        inline uintptr_t rva();
    } // method_info

    template<class K>
    struct meta
    {
        struct StaticFields { K* instance = nullptr; };

        static K* instance() {
            if (K::get_class()->static_fields == nullptr) return nullptr;
            return K::get_class()->statics()->instance;
        }

        static Class<K>* get_class() { return Class<K>::find(K::internal_name); }
    };
} // ark
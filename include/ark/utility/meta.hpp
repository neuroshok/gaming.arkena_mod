#pragma once

namespace ark
{
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
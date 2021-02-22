#pragma once

#include <il2cpp/core.hpp>
#include <il2cpp/api.hpp>

#define ark_meta(NS, Name) \
static inline auto internal_ns = NS; \
static inline auto internal_name = Name

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
    template<class K, class... Bases>
    struct meta : Bases...
    {
        static auto statics()
        {
            static auto k = il2cpp::api::get_class<K>();
            assert(k);
            return reinterpret_cast<typename K::internal_statics*>(k->static_fields);
        }
    };
} // ark
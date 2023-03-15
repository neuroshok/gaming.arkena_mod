#pragma once

#include <il2cpp/api.hpp>

#define ark_meta(NS, Name, Type) \
static inline auto internal_ns = NS; \
static inline auto internal_name = Name; \
static inline auto internal_type = Type; \
static inline auto internal_fullname = []{ return ((NS) == nullptr) ? (Name) : NS "." Name; }()

namespace ark
{
    template<class K>
    struct meta_statics;

    namespace method_info
    {
        template<auto Method>
        inline const char* name();

        template<auto Method>
        uintptr_t rva();
    } // method_info
} // ark
#pragma once

#include <spdlog/spdlog.h>

#include <cassert>

#define ark_assert(C, M) if (!C) {ark_trace("Asssertion failed: {}", M);} assert(C)

namespace ark
{
    void init_logger(std::uintptr_t);
} // ark

template<class... Ts>
void ark_trace(Ts&&... ts)
{
    spdlog::trace(ts...);
    spdlog::get("arkena_mod")->trace(ts...);
}
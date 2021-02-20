#pragma once

#include <spdlog/spdlog.h>

#include <cassert>

#define ark_assert(C, M) if (!C) {ark_trace("Asssertion failed: {}", M);} assert(C)

namespace ark
{
    void init_logger(std::uintptr_t);
} // ark

template<class Message, class... Ts>
void ark_trace(Message&& m, Ts&&... ts)
{
    spdlog::trace(m, ts...);
    spdlog::get("arkena_mod")->trace(m, ts...);
}
template<class... Ts>
void ark_info(Ts&&... ts)
{
    spdlog::info(ts...);
    spdlog::get("arkena_mod")->info(ts...);
}
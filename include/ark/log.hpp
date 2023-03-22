#pragma once

#include <cassert>
#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>

#define ark_assert(C, M) if (!C) { ark_trace("Asssertion failed: {}", M); } assert(C)

namespace ark
{
    void init_logger(std::uintptr_t);
} // ark

template<class Message, class... Ts>
void ark_error(Message&& m, Ts&&... ts)
{
    spdlog::error(m, ts...);
    spdlog::get("arkena_mod")->error(m, ts...);
}
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
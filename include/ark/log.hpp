#pragma once

#include <spdlog/spdlog.h>

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
#pragma once

#include <spdlog/spdlog.h>

void init_logger();

template<class... Ts>
void ark_trace(Ts&&... ts)
{
    spdlog::trace(ts...);
    spdlog::get("arkena_mod")->trace(ts...);
}

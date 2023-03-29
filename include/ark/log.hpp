#pragma once

#include <cassert>
#include <format>
#include <string>

#define ark_assert(C, M) if (!C) { ark_trace("Asssertion failed: {}", M); } assert(C)

namespace ark
{
    void init_logger(uintptr_t);
    void error(const std::string& message);
    void info(const std::string& message);
    void trace(const std::string& message);
} // ark

template<class Message, class... Ts>
void ark_error(Message&& message, Ts&&... ts)
{
    ark::error(std::vformat(message, std::make_format_args(ts...)));
}

template<class Message, class... Ts>
void ark_info(Message&& message, Ts&&... ts)
{
    ark::info(std::vformat(message, std::make_format_args(ts...)));
}

template<class Message, class... Ts>
void ark_trace(Message&& message, Ts&&... ts)
{
    ark::trace(std::vformat(message, std::make_format_args(ts...)));
}
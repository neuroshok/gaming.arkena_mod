#pragma once

#include <cstdint>
#include <autogen/Object.hpp>

struct alignas(4) MessageWriter : ::Object
{
    void Write(std::uint8_t v)
    {
        get_method<void(*)(MessageWriter*, std::uint8_t)>("Write")(this, v);
    }
};
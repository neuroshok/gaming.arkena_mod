#pragma once

#include <au/UnityEngine/Color.hpp>

namespace upp
{
    struct color : UnityEngine::Color
    {
        color(float r_ = 1, float g_ = 1, float b_ = 1, float a_ = 1)
        {
            r = r_;
            g = g_;
            b = b_;
            a = a_;
        }
    };
} // upp
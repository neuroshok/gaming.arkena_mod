#pragma once

#include <au/UnityEngine/Vector2.hpp>

namespace upp
{
    struct vector2 : UnityEngine::Vector2
    {
        vector2(float x_ = 0, float y_ = 0)
        {
            x = x_;
            y = y_;
        }
    };
} // upp
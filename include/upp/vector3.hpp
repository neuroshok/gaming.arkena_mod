#pragma once

#include <au/UnityEngine/Vector3.hpp>

namespace upp
{
    struct vector3 : UnityEngine::Vector3
    {
        vector3(float x_ = 0, float y_ = 0, float z_ = 0)
        {
            x = x_;
            y = y_;
            z = z_;
        }
    };
} // upp
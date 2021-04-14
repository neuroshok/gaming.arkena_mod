#pragma once

#include <au/UnityEngine/Rect.hpp>

namespace upp
{
    struct rect : UnityEngine::Rect
    {
        rect(float x_ = 0, float y_ = 0, float w_ = 0, float h_ = 0)
        {
            m_XMin = x_;
            m_YMin = y_;
            m_Width = w_;
            m_Height = h_;
        }
    };
} // upp
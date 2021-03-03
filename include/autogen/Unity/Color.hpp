#pragma once

namespace Unity {

struct Color {
    float r = 1;
    float g = 1;
    float b = 1;
    float a = 1;

    template<typename OStream>
    friend OStream &operator<<(OStream &os, const Color& v)
    {
        return os << "Color(" << v.r << ", " << v.g << ", " << v.b << ")";
    }
};

} // namespace Unity

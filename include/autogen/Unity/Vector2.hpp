#pragma once

namespace Unity {

struct Vector2 {
    float x;
    float y;

    friend auto operator<=>(const Vector2&, const Vector2&) = default;

    template<typename OStream>
    friend OStream &operator<<(OStream &os, const Vector2& v)
    {
        return os << "Vec2(" << v.x << ", " << v.y << ")";
    }
};

} // namespace Unity

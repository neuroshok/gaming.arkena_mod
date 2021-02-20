#pragma once

namespace Unity {

struct Vector2 {
    float x;
    float y;

    friend auto operator<=>(const Vector2&, const Vector2&) = default;
};

} // namespace Unity

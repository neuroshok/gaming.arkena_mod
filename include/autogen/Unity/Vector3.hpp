#pragma once

namespace Unity {

struct Vector3 {
    float x;
    float y;
    float z;

    friend auto operator<=>(const Vector3&, const Vector3&) = default;

    template<typename OStream>
    friend OStream &operator<<(OStream &os, const Vector3& v)
    {
        return os << "Vec3(" << v.x << ", " << v.y << ", " << v.z << ")";
    }
};

} // namespace Unity

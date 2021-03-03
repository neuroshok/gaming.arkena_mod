#pragma once

namespace Unity
{
    struct Rect
    {
        float x;
        float y;
        float w;
        float h;

        friend auto operator<=>(const Rect&, const Rect&) = default;
    };

} // namespace Unity

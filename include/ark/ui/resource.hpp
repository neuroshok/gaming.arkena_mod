#pragma once

namespace ark::ui
{
    struct image
    {
        int width{};
        int height{};
        int size{};
        const unsigned char* data;
    };

    struct resource
    {
        static image icon;
    };
} // ui::resource




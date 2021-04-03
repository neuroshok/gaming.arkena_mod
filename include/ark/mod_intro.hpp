#pragma once

#include <string>
#include <upp/color.hpp>

namespace ark
{
    struct mod_intro
    {
        std::string title;
        std::string subtitle;
        upp::color title_color = {};
        upp::color subtitle_color = {};
    };
} // ark

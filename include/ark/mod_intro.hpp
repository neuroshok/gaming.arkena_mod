#pragma once

#include <string>
#include <autogen/Unity/Color.hpp>

namespace ark
{
    struct mod_intro
    {
        std::string title;
        std::string subtitle;
        Unity::Color title_color = {};
        Unity::Color subtitle_color = {};
    };
} // ark

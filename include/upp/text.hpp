#pragma once

#include <upp/color.hpp>

namespace upp
{
    struct text
    {
        void set_color(upp::color c) {}
        void set_text(const std::string& data) { /* text = cs::make_string(data); */ }
        const std::string& get_text() { return data_; }

        std::string data_;
    };
} // upp
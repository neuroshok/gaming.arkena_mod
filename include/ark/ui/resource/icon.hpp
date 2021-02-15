#pragma once

struct resource
{
    int width{};
    int height{};
    int size;
    unsigned char* data;
};

extern const ::resource icon;
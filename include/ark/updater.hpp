#pragma once

#include <string>

namespace ark
{
    class updater
    {
    public:
        void check();

    private:
        inline static std::string url = "https://github.com/neuroshok/arkena_mods";
    };
} // ark
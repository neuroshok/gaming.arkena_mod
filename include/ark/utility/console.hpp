#ifndef INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD
#define INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD

#include <ark/utility/logger.hpp>

#include <iostream>

namespace ark
{
    inline void make_console()
    {
        if (!AllocConsole())
        {
            ark_trace("console allocation failed");
            return;
        }



        SetConsoleOutputCP(65001);
    }
}// ark

#endif// INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD

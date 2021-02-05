#ifndef INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD
#define INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD

#include <ark/log.hpp>

#include <iostream>

namespace ark
{
    inline void load_console(FILE* f)
    {
        if (!AllocConsole())
        {
            ark_trace("console allocation failed");
            return;
        }
        freopen_s(&f, "CONOUT$", "w", stdout);

        SetConsoleOutputCP(65001);
    }

    inline void unload_console(FILE* f)
    {
        fclose(f);
        FreeConsole();
    }
}// ark

#endif// INCLUDE_UTILITY_CONSOLE_HPP_ARKENA_MOD
